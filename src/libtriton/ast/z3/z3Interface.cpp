//! \file
/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the BSD License.
*/

#include <triton/exceptions.hpp>
#include <triton/tritonToZ3Ast.hpp>
#include <triton/z3Interface.hpp>
#include <triton/z3ToTritonAst.hpp>



namespace triton {
  namespace ast {

    Z3Interface::Z3Interface(triton::engines::symbolic::SymbolicEngine* symbolicEngine) {
      if (symbolicEngine == nullptr)
        throw triton::exceptions::AstTranslations("Z3Interface::Z3Interface(): The symbolicEngine API cannot be null.");
      this->symbolicEngine = symbolicEngine;
    }


    triton::ast::AbstractNode* Z3Interface::simplify(triton::ast::AbstractNode* node) const {
      triton::ast::TritonToZ3Ast z3Ast{this->symbolicEngine, false};
      triton::ast::Z3ToTritonAst tritonAst{this->symbolicEngine, node->getContext()};

      /* From Triton to Z3 */
      z3::expr expr = z3Ast.convert(node);

      /* Simplify and back to Triton's AST */
      node = tritonAst.convert(expr.simplify());

      return node;
    }


    triton::uint512 Z3Interface::evaluate(triton::ast::AbstractNode* node) const {
      if (node == nullptr)
        throw triton::exceptions::AstTranslations("Z3Interface::evaluate(): node cannot be null.");

      triton::ast::TritonToZ3Ast z3ast{this->symbolicEngine};

      /* From Triton to Z3 */
      z3::expr expr = z3ast.convert(node);

      /* Simplify the expression to get a constant */
      expr = expr.simplify();

      triton::uint512 res = 0;
      if (expr.get_sort().is_bool())
        res = Z3_get_bool_value(expr.ctx(), expr) == Z3_L_TRUE ? true : false;
      else
        res = triton::uint512{Z3_get_numeral_string(expr.ctx(), expr)};

      return res;
    }

  }; /* ast namespace */
}; /* triton namespace */
