//! \file
/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the BSD License.
*/

#ifndef TRITON_Z3TOTRITONAST_H
#define TRITON_Z3TOTRITONAST_H

#include <z3++.h>

#include <tritonast/nodes.hpp>


//! The Triton namespace
namespace triton {
/*!
 *  \addtogroup triton
 *  @{
 */

  //! The AST namespace
  namespace ast {
  /*!
   *  \ingroup triton
   *  \addtogroup ast
   *  @{
   */

    //! \class Z3ToTritonAst
    /*! \brief Converts a Z3's AST to a Triton's AST. */
    class Z3ToTritonAst {
      private:
        //! The Triton's AST context
        triton::ast::Context& astCtxt;

      public:
        //! Constructor.
        Z3ToTritonAst(triton::ast::Context& ctxt);

        //! Converts to Triton's AST
        triton::ast::SharedAbstractNode convert(const z3::expr& expr);
    };

  /*! @} End of ast namespace */
  };
/*! @} End of triton namespace */
};

#endif /* TRITON_Z3TOTRITONAST_H */