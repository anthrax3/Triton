//! \file
/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the BSD License.
*/

#include <triton/pythonBindings.hpp>
#include <triton/pythonUtils.hpp>
#include <triton/x86Specifications.hpp>



/*! \page py_OPCODE_page OPCODE
    \brief [**python api**] All information about the OPCODE python namespace.

\tableofcontents

\section OPCODE_py_description Description
<hr>

According to the CPU architecture, the OPCODE namespace contains all kinds of opcodes.

\section OPCODE_py_api Python API - Items of the OPCODE namespace
<hr>

\subsection OPCODE_x86_py_api x86 and x86_64

- **OPCODE.INVALID**<br>
- **OPCODE.AAA**<br>
- **OPCODE.AAD**<br>
- **OPCODE.AAM**<br>
- **OPCODE.AAS**<br>
- **OPCODE.FABS**<br>
- **OPCODE.ADC**<br>
- **OPCODE.ADCX**<br>
- **OPCODE.ADD**<br>
- **OPCODE.ADDPD**<br>
- **OPCODE.ADDPS**<br>
- **OPCODE.ADDSD**<br>
- **OPCODE.ADDSS**<br>
- **OPCODE.ADDSUBPD**<br>
- **OPCODE.ADDSUBPS**<br>
- **OPCODE.FADD**<br>
- **OPCODE.FIADD**<br>
- **OPCODE.FADDP**<br>
- **OPCODE.ADOX**<br>
- **OPCODE.AESDECLAST**<br>
- **OPCODE.AESDEC**<br>
- **OPCODE.AESENCLAST**<br>
- **OPCODE.AESENC**<br>
- **OPCODE.AESIMC**<br>
- **OPCODE.AESKEYGENASSIST**<br>
- **OPCODE.AND**<br>
- **OPCODE.ANDN**<br>
- **OPCODE.ANDNPD**<br>
- **OPCODE.ANDNPS**<br>
- **OPCODE.ANDPD**<br>
- **OPCODE.ANDPS**<br>
- **OPCODE.ARPL**<br>
- **OPCODE.BEXTR**<br>
- **OPCODE.BLCFILL**<br>
- **OPCODE.BLCI**<br>
- **OPCODE.BLCIC**<br>
- **OPCODE.BLCMSK**<br>
- **OPCODE.BLCS**<br>
- **OPCODE.BLENDPD**<br>
- **OPCODE.BLENDPS**<br>
- **OPCODE.BLENDVPD**<br>
- **OPCODE.BLENDVPS**<br>
- **OPCODE.BLSFILL**<br>
- **OPCODE.BLSI**<br>
- **OPCODE.BLSIC**<br>
- **OPCODE.BLSMSK**<br>
- **OPCODE.BLSR**<br>
- **OPCODE.BOUND**<br>
- **OPCODE.BSF**<br>
- **OPCODE.BSR**<br>
- **OPCODE.BSWAP**<br>
- **OPCODE.BT**<br>
- **OPCODE.BTC**<br>
- **OPCODE.BTR**<br>
- **OPCODE.BTS**<br>
- **OPCODE.BZHI**<br>
- **OPCODE.CALL**<br>
- **OPCODE.CBW**<br>
- **OPCODE.CDQ**<br>
- **OPCODE.CDQE**<br>
- **OPCODE.FCHS**<br>
- **OPCODE.CLAC**<br>
- **OPCODE.CLC**<br>
- **OPCODE.CLD**<br>
- **OPCODE.CLFLUSH**<br>
- **OPCODE.CLGI**<br>
- **OPCODE.CLI**<br>
- **OPCODE.CLTS**<br>
- **OPCODE.CMC**<br>
- **OPCODE.CMOVA**<br>
- **OPCODE.CMOVAE**<br>
- **OPCODE.CMOVB**<br>
- **OPCODE.CMOVBE**<br>
- **OPCODE.FCMOVBE**<br>
- **OPCODE.FCMOVB**<br>
- **OPCODE.CMOVE**<br>
- **OPCODE.FCMOVE**<br>
- **OPCODE.CMOVG**<br>
- **OPCODE.CMOVGE**<br>
- **OPCODE.CMOVL**<br>
- **OPCODE.CMOVLE**<br>
- **OPCODE.FCMOVNBE**<br>
- **OPCODE.FCMOVNB**<br>
- **OPCODE.CMOVNE**<br>
- **OPCODE.FCMOVNE**<br>
- **OPCODE.CMOVNO**<br>
- **OPCODE.CMOVNP**<br>
- **OPCODE.FCMOVNU**<br>
- **OPCODE.CMOVNS**<br>
- **OPCODE.CMOVO**<br>
- **OPCODE.CMOVP**<br>
- **OPCODE.FCMOVU**<br>
- **OPCODE.CMOVS**<br>
- **OPCODE.CMP**<br>
- **OPCODE.CMPPD**<br>
- **OPCODE.CMPPS**<br>
- **OPCODE.CMPSB**<br>
- **OPCODE.CMPSD**<br>
- **OPCODE.CMPSQ**<br>
- **OPCODE.CMPSS**<br>
- **OPCODE.CMPSW**<br>
- **OPCODE.CMPXCHG16B**<br>
- **OPCODE.CMPXCHG**<br>
- **OPCODE.CMPXCHG8B**<br>
- **OPCODE.COMISD**<br>
- **OPCODE.COMISS**<br>
- **OPCODE.FCOMP**<br>
- **OPCODE.FCOMPI**<br>
- **OPCODE.FCOMI**<br>
- **OPCODE.FCOM**<br>
- **OPCODE.FCOS**<br>
- **OPCODE.CPUID**<br>
- **OPCODE.CQO**<br>
- **OPCODE.CRC32**<br>
- **OPCODE.CVTDQ2PD**<br>
- **OPCODE.CVTDQ2PS**<br>
- **OPCODE.CVTPD2DQ**<br>
- **OPCODE.CVTPD2PS**<br>
- **OPCODE.CVTPS2DQ**<br>
- **OPCODE.CVTPS2PD**<br>
- **OPCODE.CVTSD2SI**<br>
- **OPCODE.CVTSD2SS**<br>
- **OPCODE.CVTSI2SD**<br>
- **OPCODE.CVTSI2SS**<br>
- **OPCODE.CVTSS2SD**<br>
- **OPCODE.CVTSS2SI**<br>
- **OPCODE.CVTTPD2DQ**<br>
- **OPCODE.CVTTPS2DQ**<br>
- **OPCODE.CVTTSD2SI**<br>
- **OPCODE.CVTTSS2SI**<br>
- **OPCODE.CWD**<br>
- **OPCODE.CWDE**<br>
- **OPCODE.DAA**<br>
- **OPCODE.DAS**<br>
- **OPCODE.DATA16**<br>
- **OPCODE.DEC**<br>
- **OPCODE.DIV**<br>
- **OPCODE.DIVPD**<br>
- **OPCODE.DIVPS**<br>
- **OPCODE.FDIVR**<br>
- **OPCODE.FIDIVR**<br>
- **OPCODE.FDIVRP**<br>
- **OPCODE.DIVSD**<br>
- **OPCODE.DIVSS**<br>
- **OPCODE.FDIV**<br>
- **OPCODE.FIDIV**<br>
- **OPCODE.FDIVP**<br>
- **OPCODE.DPPD**<br>
- **OPCODE.DPPS**<br>
- **OPCODE.RET**<br>
- **OPCODE.ENCLS**<br>
- **OPCODE.ENCLU**<br>
- **OPCODE.ENTER**<br>
- **OPCODE.EXTRACTPS**<br>
- **OPCODE.EXTRQ**<br>
- **OPCODE.F2XM1**<br>
- **OPCODE.LCALL**<br>
- **OPCODE.LJMP**<br>
- **OPCODE.FBLD**<br>
- **OPCODE.FBSTP**<br>
- **OPCODE.FCOMPP**<br>
- **OPCODE.FDECSTP**<br>
- **OPCODE.FEMMS**<br>
- **OPCODE.FFREE**<br>
- **OPCODE.FICOM**<br>
- **OPCODE.FICOMP**<br>
- **OPCODE.FINCSTP**<br>
- **OPCODE.FLDCW**<br>
- **OPCODE.FLDENV**<br>
- **OPCODE.FLDL2E**<br>
- **OPCODE.FLDL2T**<br>
- **OPCODE.FLDLG2**<br>
- **OPCODE.FLDLN2**<br>
- **OPCODE.FLDPI**<br>
- **OPCODE.FNCLEX**<br>
- **OPCODE.FNINIT**<br>
- **OPCODE.FNOP**<br>
- **OPCODE.FNSTCW**<br>
- **OPCODE.FNSTSW**<br>
- **OPCODE.FPATAN**<br>
- **OPCODE.FPREM**<br>
- **OPCODE.FPREM1**<br>
- **OPCODE.FPTAN**<br>
- **OPCODE.FRNDINT**<br>
- **OPCODE.FRSTOR**<br>
- **OPCODE.FNSAVE**<br>
- **OPCODE.FSCALE**<br>
- **OPCODE.FSETPM**<br>
- **OPCODE.FSINCOS**<br>
- **OPCODE.FNSTENV**<br>
- **OPCODE.FXAM**<br>
- **OPCODE.FXRSTOR**<br>
- **OPCODE.FXRSTOR64**<br>
- **OPCODE.FXSAVE**<br>
- **OPCODE.FXSAVE64**<br>
- **OPCODE.FXTRACT**<br>
- **OPCODE.FYL2X**<br>
- **OPCODE.FYL2XP1**<br>
- **OPCODE.MOVAPD**<br>
- **OPCODE.MOVAPS**<br>
- **OPCODE.ORPD**<br>
- **OPCODE.ORPS**<br>
- **OPCODE.VMOVAPD**<br>
- **OPCODE.VMOVAPS**<br>
- **OPCODE.XORPD**<br>
- **OPCODE.XORPS**<br>
- **OPCODE.GETSEC**<br>
- **OPCODE.HADDPD**<br>
- **OPCODE.HADDPS**<br>
- **OPCODE.HLT**<br>
- **OPCODE.HSUBPD**<br>
- **OPCODE.HSUBPS**<br>
- **OPCODE.IDIV**<br>
- **OPCODE.FILD**<br>
- **OPCODE.IMUL**<br>
- **OPCODE.IN**<br>
- **OPCODE.INC**<br>
- **OPCODE.INSB**<br>
- **OPCODE.INSERTPS**<br>
- **OPCODE.INSERTQ**<br>
- **OPCODE.INSD**<br>
- **OPCODE.INSW**<br>
- **OPCODE.INT**<br>
- **OPCODE.INT1**<br>
- **OPCODE.INT3**<br>
- **OPCODE.INTO**<br>
- **OPCODE.INVD**<br>
- **OPCODE.INVEPT**<br>
- **OPCODE.INVLPG**<br>
- **OPCODE.INVLPGA**<br>
- **OPCODE.INVPCID**<br>
- **OPCODE.INVVPID**<br>
- **OPCODE.IRET**<br>
- **OPCODE.IRETD**<br>
- **OPCODE.IRETQ**<br>
- **OPCODE.FISTTP**<br>
- **OPCODE.FIST**<br>
- **OPCODE.FISTP**<br>
- **OPCODE.UCOMISD**<br>
- **OPCODE.UCOMISS**<br>
- **OPCODE.VCMP**<br>
- **OPCODE.VCOMISD**<br>
- **OPCODE.VCOMISS**<br>
- **OPCODE.VCVTSD2SS**<br>
- **OPCODE.VCVTSI2SD**<br>
- **OPCODE.VCVTSI2SS**<br>
- **OPCODE.VCVTSS2SD**<br>
- **OPCODE.VCVTTSD2SI**<br>
- **OPCODE.VCVTTSD2USI**<br>
- **OPCODE.VCVTTSS2SI**<br>
- **OPCODE.VCVTTSS2USI**<br>
- **OPCODE.VCVTUSI2SD**<br>
- **OPCODE.VCVTUSI2SS**<br>
- **OPCODE.VUCOMISD**<br>
- **OPCODE.VUCOMISS**<br>
- **OPCODE.JAE**<br>
- **OPCODE.JA**<br>
- **OPCODE.JBE**<br>
- **OPCODE.JB**<br>
- **OPCODE.JCXZ**<br>
- **OPCODE.JECXZ**<br>
- **OPCODE.JE**<br>
- **OPCODE.JGE**<br>
- **OPCODE.JG**<br>
- **OPCODE.JLE**<br>
- **OPCODE.JL**<br>
- **OPCODE.JMP**<br>
- **OPCODE.JNE**<br>
- **OPCODE.JNO**<br>
- **OPCODE.JNP**<br>
- **OPCODE.JNS**<br>
- **OPCODE.JO**<br>
- **OPCODE.JP**<br>
- **OPCODE.JRCXZ**<br>
- **OPCODE.JS**<br>
- **OPCODE.KANDB**<br>
- **OPCODE.KANDD**<br>
- **OPCODE.KANDNB**<br>
- **OPCODE.KANDND**<br>
- **OPCODE.KANDNQ**<br>
- **OPCODE.KANDNW**<br>
- **OPCODE.KANDQ**<br>
- **OPCODE.KANDW**<br>
- **OPCODE.KMOVB**<br>
- **OPCODE.KMOVD**<br>
- **OPCODE.KMOVQ**<br>
- **OPCODE.KMOVW**<br>
- **OPCODE.KNOTB**<br>
- **OPCODE.KNOTD**<br>
- **OPCODE.KNOTQ**<br>
- **OPCODE.KNOTW**<br>
- **OPCODE.KORB**<br>
- **OPCODE.KORD**<br>
- **OPCODE.KORQ**<br>
- **OPCODE.KORTESTW**<br>
- **OPCODE.KORW**<br>
- **OPCODE.KSHIFTLW**<br>
- **OPCODE.KSHIFTRW**<br>
- **OPCODE.KUNPCKBW**<br>
- **OPCODE.KXNORB**<br>
- **OPCODE.KXNORD**<br>
- **OPCODE.KXNORQ**<br>
- **OPCODE.KXNORW**<br>
- **OPCODE.KXORB**<br>
- **OPCODE.KXORD**<br>
- **OPCODE.KXORQ**<br>
- **OPCODE.KXORW**<br>
- **OPCODE.LAHF**<br>
- **OPCODE.LAR**<br>
- **OPCODE.LDDQU**<br>
- **OPCODE.LDMXCSR**<br>
- **OPCODE.LDS**<br>
- **OPCODE.FLDZ**<br>
- **OPCODE.FLD1**<br>
- **OPCODE.FLD**<br>
- **OPCODE.LEA**<br>
- **OPCODE.LEAVE**<br>
- **OPCODE.LES**<br>
- **OPCODE.LFENCE**<br>
- **OPCODE.LFS**<br>
- **OPCODE.LGDT**<br>
- **OPCODE.LGS**<br>
- **OPCODE.LIDT**<br>
- **OPCODE.LLDT**<br>
- **OPCODE.LMSW**<br>
- **OPCODE.OR**<br>
- **OPCODE.SUB**<br>
- **OPCODE.XOR**<br>
- **OPCODE.LODSB**<br>
- **OPCODE.LODSD**<br>
- **OPCODE.LODSQ**<br>
- **OPCODE.LODSW**<br>
- **OPCODE.LOOP**<br>
- **OPCODE.LOOPE**<br>
- **OPCODE.LOOPNE**<br>
- **OPCODE.RETF**<br>
- **OPCODE.RETFQ**<br>
- **OPCODE.LSL**<br>
- **OPCODE.LSS**<br>
- **OPCODE.LTR**<br>
- **OPCODE.XADD**<br>
- **OPCODE.LZCNT**<br>
- **OPCODE.MASKMOVDQU**<br>
- **OPCODE.MAXPD**<br>
- **OPCODE.MAXPS**<br>
- **OPCODE.MAXSD**<br>
- **OPCODE.MAXSS**<br>
- **OPCODE.MFENCE**<br>
- **OPCODE.MINPD**<br>
- **OPCODE.MINPS**<br>
- **OPCODE.MINSD**<br>
- **OPCODE.MINSS**<br>
- **OPCODE.CVTPD2PI**<br>
- **OPCODE.CVTPI2PD**<br>
- **OPCODE.CVTPI2PS**<br>
- **OPCODE.CVTPS2PI**<br>
- **OPCODE.CVTTPD2PI**<br>
- **OPCODE.CVTTPS2PI**<br>
- **OPCODE.EMMS**<br>
- **OPCODE.MASKMOVQ**<br>
- **OPCODE.MOVD**<br>
- **OPCODE.MOVDQ2Q**<br>
- **OPCODE.MOVNTQ**<br>
- **OPCODE.MOVQ2DQ**<br>
- **OPCODE.MOVQ**<br>
- **OPCODE.PABSB**<br>
- **OPCODE.PABSD**<br>
- **OPCODE.PABSW**<br>
- **OPCODE.PACKSSDW**<br>
- **OPCODE.PACKSSWB**<br>
- **OPCODE.PACKUSWB**<br>
- **OPCODE.PADDB**<br>
- **OPCODE.PADDD**<br>
- **OPCODE.PADDQ**<br>
- **OPCODE.PADDSB**<br>
- **OPCODE.PADDSW**<br>
- **OPCODE.PADDUSB**<br>
- **OPCODE.PADDUSW**<br>
- **OPCODE.PADDW**<br>
- **OPCODE.PALIGNR**<br>
- **OPCODE.PANDN**<br>
- **OPCODE.PAND**<br>
- **OPCODE.PAVGB**<br>
- **OPCODE.PAVGW**<br>
- **OPCODE.PCMPEQB**<br>
- **OPCODE.PCMPEQD**<br>
- **OPCODE.PCMPEQW**<br>
- **OPCODE.PCMPGTB**<br>
- **OPCODE.PCMPGTD**<br>
- **OPCODE.PCMPGTW**<br>
- **OPCODE.PEXTRW**<br>
- **OPCODE.PHADDSW**<br>
- **OPCODE.PHADDW**<br>
- **OPCODE.PHADDD**<br>
- **OPCODE.PHSUBD**<br>
- **OPCODE.PHSUBSW**<br>
- **OPCODE.PHSUBW**<br>
- **OPCODE.PINSRW**<br>
- **OPCODE.PMADDUBSW**<br>
- **OPCODE.PMADDWD**<br>
- **OPCODE.PMAXSW**<br>
- **OPCODE.PMAXUB**<br>
- **OPCODE.PMINSW**<br>
- **OPCODE.PMINUB**<br>
- **OPCODE.PMOVMSKB**<br>
- **OPCODE.PMULHRSW**<br>
- **OPCODE.PMULHUW**<br>
- **OPCODE.PMULHW**<br>
- **OPCODE.PMULLW**<br>
- **OPCODE.PMULUDQ**<br>
- **OPCODE.POR**<br>
- **OPCODE.PSADBW**<br>
- **OPCODE.PSHUFB**<br>
- **OPCODE.PSHUFW**<br>
- **OPCODE.PSIGNB**<br>
- **OPCODE.PSIGND**<br>
- **OPCODE.PSIGNW**<br>
- **OPCODE.PSLLD**<br>
- **OPCODE.PSLLQ**<br>
- **OPCODE.PSLLW**<br>
- **OPCODE.PSRAD**<br>
- **OPCODE.PSRAW**<br>
- **OPCODE.PSRLD**<br>
- **OPCODE.PSRLQ**<br>
- **OPCODE.PSRLW**<br>
- **OPCODE.PSUBB**<br>
- **OPCODE.PSUBD**<br>
- **OPCODE.PSUBQ**<br>
- **OPCODE.PSUBSB**<br>
- **OPCODE.PSUBSW**<br>
- **OPCODE.PSUBUSB**<br>
- **OPCODE.PSUBUSW**<br>
- **OPCODE.PSUBW**<br>
- **OPCODE.PUNPCKHBW**<br>
- **OPCODE.PUNPCKHDQ**<br>
- **OPCODE.PUNPCKHWD**<br>
- **OPCODE.PUNPCKLBW**<br>
- **OPCODE.PUNPCKLDQ**<br>
- **OPCODE.PUNPCKLWD**<br>
- **OPCODE.PXOR**<br>
- **OPCODE.MONITOR**<br>
- **OPCODE.MONTMUL**<br>
- **OPCODE.MOV**<br>
- **OPCODE.MOVABS**<br>
- **OPCODE.MOVBE**<br>
- **OPCODE.MOVDDUP**<br>
- **OPCODE.MOVDQA**<br>
- **OPCODE.MOVDQU**<br>
- **OPCODE.MOVHLPS**<br>
- **OPCODE.MOVHPD**<br>
- **OPCODE.MOVHPS**<br>
- **OPCODE.MOVLHPS**<br>
- **OPCODE.MOVLPD**<br>
- **OPCODE.MOVLPS**<br>
- **OPCODE.MOVMSKPD**<br>
- **OPCODE.MOVMSKPS**<br>
- **OPCODE.MOVNTDQA**<br>
- **OPCODE.MOVNTDQ**<br>
- **OPCODE.MOVNTI**<br>
- **OPCODE.MOVNTPD**<br>
- **OPCODE.MOVNTPS**<br>
- **OPCODE.MOVNTSD**<br>
- **OPCODE.MOVNTSS**<br>
- **OPCODE.MOVSB**<br>
- **OPCODE.MOVSD**<br>
- **OPCODE.MOVSHDUP**<br>
- **OPCODE.MOVSLDUP**<br>
- **OPCODE.MOVSQ**<br>
- **OPCODE.MOVSS**<br>
- **OPCODE.MOVSW**<br>
- **OPCODE.MOVSX**<br>
- **OPCODE.MOVSXD**<br>
- **OPCODE.MOVUPD**<br>
- **OPCODE.MOVUPS**<br>
- **OPCODE.MOVZX**<br>
- **OPCODE.MPSADBW**<br>
- **OPCODE.MUL**<br>
- **OPCODE.MULPD**<br>
- **OPCODE.MULPS**<br>
- **OPCODE.MULSD**<br>
- **OPCODE.MULSS**<br>
- **OPCODE.MULX**<br>
- **OPCODE.FMUL**<br>
- **OPCODE.FIMUL**<br>
- **OPCODE.FMULP**<br>
- **OPCODE.MWAIT**<br>
- **OPCODE.NEG**<br>
- **OPCODE.NOP**<br>
- **OPCODE.NOT**<br>
- **OPCODE.OUT**<br>
- **OPCODE.OUTSB**<br>
- **OPCODE.OUTSD**<br>
- **OPCODE.OUTSW**<br>
- **OPCODE.PACKUSDW**<br>
- **OPCODE.PAUSE**<br>
- **OPCODE.PAVGUSB**<br>
- **OPCODE.PBLENDVB**<br>
- **OPCODE.PBLENDW**<br>
- **OPCODE.PCLMULQDQ**<br>
- **OPCODE.PCMPEQQ**<br>
- **OPCODE.PCMPESTRI**<br>
- **OPCODE.PCMPESTRM**<br>
- **OPCODE.PCMPGTQ**<br>
- **OPCODE.PCMPISTRI**<br>
- **OPCODE.PCMPISTRM**<br>
- **OPCODE.PDEP**<br>
- **OPCODE.PEXT**<br>
- **OPCODE.PEXTRB**<br>
- **OPCODE.PEXTRD**<br>
- **OPCODE.PEXTRQ**<br>
- **OPCODE.PF2ID**<br>
- **OPCODE.PF2IW**<br>
- **OPCODE.PFACC**<br>
- **OPCODE.PFADD**<br>
- **OPCODE.PFCMPEQ**<br>
- **OPCODE.PFCMPGE**<br>
- **OPCODE.PFCMPGT**<br>
- **OPCODE.PFMAX**<br>
- **OPCODE.PFMIN**<br>
- **OPCODE.PFMUL**<br>
- **OPCODE.PFNACC**<br>
- **OPCODE.PFPNACC**<br>
- **OPCODE.PFRCPIT1**<br>
- **OPCODE.PFRCPIT2**<br>
- **OPCODE.PFRCP**<br>
- **OPCODE.PFRSQIT1**<br>
- **OPCODE.PFRSQRT**<br>
- **OPCODE.PFSUBR**<br>
- **OPCODE.PFSUB**<br>
- **OPCODE.PHMINPOSUW**<br>
- **OPCODE.PI2FD**<br>
- **OPCODE.PI2FW**<br>
- **OPCODE.PINSRB**<br>
- **OPCODE.PINSRD**<br>
- **OPCODE.PINSRQ**<br>
- **OPCODE.PMAXSB**<br>
- **OPCODE.PMAXSD**<br>
- **OPCODE.PMAXUD**<br>
- **OPCODE.PMAXUW**<br>
- **OPCODE.PMINSB**<br>
- **OPCODE.PMINSD**<br>
- **OPCODE.PMINUD**<br>
- **OPCODE.PMINUW**<br>
- **OPCODE.PMOVSXBD**<br>
- **OPCODE.PMOVSXBQ**<br>
- **OPCODE.PMOVSXBW**<br>
- **OPCODE.PMOVSXDQ**<br>
- **OPCODE.PMOVSXWD**<br>
- **OPCODE.PMOVSXWQ**<br>
- **OPCODE.PMOVZXBD**<br>
- **OPCODE.PMOVZXBQ**<br>
- **OPCODE.PMOVZXBW**<br>
- **OPCODE.PMOVZXDQ**<br>
- **OPCODE.PMOVZXWD**<br>
- **OPCODE.PMOVZXWQ**<br>
- **OPCODE.PMULDQ**<br>
- **OPCODE.PMULHRW**<br>
- **OPCODE.PMULLD**<br>
- **OPCODE.POP**<br>
- **OPCODE.POPAW**<br>
- **OPCODE.POPAL**<br>
- **OPCODE.POPCNT**<br>
- **OPCODE.POPF**<br>
- **OPCODE.POPFD**<br>
- **OPCODE.POPFQ**<br>
- **OPCODE.PREFETCH**<br>
- **OPCODE.PREFETCHNTA**<br>
- **OPCODE.PREFETCHT0**<br>
- **OPCODE.PREFETCHT1**<br>
- **OPCODE.PREFETCHT2**<br>
- **OPCODE.PREFETCHW**<br>
- **OPCODE.PSHUFD**<br>
- **OPCODE.PSHUFHW**<br>
- **OPCODE.PSHUFLW**<br>
- **OPCODE.PSLLDQ**<br>
- **OPCODE.PSRLDQ**<br>
- **OPCODE.PSWAPD**<br>
- **OPCODE.PTEST**<br>
- **OPCODE.PUNPCKHQDQ**<br>
- **OPCODE.PUNPCKLQDQ**<br>
- **OPCODE.PUSH**<br>
- **OPCODE.PUSHAW**<br>
- **OPCODE.PUSHAL**<br>
- **OPCODE.PUSHF**<br>
- **OPCODE.PUSHFD**<br>
- **OPCODE.PUSHFQ**<br>
- **OPCODE.RCL**<br>
- **OPCODE.RCPPS**<br>
- **OPCODE.RCPSS**<br>
- **OPCODE.RCR**<br>
- **OPCODE.RDFSBASE**<br>
- **OPCODE.RDGSBASE**<br>
- **OPCODE.RDMSR**<br>
- **OPCODE.RDPMC**<br>
- **OPCODE.RDRAND**<br>
- **OPCODE.RDSEED**<br>
- **OPCODE.RDTSC**<br>
- **OPCODE.RDTSCP**<br>
- **OPCODE.ROL**<br>
- **OPCODE.ROR**<br>
- **OPCODE.RORX**<br>
- **OPCODE.ROUNDPD**<br>
- **OPCODE.ROUNDPS**<br>
- **OPCODE.ROUNDSD**<br>
- **OPCODE.ROUNDSS**<br>
- **OPCODE.RSM**<br>
- **OPCODE.RSQRTPS**<br>
- **OPCODE.RSQRTSS**<br>
- **OPCODE.SAHF**<br>
- **OPCODE.SAL**<br>
- **OPCODE.SALC**<br>
- **OPCODE.SAR**<br>
- **OPCODE.SARX**<br>
- **OPCODE.SBB**<br>
- **OPCODE.SCASB**<br>
- **OPCODE.SCASD**<br>
- **OPCODE.SCASQ**<br>
- **OPCODE.SCASW**<br>
- **OPCODE.SETAE**<br>
- **OPCODE.SETA**<br>
- **OPCODE.SETBE**<br>
- **OPCODE.SETB**<br>
- **OPCODE.SETE**<br>
- **OPCODE.SETGE**<br>
- **OPCODE.SETG**<br>
- **OPCODE.SETLE**<br>
- **OPCODE.SETL**<br>
- **OPCODE.SETNE**<br>
- **OPCODE.SETNO**<br>
- **OPCODE.SETNP**<br>
- **OPCODE.SETNS**<br>
- **OPCODE.SETO**<br>
- **OPCODE.SETP**<br>
- **OPCODE.SETS**<br>
- **OPCODE.SFENCE**<br>
- **OPCODE.SGDT**<br>
- **OPCODE.SHA1MSG1**<br>
- **OPCODE.SHA1MSG2**<br>
- **OPCODE.SHA1NEXTE**<br>
- **OPCODE.SHA1RNDS4**<br>
- **OPCODE.SHA256MSG1**<br>
- **OPCODE.SHA256MSG2**<br>
- **OPCODE.SHA256RNDS2**<br>
- **OPCODE.SHL**<br>
- **OPCODE.SHLD**<br>
- **OPCODE.SHLX**<br>
- **OPCODE.SHR**<br>
- **OPCODE.SHRD**<br>
- **OPCODE.SHRX**<br>
- **OPCODE.SHUFPD**<br>
- **OPCODE.SHUFPS**<br>
- **OPCODE.SIDT**<br>
- **OPCODE.FSIN**<br>
- **OPCODE.SKINIT**<br>
- **OPCODE.SLDT**<br>
- **OPCODE.SMSW**<br>
- **OPCODE.SQRTPD**<br>
- **OPCODE.SQRTPS**<br>
- **OPCODE.SQRTSD**<br>
- **OPCODE.SQRTSS**<br>
- **OPCODE.FSQRT**<br>
- **OPCODE.STAC**<br>
- **OPCODE.STC**<br>
- **OPCODE.STD**<br>
- **OPCODE.STGI**<br>
- **OPCODE.STI**<br>
- **OPCODE.STMXCSR**<br>
- **OPCODE.STOSB**<br>
- **OPCODE.STOSD**<br>
- **OPCODE.STOSQ**<br>
- **OPCODE.STOSW**<br>
- **OPCODE.STR**<br>
- **OPCODE.FST**<br>
- **OPCODE.FSTP**<br>
- **OPCODE.FSTPNCE**<br>
- **OPCODE.SUBPD**<br>
- **OPCODE.SUBPS**<br>
- **OPCODE.FSUBR**<br>
- **OPCODE.FISUBR**<br>
- **OPCODE.FSUBRP**<br>
- **OPCODE.SUBSD**<br>
- **OPCODE.SUBSS**<br>
- **OPCODE.FSUB**<br>
- **OPCODE.FISUB**<br>
- **OPCODE.FSUBP**<br>
- **OPCODE.SWAPGS**<br>
- **OPCODE.SYSCALL**<br>
- **OPCODE.SYSENTER**<br>
- **OPCODE.SYSEXIT**<br>
- **OPCODE.SYSRET**<br>
- **OPCODE.T1MSKC**<br>
- **OPCODE.TEST**<br>
- **OPCODE.UD2**<br>
- **OPCODE.FTST**<br>
- **OPCODE.TZCNT**<br>
- **OPCODE.TZMSK**<br>
- **OPCODE.FUCOMPI**<br>
- **OPCODE.FUCOMI**<br>
- **OPCODE.FUCOMPP**<br>
- **OPCODE.FUCOMP**<br>
- **OPCODE.FUCOM**<br>
- **OPCODE.UD2B**<br>
- **OPCODE.UNPCKHPD**<br>
- **OPCODE.UNPCKHPS**<br>
- **OPCODE.UNPCKLPD**<br>
- **OPCODE.UNPCKLPS**<br>
- **OPCODE.VADDPD**<br>
- **OPCODE.VADDPS**<br>
- **OPCODE.VADDSD**<br>
- **OPCODE.VADDSS**<br>
- **OPCODE.VADDSUBPD**<br>
- **OPCODE.VADDSUBPS**<br>
- **OPCODE.VAESDECLAST**<br>
- **OPCODE.VAESDEC**<br>
- **OPCODE.VAESENCLAST**<br>
- **OPCODE.VAESENC**<br>
- **OPCODE.VAESIMC**<br>
- **OPCODE.VAESKEYGENASSIST**<br>
- **OPCODE.VALIGND**<br>
- **OPCODE.VALIGNQ**<br>
- **OPCODE.VANDNPD**<br>
- **OPCODE.VANDNPS**<br>
- **OPCODE.VANDPD**<br>
- **OPCODE.VANDPS**<br>
- **OPCODE.VBLENDMPD**<br>
- **OPCODE.VBLENDMPS**<br>
- **OPCODE.VBLENDPD**<br>
- **OPCODE.VBLENDPS**<br>
- **OPCODE.VBLENDVPD**<br>
- **OPCODE.VBLENDVPS**<br>
- **OPCODE.VBROADCASTF128**<br>
- **OPCODE.VBROADCASTI128**<br>
- **OPCODE.VBROADCASTI32X4**<br>
- **OPCODE.VBROADCASTI64X4**<br>
- **OPCODE.VBROADCASTSD**<br>
- **OPCODE.VBROADCASTSS**<br>
- **OPCODE.VCMPPD**<br>
- **OPCODE.VCMPPS**<br>
- **OPCODE.VCMPSD**<br>
- **OPCODE.VCMPSS**<br>
- **OPCODE.VCVTDQ2PD**<br>
- **OPCODE.VCVTDQ2PS**<br>
- **OPCODE.VCVTPD2DQX**<br>
- **OPCODE.VCVTPD2DQ**<br>
- **OPCODE.VCVTPD2PSX**<br>
- **OPCODE.VCVTPD2PS**<br>
- **OPCODE.VCVTPD2UDQ**<br>
- **OPCODE.VCVTPH2PS**<br>
- **OPCODE.VCVTPS2DQ**<br>
- **OPCODE.VCVTPS2PD**<br>
- **OPCODE.VCVTPS2PH**<br>
- **OPCODE.VCVTPS2UDQ**<br>
- **OPCODE.VCVTSD2SI**<br>
- **OPCODE.VCVTSD2USI**<br>
- **OPCODE.VCVTSS2SI**<br>
- **OPCODE.VCVTSS2USI**<br>
- **OPCODE.VCVTTPD2DQX**<br>
- **OPCODE.VCVTTPD2DQ**<br>
- **OPCODE.VCVTTPD2UDQ**<br>
- **OPCODE.VCVTTPS2DQ**<br>
- **OPCODE.VCVTTPS2UDQ**<br>
- **OPCODE.VCVTUDQ2PD**<br>
- **OPCODE.VCVTUDQ2PS**<br>
- **OPCODE.VDIVPD**<br>
- **OPCODE.VDIVPS**<br>
- **OPCODE.VDIVSD**<br>
- **OPCODE.VDIVSS**<br>
- **OPCODE.VDPPD**<br>
- **OPCODE.VDPPS**<br>
- **OPCODE.VERR**<br>
- **OPCODE.VERW**<br>
- **OPCODE.VEXTRACTF128**<br>
- **OPCODE.VEXTRACTF32X4**<br>
- **OPCODE.VEXTRACTF64X4**<br>
- **OPCODE.VEXTRACTI128**<br>
- **OPCODE.VEXTRACTI32X4**<br>
- **OPCODE.VEXTRACTI64X4**<br>
- **OPCODE.VEXTRACTPS**<br>
- **OPCODE.VFMADD132PD**<br>
- **OPCODE.VFMADD132PS**<br>
- **OPCODE.VFMADD213PD**<br>
- **OPCODE.VFMADD213PS**<br>
- **OPCODE.VFMADDPD**<br>
- **OPCODE.VFMADD231PD**<br>
- **OPCODE.VFMADDPS**<br>
- **OPCODE.VFMADD231PS**<br>
- **OPCODE.VFMADDSD**<br>
- **OPCODE.VFMADD213SD**<br>
- **OPCODE.VFMADD132SD**<br>
- **OPCODE.VFMADD231SD**<br>
- **OPCODE.VFMADDSS**<br>
- **OPCODE.VFMADD213SS**<br>
- **OPCODE.VFMADD132SS**<br>
- **OPCODE.VFMADD231SS**<br>
- **OPCODE.VFMADDSUB132PD**<br>
- **OPCODE.VFMADDSUB132PS**<br>
- **OPCODE.VFMADDSUB213PD**<br>
- **OPCODE.VFMADDSUB213PS**<br>
- **OPCODE.VFMADDSUBPD**<br>
- **OPCODE.VFMADDSUB231PD**<br>
- **OPCODE.VFMADDSUBPS**<br>
- **OPCODE.VFMADDSUB231PS**<br>
- **OPCODE.VFMSUB132PD**<br>
- **OPCODE.VFMSUB132PS**<br>
- **OPCODE.VFMSUB213PD**<br>
- **OPCODE.VFMSUB213PS**<br>
- **OPCODE.VFMSUBADD132PD**<br>
- **OPCODE.VFMSUBADD132PS**<br>
- **OPCODE.VFMSUBADD213PD**<br>
- **OPCODE.VFMSUBADD213PS**<br>
- **OPCODE.VFMSUBADDPD**<br>
- **OPCODE.VFMSUBADD231PD**<br>
- **OPCODE.VFMSUBADDPS**<br>
- **OPCODE.VFMSUBADD231PS**<br>
- **OPCODE.VFMSUBPD**<br>
- **OPCODE.VFMSUB231PD**<br>
- **OPCODE.VFMSUBPS**<br>
- **OPCODE.VFMSUB231PS**<br>
- **OPCODE.VFMSUBSD**<br>
- **OPCODE.VFMSUB213SD**<br>
- **OPCODE.VFMSUB132SD**<br>
- **OPCODE.VFMSUB231SD**<br>
- **OPCODE.VFMSUBSS**<br>
- **OPCODE.VFMSUB213SS**<br>
- **OPCODE.VFMSUB132SS**<br>
- **OPCODE.VFMSUB231SS**<br>
- **OPCODE.VFNMADD132PD**<br>
- **OPCODE.VFNMADD132PS**<br>
- **OPCODE.VFNMADD213PD**<br>
- **OPCODE.VFNMADD213PS**<br>
- **OPCODE.VFNMADDPD**<br>
- **OPCODE.VFNMADD231PD**<br>
- **OPCODE.VFNMADDPS**<br>
- **OPCODE.VFNMADD231PS**<br>
- **OPCODE.VFNMADDSD**<br>
- **OPCODE.VFNMADD213SD**<br>
- **OPCODE.VFNMADD132SD**<br>
- **OPCODE.VFNMADD231SD**<br>
- **OPCODE.VFNMADDSS**<br>
- **OPCODE.VFNMADD213SS**<br>
- **OPCODE.VFNMADD132SS**<br>
- **OPCODE.VFNMADD231SS**<br>
- **OPCODE.VFNMSUB132PD**<br>
- **OPCODE.VFNMSUB132PS**<br>
- **OPCODE.VFNMSUB213PD**<br>
- **OPCODE.VFNMSUB213PS**<br>
- **OPCODE.VFNMSUBPD**<br>
- **OPCODE.VFNMSUB231PD**<br>
- **OPCODE.VFNMSUBPS**<br>
- **OPCODE.VFNMSUB231PS**<br>
- **OPCODE.VFNMSUBSD**<br>
- **OPCODE.VFNMSUB213SD**<br>
- **OPCODE.VFNMSUB132SD**<br>
- **OPCODE.VFNMSUB231SD**<br>
- **OPCODE.VFNMSUBSS**<br>
- **OPCODE.VFNMSUB213SS**<br>
- **OPCODE.VFNMSUB132SS**<br>
- **OPCODE.VFNMSUB231SS**<br>
- **OPCODE.VFRCZPD**<br>
- **OPCODE.VFRCZPS**<br>
- **OPCODE.VFRCZSD**<br>
- **OPCODE.VFRCZSS**<br>
- **OPCODE.VORPD**<br>
- **OPCODE.VORPS**<br>
- **OPCODE.VXORPD**<br>
- **OPCODE.VXORPS**<br>
- **OPCODE.VGATHERDPD**<br>
- **OPCODE.VGATHERDPS**<br>
- **OPCODE.VGATHERPF0DPD**<br>
- **OPCODE.VGATHERPF0DPS**<br>
- **OPCODE.VGATHERPF0QPD**<br>
- **OPCODE.VGATHERPF0QPS**<br>
- **OPCODE.VGATHERPF1DPD**<br>
- **OPCODE.VGATHERPF1DPS**<br>
- **OPCODE.VGATHERPF1QPD**<br>
- **OPCODE.VGATHERPF1QPS**<br>
- **OPCODE.VGATHERQPD**<br>
- **OPCODE.VGATHERQPS**<br>
- **OPCODE.VHADDPD**<br>
- **OPCODE.VHADDPS**<br>
- **OPCODE.VHSUBPD**<br>
- **OPCODE.VHSUBPS**<br>
- **OPCODE.VINSERTF128**<br>
- **OPCODE.VINSERTF32X4**<br>
- **OPCODE.VINSERTF64X4**<br>
- **OPCODE.VINSERTI128**<br>
- **OPCODE.VINSERTI32X4**<br>
- **OPCODE.VINSERTI64X4**<br>
- **OPCODE.VINSERTPS**<br>
- **OPCODE.VLDDQU**<br>
- **OPCODE.VLDMXCSR**<br>
- **OPCODE.VMASKMOVDQU**<br>
- **OPCODE.VMASKMOVPD**<br>
- **OPCODE.VMASKMOVPS**<br>
- **OPCODE.VMAXPD**<br>
- **OPCODE.VMAXPS**<br>
- **OPCODE.VMAXSD**<br>
- **OPCODE.VMAXSS**<br>
- **OPCODE.VMCALL**<br>
- **OPCODE.VMCLEAR**<br>
- **OPCODE.VMFUNC**<br>
- **OPCODE.VMINPD**<br>
- **OPCODE.VMINPS**<br>
- **OPCODE.VMINSD**<br>
- **OPCODE.VMINSS**<br>
- **OPCODE.VMLAUNCH**<br>
- **OPCODE.VMLOAD**<br>
- **OPCODE.VMMCALL**<br>
- **OPCODE.VMOVQ**<br>
- **OPCODE.VMOVDDUP**<br>
- **OPCODE.VMOVD**<br>
- **OPCODE.VMOVDQA32**<br>
- **OPCODE.VMOVDQA64**<br>
- **OPCODE.VMOVDQA**<br>
- **OPCODE.VMOVDQU16**<br>
- **OPCODE.VMOVDQU32**<br>
- **OPCODE.VMOVDQU64**<br>
- **OPCODE.VMOVDQU8**<br>
- **OPCODE.VMOVDQU**<br>
- **OPCODE.VMOVHLPS**<br>
- **OPCODE.VMOVHPD**<br>
- **OPCODE.VMOVHPS**<br>
- **OPCODE.VMOVLHPS**<br>
- **OPCODE.VMOVLPD**<br>
- **OPCODE.VMOVLPS**<br>
- **OPCODE.VMOVMSKPD**<br>
- **OPCODE.VMOVMSKPS**<br>
- **OPCODE.VMOVNTDQA**<br>
- **OPCODE.VMOVNTDQ**<br>
- **OPCODE.VMOVNTPD**<br>
- **OPCODE.VMOVNTPS**<br>
- **OPCODE.VMOVSD**<br>
- **OPCODE.VMOVSHDUP**<br>
- **OPCODE.VMOVSLDUP**<br>
- **OPCODE.VMOVSS**<br>
- **OPCODE.VMOVUPD**<br>
- **OPCODE.VMOVUPS**<br>
- **OPCODE.VMPSADBW**<br>
- **OPCODE.VMPTRLD**<br>
- **OPCODE.VMPTRST**<br>
- **OPCODE.VMREAD**<br>
- **OPCODE.VMRESUME**<br>
- **OPCODE.VMRUN**<br>
- **OPCODE.VMSAVE**<br>
- **OPCODE.VMULPD**<br>
- **OPCODE.VMULPS**<br>
- **OPCODE.VMULSD**<br>
- **OPCODE.VMULSS**<br>
- **OPCODE.VMWRITE**<br>
- **OPCODE.VMXOFF**<br>
- **OPCODE.VMXON**<br>
- **OPCODE.VPABSB**<br>
- **OPCODE.VPABSD**<br>
- **OPCODE.VPABSQ**<br>
- **OPCODE.VPABSW**<br>
- **OPCODE.VPACKSSDW**<br>
- **OPCODE.VPACKSSWB**<br>
- **OPCODE.VPACKUSDW**<br>
- **OPCODE.VPACKUSWB**<br>
- **OPCODE.VPADDB**<br>
- **OPCODE.VPADDD**<br>
- **OPCODE.VPADDQ**<br>
- **OPCODE.VPADDSB**<br>
- **OPCODE.VPADDSW**<br>
- **OPCODE.VPADDUSB**<br>
- **OPCODE.VPADDUSW**<br>
- **OPCODE.VPADDW**<br>
- **OPCODE.VPALIGNR**<br>
- **OPCODE.VPANDD**<br>
- **OPCODE.VPANDND**<br>
- **OPCODE.VPANDNQ**<br>
- **OPCODE.VPANDN**<br>
- **OPCODE.VPANDQ**<br>
- **OPCODE.VPAND**<br>
- **OPCODE.VPAVGB**<br>
- **OPCODE.VPAVGW**<br>
- **OPCODE.VPBLENDD**<br>
- **OPCODE.VPBLENDMD**<br>
- **OPCODE.VPBLENDMQ**<br>
- **OPCODE.VPBLENDVB**<br>
- **OPCODE.VPBLENDW**<br>
- **OPCODE.VPBROADCASTB**<br>
- **OPCODE.VPBROADCASTD**<br>
- **OPCODE.VPBROADCASTMB2Q**<br>
- **OPCODE.VPBROADCASTMW2D**<br>
- **OPCODE.VPBROADCASTQ**<br>
- **OPCODE.VPBROADCASTW**<br>
- **OPCODE.VPCLMULQDQ**<br>
- **OPCODE.VPCMOV**<br>
- **OPCODE.VPCMP**<br>
- **OPCODE.VPCMPD**<br>
- **OPCODE.VPCMPEQB**<br>
- **OPCODE.VPCMPEQD**<br>
- **OPCODE.VPCMPEQQ**<br>
- **OPCODE.VPCMPEQW**<br>
- **OPCODE.VPCMPESTRI**<br>
- **OPCODE.VPCMPESTRM**<br>
- **OPCODE.VPCMPGTB**<br>
- **OPCODE.VPCMPGTD**<br>
- **OPCODE.VPCMPGTQ**<br>
- **OPCODE.VPCMPGTW**<br>
- **OPCODE.VPCMPISTRI**<br>
- **OPCODE.VPCMPISTRM**<br>
- **OPCODE.VPCMPQ**<br>
- **OPCODE.VPCMPUD**<br>
- **OPCODE.VPCMPUQ**<br>
- **OPCODE.VPCOMB**<br>
- **OPCODE.VPCOMD**<br>
- **OPCODE.VPCOMQ**<br>
- **OPCODE.VPCOMUB**<br>
- **OPCODE.VPCOMUD**<br>
- **OPCODE.VPCOMUQ**<br>
- **OPCODE.VPCOMUW**<br>
- **OPCODE.VPCOMW**<br>
- **OPCODE.VPCONFLICTD**<br>
- **OPCODE.VPCONFLICTQ**<br>
- **OPCODE.VPERM2F128**<br>
- **OPCODE.VPERM2I128**<br>
- **OPCODE.VPERMD**<br>
- **OPCODE.VPERMI2D**<br>
- **OPCODE.VPERMI2PD**<br>
- **OPCODE.VPERMI2PS**<br>
- **OPCODE.VPERMI2Q**<br>
- **OPCODE.VPERMIL2PD**<br>
- **OPCODE.VPERMIL2PS**<br>
- **OPCODE.VPERMILPD**<br>
- **OPCODE.VPERMILPS**<br>
- **OPCODE.VPERMPD**<br>
- **OPCODE.VPERMPS**<br>
- **OPCODE.VPERMQ**<br>
- **OPCODE.VPERMT2D**<br>
- **OPCODE.VPERMT2PD**<br>
- **OPCODE.VPERMT2PS**<br>
- **OPCODE.VPERMT2Q**<br>
- **OPCODE.VPEXTRB**<br>
- **OPCODE.VPEXTRD**<br>
- **OPCODE.VPEXTRQ**<br>
- **OPCODE.VPEXTRW**<br>
- **OPCODE.VPGATHERDD**<br>
- **OPCODE.VPGATHERDQ**<br>
- **OPCODE.VPGATHERQD**<br>
- **OPCODE.VPGATHERQQ**<br>
- **OPCODE.VPHADDBD**<br>
- **OPCODE.VPHADDBQ**<br>
- **OPCODE.VPHADDBW**<br>
- **OPCODE.VPHADDDQ**<br>
- **OPCODE.VPHADDD**<br>
- **OPCODE.VPHADDSW**<br>
- **OPCODE.VPHADDUBD**<br>
- **OPCODE.VPHADDUBQ**<br>
- **OPCODE.VPHADDUBW**<br>
- **OPCODE.VPHADDUDQ**<br>
- **OPCODE.VPHADDUWD**<br>
- **OPCODE.VPHADDUWQ**<br>
- **OPCODE.VPHADDWD**<br>
- **OPCODE.VPHADDWQ**<br>
- **OPCODE.VPHADDW**<br>
- **OPCODE.VPHMINPOSUW**<br>
- **OPCODE.VPHSUBBW**<br>
- **OPCODE.VPHSUBDQ**<br>
- **OPCODE.VPHSUBD**<br>
- **OPCODE.VPHSUBSW**<br>
- **OPCODE.VPHSUBWD**<br>
- **OPCODE.VPHSUBW**<br>
- **OPCODE.VPINSRB**<br>
- **OPCODE.VPINSRD**<br>
- **OPCODE.VPINSRQ**<br>
- **OPCODE.VPINSRW**<br>
- **OPCODE.VPLZCNTD**<br>
- **OPCODE.VPLZCNTQ**<br>
- **OPCODE.VPMACSDD**<br>
- **OPCODE.VPMACSDQH**<br>
- **OPCODE.VPMACSDQL**<br>
- **OPCODE.VPMACSSDD**<br>
- **OPCODE.VPMACSSDQH**<br>
- **OPCODE.VPMACSSDQL**<br>
- **OPCODE.VPMACSSWD**<br>
- **OPCODE.VPMACSSWW**<br>
- **OPCODE.VPMACSWD**<br>
- **OPCODE.VPMACSWW**<br>
- **OPCODE.VPMADCSSWD**<br>
- **OPCODE.VPMADCSWD**<br>
- **OPCODE.VPMADDUBSW**<br>
- **OPCODE.VPMADDWD**<br>
- **OPCODE.VPMASKMOVD**<br>
- **OPCODE.VPMASKMOVQ**<br>
- **OPCODE.VPMAXSB**<br>
- **OPCODE.VPMAXSD**<br>
- **OPCODE.VPMAXSQ**<br>
- **OPCODE.VPMAXSW**<br>
- **OPCODE.VPMAXUB**<br>
- **OPCODE.VPMAXUD**<br>
- **OPCODE.VPMAXUQ**<br>
- **OPCODE.VPMAXUW**<br>
- **OPCODE.VPMINSB**<br>
- **OPCODE.VPMINSD**<br>
- **OPCODE.VPMINSQ**<br>
- **OPCODE.VPMINSW**<br>
- **OPCODE.VPMINUB**<br>
- **OPCODE.VPMINUD**<br>
- **OPCODE.VPMINUQ**<br>
- **OPCODE.VPMINUW**<br>
- **OPCODE.VPMOVDB**<br>
- **OPCODE.VPMOVDW**<br>
- **OPCODE.VPMOVMSKB**<br>
- **OPCODE.VPMOVQB**<br>
- **OPCODE.VPMOVQD**<br>
- **OPCODE.VPMOVQW**<br>
- **OPCODE.VPMOVSDB**<br>
- **OPCODE.VPMOVSDW**<br>
- **OPCODE.VPMOVSQB**<br>
- **OPCODE.VPMOVSQD**<br>
- **OPCODE.VPMOVSQW**<br>
- **OPCODE.VPMOVSXBD**<br>
- **OPCODE.VPMOVSXBQ**<br>
- **OPCODE.VPMOVSXBW**<br>
- **OPCODE.VPMOVSXDQ**<br>
- **OPCODE.VPMOVSXWD**<br>
- **OPCODE.VPMOVSXWQ**<br>
- **OPCODE.VPMOVUSDB**<br>
- **OPCODE.VPMOVUSDW**<br>
- **OPCODE.VPMOVUSQB**<br>
- **OPCODE.VPMOVUSQD**<br>
- **OPCODE.VPMOVUSQW**<br>
- **OPCODE.VPMOVZXBD**<br>
- **OPCODE.VPMOVZXBQ**<br>
- **OPCODE.VPMOVZXBW**<br>
- **OPCODE.VPMOVZXDQ**<br>
- **OPCODE.VPMOVZXWD**<br>
- **OPCODE.VPMOVZXWQ**<br>
- **OPCODE.VPMULDQ**<br>
- **OPCODE.VPMULHRSW**<br>
- **OPCODE.VPMULHUW**<br>
- **OPCODE.VPMULHW**<br>
- **OPCODE.VPMULLD**<br>
- **OPCODE.VPMULLW**<br>
- **OPCODE.VPMULUDQ**<br>
- **OPCODE.VPORD**<br>
- **OPCODE.VPORQ**<br>
- **OPCODE.VPOR**<br>
- **OPCODE.VPPERM**<br>
- **OPCODE.VPROTB**<br>
- **OPCODE.VPROTD**<br>
- **OPCODE.VPROTQ**<br>
- **OPCODE.VPROTW**<br>
- **OPCODE.VPSADBW**<br>
- **OPCODE.VPSCATTERDD**<br>
- **OPCODE.VPSCATTERDQ**<br>
- **OPCODE.VPSCATTERQD**<br>
- **OPCODE.VPSCATTERQQ**<br>
- **OPCODE.VPSHAB**<br>
- **OPCODE.VPSHAD**<br>
- **OPCODE.VPSHAQ**<br>
- **OPCODE.VPSHAW**<br>
- **OPCODE.VPSHLB**<br>
- **OPCODE.VPSHLD**<br>
- **OPCODE.VPSHLQ**<br>
- **OPCODE.VPSHLW**<br>
- **OPCODE.VPSHUFB**<br>
- **OPCODE.VPSHUFD**<br>
- **OPCODE.VPSHUFHW**<br>
- **OPCODE.VPSHUFLW**<br>
- **OPCODE.VPSIGNB**<br>
- **OPCODE.VPSIGND**<br>
- **OPCODE.VPSIGNW**<br>
- **OPCODE.VPSLLDQ**<br>
- **OPCODE.VPSLLD**<br>
- **OPCODE.VPSLLQ**<br>
- **OPCODE.VPSLLVD**<br>
- **OPCODE.VPSLLVQ**<br>
- **OPCODE.VPSLLW**<br>
- **OPCODE.VPSRAD**<br>
- **OPCODE.VPSRAQ**<br>
- **OPCODE.VPSRAVD**<br>
- **OPCODE.VPSRAVQ**<br>
- **OPCODE.VPSRAW**<br>
- **OPCODE.VPSRLDQ**<br>
- **OPCODE.VPSRLD**<br>
- **OPCODE.VPSRLQ**<br>
- **OPCODE.VPSRLVD**<br>
- **OPCODE.VPSRLVQ**<br>
- **OPCODE.VPSRLW**<br>
- **OPCODE.VPSUBB**<br>
- **OPCODE.VPSUBD**<br>
- **OPCODE.VPSUBQ**<br>
- **OPCODE.VPSUBSB**<br>
- **OPCODE.VPSUBSW**<br>
- **OPCODE.VPSUBUSB**<br>
- **OPCODE.VPSUBUSW**<br>
- **OPCODE.VPSUBW**<br>
- **OPCODE.VPTESTMD**<br>
- **OPCODE.VPTESTMQ**<br>
- **OPCODE.VPTESTNMD**<br>
- **OPCODE.VPTESTNMQ**<br>
- **OPCODE.VPTEST**<br>
- **OPCODE.VPUNPCKHBW**<br>
- **OPCODE.VPUNPCKHDQ**<br>
- **OPCODE.VPUNPCKHQDQ**<br>
- **OPCODE.VPUNPCKHWD**<br>
- **OPCODE.VPUNPCKLBW**<br>
- **OPCODE.VPUNPCKLDQ**<br>
- **OPCODE.VPUNPCKLQDQ**<br>
- **OPCODE.VPUNPCKLWD**<br>
- **OPCODE.VPXORD**<br>
- **OPCODE.VPXORQ**<br>
- **OPCODE.VPXOR**<br>
- **OPCODE.VRCP14PD**<br>
- **OPCODE.VRCP14PS**<br>
- **OPCODE.VRCP14SD**<br>
- **OPCODE.VRCP14SS**<br>
- **OPCODE.VRCP28PD**<br>
- **OPCODE.VRCP28PS**<br>
- **OPCODE.VRCP28SD**<br>
- **OPCODE.VRCP28SS**<br>
- **OPCODE.VRCPPS**<br>
- **OPCODE.VRCPSS**<br>
- **OPCODE.VRNDSCALEPD**<br>
- **OPCODE.VRNDSCALEPS**<br>
- **OPCODE.VRNDSCALESD**<br>
- **OPCODE.VRNDSCALESS**<br>
- **OPCODE.VROUNDPD**<br>
- **OPCODE.VROUNDPS**<br>
- **OPCODE.VROUNDSD**<br>
- **OPCODE.VROUNDSS**<br>
- **OPCODE.VRSQRT14PD**<br>
- **OPCODE.VRSQRT14PS**<br>
- **OPCODE.VRSQRT14SD**<br>
- **OPCODE.VRSQRT14SS**<br>
- **OPCODE.VRSQRT28PD**<br>
- **OPCODE.VRSQRT28PS**<br>
- **OPCODE.VRSQRT28SD**<br>
- **OPCODE.VRSQRT28SS**<br>
- **OPCODE.VRSQRTPS**<br>
- **OPCODE.VRSQRTSS**<br>
- **OPCODE.VSCATTERDPD**<br>
- **OPCODE.VSCATTERDPS**<br>
- **OPCODE.VSCATTERPF0DPD**<br>
- **OPCODE.VSCATTERPF0DPS**<br>
- **OPCODE.VSCATTERPF0QPD**<br>
- **OPCODE.VSCATTERPF0QPS**<br>
- **OPCODE.VSCATTERPF1DPD**<br>
- **OPCODE.VSCATTERPF1DPS**<br>
- **OPCODE.VSCATTERPF1QPD**<br>
- **OPCODE.VSCATTERPF1QPS**<br>
- **OPCODE.VSCATTERQPD**<br>
- **OPCODE.VSCATTERQPS**<br>
- **OPCODE.VSHUFPD**<br>
- **OPCODE.VSHUFPS**<br>
- **OPCODE.VSQRTPD**<br>
- **OPCODE.VSQRTPS**<br>
- **OPCODE.VSQRTSD**<br>
- **OPCODE.VSQRTSS**<br>
- **OPCODE.VSTMXCSR**<br>
- **OPCODE.VSUBPD**<br>
- **OPCODE.VSUBPS**<br>
- **OPCODE.VSUBSD**<br>
- **OPCODE.VSUBSS**<br>
- **OPCODE.VTESTPD**<br>
- **OPCODE.VTESTPS**<br>
- **OPCODE.VUNPCKHPD**<br>
- **OPCODE.VUNPCKHPS**<br>
- **OPCODE.VUNPCKLPD**<br>
- **OPCODE.VUNPCKLPS**<br>
- **OPCODE.VZEROALL**<br>
- **OPCODE.VZEROUPPER**<br>
- **OPCODE.WAIT**<br>
- **OPCODE.WBINVD**<br>
- **OPCODE.WRFSBASE**<br>
- **OPCODE.WRGSBASE**<br>
- **OPCODE.WRMSR**<br>
- **OPCODE.XABORT**<br>
- **OPCODE.XACQUIRE**<br>
- **OPCODE.XBEGIN**<br>
- **OPCODE.XCHG**<br>
- **OPCODE.FXCH**<br>
- **OPCODE.XCRYPTCBC**<br>
- **OPCODE.XCRYPTCFB**<br>
- **OPCODE.XCRYPTCTR**<br>
- **OPCODE.XCRYPTECB**<br>
- **OPCODE.XCRYPTOFB**<br>
- **OPCODE.XEND**<br>
- **OPCODE.XGETBV**<br>
- **OPCODE.XLATB**<br>
- **OPCODE.XRELEASE**<br>
- **OPCODE.XRSTOR**<br>
- **OPCODE.XRSTOR64**<br>
- **OPCODE.XSAVE**<br>
- **OPCODE.XSAVE64**<br>
- **OPCODE.XSAVEOPT**<br>
- **OPCODE.XSAVEOPT64**<br>
- **OPCODE.XSETBV**<br>
- **OPCODE.XSHA1**<br>
- **OPCODE.XSHA256**<br>
- **OPCODE.XSTORE**<br>
- **OPCODE.XTEST**<br>

*/


namespace triton {
  namespace bindings {
    namespace python {

      void initX86OpcodesNamespace(PyObject* opcodesDict) {
        PyDict_Clear(opcodesDict);

        PyDict_SetItemStringSteal(opcodesDict, "INVALID", PyLong_FromUint32(triton::arch::x86::ID_INST_INVALID));
        PyDict_SetItemStringSteal(opcodesDict, "AAA", PyLong_FromUint32(triton::arch::x86::ID_INS_AAA));
        PyDict_SetItemStringSteal(opcodesDict, "AAD", PyLong_FromUint32(triton::arch::x86::ID_INS_AAD));
        PyDict_SetItemStringSteal(opcodesDict, "AAM", PyLong_FromUint32(triton::arch::x86::ID_INS_AAM));
        PyDict_SetItemStringSteal(opcodesDict, "AAS", PyLong_FromUint32(triton::arch::x86::ID_INS_AAS));
        PyDict_SetItemStringSteal(opcodesDict, "FABS", PyLong_FromUint32(triton::arch::x86::ID_INS_FABS));
        PyDict_SetItemStringSteal(opcodesDict, "ADC", PyLong_FromUint32(triton::arch::x86::ID_INS_ADC));
        PyDict_SetItemStringSteal(opcodesDict, "ADCX", PyLong_FromUint32(triton::arch::x86::ID_INS_ADCX));
        PyDict_SetItemStringSteal(opcodesDict, "ADD", PyLong_FromUint32(triton::arch::x86::ID_INS_ADD));
        PyDict_SetItemStringSteal(opcodesDict, "ADDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_ADDPD));
        PyDict_SetItemStringSteal(opcodesDict, "ADDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_ADDPS));
        PyDict_SetItemStringSteal(opcodesDict, "ADDSD", PyLong_FromUint32(triton::arch::x86::ID_INS_ADDSD));
        PyDict_SetItemStringSteal(opcodesDict, "ADDSS", PyLong_FromUint32(triton::arch::x86::ID_INS_ADDSS));
        PyDict_SetItemStringSteal(opcodesDict, "ADDSUBPD", PyLong_FromUint32(triton::arch::x86::ID_INS_ADDSUBPD));
        PyDict_SetItemStringSteal(opcodesDict, "ADDSUBPS", PyLong_FromUint32(triton::arch::x86::ID_INS_ADDSUBPS));
        PyDict_SetItemStringSteal(opcodesDict, "FADD", PyLong_FromUint32(triton::arch::x86::ID_INS_FADD));
        PyDict_SetItemStringSteal(opcodesDict, "FIADD", PyLong_FromUint32(triton::arch::x86::ID_INS_FIADD));
        PyDict_SetItemStringSteal(opcodesDict, "FADDP", PyLong_FromUint32(triton::arch::x86::ID_INS_FADDP));
        PyDict_SetItemStringSteal(opcodesDict, "ADOX", PyLong_FromUint32(triton::arch::x86::ID_INS_ADOX));
        PyDict_SetItemStringSteal(opcodesDict, "AESDECLAST", PyLong_FromUint32(triton::arch::x86::ID_INS_AESDECLAST));
        PyDict_SetItemStringSteal(opcodesDict, "AESDEC", PyLong_FromUint32(triton::arch::x86::ID_INS_AESDEC));
        PyDict_SetItemStringSteal(opcodesDict, "AESENCLAST", PyLong_FromUint32(triton::arch::x86::ID_INS_AESENCLAST));
        PyDict_SetItemStringSteal(opcodesDict, "AESENC", PyLong_FromUint32(triton::arch::x86::ID_INS_AESENC));
        PyDict_SetItemStringSteal(opcodesDict, "AESIMC", PyLong_FromUint32(triton::arch::x86::ID_INS_AESIMC));
        PyDict_SetItemStringSteal(opcodesDict, "AESKEYGENASSIST", PyLong_FromUint32(triton::arch::x86::ID_INS_AESKEYGENASSIST));
        PyDict_SetItemStringSteal(opcodesDict, "AND", PyLong_FromUint32(triton::arch::x86::ID_INS_AND));
        PyDict_SetItemStringSteal(opcodesDict, "ANDN", PyLong_FromUint32(triton::arch::x86::ID_INS_ANDN));
        PyDict_SetItemStringSteal(opcodesDict, "ANDNPD", PyLong_FromUint32(triton::arch::x86::ID_INS_ANDNPD));
        PyDict_SetItemStringSteal(opcodesDict, "ANDNPS", PyLong_FromUint32(triton::arch::x86::ID_INS_ANDNPS));
        PyDict_SetItemStringSteal(opcodesDict, "ANDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_ANDPD));
        PyDict_SetItemStringSteal(opcodesDict, "ANDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_ANDPS));
        PyDict_SetItemStringSteal(opcodesDict, "ARPL", PyLong_FromUint32(triton::arch::x86::ID_INS_ARPL));
        PyDict_SetItemStringSteal(opcodesDict, "BEXTR", PyLong_FromUint32(triton::arch::x86::ID_INS_BEXTR));
        PyDict_SetItemStringSteal(opcodesDict, "BLCFILL", PyLong_FromUint32(triton::arch::x86::ID_INS_BLCFILL));
        PyDict_SetItemStringSteal(opcodesDict, "BLCI", PyLong_FromUint32(triton::arch::x86::ID_INS_BLCI));
        PyDict_SetItemStringSteal(opcodesDict, "BLCIC", PyLong_FromUint32(triton::arch::x86::ID_INS_BLCIC));
        PyDict_SetItemStringSteal(opcodesDict, "BLCMSK", PyLong_FromUint32(triton::arch::x86::ID_INS_BLCMSK));
        PyDict_SetItemStringSteal(opcodesDict, "BLCS", PyLong_FromUint32(triton::arch::x86::ID_INS_BLCS));
        PyDict_SetItemStringSteal(opcodesDict, "BLENDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_BLENDPD));
        PyDict_SetItemStringSteal(opcodesDict, "BLENDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_BLENDPS));
        PyDict_SetItemStringSteal(opcodesDict, "BLENDVPD", PyLong_FromUint32(triton::arch::x86::ID_INS_BLENDVPD));
        PyDict_SetItemStringSteal(opcodesDict, "BLENDVPS", PyLong_FromUint32(triton::arch::x86::ID_INS_BLENDVPS));
        PyDict_SetItemStringSteal(opcodesDict, "BLSFILL", PyLong_FromUint32(triton::arch::x86::ID_INS_BLSFILL));
        PyDict_SetItemStringSteal(opcodesDict, "BLSI", PyLong_FromUint32(triton::arch::x86::ID_INS_BLSI));
        PyDict_SetItemStringSteal(opcodesDict, "BLSIC", PyLong_FromUint32(triton::arch::x86::ID_INS_BLSIC));
        PyDict_SetItemStringSteal(opcodesDict, "BLSMSK", PyLong_FromUint32(triton::arch::x86::ID_INS_BLSMSK));
        PyDict_SetItemStringSteal(opcodesDict, "BLSR", PyLong_FromUint32(triton::arch::x86::ID_INS_BLSR));
        PyDict_SetItemStringSteal(opcodesDict, "BOUND", PyLong_FromUint32(triton::arch::x86::ID_INS_BOUND));
        PyDict_SetItemStringSteal(opcodesDict, "BSF", PyLong_FromUint32(triton::arch::x86::ID_INS_BSF));
        PyDict_SetItemStringSteal(opcodesDict, "BSR", PyLong_FromUint32(triton::arch::x86::ID_INS_BSR));
        PyDict_SetItemStringSteal(opcodesDict, "BSWAP", PyLong_FromUint32(triton::arch::x86::ID_INS_BSWAP));
        PyDict_SetItemStringSteal(opcodesDict, "BT", PyLong_FromUint32(triton::arch::x86::ID_INS_BT));
        PyDict_SetItemStringSteal(opcodesDict, "BTC", PyLong_FromUint32(triton::arch::x86::ID_INS_BTC));
        PyDict_SetItemStringSteal(opcodesDict, "BTR", PyLong_FromUint32(triton::arch::x86::ID_INS_BTR));
        PyDict_SetItemStringSteal(opcodesDict, "BTS", PyLong_FromUint32(triton::arch::x86::ID_INS_BTS));
        PyDict_SetItemStringSteal(opcodesDict, "BZHI", PyLong_FromUint32(triton::arch::x86::ID_INS_BZHI));
        PyDict_SetItemStringSteal(opcodesDict, "CALL", PyLong_FromUint32(triton::arch::x86::ID_INS_CALL));
        PyDict_SetItemStringSteal(opcodesDict, "CBW", PyLong_FromUint32(triton::arch::x86::ID_INS_CBW));
        PyDict_SetItemStringSteal(opcodesDict, "CDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_CDQ));
        PyDict_SetItemStringSteal(opcodesDict, "CDQE", PyLong_FromUint32(triton::arch::x86::ID_INS_CDQE));
        PyDict_SetItemStringSteal(opcodesDict, "FCHS", PyLong_FromUint32(triton::arch::x86::ID_INS_FCHS));
        PyDict_SetItemStringSteal(opcodesDict, "CLAC", PyLong_FromUint32(triton::arch::x86::ID_INS_CLAC));
        PyDict_SetItemStringSteal(opcodesDict, "CLC", PyLong_FromUint32(triton::arch::x86::ID_INS_CLC));
        PyDict_SetItemStringSteal(opcodesDict, "CLD", PyLong_FromUint32(triton::arch::x86::ID_INS_CLD));
        PyDict_SetItemStringSteal(opcodesDict, "CLFLUSH", PyLong_FromUint32(triton::arch::x86::ID_INS_CLFLUSH));
        PyDict_SetItemStringSteal(opcodesDict, "CLGI", PyLong_FromUint32(triton::arch::x86::ID_INS_CLGI));
        PyDict_SetItemStringSteal(opcodesDict, "CLI", PyLong_FromUint32(triton::arch::x86::ID_INS_CLI));
        PyDict_SetItemStringSteal(opcodesDict, "CLTS", PyLong_FromUint32(triton::arch::x86::ID_INS_CLTS));
        PyDict_SetItemStringSteal(opcodesDict, "CMC", PyLong_FromUint32(triton::arch::x86::ID_INS_CMC));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVA", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVA));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVAE", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVAE));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVB", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVB));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVBE", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVBE));
        PyDict_SetItemStringSteal(opcodesDict, "FCMOVBE", PyLong_FromUint32(triton::arch::x86::ID_INS_FCMOVBE));
        PyDict_SetItemStringSteal(opcodesDict, "FCMOVB", PyLong_FromUint32(triton::arch::x86::ID_INS_FCMOVB));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVE", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVE));
        PyDict_SetItemStringSteal(opcodesDict, "FCMOVE", PyLong_FromUint32(triton::arch::x86::ID_INS_FCMOVE));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVG", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVG));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVGE", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVGE));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVL", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVL));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVLE", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVLE));
        PyDict_SetItemStringSteal(opcodesDict, "FCMOVNBE", PyLong_FromUint32(triton::arch::x86::ID_INS_FCMOVNBE));
        PyDict_SetItemStringSteal(opcodesDict, "FCMOVNB", PyLong_FromUint32(triton::arch::x86::ID_INS_FCMOVNB));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVNE", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVNE));
        PyDict_SetItemStringSteal(opcodesDict, "FCMOVNE", PyLong_FromUint32(triton::arch::x86::ID_INS_FCMOVNE));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVNO", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVNO));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVNP", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVNP));
        PyDict_SetItemStringSteal(opcodesDict, "FCMOVNU", PyLong_FromUint32(triton::arch::x86::ID_INS_FCMOVNU));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVNS", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVNS));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVO", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVO));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVP", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVP));
        PyDict_SetItemStringSteal(opcodesDict, "FCMOVU", PyLong_FromUint32(triton::arch::x86::ID_INS_FCMOVU));
        PyDict_SetItemStringSteal(opcodesDict, "CMOVS", PyLong_FromUint32(triton::arch::x86::ID_INS_CMOVS));
        PyDict_SetItemStringSteal(opcodesDict, "CMP", PyLong_FromUint32(triton::arch::x86::ID_INS_CMP));
        PyDict_SetItemStringSteal(opcodesDict, "CMPPD", PyLong_FromUint32(triton::arch::x86::ID_INS_CMPPD));
        PyDict_SetItemStringSteal(opcodesDict, "CMPPS", PyLong_FromUint32(triton::arch::x86::ID_INS_CMPPS));
        PyDict_SetItemStringSteal(opcodesDict, "CMPSB", PyLong_FromUint32(triton::arch::x86::ID_INS_CMPSB));
        PyDict_SetItemStringSteal(opcodesDict, "CMPSD", PyLong_FromUint32(triton::arch::x86::ID_INS_CMPSD));
        PyDict_SetItemStringSteal(opcodesDict, "CMPSQ", PyLong_FromUint32(triton::arch::x86::ID_INS_CMPSQ));
        PyDict_SetItemStringSteal(opcodesDict, "CMPSS", PyLong_FromUint32(triton::arch::x86::ID_INS_CMPSS));
        PyDict_SetItemStringSteal(opcodesDict, "CMPSW", PyLong_FromUint32(triton::arch::x86::ID_INS_CMPSW));
        PyDict_SetItemStringSteal(opcodesDict, "CMPXCHG16B", PyLong_FromUint32(triton::arch::x86::ID_INS_CMPXCHG16B));
        PyDict_SetItemStringSteal(opcodesDict, "CMPXCHG", PyLong_FromUint32(triton::arch::x86::ID_INS_CMPXCHG));
        PyDict_SetItemStringSteal(opcodesDict, "CMPXCHG8B", PyLong_FromUint32(triton::arch::x86::ID_INS_CMPXCHG8B));
        PyDict_SetItemStringSteal(opcodesDict, "COMISD", PyLong_FromUint32(triton::arch::x86::ID_INS_COMISD));
        PyDict_SetItemStringSteal(opcodesDict, "COMISS", PyLong_FromUint32(triton::arch::x86::ID_INS_COMISS));
        PyDict_SetItemStringSteal(opcodesDict, "FCOMP", PyLong_FromUint32(triton::arch::x86::ID_INS_FCOMP));
        PyDict_SetItemStringSteal(opcodesDict, "FCOMPI", PyLong_FromUint32(triton::arch::x86::ID_INS_FCOMPI));
        PyDict_SetItemStringSteal(opcodesDict, "FCOMI", PyLong_FromUint32(triton::arch::x86::ID_INS_FCOMI));
        PyDict_SetItemStringSteal(opcodesDict, "FCOM", PyLong_FromUint32(triton::arch::x86::ID_INS_FCOM));
        PyDict_SetItemStringSteal(opcodesDict, "FCOS", PyLong_FromUint32(triton::arch::x86::ID_INS_FCOS));
        PyDict_SetItemStringSteal(opcodesDict, "CPUID", PyLong_FromUint32(triton::arch::x86::ID_INS_CPUID));
        PyDict_SetItemStringSteal(opcodesDict, "CQO", PyLong_FromUint32(triton::arch::x86::ID_INS_CQO));
        PyDict_SetItemStringSteal(opcodesDict, "CRC32", PyLong_FromUint32(triton::arch::x86::ID_INS_CRC32));
        PyDict_SetItemStringSteal(opcodesDict, "CVTDQ2PD", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTDQ2PD));
        PyDict_SetItemStringSteal(opcodesDict, "CVTDQ2PS", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTDQ2PS));
        PyDict_SetItemStringSteal(opcodesDict, "CVTPD2DQ", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTPD2DQ));
        PyDict_SetItemStringSteal(opcodesDict, "CVTPD2PS", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTPD2PS));
        PyDict_SetItemStringSteal(opcodesDict, "CVTPS2DQ", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTPS2DQ));
        PyDict_SetItemStringSteal(opcodesDict, "CVTPS2PD", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTPS2PD));
        PyDict_SetItemStringSteal(opcodesDict, "CVTSD2SI", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTSD2SI));
        PyDict_SetItemStringSteal(opcodesDict, "CVTSD2SS", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTSD2SS));
        PyDict_SetItemStringSteal(opcodesDict, "CVTSI2SD", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTSI2SD));
        PyDict_SetItemStringSteal(opcodesDict, "CVTSI2SS", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTSI2SS));
        PyDict_SetItemStringSteal(opcodesDict, "CVTSS2SD", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTSS2SD));
        PyDict_SetItemStringSteal(opcodesDict, "CVTSS2SI", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTSS2SI));
        PyDict_SetItemStringSteal(opcodesDict, "CVTTPD2DQ", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTTPD2DQ));
        PyDict_SetItemStringSteal(opcodesDict, "CVTTPS2DQ", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTTPS2DQ));
        PyDict_SetItemStringSteal(opcodesDict, "CVTTSD2SI", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTTSD2SI));
        PyDict_SetItemStringSteal(opcodesDict, "CVTTSS2SI", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTTSS2SI));
        PyDict_SetItemStringSteal(opcodesDict, "CWD", PyLong_FromUint32(triton::arch::x86::ID_INS_CWD));
        PyDict_SetItemStringSteal(opcodesDict, "CWDE", PyLong_FromUint32(triton::arch::x86::ID_INS_CWDE));
        PyDict_SetItemStringSteal(opcodesDict, "DAA", PyLong_FromUint32(triton::arch::x86::ID_INS_DAA));
        PyDict_SetItemStringSteal(opcodesDict, "DAS", PyLong_FromUint32(triton::arch::x86::ID_INS_DAS));
        PyDict_SetItemStringSteal(opcodesDict, "DATA16", PyLong_FromUint32(triton::arch::x86::ID_INS_DATA16));
        PyDict_SetItemStringSteal(opcodesDict, "DEC", PyLong_FromUint32(triton::arch::x86::ID_INS_DEC));
        PyDict_SetItemStringSteal(opcodesDict, "DIV", PyLong_FromUint32(triton::arch::x86::ID_INS_DIV));
        PyDict_SetItemStringSteal(opcodesDict, "DIVPD", PyLong_FromUint32(triton::arch::x86::ID_INS_DIVPD));
        PyDict_SetItemStringSteal(opcodesDict, "DIVPS", PyLong_FromUint32(triton::arch::x86::ID_INS_DIVPS));
        PyDict_SetItemStringSteal(opcodesDict, "FDIVR", PyLong_FromUint32(triton::arch::x86::ID_INS_FDIVR));
        PyDict_SetItemStringSteal(opcodesDict, "FIDIVR", PyLong_FromUint32(triton::arch::x86::ID_INS_FIDIVR));
        PyDict_SetItemStringSteal(opcodesDict, "FDIVRP", PyLong_FromUint32(triton::arch::x86::ID_INS_FDIVRP));
        PyDict_SetItemStringSteal(opcodesDict, "DIVSD", PyLong_FromUint32(triton::arch::x86::ID_INS_DIVSD));
        PyDict_SetItemStringSteal(opcodesDict, "DIVSS", PyLong_FromUint32(triton::arch::x86::ID_INS_DIVSS));
        PyDict_SetItemStringSteal(opcodesDict, "FDIV", PyLong_FromUint32(triton::arch::x86::ID_INS_FDIV));
        PyDict_SetItemStringSteal(opcodesDict, "FIDIV", PyLong_FromUint32(triton::arch::x86::ID_INS_FIDIV));
        PyDict_SetItemStringSteal(opcodesDict, "FDIVP", PyLong_FromUint32(triton::arch::x86::ID_INS_FDIVP));
        PyDict_SetItemStringSteal(opcodesDict, "DPPD", PyLong_FromUint32(triton::arch::x86::ID_INS_DPPD));
        PyDict_SetItemStringSteal(opcodesDict, "DPPS", PyLong_FromUint32(triton::arch::x86::ID_INS_DPPS));
        PyDict_SetItemStringSteal(opcodesDict, "RET", PyLong_FromUint32(triton::arch::x86::ID_INS_RET));
        PyDict_SetItemStringSteal(opcodesDict, "ENCLS", PyLong_FromUint32(triton::arch::x86::ID_INS_ENCLS));
        PyDict_SetItemStringSteal(opcodesDict, "ENCLU", PyLong_FromUint32(triton::arch::x86::ID_INS_ENCLU));
        PyDict_SetItemStringSteal(opcodesDict, "ENTER", PyLong_FromUint32(triton::arch::x86::ID_INS_ENTER));
        PyDict_SetItemStringSteal(opcodesDict, "EXTRACTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_EXTRACTPS));
        PyDict_SetItemStringSteal(opcodesDict, "EXTRQ", PyLong_FromUint32(triton::arch::x86::ID_INS_EXTRQ));
        PyDict_SetItemStringSteal(opcodesDict, "F2XM1", PyLong_FromUint32(triton::arch::x86::ID_INS_F2XM1));
        PyDict_SetItemStringSteal(opcodesDict, "LCALL", PyLong_FromUint32(triton::arch::x86::ID_INS_LCALL));
        PyDict_SetItemStringSteal(opcodesDict, "LJMP", PyLong_FromUint32(triton::arch::x86::ID_INS_LJMP));
        PyDict_SetItemStringSteal(opcodesDict, "FBLD", PyLong_FromUint32(triton::arch::x86::ID_INS_FBLD));
        PyDict_SetItemStringSteal(opcodesDict, "FBSTP", PyLong_FromUint32(triton::arch::x86::ID_INS_FBSTP));
        PyDict_SetItemStringSteal(opcodesDict, "FCOMPP", PyLong_FromUint32(triton::arch::x86::ID_INS_FCOMPP));
        PyDict_SetItemStringSteal(opcodesDict, "FDECSTP", PyLong_FromUint32(triton::arch::x86::ID_INS_FDECSTP));
        PyDict_SetItemStringSteal(opcodesDict, "FEMMS", PyLong_FromUint32(triton::arch::x86::ID_INS_FEMMS));
        PyDict_SetItemStringSteal(opcodesDict, "FFREE", PyLong_FromUint32(triton::arch::x86::ID_INS_FFREE));
        PyDict_SetItemStringSteal(opcodesDict, "FICOM", PyLong_FromUint32(triton::arch::x86::ID_INS_FICOM));
        PyDict_SetItemStringSteal(opcodesDict, "FICOMP", PyLong_FromUint32(triton::arch::x86::ID_INS_FICOMP));
        PyDict_SetItemStringSteal(opcodesDict, "FINCSTP", PyLong_FromUint32(triton::arch::x86::ID_INS_FINCSTP));
        PyDict_SetItemStringSteal(opcodesDict, "FLDCW", PyLong_FromUint32(triton::arch::x86::ID_INS_FLDCW));
        PyDict_SetItemStringSteal(opcodesDict, "FLDENV", PyLong_FromUint32(triton::arch::x86::ID_INS_FLDENV));
        PyDict_SetItemStringSteal(opcodesDict, "FLDL2E", PyLong_FromUint32(triton::arch::x86::ID_INS_FLDL2E));
        PyDict_SetItemStringSteal(opcodesDict, "FLDL2T", PyLong_FromUint32(triton::arch::x86::ID_INS_FLDL2T));
        PyDict_SetItemStringSteal(opcodesDict, "FLDLG2", PyLong_FromUint32(triton::arch::x86::ID_INS_FLDLG2));
        PyDict_SetItemStringSteal(opcodesDict, "FLDLN2", PyLong_FromUint32(triton::arch::x86::ID_INS_FLDLN2));
        PyDict_SetItemStringSteal(opcodesDict, "FLDPI", PyLong_FromUint32(triton::arch::x86::ID_INS_FLDPI));
        PyDict_SetItemStringSteal(opcodesDict, "FNCLEX", PyLong_FromUint32(triton::arch::x86::ID_INS_FNCLEX));
        PyDict_SetItemStringSteal(opcodesDict, "FNINIT", PyLong_FromUint32(triton::arch::x86::ID_INS_FNINIT));
        PyDict_SetItemStringSteal(opcodesDict, "FNOP", PyLong_FromUint32(triton::arch::x86::ID_INS_FNOP));
        PyDict_SetItemStringSteal(opcodesDict, "FNSTCW", PyLong_FromUint32(triton::arch::x86::ID_INS_FNSTCW));
        PyDict_SetItemStringSteal(opcodesDict, "FNSTSW", PyLong_FromUint32(triton::arch::x86::ID_INS_FNSTSW));
        PyDict_SetItemStringSteal(opcodesDict, "FPATAN", PyLong_FromUint32(triton::arch::x86::ID_INS_FPATAN));
        PyDict_SetItemStringSteal(opcodesDict, "FPREM", PyLong_FromUint32(triton::arch::x86::ID_INS_FPREM));
        PyDict_SetItemStringSteal(opcodesDict, "FPREM1", PyLong_FromUint32(triton::arch::x86::ID_INS_FPREM1));
        PyDict_SetItemStringSteal(opcodesDict, "FPTAN", PyLong_FromUint32(triton::arch::x86::ID_INS_FPTAN));
        PyDict_SetItemStringSteal(opcodesDict, "FRNDINT", PyLong_FromUint32(triton::arch::x86::ID_INS_FRNDINT));
        PyDict_SetItemStringSteal(opcodesDict, "FRSTOR", PyLong_FromUint32(triton::arch::x86::ID_INS_FRSTOR));
        PyDict_SetItemStringSteal(opcodesDict, "FNSAVE", PyLong_FromUint32(triton::arch::x86::ID_INS_FNSAVE));
        PyDict_SetItemStringSteal(opcodesDict, "FSCALE", PyLong_FromUint32(triton::arch::x86::ID_INS_FSCALE));
        PyDict_SetItemStringSteal(opcodesDict, "FSETPM", PyLong_FromUint32(triton::arch::x86::ID_INS_FSETPM));
        PyDict_SetItemStringSteal(opcodesDict, "FSINCOS", PyLong_FromUint32(triton::arch::x86::ID_INS_FSINCOS));
        PyDict_SetItemStringSteal(opcodesDict, "FNSTENV", PyLong_FromUint32(triton::arch::x86::ID_INS_FNSTENV));
        PyDict_SetItemStringSteal(opcodesDict, "FXAM", PyLong_FromUint32(triton::arch::x86::ID_INS_FXAM));
        PyDict_SetItemStringSteal(opcodesDict, "FXRSTOR", PyLong_FromUint32(triton::arch::x86::ID_INS_FXRSTOR));
        PyDict_SetItemStringSteal(opcodesDict, "FXRSTOR64", PyLong_FromUint32(triton::arch::x86::ID_INS_FXRSTOR64));
        PyDict_SetItemStringSteal(opcodesDict, "FXSAVE", PyLong_FromUint32(triton::arch::x86::ID_INS_FXSAVE));
        PyDict_SetItemStringSteal(opcodesDict, "FXSAVE64", PyLong_FromUint32(triton::arch::x86::ID_INS_FXSAVE64));
        PyDict_SetItemStringSteal(opcodesDict, "FXTRACT", PyLong_FromUint32(triton::arch::x86::ID_INS_FXTRACT));
        PyDict_SetItemStringSteal(opcodesDict, "FYL2X", PyLong_FromUint32(triton::arch::x86::ID_INS_FYL2X));
        PyDict_SetItemStringSteal(opcodesDict, "FYL2XP1", PyLong_FromUint32(triton::arch::x86::ID_INS_FYL2XP1));
        PyDict_SetItemStringSteal(opcodesDict, "MOVAPD", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVAPD));
        PyDict_SetItemStringSteal(opcodesDict, "MOVAPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVAPS));
        PyDict_SetItemStringSteal(opcodesDict, "ORPD", PyLong_FromUint32(triton::arch::x86::ID_INS_ORPD));
        PyDict_SetItemStringSteal(opcodesDict, "ORPS", PyLong_FromUint32(triton::arch::x86::ID_INS_ORPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVAPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVAPD));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVAPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVAPS));
        PyDict_SetItemStringSteal(opcodesDict, "XORPD", PyLong_FromUint32(triton::arch::x86::ID_INS_XORPD));
        PyDict_SetItemStringSteal(opcodesDict, "XORPS", PyLong_FromUint32(triton::arch::x86::ID_INS_XORPS));
        PyDict_SetItemStringSteal(opcodesDict, "GETSEC", PyLong_FromUint32(triton::arch::x86::ID_INS_GETSEC));
        PyDict_SetItemStringSteal(opcodesDict, "HADDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_HADDPD));
        PyDict_SetItemStringSteal(opcodesDict, "HADDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_HADDPS));
        PyDict_SetItemStringSteal(opcodesDict, "HLT", PyLong_FromUint32(triton::arch::x86::ID_INS_HLT));
        PyDict_SetItemStringSteal(opcodesDict, "HSUBPD", PyLong_FromUint32(triton::arch::x86::ID_INS_HSUBPD));
        PyDict_SetItemStringSteal(opcodesDict, "HSUBPS", PyLong_FromUint32(triton::arch::x86::ID_INS_HSUBPS));
        PyDict_SetItemStringSteal(opcodesDict, "IDIV", PyLong_FromUint32(triton::arch::x86::ID_INS_IDIV));
        PyDict_SetItemStringSteal(opcodesDict, "FILD", PyLong_FromUint32(triton::arch::x86::ID_INS_FILD));
        PyDict_SetItemStringSteal(opcodesDict, "IMUL", PyLong_FromUint32(triton::arch::x86::ID_INS_IMUL));
        PyDict_SetItemStringSteal(opcodesDict, "IN", PyLong_FromUint32(triton::arch::x86::ID_INS_IN));
        PyDict_SetItemStringSteal(opcodesDict, "INC", PyLong_FromUint32(triton::arch::x86::ID_INS_INC));
        PyDict_SetItemStringSteal(opcodesDict, "INSB", PyLong_FromUint32(triton::arch::x86::ID_INS_INSB));
        PyDict_SetItemStringSteal(opcodesDict, "INSERTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_INSERTPS));
        PyDict_SetItemStringSteal(opcodesDict, "INSERTQ", PyLong_FromUint32(triton::arch::x86::ID_INS_INSERTQ));
        PyDict_SetItemStringSteal(opcodesDict, "INSD", PyLong_FromUint32(triton::arch::x86::ID_INS_INSD));
        PyDict_SetItemStringSteal(opcodesDict, "INSW", PyLong_FromUint32(triton::arch::x86::ID_INS_INSW));
        PyDict_SetItemStringSteal(opcodesDict, "INT", PyLong_FromUint32(triton::arch::x86::ID_INS_INT));
        PyDict_SetItemStringSteal(opcodesDict, "INT1", PyLong_FromUint32(triton::arch::x86::ID_INS_INT1));
        PyDict_SetItemStringSteal(opcodesDict, "INT3", PyLong_FromUint32(triton::arch::x86::ID_INS_INT3));
        PyDict_SetItemStringSteal(opcodesDict, "INTO", PyLong_FromUint32(triton::arch::x86::ID_INS_INTO));
        PyDict_SetItemStringSteal(opcodesDict, "INVD", PyLong_FromUint32(triton::arch::x86::ID_INS_INVD));
        PyDict_SetItemStringSteal(opcodesDict, "INVEPT", PyLong_FromUint32(triton::arch::x86::ID_INS_INVEPT));
        PyDict_SetItemStringSteal(opcodesDict, "INVLPG", PyLong_FromUint32(triton::arch::x86::ID_INS_INVLPG));
        PyDict_SetItemStringSteal(opcodesDict, "INVLPGA", PyLong_FromUint32(triton::arch::x86::ID_INS_INVLPGA));
        PyDict_SetItemStringSteal(opcodesDict, "INVPCID", PyLong_FromUint32(triton::arch::x86::ID_INS_INVPCID));
        PyDict_SetItemStringSteal(opcodesDict, "INVVPID", PyLong_FromUint32(triton::arch::x86::ID_INS_INVVPID));
        PyDict_SetItemStringSteal(opcodesDict, "IRET", PyLong_FromUint32(triton::arch::x86::ID_INS_IRET));
        PyDict_SetItemStringSteal(opcodesDict, "IRETD", PyLong_FromUint32(triton::arch::x86::ID_INS_IRETD));
        PyDict_SetItemStringSteal(opcodesDict, "IRETQ", PyLong_FromUint32(triton::arch::x86::ID_INS_IRETQ));
        PyDict_SetItemStringSteal(opcodesDict, "FISTTP", PyLong_FromUint32(triton::arch::x86::ID_INS_FISTTP));
        PyDict_SetItemStringSteal(opcodesDict, "FIST", PyLong_FromUint32(triton::arch::x86::ID_INS_FIST));
        PyDict_SetItemStringSteal(opcodesDict, "FISTP", PyLong_FromUint32(triton::arch::x86::ID_INS_FISTP));
        PyDict_SetItemStringSteal(opcodesDict, "UCOMISD", PyLong_FromUint32(triton::arch::x86::ID_INS_UCOMISD));
        PyDict_SetItemStringSteal(opcodesDict, "UCOMISS", PyLong_FromUint32(triton::arch::x86::ID_INS_UCOMISS));
        PyDict_SetItemStringSteal(opcodesDict, "VCMP", PyLong_FromUint32(triton::arch::x86::ID_INS_VCMP));
        PyDict_SetItemStringSteal(opcodesDict, "VCOMISD", PyLong_FromUint32(triton::arch::x86::ID_INS_VCOMISD));
        PyDict_SetItemStringSteal(opcodesDict, "VCOMISS", PyLong_FromUint32(triton::arch::x86::ID_INS_VCOMISS));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTSD2SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTSD2SS));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTSI2SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTSI2SD));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTSI2SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTSI2SS));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTSS2SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTSS2SD));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTTSD2SI", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTTSD2SI));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTTSD2USI", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTTSD2USI));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTTSS2SI", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTTSS2SI));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTTSS2USI", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTTSS2USI));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTUSI2SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTUSI2SD));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTUSI2SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTUSI2SS));
        PyDict_SetItemStringSteal(opcodesDict, "VUCOMISD", PyLong_FromUint32(triton::arch::x86::ID_INS_VUCOMISD));
        PyDict_SetItemStringSteal(opcodesDict, "VUCOMISS", PyLong_FromUint32(triton::arch::x86::ID_INS_VUCOMISS));
        PyDict_SetItemStringSteal(opcodesDict, "JAE", PyLong_FromUint32(triton::arch::x86::ID_INS_JAE));
        PyDict_SetItemStringSteal(opcodesDict, "JA", PyLong_FromUint32(triton::arch::x86::ID_INS_JA));
        PyDict_SetItemStringSteal(opcodesDict, "JBE", PyLong_FromUint32(triton::arch::x86::ID_INS_JBE));
        PyDict_SetItemStringSteal(opcodesDict, "JB", PyLong_FromUint32(triton::arch::x86::ID_INS_JB));
        PyDict_SetItemStringSteal(opcodesDict, "JCXZ", PyLong_FromUint32(triton::arch::x86::ID_INS_JCXZ));
        PyDict_SetItemStringSteal(opcodesDict, "JECXZ", PyLong_FromUint32(triton::arch::x86::ID_INS_JECXZ));
        PyDict_SetItemStringSteal(opcodesDict, "JE", PyLong_FromUint32(triton::arch::x86::ID_INS_JE));
        PyDict_SetItemStringSteal(opcodesDict, "JGE", PyLong_FromUint32(triton::arch::x86::ID_INS_JGE));
        PyDict_SetItemStringSteal(opcodesDict, "JG", PyLong_FromUint32(triton::arch::x86::ID_INS_JG));
        PyDict_SetItemStringSteal(opcodesDict, "JLE", PyLong_FromUint32(triton::arch::x86::ID_INS_JLE));
        PyDict_SetItemStringSteal(opcodesDict, "JL", PyLong_FromUint32(triton::arch::x86::ID_INS_JL));
        PyDict_SetItemStringSteal(opcodesDict, "JMP", PyLong_FromUint32(triton::arch::x86::ID_INS_JMP));
        PyDict_SetItemStringSteal(opcodesDict, "JNE", PyLong_FromUint32(triton::arch::x86::ID_INS_JNE));
        PyDict_SetItemStringSteal(opcodesDict, "JNO", PyLong_FromUint32(triton::arch::x86::ID_INS_JNO));
        PyDict_SetItemStringSteal(opcodesDict, "JNP", PyLong_FromUint32(triton::arch::x86::ID_INS_JNP));
        PyDict_SetItemStringSteal(opcodesDict, "JNS", PyLong_FromUint32(triton::arch::x86::ID_INS_JNS));
        PyDict_SetItemStringSteal(opcodesDict, "JO", PyLong_FromUint32(triton::arch::x86::ID_INS_JO));
        PyDict_SetItemStringSteal(opcodesDict, "JP", PyLong_FromUint32(triton::arch::x86::ID_INS_JP));
        PyDict_SetItemStringSteal(opcodesDict, "JRCXZ", PyLong_FromUint32(triton::arch::x86::ID_INS_JRCXZ));
        PyDict_SetItemStringSteal(opcodesDict, "JS", PyLong_FromUint32(triton::arch::x86::ID_INS_JS));
        PyDict_SetItemStringSteal(opcodesDict, "KANDB", PyLong_FromUint32(triton::arch::x86::ID_INS_KANDB));
        PyDict_SetItemStringSteal(opcodesDict, "KANDD", PyLong_FromUint32(triton::arch::x86::ID_INS_KANDD));
        PyDict_SetItemStringSteal(opcodesDict, "KANDNB", PyLong_FromUint32(triton::arch::x86::ID_INS_KANDNB));
        PyDict_SetItemStringSteal(opcodesDict, "KANDND", PyLong_FromUint32(triton::arch::x86::ID_INS_KANDND));
        PyDict_SetItemStringSteal(opcodesDict, "KANDNQ", PyLong_FromUint32(triton::arch::x86::ID_INS_KANDNQ));
        PyDict_SetItemStringSteal(opcodesDict, "KANDNW", PyLong_FromUint32(triton::arch::x86::ID_INS_KANDNW));
        PyDict_SetItemStringSteal(opcodesDict, "KANDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_KANDQ));
        PyDict_SetItemStringSteal(opcodesDict, "KANDW", PyLong_FromUint32(triton::arch::x86::ID_INS_KANDW));
        PyDict_SetItemStringSteal(opcodesDict, "KMOVB", PyLong_FromUint32(triton::arch::x86::ID_INS_KMOVB));
        PyDict_SetItemStringSteal(opcodesDict, "KMOVD", PyLong_FromUint32(triton::arch::x86::ID_INS_KMOVD));
        PyDict_SetItemStringSteal(opcodesDict, "KMOVQ", PyLong_FromUint32(triton::arch::x86::ID_INS_KMOVQ));
        PyDict_SetItemStringSteal(opcodesDict, "KMOVW", PyLong_FromUint32(triton::arch::x86::ID_INS_KMOVW));
        PyDict_SetItemStringSteal(opcodesDict, "KNOTB", PyLong_FromUint32(triton::arch::x86::ID_INS_KNOTB));
        PyDict_SetItemStringSteal(opcodesDict, "KNOTD", PyLong_FromUint32(triton::arch::x86::ID_INS_KNOTD));
        PyDict_SetItemStringSteal(opcodesDict, "KNOTQ", PyLong_FromUint32(triton::arch::x86::ID_INS_KNOTQ));
        PyDict_SetItemStringSteal(opcodesDict, "KNOTW", PyLong_FromUint32(triton::arch::x86::ID_INS_KNOTW));
        PyDict_SetItemStringSteal(opcodesDict, "KORB", PyLong_FromUint32(triton::arch::x86::ID_INS_KORB));
        PyDict_SetItemStringSteal(opcodesDict, "KORD", PyLong_FromUint32(triton::arch::x86::ID_INS_KORD));
        PyDict_SetItemStringSteal(opcodesDict, "KORQ", PyLong_FromUint32(triton::arch::x86::ID_INS_KORQ));
        PyDict_SetItemStringSteal(opcodesDict, "KORTESTW", PyLong_FromUint32(triton::arch::x86::ID_INS_KORTESTW));
        PyDict_SetItemStringSteal(opcodesDict, "KORW", PyLong_FromUint32(triton::arch::x86::ID_INS_KORW));
        PyDict_SetItemStringSteal(opcodesDict, "KSHIFTLW", PyLong_FromUint32(triton::arch::x86::ID_INS_KSHIFTLW));
        PyDict_SetItemStringSteal(opcodesDict, "KSHIFTRW", PyLong_FromUint32(triton::arch::x86::ID_INS_KSHIFTRW));
        PyDict_SetItemStringSteal(opcodesDict, "KUNPCKBW", PyLong_FromUint32(triton::arch::x86::ID_INS_KUNPCKBW));
        PyDict_SetItemStringSteal(opcodesDict, "KXNORB", PyLong_FromUint32(triton::arch::x86::ID_INS_KXNORB));
        PyDict_SetItemStringSteal(opcodesDict, "KXNORD", PyLong_FromUint32(triton::arch::x86::ID_INS_KXNORD));
        PyDict_SetItemStringSteal(opcodesDict, "KXNORQ", PyLong_FromUint32(triton::arch::x86::ID_INS_KXNORQ));
        PyDict_SetItemStringSteal(opcodesDict, "KXNORW", PyLong_FromUint32(triton::arch::x86::ID_INS_KXNORW));
        PyDict_SetItemStringSteal(opcodesDict, "KXORB", PyLong_FromUint32(triton::arch::x86::ID_INS_KXORB));
        PyDict_SetItemStringSteal(opcodesDict, "KXORD", PyLong_FromUint32(triton::arch::x86::ID_INS_KXORD));
        PyDict_SetItemStringSteal(opcodesDict, "KXORQ", PyLong_FromUint32(triton::arch::x86::ID_INS_KXORQ));
        PyDict_SetItemStringSteal(opcodesDict, "KXORW", PyLong_FromUint32(triton::arch::x86::ID_INS_KXORW));
        PyDict_SetItemStringSteal(opcodesDict, "LAHF", PyLong_FromUint32(triton::arch::x86::ID_INS_LAHF));
        PyDict_SetItemStringSteal(opcodesDict, "LAR", PyLong_FromUint32(triton::arch::x86::ID_INS_LAR));
        PyDict_SetItemStringSteal(opcodesDict, "LDDQU", PyLong_FromUint32(triton::arch::x86::ID_INS_LDDQU));
        PyDict_SetItemStringSteal(opcodesDict, "LDMXCSR", PyLong_FromUint32(triton::arch::x86::ID_INS_LDMXCSR));
        PyDict_SetItemStringSteal(opcodesDict, "LDS", PyLong_FromUint32(triton::arch::x86::ID_INS_LDS));
        PyDict_SetItemStringSteal(opcodesDict, "FLDZ", PyLong_FromUint32(triton::arch::x86::ID_INS_FLDZ));
        PyDict_SetItemStringSteal(opcodesDict, "FLD1", PyLong_FromUint32(triton::arch::x86::ID_INS_FLD1));
        PyDict_SetItemStringSteal(opcodesDict, "FLD", PyLong_FromUint32(triton::arch::x86::ID_INS_FLD));
        PyDict_SetItemStringSteal(opcodesDict, "LEA", PyLong_FromUint32(triton::arch::x86::ID_INS_LEA));
        PyDict_SetItemStringSteal(opcodesDict, "LEAVE", PyLong_FromUint32(triton::arch::x86::ID_INS_LEAVE));
        PyDict_SetItemStringSteal(opcodesDict, "LES", PyLong_FromUint32(triton::arch::x86::ID_INS_LES));
        PyDict_SetItemStringSteal(opcodesDict, "LFENCE", PyLong_FromUint32(triton::arch::x86::ID_INS_LFENCE));
        PyDict_SetItemStringSteal(opcodesDict, "LFS", PyLong_FromUint32(triton::arch::x86::ID_INS_LFS));
        PyDict_SetItemStringSteal(opcodesDict, "LGDT", PyLong_FromUint32(triton::arch::x86::ID_INS_LGDT));
        PyDict_SetItemStringSteal(opcodesDict, "LGS", PyLong_FromUint32(triton::arch::x86::ID_INS_LGS));
        PyDict_SetItemStringSteal(opcodesDict, "LIDT", PyLong_FromUint32(triton::arch::x86::ID_INS_LIDT));
        PyDict_SetItemStringSteal(opcodesDict, "LLDT", PyLong_FromUint32(triton::arch::x86::ID_INS_LLDT));
        PyDict_SetItemStringSteal(opcodesDict, "LMSW", PyLong_FromUint32(triton::arch::x86::ID_INS_LMSW));
        PyDict_SetItemStringSteal(opcodesDict, "OR", PyLong_FromUint32(triton::arch::x86::ID_INS_OR));
        PyDict_SetItemStringSteal(opcodesDict, "SUB", PyLong_FromUint32(triton::arch::x86::ID_INS_SUB));
        PyDict_SetItemStringSteal(opcodesDict, "XOR", PyLong_FromUint32(triton::arch::x86::ID_INS_XOR));
        PyDict_SetItemStringSteal(opcodesDict, "LODSB", PyLong_FromUint32(triton::arch::x86::ID_INS_LODSB));
        PyDict_SetItemStringSteal(opcodesDict, "LODSD", PyLong_FromUint32(triton::arch::x86::ID_INS_LODSD));
        PyDict_SetItemStringSteal(opcodesDict, "LODSQ", PyLong_FromUint32(triton::arch::x86::ID_INS_LODSQ));
        PyDict_SetItemStringSteal(opcodesDict, "LODSW", PyLong_FromUint32(triton::arch::x86::ID_INS_LODSW));
        PyDict_SetItemStringSteal(opcodesDict, "LOOP", PyLong_FromUint32(triton::arch::x86::ID_INS_LOOP));
        PyDict_SetItemStringSteal(opcodesDict, "LOOPE", PyLong_FromUint32(triton::arch::x86::ID_INS_LOOPE));
        PyDict_SetItemStringSteal(opcodesDict, "LOOPNE", PyLong_FromUint32(triton::arch::x86::ID_INS_LOOPNE));
        PyDict_SetItemStringSteal(opcodesDict, "RETF", PyLong_FromUint32(triton::arch::x86::ID_INS_RETF));
        PyDict_SetItemStringSteal(opcodesDict, "RETFQ", PyLong_FromUint32(triton::arch::x86::ID_INS_RETFQ));
        PyDict_SetItemStringSteal(opcodesDict, "LSL", PyLong_FromUint32(triton::arch::x86::ID_INS_LSL));
        PyDict_SetItemStringSteal(opcodesDict, "LSS", PyLong_FromUint32(triton::arch::x86::ID_INS_LSS));
        PyDict_SetItemStringSteal(opcodesDict, "LTR", PyLong_FromUint32(triton::arch::x86::ID_INS_LTR));
        PyDict_SetItemStringSteal(opcodesDict, "XADD", PyLong_FromUint32(triton::arch::x86::ID_INS_XADD));
        PyDict_SetItemStringSteal(opcodesDict, "LZCNT", PyLong_FromUint32(triton::arch::x86::ID_INS_LZCNT));
        PyDict_SetItemStringSteal(opcodesDict, "MASKMOVDQU", PyLong_FromUint32(triton::arch::x86::ID_INS_MASKMOVDQU));
        PyDict_SetItemStringSteal(opcodesDict, "MAXPD", PyLong_FromUint32(triton::arch::x86::ID_INS_MAXPD));
        PyDict_SetItemStringSteal(opcodesDict, "MAXPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MAXPS));
        PyDict_SetItemStringSteal(opcodesDict, "MAXSD", PyLong_FromUint32(triton::arch::x86::ID_INS_MAXSD));
        PyDict_SetItemStringSteal(opcodesDict, "MAXSS", PyLong_FromUint32(triton::arch::x86::ID_INS_MAXSS));
        PyDict_SetItemStringSteal(opcodesDict, "MFENCE", PyLong_FromUint32(triton::arch::x86::ID_INS_MFENCE));
        PyDict_SetItemStringSteal(opcodesDict, "MINPD", PyLong_FromUint32(triton::arch::x86::ID_INS_MINPD));
        PyDict_SetItemStringSteal(opcodesDict, "MINPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MINPS));
        PyDict_SetItemStringSteal(opcodesDict, "MINSD", PyLong_FromUint32(triton::arch::x86::ID_INS_MINSD));
        PyDict_SetItemStringSteal(opcodesDict, "MINSS", PyLong_FromUint32(triton::arch::x86::ID_INS_MINSS));
        PyDict_SetItemStringSteal(opcodesDict, "CVTPD2PI", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTPD2PI));
        PyDict_SetItemStringSteal(opcodesDict, "CVTPI2PD", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTPI2PD));
        PyDict_SetItemStringSteal(opcodesDict, "CVTPI2PS", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTPI2PS));
        PyDict_SetItemStringSteal(opcodesDict, "CVTPS2PI", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTPS2PI));
        PyDict_SetItemStringSteal(opcodesDict, "CVTTPD2PI", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTTPD2PI));
        PyDict_SetItemStringSteal(opcodesDict, "CVTTPS2PI", PyLong_FromUint32(triton::arch::x86::ID_INS_CVTTPS2PI));
        PyDict_SetItemStringSteal(opcodesDict, "EMMS", PyLong_FromUint32(triton::arch::x86::ID_INS_EMMS));
        PyDict_SetItemStringSteal(opcodesDict, "MASKMOVQ", PyLong_FromUint32(triton::arch::x86::ID_INS_MASKMOVQ));
        PyDict_SetItemStringSteal(opcodesDict, "MOVD", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVD));
        PyDict_SetItemStringSteal(opcodesDict, "MOVDQ2Q", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVDQ2Q));
        PyDict_SetItemStringSteal(opcodesDict, "MOVNTQ", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVNTQ));
        PyDict_SetItemStringSteal(opcodesDict, "MOVQ2DQ", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVQ2DQ));
        PyDict_SetItemStringSteal(opcodesDict, "MOVQ", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVQ));
        PyDict_SetItemStringSteal(opcodesDict, "PABSB", PyLong_FromUint32(triton::arch::x86::ID_INS_PABSB));
        PyDict_SetItemStringSteal(opcodesDict, "PABSD", PyLong_FromUint32(triton::arch::x86::ID_INS_PABSD));
        PyDict_SetItemStringSteal(opcodesDict, "PABSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PABSW));
        PyDict_SetItemStringSteal(opcodesDict, "PACKSSDW", PyLong_FromUint32(triton::arch::x86::ID_INS_PACKSSDW));
        PyDict_SetItemStringSteal(opcodesDict, "PACKSSWB", PyLong_FromUint32(triton::arch::x86::ID_INS_PACKSSWB));
        PyDict_SetItemStringSteal(opcodesDict, "PACKUSWB", PyLong_FromUint32(triton::arch::x86::ID_INS_PACKUSWB));
        PyDict_SetItemStringSteal(opcodesDict, "PADDB", PyLong_FromUint32(triton::arch::x86::ID_INS_PADDB));
        PyDict_SetItemStringSteal(opcodesDict, "PADDD", PyLong_FromUint32(triton::arch::x86::ID_INS_PADDD));
        PyDict_SetItemStringSteal(opcodesDict, "PADDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PADDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PADDSB", PyLong_FromUint32(triton::arch::x86::ID_INS_PADDSB));
        PyDict_SetItemStringSteal(opcodesDict, "PADDSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PADDSW));
        PyDict_SetItemStringSteal(opcodesDict, "PADDUSB", PyLong_FromUint32(triton::arch::x86::ID_INS_PADDUSB));
        PyDict_SetItemStringSteal(opcodesDict, "PADDUSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PADDUSW));
        PyDict_SetItemStringSteal(opcodesDict, "PADDW", PyLong_FromUint32(triton::arch::x86::ID_INS_PADDW));
        PyDict_SetItemStringSteal(opcodesDict, "PALIGNR", PyLong_FromUint32(triton::arch::x86::ID_INS_PALIGNR));
        PyDict_SetItemStringSteal(opcodesDict, "PANDN", PyLong_FromUint32(triton::arch::x86::ID_INS_PANDN));
        PyDict_SetItemStringSteal(opcodesDict, "PAND", PyLong_FromUint32(triton::arch::x86::ID_INS_PAND));
        PyDict_SetItemStringSteal(opcodesDict, "PAVGB", PyLong_FromUint32(triton::arch::x86::ID_INS_PAVGB));
        PyDict_SetItemStringSteal(opcodesDict, "PAVGW", PyLong_FromUint32(triton::arch::x86::ID_INS_PAVGW));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPEQB", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPEQB));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPEQD", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPEQD));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPEQW", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPEQW));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPGTB", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPGTB));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPGTD", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPGTD));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPGTW", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPGTW));
        PyDict_SetItemStringSteal(opcodesDict, "PEXTRW", PyLong_FromUint32(triton::arch::x86::ID_INS_PEXTRW));
        PyDict_SetItemStringSteal(opcodesDict, "PHADDSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PHADDSW));
        PyDict_SetItemStringSteal(opcodesDict, "PHADDW", PyLong_FromUint32(triton::arch::x86::ID_INS_PHADDW));
        PyDict_SetItemStringSteal(opcodesDict, "PHADDD", PyLong_FromUint32(triton::arch::x86::ID_INS_PHADDD));
        PyDict_SetItemStringSteal(opcodesDict, "PHSUBD", PyLong_FromUint32(triton::arch::x86::ID_INS_PHSUBD));
        PyDict_SetItemStringSteal(opcodesDict, "PHSUBSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PHSUBSW));
        PyDict_SetItemStringSteal(opcodesDict, "PHSUBW", PyLong_FromUint32(triton::arch::x86::ID_INS_PHSUBW));
        PyDict_SetItemStringSteal(opcodesDict, "PINSRW", PyLong_FromUint32(triton::arch::x86::ID_INS_PINSRW));
        PyDict_SetItemStringSteal(opcodesDict, "PMADDUBSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMADDUBSW));
        PyDict_SetItemStringSteal(opcodesDict, "PMADDWD", PyLong_FromUint32(triton::arch::x86::ID_INS_PMADDWD));
        PyDict_SetItemStringSteal(opcodesDict, "PMAXSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMAXSW));
        PyDict_SetItemStringSteal(opcodesDict, "PMAXUB", PyLong_FromUint32(triton::arch::x86::ID_INS_PMAXUB));
        PyDict_SetItemStringSteal(opcodesDict, "PMINSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMINSW));
        PyDict_SetItemStringSteal(opcodesDict, "PMINUB", PyLong_FromUint32(triton::arch::x86::ID_INS_PMINUB));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVMSKB", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVMSKB));
        PyDict_SetItemStringSteal(opcodesDict, "PMULHRSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMULHRSW));
        PyDict_SetItemStringSteal(opcodesDict, "PMULHUW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMULHUW));
        PyDict_SetItemStringSteal(opcodesDict, "PMULHW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMULHW));
        PyDict_SetItemStringSteal(opcodesDict, "PMULLW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMULLW));
        PyDict_SetItemStringSteal(opcodesDict, "PMULUDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PMULUDQ));
        PyDict_SetItemStringSteal(opcodesDict, "POR", PyLong_FromUint32(triton::arch::x86::ID_INS_POR));
        PyDict_SetItemStringSteal(opcodesDict, "PSADBW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSADBW));
        PyDict_SetItemStringSteal(opcodesDict, "PSHUFB", PyLong_FromUint32(triton::arch::x86::ID_INS_PSHUFB));
        PyDict_SetItemStringSteal(opcodesDict, "PSHUFW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSHUFW));
        PyDict_SetItemStringSteal(opcodesDict, "PSIGNB", PyLong_FromUint32(triton::arch::x86::ID_INS_PSIGNB));
        PyDict_SetItemStringSteal(opcodesDict, "PSIGND", PyLong_FromUint32(triton::arch::x86::ID_INS_PSIGND));
        PyDict_SetItemStringSteal(opcodesDict, "PSIGNW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSIGNW));
        PyDict_SetItemStringSteal(opcodesDict, "PSLLD", PyLong_FromUint32(triton::arch::x86::ID_INS_PSLLD));
        PyDict_SetItemStringSteal(opcodesDict, "PSLLQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PSLLQ));
        PyDict_SetItemStringSteal(opcodesDict, "PSLLW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSLLW));
        PyDict_SetItemStringSteal(opcodesDict, "PSRAD", PyLong_FromUint32(triton::arch::x86::ID_INS_PSRAD));
        PyDict_SetItemStringSteal(opcodesDict, "PSRAW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSRAW));
        PyDict_SetItemStringSteal(opcodesDict, "PSRLD", PyLong_FromUint32(triton::arch::x86::ID_INS_PSRLD));
        PyDict_SetItemStringSteal(opcodesDict, "PSRLQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PSRLQ));
        PyDict_SetItemStringSteal(opcodesDict, "PSRLW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSRLW));
        PyDict_SetItemStringSteal(opcodesDict, "PSUBB", PyLong_FromUint32(triton::arch::x86::ID_INS_PSUBB));
        PyDict_SetItemStringSteal(opcodesDict, "PSUBD", PyLong_FromUint32(triton::arch::x86::ID_INS_PSUBD));
        PyDict_SetItemStringSteal(opcodesDict, "PSUBQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PSUBQ));
        PyDict_SetItemStringSteal(opcodesDict, "PSUBSB", PyLong_FromUint32(triton::arch::x86::ID_INS_PSUBSB));
        PyDict_SetItemStringSteal(opcodesDict, "PSUBSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSUBSW));
        PyDict_SetItemStringSteal(opcodesDict, "PSUBUSB", PyLong_FromUint32(triton::arch::x86::ID_INS_PSUBUSB));
        PyDict_SetItemStringSteal(opcodesDict, "PSUBUSW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSUBUSW));
        PyDict_SetItemStringSteal(opcodesDict, "PSUBW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSUBW));
        PyDict_SetItemStringSteal(opcodesDict, "PUNPCKHBW", PyLong_FromUint32(triton::arch::x86::ID_INS_PUNPCKHBW));
        PyDict_SetItemStringSteal(opcodesDict, "PUNPCKHDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PUNPCKHDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PUNPCKHWD", PyLong_FromUint32(triton::arch::x86::ID_INS_PUNPCKHWD));
        PyDict_SetItemStringSteal(opcodesDict, "PUNPCKLBW", PyLong_FromUint32(triton::arch::x86::ID_INS_PUNPCKLBW));
        PyDict_SetItemStringSteal(opcodesDict, "PUNPCKLDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PUNPCKLDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PUNPCKLWD", PyLong_FromUint32(triton::arch::x86::ID_INS_PUNPCKLWD));
        PyDict_SetItemStringSteal(opcodesDict, "PXOR", PyLong_FromUint32(triton::arch::x86::ID_INS_PXOR));
        PyDict_SetItemStringSteal(opcodesDict, "MONITOR", PyLong_FromUint32(triton::arch::x86::ID_INS_MONITOR));
        PyDict_SetItemStringSteal(opcodesDict, "MONTMUL", PyLong_FromUint32(triton::arch::x86::ID_INS_MONTMUL));
        PyDict_SetItemStringSteal(opcodesDict, "MOV", PyLong_FromUint32(triton::arch::x86::ID_INS_MOV));
        PyDict_SetItemStringSteal(opcodesDict, "MOVABS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVABS));
        PyDict_SetItemStringSteal(opcodesDict, "MOVBE", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVBE));
        PyDict_SetItemStringSteal(opcodesDict, "MOVDDUP", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVDDUP));
        PyDict_SetItemStringSteal(opcodesDict, "MOVDQA", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVDQA));
        PyDict_SetItemStringSteal(opcodesDict, "MOVDQU", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVDQU));
        PyDict_SetItemStringSteal(opcodesDict, "MOVHLPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVHLPS));
        PyDict_SetItemStringSteal(opcodesDict, "MOVHPD", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVHPD));
        PyDict_SetItemStringSteal(opcodesDict, "MOVHPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVHPS));
        PyDict_SetItemStringSteal(opcodesDict, "MOVLHPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVLHPS));
        PyDict_SetItemStringSteal(opcodesDict, "MOVLPD", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVLPD));
        PyDict_SetItemStringSteal(opcodesDict, "MOVLPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVLPS));
        PyDict_SetItemStringSteal(opcodesDict, "MOVMSKPD", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVMSKPD));
        PyDict_SetItemStringSteal(opcodesDict, "MOVMSKPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVMSKPS));
        PyDict_SetItemStringSteal(opcodesDict, "MOVNTDQA", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVNTDQA));
        PyDict_SetItemStringSteal(opcodesDict, "MOVNTDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVNTDQ));
        PyDict_SetItemStringSteal(opcodesDict, "MOVNTI", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVNTI));
        PyDict_SetItemStringSteal(opcodesDict, "MOVNTPD", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVNTPD));
        PyDict_SetItemStringSteal(opcodesDict, "MOVNTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVNTPS));
        PyDict_SetItemStringSteal(opcodesDict, "MOVNTSD", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVNTSD));
        PyDict_SetItemStringSteal(opcodesDict, "MOVNTSS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVNTSS));
        PyDict_SetItemStringSteal(opcodesDict, "MOVSB", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVSB));
        PyDict_SetItemStringSteal(opcodesDict, "MOVSD", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVSD));
        PyDict_SetItemStringSteal(opcodesDict, "MOVSHDUP", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVSHDUP));
        PyDict_SetItemStringSteal(opcodesDict, "MOVSLDUP", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVSLDUP));
        PyDict_SetItemStringSteal(opcodesDict, "MOVSQ", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVSQ));
        PyDict_SetItemStringSteal(opcodesDict, "MOVSS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVSS));
        PyDict_SetItemStringSteal(opcodesDict, "MOVSW", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVSW));
        PyDict_SetItemStringSteal(opcodesDict, "MOVSX", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVSX));
        PyDict_SetItemStringSteal(opcodesDict, "MOVSXD", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVSXD));
        PyDict_SetItemStringSteal(opcodesDict, "MOVUPD", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVUPD));
        PyDict_SetItemStringSteal(opcodesDict, "MOVUPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVUPS));
        PyDict_SetItemStringSteal(opcodesDict, "MOVZX", PyLong_FromUint32(triton::arch::x86::ID_INS_MOVZX));
        PyDict_SetItemStringSteal(opcodesDict, "MPSADBW", PyLong_FromUint32(triton::arch::x86::ID_INS_MPSADBW));
        PyDict_SetItemStringSteal(opcodesDict, "MUL", PyLong_FromUint32(triton::arch::x86::ID_INS_MUL));
        PyDict_SetItemStringSteal(opcodesDict, "MULPD", PyLong_FromUint32(triton::arch::x86::ID_INS_MULPD));
        PyDict_SetItemStringSteal(opcodesDict, "MULPS", PyLong_FromUint32(triton::arch::x86::ID_INS_MULPS));
        PyDict_SetItemStringSteal(opcodesDict, "MULSD", PyLong_FromUint32(triton::arch::x86::ID_INS_MULSD));
        PyDict_SetItemStringSteal(opcodesDict, "MULSS", PyLong_FromUint32(triton::arch::x86::ID_INS_MULSS));
        PyDict_SetItemStringSteal(opcodesDict, "MULX", PyLong_FromUint32(triton::arch::x86::ID_INS_MULX));
        PyDict_SetItemStringSteal(opcodesDict, "FMUL", PyLong_FromUint32(triton::arch::x86::ID_INS_FMUL));
        PyDict_SetItemStringSteal(opcodesDict, "FIMUL", PyLong_FromUint32(triton::arch::x86::ID_INS_FIMUL));
        PyDict_SetItemStringSteal(opcodesDict, "FMULP", PyLong_FromUint32(triton::arch::x86::ID_INS_FMULP));
        PyDict_SetItemStringSteal(opcodesDict, "MWAIT", PyLong_FromUint32(triton::arch::x86::ID_INS_MWAIT));
        PyDict_SetItemStringSteal(opcodesDict, "NEG", PyLong_FromUint32(triton::arch::x86::ID_INS_NEG));
        PyDict_SetItemStringSteal(opcodesDict, "NOP", PyLong_FromUint32(triton::arch::x86::ID_INS_NOP));
        PyDict_SetItemStringSteal(opcodesDict, "NOT", PyLong_FromUint32(triton::arch::x86::ID_INS_NOT));
        PyDict_SetItemStringSteal(opcodesDict, "OUT", PyLong_FromUint32(triton::arch::x86::ID_INS_OUT));
        PyDict_SetItemStringSteal(opcodesDict, "OUTSB", PyLong_FromUint32(triton::arch::x86::ID_INS_OUTSB));
        PyDict_SetItemStringSteal(opcodesDict, "OUTSD", PyLong_FromUint32(triton::arch::x86::ID_INS_OUTSD));
        PyDict_SetItemStringSteal(opcodesDict, "OUTSW", PyLong_FromUint32(triton::arch::x86::ID_INS_OUTSW));
        PyDict_SetItemStringSteal(opcodesDict, "PACKUSDW", PyLong_FromUint32(triton::arch::x86::ID_INS_PACKUSDW));
        PyDict_SetItemStringSteal(opcodesDict, "PAUSE", PyLong_FromUint32(triton::arch::x86::ID_INS_PAUSE));
        PyDict_SetItemStringSteal(opcodesDict, "PAVGUSB", PyLong_FromUint32(triton::arch::x86::ID_INS_PAVGUSB));
        PyDict_SetItemStringSteal(opcodesDict, "PBLENDVB", PyLong_FromUint32(triton::arch::x86::ID_INS_PBLENDVB));
        PyDict_SetItemStringSteal(opcodesDict, "PBLENDW", PyLong_FromUint32(triton::arch::x86::ID_INS_PBLENDW));
        PyDict_SetItemStringSteal(opcodesDict, "PCLMULQDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PCLMULQDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPEQQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPEQQ));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPESTRI", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPESTRI));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPESTRM", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPESTRM));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPGTQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPGTQ));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPISTRI", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPISTRI));
        PyDict_SetItemStringSteal(opcodesDict, "PCMPISTRM", PyLong_FromUint32(triton::arch::x86::ID_INS_PCMPISTRM));
        PyDict_SetItemStringSteal(opcodesDict, "PDEP", PyLong_FromUint32(triton::arch::x86::ID_INS_PDEP));
        PyDict_SetItemStringSteal(opcodesDict, "PEXT", PyLong_FromUint32(triton::arch::x86::ID_INS_PEXT));
        PyDict_SetItemStringSteal(opcodesDict, "PEXTRB", PyLong_FromUint32(triton::arch::x86::ID_INS_PEXTRB));
        PyDict_SetItemStringSteal(opcodesDict, "PEXTRD", PyLong_FromUint32(triton::arch::x86::ID_INS_PEXTRD));
        PyDict_SetItemStringSteal(opcodesDict, "PEXTRQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PEXTRQ));
        PyDict_SetItemStringSteal(opcodesDict, "PF2ID", PyLong_FromUint32(triton::arch::x86::ID_INS_PF2ID));
        PyDict_SetItemStringSteal(opcodesDict, "PF2IW", PyLong_FromUint32(triton::arch::x86::ID_INS_PF2IW));
        PyDict_SetItemStringSteal(opcodesDict, "PFACC", PyLong_FromUint32(triton::arch::x86::ID_INS_PFACC));
        PyDict_SetItemStringSteal(opcodesDict, "PFADD", PyLong_FromUint32(triton::arch::x86::ID_INS_PFADD));
        PyDict_SetItemStringSteal(opcodesDict, "PFCMPEQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PFCMPEQ));
        PyDict_SetItemStringSteal(opcodesDict, "PFCMPGE", PyLong_FromUint32(triton::arch::x86::ID_INS_PFCMPGE));
        PyDict_SetItemStringSteal(opcodesDict, "PFCMPGT", PyLong_FromUint32(triton::arch::x86::ID_INS_PFCMPGT));
        PyDict_SetItemStringSteal(opcodesDict, "PFMAX", PyLong_FromUint32(triton::arch::x86::ID_INS_PFMAX));
        PyDict_SetItemStringSteal(opcodesDict, "PFMIN", PyLong_FromUint32(triton::arch::x86::ID_INS_PFMIN));
        PyDict_SetItemStringSteal(opcodesDict, "PFMUL", PyLong_FromUint32(triton::arch::x86::ID_INS_PFMUL));
        PyDict_SetItemStringSteal(opcodesDict, "PFNACC", PyLong_FromUint32(triton::arch::x86::ID_INS_PFNACC));
        PyDict_SetItemStringSteal(opcodesDict, "PFPNACC", PyLong_FromUint32(triton::arch::x86::ID_INS_PFPNACC));
        PyDict_SetItemStringSteal(opcodesDict, "PFRCPIT1", PyLong_FromUint32(triton::arch::x86::ID_INS_PFRCPIT1));
        PyDict_SetItemStringSteal(opcodesDict, "PFRCPIT2", PyLong_FromUint32(triton::arch::x86::ID_INS_PFRCPIT2));
        PyDict_SetItemStringSteal(opcodesDict, "PFRCP", PyLong_FromUint32(triton::arch::x86::ID_INS_PFRCP));
        PyDict_SetItemStringSteal(opcodesDict, "PFRSQIT1", PyLong_FromUint32(triton::arch::x86::ID_INS_PFRSQIT1));
        PyDict_SetItemStringSteal(opcodesDict, "PFRSQRT", PyLong_FromUint32(triton::arch::x86::ID_INS_PFRSQRT));
        PyDict_SetItemStringSteal(opcodesDict, "PFSUBR", PyLong_FromUint32(triton::arch::x86::ID_INS_PFSUBR));
        PyDict_SetItemStringSteal(opcodesDict, "PFSUB", PyLong_FromUint32(triton::arch::x86::ID_INS_PFSUB));
        PyDict_SetItemStringSteal(opcodesDict, "PHMINPOSUW", PyLong_FromUint32(triton::arch::x86::ID_INS_PHMINPOSUW));
        PyDict_SetItemStringSteal(opcodesDict, "PI2FD", PyLong_FromUint32(triton::arch::x86::ID_INS_PI2FD));
        PyDict_SetItemStringSteal(opcodesDict, "PI2FW", PyLong_FromUint32(triton::arch::x86::ID_INS_PI2FW));
        PyDict_SetItemStringSteal(opcodesDict, "PINSRB", PyLong_FromUint32(triton::arch::x86::ID_INS_PINSRB));
        PyDict_SetItemStringSteal(opcodesDict, "PINSRD", PyLong_FromUint32(triton::arch::x86::ID_INS_PINSRD));
        PyDict_SetItemStringSteal(opcodesDict, "PINSRQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PINSRQ));
        PyDict_SetItemStringSteal(opcodesDict, "PMAXSB", PyLong_FromUint32(triton::arch::x86::ID_INS_PMAXSB));
        PyDict_SetItemStringSteal(opcodesDict, "PMAXSD", PyLong_FromUint32(triton::arch::x86::ID_INS_PMAXSD));
        PyDict_SetItemStringSteal(opcodesDict, "PMAXUD", PyLong_FromUint32(triton::arch::x86::ID_INS_PMAXUD));
        PyDict_SetItemStringSteal(opcodesDict, "PMAXUW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMAXUW));
        PyDict_SetItemStringSteal(opcodesDict, "PMINSB", PyLong_FromUint32(triton::arch::x86::ID_INS_PMINSB));
        PyDict_SetItemStringSteal(opcodesDict, "PMINSD", PyLong_FromUint32(triton::arch::x86::ID_INS_PMINSD));
        PyDict_SetItemStringSteal(opcodesDict, "PMINUD", PyLong_FromUint32(triton::arch::x86::ID_INS_PMINUD));
        PyDict_SetItemStringSteal(opcodesDict, "PMINUW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMINUW));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVSXBD", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVSXBD));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVSXBQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVSXBQ));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVSXBW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVSXBW));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVSXDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVSXDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVSXWD", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVSXWD));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVSXWQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVSXWQ));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVZXBD", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVZXBD));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVZXBQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVZXBQ));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVZXBW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVZXBW));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVZXDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVZXDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVZXWD", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVZXWD));
        PyDict_SetItemStringSteal(opcodesDict, "PMOVZXWQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PMOVZXWQ));
        PyDict_SetItemStringSteal(opcodesDict, "PMULDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PMULDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PMULHRW", PyLong_FromUint32(triton::arch::x86::ID_INS_PMULHRW));
        PyDict_SetItemStringSteal(opcodesDict, "PMULLD", PyLong_FromUint32(triton::arch::x86::ID_INS_PMULLD));
        PyDict_SetItemStringSteal(opcodesDict, "POP", PyLong_FromUint32(triton::arch::x86::ID_INS_POP));
        PyDict_SetItemStringSteal(opcodesDict, "POPAW", PyLong_FromUint32(triton::arch::x86::ID_INS_POPAW));
        PyDict_SetItemStringSteal(opcodesDict, "POPAL", PyLong_FromUint32(triton::arch::x86::ID_INS_POPAL));
        PyDict_SetItemStringSteal(opcodesDict, "POPCNT", PyLong_FromUint32(triton::arch::x86::ID_INS_POPCNT));
        PyDict_SetItemStringSteal(opcodesDict, "POPF", PyLong_FromUint32(triton::arch::x86::ID_INS_POPF));
        PyDict_SetItemStringSteal(opcodesDict, "POPFD", PyLong_FromUint32(triton::arch::x86::ID_INS_POPFD));
        PyDict_SetItemStringSteal(opcodesDict, "POPFQ", PyLong_FromUint32(triton::arch::x86::ID_INS_POPFQ));
        PyDict_SetItemStringSteal(opcodesDict, "PREFETCH", PyLong_FromUint32(triton::arch::x86::ID_INS_PREFETCH));
        PyDict_SetItemStringSteal(opcodesDict, "PREFETCHNTA", PyLong_FromUint32(triton::arch::x86::ID_INS_PREFETCHNTA));
        PyDict_SetItemStringSteal(opcodesDict, "PREFETCHT0", PyLong_FromUint32(triton::arch::x86::ID_INS_PREFETCHT0));
        PyDict_SetItemStringSteal(opcodesDict, "PREFETCHT1", PyLong_FromUint32(triton::arch::x86::ID_INS_PREFETCHT1));
        PyDict_SetItemStringSteal(opcodesDict, "PREFETCHT2", PyLong_FromUint32(triton::arch::x86::ID_INS_PREFETCHT2));
        PyDict_SetItemStringSteal(opcodesDict, "PREFETCHW", PyLong_FromUint32(triton::arch::x86::ID_INS_PREFETCHW));
        PyDict_SetItemStringSteal(opcodesDict, "PSHUFD", PyLong_FromUint32(triton::arch::x86::ID_INS_PSHUFD));
        PyDict_SetItemStringSteal(opcodesDict, "PSHUFHW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSHUFHW));
        PyDict_SetItemStringSteal(opcodesDict, "PSHUFLW", PyLong_FromUint32(triton::arch::x86::ID_INS_PSHUFLW));
        PyDict_SetItemStringSteal(opcodesDict, "PSLLDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PSLLDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PSRLDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PSRLDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PSWAPD", PyLong_FromUint32(triton::arch::x86::ID_INS_PSWAPD));
        PyDict_SetItemStringSteal(opcodesDict, "PTEST", PyLong_FromUint32(triton::arch::x86::ID_INS_PTEST));
        PyDict_SetItemStringSteal(opcodesDict, "PUNPCKHQDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PUNPCKHQDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PUNPCKLQDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PUNPCKLQDQ));
        PyDict_SetItemStringSteal(opcodesDict, "PUSH", PyLong_FromUint32(triton::arch::x86::ID_INS_PUSH));
        PyDict_SetItemStringSteal(opcodesDict, "PUSHAW", PyLong_FromUint32(triton::arch::x86::ID_INS_PUSHAW));
        PyDict_SetItemStringSteal(opcodesDict, "PUSHAL", PyLong_FromUint32(triton::arch::x86::ID_INS_PUSHAL));
        PyDict_SetItemStringSteal(opcodesDict, "PUSHF", PyLong_FromUint32(triton::arch::x86::ID_INS_PUSHF));
        PyDict_SetItemStringSteal(opcodesDict, "PUSHFD", PyLong_FromUint32(triton::arch::x86::ID_INS_PUSHFD));
        PyDict_SetItemStringSteal(opcodesDict, "PUSHFQ", PyLong_FromUint32(triton::arch::x86::ID_INS_PUSHFQ));
        PyDict_SetItemStringSteal(opcodesDict, "RCL", PyLong_FromUint32(triton::arch::x86::ID_INS_RCL));
        PyDict_SetItemStringSteal(opcodesDict, "RCPPS", PyLong_FromUint32(triton::arch::x86::ID_INS_RCPPS));
        PyDict_SetItemStringSteal(opcodesDict, "RCPSS", PyLong_FromUint32(triton::arch::x86::ID_INS_RCPSS));
        PyDict_SetItemStringSteal(opcodesDict, "RCR", PyLong_FromUint32(triton::arch::x86::ID_INS_RCR));
        PyDict_SetItemStringSteal(opcodesDict, "RDFSBASE", PyLong_FromUint32(triton::arch::x86::ID_INS_RDFSBASE));
        PyDict_SetItemStringSteal(opcodesDict, "RDGSBASE", PyLong_FromUint32(triton::arch::x86::ID_INS_RDGSBASE));
        PyDict_SetItemStringSteal(opcodesDict, "RDMSR", PyLong_FromUint32(triton::arch::x86::ID_INS_RDMSR));
        PyDict_SetItemStringSteal(opcodesDict, "RDPMC", PyLong_FromUint32(triton::arch::x86::ID_INS_RDPMC));
        PyDict_SetItemStringSteal(opcodesDict, "RDRAND", PyLong_FromUint32(triton::arch::x86::ID_INS_RDRAND));
        PyDict_SetItemStringSteal(opcodesDict, "RDSEED", PyLong_FromUint32(triton::arch::x86::ID_INS_RDSEED));
        PyDict_SetItemStringSteal(opcodesDict, "RDTSC", PyLong_FromUint32(triton::arch::x86::ID_INS_RDTSC));
        PyDict_SetItemStringSteal(opcodesDict, "RDTSCP", PyLong_FromUint32(triton::arch::x86::ID_INS_RDTSCP));
        PyDict_SetItemStringSteal(opcodesDict, "ROL", PyLong_FromUint32(triton::arch::x86::ID_INS_ROL));
        PyDict_SetItemStringSteal(opcodesDict, "ROR", PyLong_FromUint32(triton::arch::x86::ID_INS_ROR));
        PyDict_SetItemStringSteal(opcodesDict, "RORX", PyLong_FromUint32(triton::arch::x86::ID_INS_RORX));
        PyDict_SetItemStringSteal(opcodesDict, "ROUNDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_ROUNDPD));
        PyDict_SetItemStringSteal(opcodesDict, "ROUNDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_ROUNDPS));
        PyDict_SetItemStringSteal(opcodesDict, "ROUNDSD", PyLong_FromUint32(triton::arch::x86::ID_INS_ROUNDSD));
        PyDict_SetItemStringSteal(opcodesDict, "ROUNDSS", PyLong_FromUint32(triton::arch::x86::ID_INS_ROUNDSS));
        PyDict_SetItemStringSteal(opcodesDict, "RSM", PyLong_FromUint32(triton::arch::x86::ID_INS_RSM));
        PyDict_SetItemStringSteal(opcodesDict, "RSQRTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_RSQRTPS));
        PyDict_SetItemStringSteal(opcodesDict, "RSQRTSS", PyLong_FromUint32(triton::arch::x86::ID_INS_RSQRTSS));
        PyDict_SetItemStringSteal(opcodesDict, "SAHF", PyLong_FromUint32(triton::arch::x86::ID_INS_SAHF));
        PyDict_SetItemStringSteal(opcodesDict, "SAL", PyLong_FromUint32(triton::arch::x86::ID_INS_SAL));
        PyDict_SetItemStringSteal(opcodesDict, "SALC", PyLong_FromUint32(triton::arch::x86::ID_INS_SALC));
        PyDict_SetItemStringSteal(opcodesDict, "SAR", PyLong_FromUint32(triton::arch::x86::ID_INS_SAR));
        PyDict_SetItemStringSteal(opcodesDict, "SARX", PyLong_FromUint32(triton::arch::x86::ID_INS_SARX));
        PyDict_SetItemStringSteal(opcodesDict, "SBB", PyLong_FromUint32(triton::arch::x86::ID_INS_SBB));
        PyDict_SetItemStringSteal(opcodesDict, "SCASB", PyLong_FromUint32(triton::arch::x86::ID_INS_SCASB));
        PyDict_SetItemStringSteal(opcodesDict, "SCASD", PyLong_FromUint32(triton::arch::x86::ID_INS_SCASD));
        PyDict_SetItemStringSteal(opcodesDict, "SCASQ", PyLong_FromUint32(triton::arch::x86::ID_INS_SCASQ));
        PyDict_SetItemStringSteal(opcodesDict, "SCASW", PyLong_FromUint32(triton::arch::x86::ID_INS_SCASW));
        PyDict_SetItemStringSteal(opcodesDict, "SETAE", PyLong_FromUint32(triton::arch::x86::ID_INS_SETAE));
        PyDict_SetItemStringSteal(opcodesDict, "SETA", PyLong_FromUint32(triton::arch::x86::ID_INS_SETA));
        PyDict_SetItemStringSteal(opcodesDict, "SETBE", PyLong_FromUint32(triton::arch::x86::ID_INS_SETBE));
        PyDict_SetItemStringSteal(opcodesDict, "SETB", PyLong_FromUint32(triton::arch::x86::ID_INS_SETB));
        PyDict_SetItemStringSteal(opcodesDict, "SETE", PyLong_FromUint32(triton::arch::x86::ID_INS_SETE));
        PyDict_SetItemStringSteal(opcodesDict, "SETGE", PyLong_FromUint32(triton::arch::x86::ID_INS_SETGE));
        PyDict_SetItemStringSteal(opcodesDict, "SETG", PyLong_FromUint32(triton::arch::x86::ID_INS_SETG));
        PyDict_SetItemStringSteal(opcodesDict, "SETLE", PyLong_FromUint32(triton::arch::x86::ID_INS_SETLE));
        PyDict_SetItemStringSteal(opcodesDict, "SETL", PyLong_FromUint32(triton::arch::x86::ID_INS_SETL));
        PyDict_SetItemStringSteal(opcodesDict, "SETNE", PyLong_FromUint32(triton::arch::x86::ID_INS_SETNE));
        PyDict_SetItemStringSteal(opcodesDict, "SETNO", PyLong_FromUint32(triton::arch::x86::ID_INS_SETNO));
        PyDict_SetItemStringSteal(opcodesDict, "SETNP", PyLong_FromUint32(triton::arch::x86::ID_INS_SETNP));
        PyDict_SetItemStringSteal(opcodesDict, "SETNS", PyLong_FromUint32(triton::arch::x86::ID_INS_SETNS));
        PyDict_SetItemStringSteal(opcodesDict, "SETO", PyLong_FromUint32(triton::arch::x86::ID_INS_SETO));
        PyDict_SetItemStringSteal(opcodesDict, "SETP", PyLong_FromUint32(triton::arch::x86::ID_INS_SETP));
        PyDict_SetItemStringSteal(opcodesDict, "SETS", PyLong_FromUint32(triton::arch::x86::ID_INS_SETS));
        PyDict_SetItemStringSteal(opcodesDict, "SFENCE", PyLong_FromUint32(triton::arch::x86::ID_INS_SFENCE));
        PyDict_SetItemStringSteal(opcodesDict, "SGDT", PyLong_FromUint32(triton::arch::x86::ID_INS_SGDT));
        PyDict_SetItemStringSteal(opcodesDict, "SHA1MSG1", PyLong_FromUint32(triton::arch::x86::ID_INS_SHA1MSG1));
        PyDict_SetItemStringSteal(opcodesDict, "SHA1MSG2", PyLong_FromUint32(triton::arch::x86::ID_INS_SHA1MSG2));
        PyDict_SetItemStringSteal(opcodesDict, "SHA1NEXTE", PyLong_FromUint32(triton::arch::x86::ID_INS_SHA1NEXTE));
        PyDict_SetItemStringSteal(opcodesDict, "SHA1RNDS4", PyLong_FromUint32(triton::arch::x86::ID_INS_SHA1RNDS4));
        PyDict_SetItemStringSteal(opcodesDict, "SHA256MSG1", PyLong_FromUint32(triton::arch::x86::ID_INS_SHA256MSG1));
        PyDict_SetItemStringSteal(opcodesDict, "SHA256MSG2", PyLong_FromUint32(triton::arch::x86::ID_INS_SHA256MSG2));
        PyDict_SetItemStringSteal(opcodesDict, "SHA256RNDS2", PyLong_FromUint32(triton::arch::x86::ID_INS_SHA256RNDS2));
        PyDict_SetItemStringSteal(opcodesDict, "SHL", PyLong_FromUint32(triton::arch::x86::ID_INS_SHL));
        PyDict_SetItemStringSteal(opcodesDict, "SHLD", PyLong_FromUint32(triton::arch::x86::ID_INS_SHLD));
        PyDict_SetItemStringSteal(opcodesDict, "SHLX", PyLong_FromUint32(triton::arch::x86::ID_INS_SHLX));
        PyDict_SetItemStringSteal(opcodesDict, "SHR", PyLong_FromUint32(triton::arch::x86::ID_INS_SHR));
        PyDict_SetItemStringSteal(opcodesDict, "SHRD", PyLong_FromUint32(triton::arch::x86::ID_INS_SHRD));
        PyDict_SetItemStringSteal(opcodesDict, "SHRX", PyLong_FromUint32(triton::arch::x86::ID_INS_SHRX));
        PyDict_SetItemStringSteal(opcodesDict, "SHUFPD", PyLong_FromUint32(triton::arch::x86::ID_INS_SHUFPD));
        PyDict_SetItemStringSteal(opcodesDict, "SHUFPS", PyLong_FromUint32(triton::arch::x86::ID_INS_SHUFPS));
        PyDict_SetItemStringSteal(opcodesDict, "SIDT", PyLong_FromUint32(triton::arch::x86::ID_INS_SIDT));
        PyDict_SetItemStringSteal(opcodesDict, "FSIN", PyLong_FromUint32(triton::arch::x86::ID_INS_FSIN));
        PyDict_SetItemStringSteal(opcodesDict, "SKINIT", PyLong_FromUint32(triton::arch::x86::ID_INS_SKINIT));
        PyDict_SetItemStringSteal(opcodesDict, "SLDT", PyLong_FromUint32(triton::arch::x86::ID_INS_SLDT));
        PyDict_SetItemStringSteal(opcodesDict, "SMSW", PyLong_FromUint32(triton::arch::x86::ID_INS_SMSW));
        PyDict_SetItemStringSteal(opcodesDict, "SQRTPD", PyLong_FromUint32(triton::arch::x86::ID_INS_SQRTPD));
        PyDict_SetItemStringSteal(opcodesDict, "SQRTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_SQRTPS));
        PyDict_SetItemStringSteal(opcodesDict, "SQRTSD", PyLong_FromUint32(triton::arch::x86::ID_INS_SQRTSD));
        PyDict_SetItemStringSteal(opcodesDict, "SQRTSS", PyLong_FromUint32(triton::arch::x86::ID_INS_SQRTSS));
        PyDict_SetItemStringSteal(opcodesDict, "FSQRT", PyLong_FromUint32(triton::arch::x86::ID_INS_FSQRT));
        PyDict_SetItemStringSteal(opcodesDict, "STAC", PyLong_FromUint32(triton::arch::x86::ID_INS_STAC));
        PyDict_SetItemStringSteal(opcodesDict, "STC", PyLong_FromUint32(triton::arch::x86::ID_INS_STC));
        PyDict_SetItemStringSteal(opcodesDict, "STD", PyLong_FromUint32(triton::arch::x86::ID_INS_STD));
        PyDict_SetItemStringSteal(opcodesDict, "STGI", PyLong_FromUint32(triton::arch::x86::ID_INS_STGI));
        PyDict_SetItemStringSteal(opcodesDict, "STI", PyLong_FromUint32(triton::arch::x86::ID_INS_STI));
        PyDict_SetItemStringSteal(opcodesDict, "STMXCSR", PyLong_FromUint32(triton::arch::x86::ID_INS_STMXCSR));
        PyDict_SetItemStringSteal(opcodesDict, "STOSB", PyLong_FromUint32(triton::arch::x86::ID_INS_STOSB));
        PyDict_SetItemStringSteal(opcodesDict, "STOSD", PyLong_FromUint32(triton::arch::x86::ID_INS_STOSD));
        PyDict_SetItemStringSteal(opcodesDict, "STOSQ", PyLong_FromUint32(triton::arch::x86::ID_INS_STOSQ));
        PyDict_SetItemStringSteal(opcodesDict, "STOSW", PyLong_FromUint32(triton::arch::x86::ID_INS_STOSW));
        PyDict_SetItemStringSteal(opcodesDict, "STR", PyLong_FromUint32(triton::arch::x86::ID_INS_STR));
        PyDict_SetItemStringSteal(opcodesDict, "FST", PyLong_FromUint32(triton::arch::x86::ID_INS_FST));
        PyDict_SetItemStringSteal(opcodesDict, "FSTP", PyLong_FromUint32(triton::arch::x86::ID_INS_FSTP));
        PyDict_SetItemStringSteal(opcodesDict, "FSTPNCE", PyLong_FromUint32(triton::arch::x86::ID_INS_FSTPNCE));
        PyDict_SetItemStringSteal(opcodesDict, "SUBPD", PyLong_FromUint32(triton::arch::x86::ID_INS_SUBPD));
        PyDict_SetItemStringSteal(opcodesDict, "SUBPS", PyLong_FromUint32(triton::arch::x86::ID_INS_SUBPS));
        PyDict_SetItemStringSteal(opcodesDict, "FSUBR", PyLong_FromUint32(triton::arch::x86::ID_INS_FSUBR));
        PyDict_SetItemStringSteal(opcodesDict, "FISUBR", PyLong_FromUint32(triton::arch::x86::ID_INS_FISUBR));
        PyDict_SetItemStringSteal(opcodesDict, "FSUBRP", PyLong_FromUint32(triton::arch::x86::ID_INS_FSUBRP));
        PyDict_SetItemStringSteal(opcodesDict, "SUBSD", PyLong_FromUint32(triton::arch::x86::ID_INS_SUBSD));
        PyDict_SetItemStringSteal(opcodesDict, "SUBSS", PyLong_FromUint32(triton::arch::x86::ID_INS_SUBSS));
        PyDict_SetItemStringSteal(opcodesDict, "FSUB", PyLong_FromUint32(triton::arch::x86::ID_INS_FSUB));
        PyDict_SetItemStringSteal(opcodesDict, "FISUB", PyLong_FromUint32(triton::arch::x86::ID_INS_FISUB));
        PyDict_SetItemStringSteal(opcodesDict, "FSUBP", PyLong_FromUint32(triton::arch::x86::ID_INS_FSUBP));
        PyDict_SetItemStringSteal(opcodesDict, "SWAPGS", PyLong_FromUint32(triton::arch::x86::ID_INS_SWAPGS));
        PyDict_SetItemStringSteal(opcodesDict, "SYSCALL", PyLong_FromUint32(triton::arch::x86::ID_INS_SYSCALL));
        PyDict_SetItemStringSteal(opcodesDict, "SYSENTER", PyLong_FromUint32(triton::arch::x86::ID_INS_SYSENTER));
        PyDict_SetItemStringSteal(opcodesDict, "SYSEXIT", PyLong_FromUint32(triton::arch::x86::ID_INS_SYSEXIT));
        PyDict_SetItemStringSteal(opcodesDict, "SYSRET", PyLong_FromUint32(triton::arch::x86::ID_INS_SYSRET));
        PyDict_SetItemStringSteal(opcodesDict, "T1MSKC", PyLong_FromUint32(triton::arch::x86::ID_INS_T1MSKC));
        PyDict_SetItemStringSteal(opcodesDict, "TEST", PyLong_FromUint32(triton::arch::x86::ID_INS_TEST));
        PyDict_SetItemStringSteal(opcodesDict, "UD2", PyLong_FromUint32(triton::arch::x86::ID_INS_UD2));
        PyDict_SetItemStringSteal(opcodesDict, "FTST", PyLong_FromUint32(triton::arch::x86::ID_INS_FTST));
        PyDict_SetItemStringSteal(opcodesDict, "TZCNT", PyLong_FromUint32(triton::arch::x86::ID_INS_TZCNT));
        PyDict_SetItemStringSteal(opcodesDict, "TZMSK", PyLong_FromUint32(triton::arch::x86::ID_INS_TZMSK));
        PyDict_SetItemStringSteal(opcodesDict, "FUCOMPI", PyLong_FromUint32(triton::arch::x86::ID_INS_FUCOMPI));
        PyDict_SetItemStringSteal(opcodesDict, "FUCOMI", PyLong_FromUint32(triton::arch::x86::ID_INS_FUCOMI));
        PyDict_SetItemStringSteal(opcodesDict, "FUCOMPP", PyLong_FromUint32(triton::arch::x86::ID_INS_FUCOMPP));
        PyDict_SetItemStringSteal(opcodesDict, "FUCOMP", PyLong_FromUint32(triton::arch::x86::ID_INS_FUCOMP));
        PyDict_SetItemStringSteal(opcodesDict, "FUCOM", PyLong_FromUint32(triton::arch::x86::ID_INS_FUCOM));
        PyDict_SetItemStringSteal(opcodesDict, "UD2B", PyLong_FromUint32(triton::arch::x86::ID_INS_UD2B));
        PyDict_SetItemStringSteal(opcodesDict, "UNPCKHPD", PyLong_FromUint32(triton::arch::x86::ID_INS_UNPCKHPD));
        PyDict_SetItemStringSteal(opcodesDict, "UNPCKHPS", PyLong_FromUint32(triton::arch::x86::ID_INS_UNPCKHPS));
        PyDict_SetItemStringSteal(opcodesDict, "UNPCKLPD", PyLong_FromUint32(triton::arch::x86::ID_INS_UNPCKLPD));
        PyDict_SetItemStringSteal(opcodesDict, "UNPCKLPS", PyLong_FromUint32(triton::arch::x86::ID_INS_UNPCKLPS));
        PyDict_SetItemStringSteal(opcodesDict, "VADDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VADDPD));
        PyDict_SetItemStringSteal(opcodesDict, "VADDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VADDPS));
        PyDict_SetItemStringSteal(opcodesDict, "VADDSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VADDSD));
        PyDict_SetItemStringSteal(opcodesDict, "VADDSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VADDSS));
        PyDict_SetItemStringSteal(opcodesDict, "VADDSUBPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VADDSUBPD));
        PyDict_SetItemStringSteal(opcodesDict, "VADDSUBPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VADDSUBPS));
        PyDict_SetItemStringSteal(opcodesDict, "VAESDECLAST", PyLong_FromUint32(triton::arch::x86::ID_INS_VAESDECLAST));
        PyDict_SetItemStringSteal(opcodesDict, "VAESDEC", PyLong_FromUint32(triton::arch::x86::ID_INS_VAESDEC));
        PyDict_SetItemStringSteal(opcodesDict, "VAESENCLAST", PyLong_FromUint32(triton::arch::x86::ID_INS_VAESENCLAST));
        PyDict_SetItemStringSteal(opcodesDict, "VAESENC", PyLong_FromUint32(triton::arch::x86::ID_INS_VAESENC));
        PyDict_SetItemStringSteal(opcodesDict, "VAESIMC", PyLong_FromUint32(triton::arch::x86::ID_INS_VAESIMC));
        PyDict_SetItemStringSteal(opcodesDict, "VAESKEYGENASSIST", PyLong_FromUint32(triton::arch::x86::ID_INS_VAESKEYGENASSIST));
        PyDict_SetItemStringSteal(opcodesDict, "VALIGND", PyLong_FromUint32(triton::arch::x86::ID_INS_VALIGND));
        PyDict_SetItemStringSteal(opcodesDict, "VALIGNQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VALIGNQ));
        PyDict_SetItemStringSteal(opcodesDict, "VANDNPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VANDNPD));
        PyDict_SetItemStringSteal(opcodesDict, "VANDNPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VANDNPS));
        PyDict_SetItemStringSteal(opcodesDict, "VANDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VANDPD));
        PyDict_SetItemStringSteal(opcodesDict, "VANDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VANDPS));
        PyDict_SetItemStringSteal(opcodesDict, "VBLENDMPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VBLENDMPD));
        PyDict_SetItemStringSteal(opcodesDict, "VBLENDMPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VBLENDMPS));
        PyDict_SetItemStringSteal(opcodesDict, "VBLENDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VBLENDPD));
        PyDict_SetItemStringSteal(opcodesDict, "VBLENDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VBLENDPS));
        PyDict_SetItemStringSteal(opcodesDict, "VBLENDVPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VBLENDVPD));
        PyDict_SetItemStringSteal(opcodesDict, "VBLENDVPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VBLENDVPS));
        PyDict_SetItemStringSteal(opcodesDict, "VBROADCASTF128", PyLong_FromUint32(triton::arch::x86::ID_INS_VBROADCASTF128));
        PyDict_SetItemStringSteal(opcodesDict, "VBROADCASTI128", PyLong_FromUint32(triton::arch::x86::ID_INS_VBROADCASTI128));
        PyDict_SetItemStringSteal(opcodesDict, "VBROADCASTI32X4", PyLong_FromUint32(triton::arch::x86::ID_INS_VBROADCASTI32X4));
        PyDict_SetItemStringSteal(opcodesDict, "VBROADCASTI64X4", PyLong_FromUint32(triton::arch::x86::ID_INS_VBROADCASTI64X4));
        PyDict_SetItemStringSteal(opcodesDict, "VBROADCASTSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VBROADCASTSD));
        PyDict_SetItemStringSteal(opcodesDict, "VBROADCASTSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VBROADCASTSS));
        PyDict_SetItemStringSteal(opcodesDict, "VCMPPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VCMPPD));
        PyDict_SetItemStringSteal(opcodesDict, "VCMPPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VCMPPS));
        PyDict_SetItemStringSteal(opcodesDict, "VCMPSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VCMPSD));
        PyDict_SetItemStringSteal(opcodesDict, "VCMPSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VCMPSS));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTDQ2PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTDQ2PD));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTDQ2PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTDQ2PS));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTPD2DQX", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTPD2DQX));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTPD2DQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTPD2DQ));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTPD2PSX", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTPD2PSX));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTPD2PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTPD2PS));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTPD2UDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTPD2UDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTPH2PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTPH2PS));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTPS2DQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTPS2DQ));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTPS2PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTPS2PD));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTPS2PH", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTPS2PH));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTPS2UDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTPS2UDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTSD2SI", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTSD2SI));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTSD2USI", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTSD2USI));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTSS2SI", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTSS2SI));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTSS2USI", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTSS2USI));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTTPD2DQX", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTTPD2DQX));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTTPD2DQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTTPD2DQ));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTTPD2UDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTTPD2UDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTTPS2DQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTTPS2DQ));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTTPS2UDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTTPS2UDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTUDQ2PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTUDQ2PD));
        PyDict_SetItemStringSteal(opcodesDict, "VCVTUDQ2PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VCVTUDQ2PS));
        PyDict_SetItemStringSteal(opcodesDict, "VDIVPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VDIVPD));
        PyDict_SetItemStringSteal(opcodesDict, "VDIVPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VDIVPS));
        PyDict_SetItemStringSteal(opcodesDict, "VDIVSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VDIVSD));
        PyDict_SetItemStringSteal(opcodesDict, "VDIVSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VDIVSS));
        PyDict_SetItemStringSteal(opcodesDict, "VDPPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VDPPD));
        PyDict_SetItemStringSteal(opcodesDict, "VDPPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VDPPS));
        PyDict_SetItemStringSteal(opcodesDict, "VERR", PyLong_FromUint32(triton::arch::x86::ID_INS_VERR));
        PyDict_SetItemStringSteal(opcodesDict, "VERW", PyLong_FromUint32(triton::arch::x86::ID_INS_VERW));
        PyDict_SetItemStringSteal(opcodesDict, "VEXTRACTF128", PyLong_FromUint32(triton::arch::x86::ID_INS_VEXTRACTF128));
        PyDict_SetItemStringSteal(opcodesDict, "VEXTRACTF32X4", PyLong_FromUint32(triton::arch::x86::ID_INS_VEXTRACTF32X4));
        PyDict_SetItemStringSteal(opcodesDict, "VEXTRACTF64X4", PyLong_FromUint32(triton::arch::x86::ID_INS_VEXTRACTF64X4));
        PyDict_SetItemStringSteal(opcodesDict, "VEXTRACTI128", PyLong_FromUint32(triton::arch::x86::ID_INS_VEXTRACTI128));
        PyDict_SetItemStringSteal(opcodesDict, "VEXTRACTI32X4", PyLong_FromUint32(triton::arch::x86::ID_INS_VEXTRACTI32X4));
        PyDict_SetItemStringSteal(opcodesDict, "VEXTRACTI64X4", PyLong_FromUint32(triton::arch::x86::ID_INS_VEXTRACTI64X4));
        PyDict_SetItemStringSteal(opcodesDict, "VEXTRACTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VEXTRACTPS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD132PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD132PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD132PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD132PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD213PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD213PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD213PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD213PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDPD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD231PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD231PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDPS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD231PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD231PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDSD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD213SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD213SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD132SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD132SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD231SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD231SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDSS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD213SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD213SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD132SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD132SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADD231SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADD231SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDSUB132PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDSUB132PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDSUB132PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDSUB132PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDSUB213PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDSUB213PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDSUB213PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDSUB213PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDSUBPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDSUBPD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDSUB231PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDSUB231PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDSUBPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDSUBPS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMADDSUB231PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMADDSUB231PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB132PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB132PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB132PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB132PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB213PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB213PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB213PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB213PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBADD132PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBADD132PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBADD132PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBADD132PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBADD213PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBADD213PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBADD213PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBADD213PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBADDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBADDPD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBADD231PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBADD231PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBADDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBADDPS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBADD231PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBADD231PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBPD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB231PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB231PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBPS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB231PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB231PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBSD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB213SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB213SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB132SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB132SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB231SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB231SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUBSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUBSS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB213SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB213SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB132SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB132SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFMSUB231SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFMSUB231SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD132PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD132PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD132PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD132PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD213PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD213PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD213PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD213PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADDPD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD231PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD231PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADDPS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD231PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD231PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADDSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADDSD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD213SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD213SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD132SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD132SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD231SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD231SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADDSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADDSS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD213SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD213SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD132SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD132SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMADD231SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMADD231SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB132PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB132PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB132PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB132PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB213PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB213PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB213PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB213PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUBPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUBPD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB231PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB231PD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUBPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUBPS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB231PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB231PS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUBSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUBSD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB213SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB213SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB132SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB132SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB231SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB231SD));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUBSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUBSS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB213SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB213SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB132SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB132SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFNMSUB231SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFNMSUB231SS));
        PyDict_SetItemStringSteal(opcodesDict, "VFRCZPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFRCZPD));
        PyDict_SetItemStringSteal(opcodesDict, "VFRCZPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFRCZPS));
        PyDict_SetItemStringSteal(opcodesDict, "VFRCZSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VFRCZSD));
        PyDict_SetItemStringSteal(opcodesDict, "VFRCZSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VFRCZSS));
        PyDict_SetItemStringSteal(opcodesDict, "VORPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VORPD));
        PyDict_SetItemStringSteal(opcodesDict, "VORPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VORPS));
        PyDict_SetItemStringSteal(opcodesDict, "VXORPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VXORPD));
        PyDict_SetItemStringSteal(opcodesDict, "VXORPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VXORPS));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERDPD));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERDPS));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERPF0DPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERPF0DPD));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERPF0DPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERPF0DPS));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERPF0QPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERPF0QPD));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERPF0QPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERPF0QPS));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERPF1DPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERPF1DPD));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERPF1DPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERPF1DPS));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERPF1QPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERPF1QPD));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERPF1QPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERPF1QPS));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERQPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERQPD));
        PyDict_SetItemStringSteal(opcodesDict, "VGATHERQPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VGATHERQPS));
        PyDict_SetItemStringSteal(opcodesDict, "VHADDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VHADDPD));
        PyDict_SetItemStringSteal(opcodesDict, "VHADDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VHADDPS));
        PyDict_SetItemStringSteal(opcodesDict, "VHSUBPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VHSUBPD));
        PyDict_SetItemStringSteal(opcodesDict, "VHSUBPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VHSUBPS));
        PyDict_SetItemStringSteal(opcodesDict, "VINSERTF128", PyLong_FromUint32(triton::arch::x86::ID_INS_VINSERTF128));
        PyDict_SetItemStringSteal(opcodesDict, "VINSERTF32X4", PyLong_FromUint32(triton::arch::x86::ID_INS_VINSERTF32X4));
        PyDict_SetItemStringSteal(opcodesDict, "VINSERTF64X4", PyLong_FromUint32(triton::arch::x86::ID_INS_VINSERTF64X4));
        PyDict_SetItemStringSteal(opcodesDict, "VINSERTI128", PyLong_FromUint32(triton::arch::x86::ID_INS_VINSERTI128));
        PyDict_SetItemStringSteal(opcodesDict, "VINSERTI32X4", PyLong_FromUint32(triton::arch::x86::ID_INS_VINSERTI32X4));
        PyDict_SetItemStringSteal(opcodesDict, "VINSERTI64X4", PyLong_FromUint32(triton::arch::x86::ID_INS_VINSERTI64X4));
        PyDict_SetItemStringSteal(opcodesDict, "VINSERTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VINSERTPS));
        PyDict_SetItemStringSteal(opcodesDict, "VLDDQU", PyLong_FromUint32(triton::arch::x86::ID_INS_VLDDQU));
        PyDict_SetItemStringSteal(opcodesDict, "VLDMXCSR", PyLong_FromUint32(triton::arch::x86::ID_INS_VLDMXCSR));
        PyDict_SetItemStringSteal(opcodesDict, "VMASKMOVDQU", PyLong_FromUint32(triton::arch::x86::ID_INS_VMASKMOVDQU));
        PyDict_SetItemStringSteal(opcodesDict, "VMASKMOVPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMASKMOVPD));
        PyDict_SetItemStringSteal(opcodesDict, "VMASKMOVPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMASKMOVPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMAXPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMAXPD));
        PyDict_SetItemStringSteal(opcodesDict, "VMAXPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMAXPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMAXSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMAXSD));
        PyDict_SetItemStringSteal(opcodesDict, "VMAXSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMAXSS));
        PyDict_SetItemStringSteal(opcodesDict, "VMCALL", PyLong_FromUint32(triton::arch::x86::ID_INS_VMCALL));
        PyDict_SetItemStringSteal(opcodesDict, "VMCLEAR", PyLong_FromUint32(triton::arch::x86::ID_INS_VMCLEAR));
        PyDict_SetItemStringSteal(opcodesDict, "VMFUNC", PyLong_FromUint32(triton::arch::x86::ID_INS_VMFUNC));
        PyDict_SetItemStringSteal(opcodesDict, "VMINPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMINPD));
        PyDict_SetItemStringSteal(opcodesDict, "VMINPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMINPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMINSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMINSD));
        PyDict_SetItemStringSteal(opcodesDict, "VMINSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMINSS));
        PyDict_SetItemStringSteal(opcodesDict, "VMLAUNCH", PyLong_FromUint32(triton::arch::x86::ID_INS_VMLAUNCH));
        PyDict_SetItemStringSteal(opcodesDict, "VMLOAD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMLOAD));
        PyDict_SetItemStringSteal(opcodesDict, "VMMCALL", PyLong_FromUint32(triton::arch::x86::ID_INS_VMMCALL));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVQ));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVDDUP", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVDDUP));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVD));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVDQA32", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVDQA32));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVDQA64", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVDQA64));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVDQA", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVDQA));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVDQU16", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVDQU16));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVDQU32", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVDQU32));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVDQU64", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVDQU64));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVDQU8", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVDQU8));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVDQU", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVDQU));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVHLPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVHLPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVHPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVHPD));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVHPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVHPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVLHPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVLHPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVLPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVLPD));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVLPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVLPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVMSKPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVMSKPD));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVMSKPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVMSKPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVNTDQA", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVNTDQA));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVNTDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVNTDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVNTPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVNTPD));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVNTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVNTPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVSD));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVSHDUP", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVSHDUP));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVSLDUP", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVSLDUP));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVSS));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVUPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVUPD));
        PyDict_SetItemStringSteal(opcodesDict, "VMOVUPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMOVUPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMPSADBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VMPSADBW));
        PyDict_SetItemStringSteal(opcodesDict, "VMPTRLD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMPTRLD));
        PyDict_SetItemStringSteal(opcodesDict, "VMPTRST", PyLong_FromUint32(triton::arch::x86::ID_INS_VMPTRST));
        PyDict_SetItemStringSteal(opcodesDict, "VMREAD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMREAD));
        PyDict_SetItemStringSteal(opcodesDict, "VMRESUME", PyLong_FromUint32(triton::arch::x86::ID_INS_VMRESUME));
        PyDict_SetItemStringSteal(opcodesDict, "VMRUN", PyLong_FromUint32(triton::arch::x86::ID_INS_VMRUN));
        PyDict_SetItemStringSteal(opcodesDict, "VMSAVE", PyLong_FromUint32(triton::arch::x86::ID_INS_VMSAVE));
        PyDict_SetItemStringSteal(opcodesDict, "VMULPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMULPD));
        PyDict_SetItemStringSteal(opcodesDict, "VMULPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMULPS));
        PyDict_SetItemStringSteal(opcodesDict, "VMULSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VMULSD));
        PyDict_SetItemStringSteal(opcodesDict, "VMULSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VMULSS));
        PyDict_SetItemStringSteal(opcodesDict, "VMWRITE", PyLong_FromUint32(triton::arch::x86::ID_INS_VMWRITE));
        PyDict_SetItemStringSteal(opcodesDict, "VMXOFF", PyLong_FromUint32(triton::arch::x86::ID_INS_VMXOFF));
        PyDict_SetItemStringSteal(opcodesDict, "VMXON", PyLong_FromUint32(triton::arch::x86::ID_INS_VMXON));
        PyDict_SetItemStringSteal(opcodesDict, "VPABSB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPABSB));
        PyDict_SetItemStringSteal(opcodesDict, "VPABSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPABSD));
        PyDict_SetItemStringSteal(opcodesDict, "VPABSQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPABSQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPABSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPABSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPACKSSDW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPACKSSDW));
        PyDict_SetItemStringSteal(opcodesDict, "VPACKSSWB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPACKSSWB));
        PyDict_SetItemStringSteal(opcodesDict, "VPACKUSDW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPACKUSDW));
        PyDict_SetItemStringSteal(opcodesDict, "VPACKUSWB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPACKUSWB));
        PyDict_SetItemStringSteal(opcodesDict, "VPADDB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPADDB));
        PyDict_SetItemStringSteal(opcodesDict, "VPADDD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPADDD));
        PyDict_SetItemStringSteal(opcodesDict, "VPADDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPADDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPADDSB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPADDSB));
        PyDict_SetItemStringSteal(opcodesDict, "VPADDSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPADDSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPADDUSB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPADDUSB));
        PyDict_SetItemStringSteal(opcodesDict, "VPADDUSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPADDUSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPADDW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPADDW));
        PyDict_SetItemStringSteal(opcodesDict, "VPALIGNR", PyLong_FromUint32(triton::arch::x86::ID_INS_VPALIGNR));
        PyDict_SetItemStringSteal(opcodesDict, "VPANDD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPANDD));
        PyDict_SetItemStringSteal(opcodesDict, "VPANDND", PyLong_FromUint32(triton::arch::x86::ID_INS_VPANDND));
        PyDict_SetItemStringSteal(opcodesDict, "VPANDNQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPANDNQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPANDN", PyLong_FromUint32(triton::arch::x86::ID_INS_VPANDN));
        PyDict_SetItemStringSteal(opcodesDict, "VPANDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPANDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPAND", PyLong_FromUint32(triton::arch::x86::ID_INS_VPAND));
        PyDict_SetItemStringSteal(opcodesDict, "VPAVGB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPAVGB));
        PyDict_SetItemStringSteal(opcodesDict, "VPAVGW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPAVGW));
        PyDict_SetItemStringSteal(opcodesDict, "VPBLENDD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBLENDD));
        PyDict_SetItemStringSteal(opcodesDict, "VPBLENDMD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBLENDMD));
        PyDict_SetItemStringSteal(opcodesDict, "VPBLENDMQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBLENDMQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPBLENDVB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBLENDVB));
        PyDict_SetItemStringSteal(opcodesDict, "VPBLENDW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBLENDW));
        PyDict_SetItemStringSteal(opcodesDict, "VPBROADCASTB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBROADCASTB));
        PyDict_SetItemStringSteal(opcodesDict, "VPBROADCASTD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBROADCASTD));
        PyDict_SetItemStringSteal(opcodesDict, "VPBROADCASTMB2Q", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBROADCASTMB2Q));
        PyDict_SetItemStringSteal(opcodesDict, "VPBROADCASTMW2D", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBROADCASTMW2D));
        PyDict_SetItemStringSteal(opcodesDict, "VPBROADCASTQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBROADCASTQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPBROADCASTW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPBROADCASTW));
        PyDict_SetItemStringSteal(opcodesDict, "VPCLMULQDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCLMULQDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMOV", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMOV));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMP", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMP));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPD));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPEQB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPEQB));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPEQD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPEQD));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPEQQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPEQQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPEQW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPEQW));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPESTRI", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPESTRI));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPESTRM", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPESTRM));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPGTB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPGTB));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPGTD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPGTD));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPGTQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPGTQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPGTW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPGTW));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPISTRI", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPISTRI));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPISTRM", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPISTRM));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPUD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPUD));
        PyDict_SetItemStringSteal(opcodesDict, "VPCMPUQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCMPUQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPCOMB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCOMB));
        PyDict_SetItemStringSteal(opcodesDict, "VPCOMD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCOMD));
        PyDict_SetItemStringSteal(opcodesDict, "VPCOMQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCOMQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPCOMUB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCOMUB));
        PyDict_SetItemStringSteal(opcodesDict, "VPCOMUD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCOMUD));
        PyDict_SetItemStringSteal(opcodesDict, "VPCOMUQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCOMUQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPCOMUW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCOMUW));
        PyDict_SetItemStringSteal(opcodesDict, "VPCOMW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCOMW));
        PyDict_SetItemStringSteal(opcodesDict, "VPCONFLICTD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCONFLICTD));
        PyDict_SetItemStringSteal(opcodesDict, "VPCONFLICTQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPCONFLICTQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPERM2F128", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERM2F128));
        PyDict_SetItemStringSteal(opcodesDict, "VPERM2I128", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERM2I128));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMD));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMI2D", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMI2D));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMI2PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMI2PD));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMI2PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMI2PS));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMI2Q", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMI2Q));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMIL2PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMIL2PD));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMIL2PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMIL2PS));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMILPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMILPD));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMILPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMILPS));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMPD));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMPS));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMT2D", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMT2D));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMT2PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMT2PD));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMT2PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMT2PS));
        PyDict_SetItemStringSteal(opcodesDict, "VPERMT2Q", PyLong_FromUint32(triton::arch::x86::ID_INS_VPERMT2Q));
        PyDict_SetItemStringSteal(opcodesDict, "VPEXTRB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPEXTRB));
        PyDict_SetItemStringSteal(opcodesDict, "VPEXTRD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPEXTRD));
        PyDict_SetItemStringSteal(opcodesDict, "VPEXTRQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPEXTRQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPEXTRW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPEXTRW));
        PyDict_SetItemStringSteal(opcodesDict, "VPGATHERDD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPGATHERDD));
        PyDict_SetItemStringSteal(opcodesDict, "VPGATHERDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPGATHERDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPGATHERQD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPGATHERQD));
        PyDict_SetItemStringSteal(opcodesDict, "VPGATHERQQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPGATHERQQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDBD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDBD));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDBQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDBQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDBW));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDD));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDUBD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDUBD));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDUBQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDUBQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDUBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDUBW));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDUDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDUDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDUWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDUWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDUWQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDUWQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDWQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDWQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPHADDW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHADDW));
        PyDict_SetItemStringSteal(opcodesDict, "VPHMINPOSUW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHMINPOSUW));
        PyDict_SetItemStringSteal(opcodesDict, "VPHSUBBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHSUBBW));
        PyDict_SetItemStringSteal(opcodesDict, "VPHSUBDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHSUBDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPHSUBD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHSUBD));
        PyDict_SetItemStringSteal(opcodesDict, "VPHSUBSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHSUBSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPHSUBWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHSUBWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPHSUBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPHSUBW));
        PyDict_SetItemStringSteal(opcodesDict, "VPINSRB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPINSRB));
        PyDict_SetItemStringSteal(opcodesDict, "VPINSRD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPINSRD));
        PyDict_SetItemStringSteal(opcodesDict, "VPINSRQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPINSRQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPINSRW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPINSRW));
        PyDict_SetItemStringSteal(opcodesDict, "VPLZCNTD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPLZCNTD));
        PyDict_SetItemStringSteal(opcodesDict, "VPLZCNTQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPLZCNTQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMACSDD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMACSDD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMACSDQH", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMACSDQH));
        PyDict_SetItemStringSteal(opcodesDict, "VPMACSDQL", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMACSDQL));
        PyDict_SetItemStringSteal(opcodesDict, "VPMACSSDD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMACSSDD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMACSSDQH", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMACSSDQH));
        PyDict_SetItemStringSteal(opcodesDict, "VPMACSSDQL", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMACSSDQL));
        PyDict_SetItemStringSteal(opcodesDict, "VPMACSSWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMACSSWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMACSSWW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMACSSWW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMACSWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMACSWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMACSWW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMACSWW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMADCSSWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMADCSSWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMADCSWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMADCSWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMADDUBSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMADDUBSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMADDWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMADDWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMASKMOVD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMASKMOVD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMASKMOVQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMASKMOVQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMAXSB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMAXSB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMAXSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMAXSD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMAXSQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMAXSQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMAXSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMAXSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMAXUB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMAXUB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMAXUD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMAXUD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMAXUQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMAXUQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMAXUW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMAXUW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMINSB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMINSB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMINSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMINSD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMINSQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMINSQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMINSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMINSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMINUB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMINUB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMINUD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMINUD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMINUQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMINUQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMINUW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMINUW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVDB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVDB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVDW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVDW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVMSKB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVMSKB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVQB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVQB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVQD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVQD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVQW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVQW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSDB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSDB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSDW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSDW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSQB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSQB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSQD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSQD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSQW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSQW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSXBD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSXBD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSXBQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSXBQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSXBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSXBW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSXDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSXDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSXWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSXWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVSXWQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVSXWQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVUSDB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVUSDB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVUSDW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVUSDW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVUSQB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVUSQB));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVUSQD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVUSQD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVUSQW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVUSQW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVZXBD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVZXBD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVZXBQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVZXBQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVZXBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVZXBW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVZXDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVZXDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVZXWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVZXWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMOVZXWQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMOVZXWQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMULDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMULDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPMULHRSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMULHRSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMULHUW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMULHUW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMULHW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMULHW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMULLD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMULLD));
        PyDict_SetItemStringSteal(opcodesDict, "VPMULLW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMULLW));
        PyDict_SetItemStringSteal(opcodesDict, "VPMULUDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPMULUDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPORD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPORD));
        PyDict_SetItemStringSteal(opcodesDict, "VPORQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPORQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPOR", PyLong_FromUint32(triton::arch::x86::ID_INS_VPOR));
        PyDict_SetItemStringSteal(opcodesDict, "VPPERM", PyLong_FromUint32(triton::arch::x86::ID_INS_VPPERM));
        PyDict_SetItemStringSteal(opcodesDict, "VPROTB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPROTB));
        PyDict_SetItemStringSteal(opcodesDict, "VPROTD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPROTD));
        PyDict_SetItemStringSteal(opcodesDict, "VPROTQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPROTQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPROTW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPROTW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSADBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSADBW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSCATTERDD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSCATTERDD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSCATTERDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSCATTERDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSCATTERQD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSCATTERQD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSCATTERQQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSCATTERQQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHAB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHAB));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHAD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHAD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHAQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHAQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHAW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHAW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHLB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHLB));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHLD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHLD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHLQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHLQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHLW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHLW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHUFB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHUFB));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHUFD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHUFD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHUFHW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHUFHW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSHUFLW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSHUFLW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSIGNB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSIGNB));
        PyDict_SetItemStringSteal(opcodesDict, "VPSIGND", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSIGND));
        PyDict_SetItemStringSteal(opcodesDict, "VPSIGNW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSIGNW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSLLDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSLLDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSLLD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSLLD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSLLQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSLLQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSLLVD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSLLVD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSLLVQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSLLVQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSLLW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSLLW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRAD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRAD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRAQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRAQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRAVD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRAVD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRAVQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRAVQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRAW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRAW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRLDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRLDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRLD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRLD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRLQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRLQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRLVD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRLVD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRLVQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRLVQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSRLW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSRLW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSUBB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSUBB));
        PyDict_SetItemStringSteal(opcodesDict, "VPSUBD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSUBD));
        PyDict_SetItemStringSteal(opcodesDict, "VPSUBQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSUBQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPSUBSB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSUBSB));
        PyDict_SetItemStringSteal(opcodesDict, "VPSUBSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSUBSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSUBUSB", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSUBUSB));
        PyDict_SetItemStringSteal(opcodesDict, "VPSUBUSW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSUBUSW));
        PyDict_SetItemStringSteal(opcodesDict, "VPSUBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPSUBW));
        PyDict_SetItemStringSteal(opcodesDict, "VPTESTMD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPTESTMD));
        PyDict_SetItemStringSteal(opcodesDict, "VPTESTMQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPTESTMQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPTESTNMD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPTESTNMD));
        PyDict_SetItemStringSteal(opcodesDict, "VPTESTNMQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPTESTNMQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPTEST", PyLong_FromUint32(triton::arch::x86::ID_INS_VPTEST));
        PyDict_SetItemStringSteal(opcodesDict, "VPUNPCKHBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPUNPCKHBW));
        PyDict_SetItemStringSteal(opcodesDict, "VPUNPCKHDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPUNPCKHDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPUNPCKHQDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPUNPCKHQDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPUNPCKHWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPUNPCKHWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPUNPCKLBW", PyLong_FromUint32(triton::arch::x86::ID_INS_VPUNPCKLBW));
        PyDict_SetItemStringSteal(opcodesDict, "VPUNPCKLDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPUNPCKLDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPUNPCKLQDQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPUNPCKLQDQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPUNPCKLWD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPUNPCKLWD));
        PyDict_SetItemStringSteal(opcodesDict, "VPXORD", PyLong_FromUint32(triton::arch::x86::ID_INS_VPXORD));
        PyDict_SetItemStringSteal(opcodesDict, "VPXORQ", PyLong_FromUint32(triton::arch::x86::ID_INS_VPXORQ));
        PyDict_SetItemStringSteal(opcodesDict, "VPXOR", PyLong_FromUint32(triton::arch::x86::ID_INS_VPXOR));
        PyDict_SetItemStringSteal(opcodesDict, "VRCP14PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VRCP14PD));
        PyDict_SetItemStringSteal(opcodesDict, "VRCP14PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRCP14PS));
        PyDict_SetItemStringSteal(opcodesDict, "VRCP14SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VRCP14SD));
        PyDict_SetItemStringSteal(opcodesDict, "VRCP14SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRCP14SS));
        PyDict_SetItemStringSteal(opcodesDict, "VRCP28PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VRCP28PD));
        PyDict_SetItemStringSteal(opcodesDict, "VRCP28PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRCP28PS));
        PyDict_SetItemStringSteal(opcodesDict, "VRCP28SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VRCP28SD));
        PyDict_SetItemStringSteal(opcodesDict, "VRCP28SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRCP28SS));
        PyDict_SetItemStringSteal(opcodesDict, "VRCPPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRCPPS));
        PyDict_SetItemStringSteal(opcodesDict, "VRCPSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRCPSS));
        PyDict_SetItemStringSteal(opcodesDict, "VRNDSCALEPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VRNDSCALEPD));
        PyDict_SetItemStringSteal(opcodesDict, "VRNDSCALEPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRNDSCALEPS));
        PyDict_SetItemStringSteal(opcodesDict, "VRNDSCALESD", PyLong_FromUint32(triton::arch::x86::ID_INS_VRNDSCALESD));
        PyDict_SetItemStringSteal(opcodesDict, "VRNDSCALESS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRNDSCALESS));
        PyDict_SetItemStringSteal(opcodesDict, "VROUNDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VROUNDPD));
        PyDict_SetItemStringSteal(opcodesDict, "VROUNDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VROUNDPS));
        PyDict_SetItemStringSteal(opcodesDict, "VROUNDSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VROUNDSD));
        PyDict_SetItemStringSteal(opcodesDict, "VROUNDSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VROUNDSS));
        PyDict_SetItemStringSteal(opcodesDict, "VRSQRT14PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VRSQRT14PD));
        PyDict_SetItemStringSteal(opcodesDict, "VRSQRT14PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRSQRT14PS));
        PyDict_SetItemStringSteal(opcodesDict, "VRSQRT14SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VRSQRT14SD));
        PyDict_SetItemStringSteal(opcodesDict, "VRSQRT14SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRSQRT14SS));
        PyDict_SetItemStringSteal(opcodesDict, "VRSQRT28PD", PyLong_FromUint32(triton::arch::x86::ID_INS_VRSQRT28PD));
        PyDict_SetItemStringSteal(opcodesDict, "VRSQRT28PS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRSQRT28PS));
        PyDict_SetItemStringSteal(opcodesDict, "VRSQRT28SD", PyLong_FromUint32(triton::arch::x86::ID_INS_VRSQRT28SD));
        PyDict_SetItemStringSteal(opcodesDict, "VRSQRT28SS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRSQRT28SS));
        PyDict_SetItemStringSteal(opcodesDict, "VRSQRTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRSQRTPS));
        PyDict_SetItemStringSteal(opcodesDict, "VRSQRTSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VRSQRTSS));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERDPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERDPD));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERDPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERDPS));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERPF0DPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERPF0DPD));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERPF0DPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERPF0DPS));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERPF0QPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERPF0QPD));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERPF0QPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERPF0QPS));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERPF1DPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERPF1DPD));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERPF1DPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERPF1DPS));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERPF1QPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERPF1QPD));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERPF1QPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERPF1QPS));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERQPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERQPD));
        PyDict_SetItemStringSteal(opcodesDict, "VSCATTERQPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSCATTERQPS));
        PyDict_SetItemStringSteal(opcodesDict, "VSHUFPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSHUFPD));
        PyDict_SetItemStringSteal(opcodesDict, "VSHUFPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSHUFPS));
        PyDict_SetItemStringSteal(opcodesDict, "VSQRTPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSQRTPD));
        PyDict_SetItemStringSteal(opcodesDict, "VSQRTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSQRTPS));
        PyDict_SetItemStringSteal(opcodesDict, "VSQRTSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSQRTSD));
        PyDict_SetItemStringSteal(opcodesDict, "VSQRTSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSQRTSS));
        PyDict_SetItemStringSteal(opcodesDict, "VSTMXCSR", PyLong_FromUint32(triton::arch::x86::ID_INS_VSTMXCSR));
        PyDict_SetItemStringSteal(opcodesDict, "VSUBPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSUBPD));
        PyDict_SetItemStringSteal(opcodesDict, "VSUBPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSUBPS));
        PyDict_SetItemStringSteal(opcodesDict, "VSUBSD", PyLong_FromUint32(triton::arch::x86::ID_INS_VSUBSD));
        PyDict_SetItemStringSteal(opcodesDict, "VSUBSS", PyLong_FromUint32(triton::arch::x86::ID_INS_VSUBSS));
        PyDict_SetItemStringSteal(opcodesDict, "VTESTPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VTESTPD));
        PyDict_SetItemStringSteal(opcodesDict, "VTESTPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VTESTPS));
        PyDict_SetItemStringSteal(opcodesDict, "VUNPCKHPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VUNPCKHPD));
        PyDict_SetItemStringSteal(opcodesDict, "VUNPCKHPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VUNPCKHPS));
        PyDict_SetItemStringSteal(opcodesDict, "VUNPCKLPD", PyLong_FromUint32(triton::arch::x86::ID_INS_VUNPCKLPD));
        PyDict_SetItemStringSteal(opcodesDict, "VUNPCKLPS", PyLong_FromUint32(triton::arch::x86::ID_INS_VUNPCKLPS));
        PyDict_SetItemStringSteal(opcodesDict, "VZEROALL", PyLong_FromUint32(triton::arch::x86::ID_INS_VZEROALL));
        PyDict_SetItemStringSteal(opcodesDict, "VZEROUPPER", PyLong_FromUint32(triton::arch::x86::ID_INS_VZEROUPPER));
        PyDict_SetItemStringSteal(opcodesDict, "WAIT", PyLong_FromUint32(triton::arch::x86::ID_INS_WAIT));
        PyDict_SetItemStringSteal(opcodesDict, "WBINVD", PyLong_FromUint32(triton::arch::x86::ID_INS_WBINVD));
        PyDict_SetItemStringSteal(opcodesDict, "WRFSBASE", PyLong_FromUint32(triton::arch::x86::ID_INS_WRFSBASE));
        PyDict_SetItemStringSteal(opcodesDict, "WRGSBASE", PyLong_FromUint32(triton::arch::x86::ID_INS_WRGSBASE));
        PyDict_SetItemStringSteal(opcodesDict, "WRMSR", PyLong_FromUint32(triton::arch::x86::ID_INS_WRMSR));
        PyDict_SetItemStringSteal(opcodesDict, "XABORT", PyLong_FromUint32(triton::arch::x86::ID_INS_XABORT));
        PyDict_SetItemStringSteal(opcodesDict, "XACQUIRE", PyLong_FromUint32(triton::arch::x86::ID_INS_XACQUIRE));
        PyDict_SetItemStringSteal(opcodesDict, "XBEGIN", PyLong_FromUint32(triton::arch::x86::ID_INS_XBEGIN));
        PyDict_SetItemStringSteal(opcodesDict, "XCHG", PyLong_FromUint32(triton::arch::x86::ID_INS_XCHG));
        PyDict_SetItemStringSteal(opcodesDict, "FXCH", PyLong_FromUint32(triton::arch::x86::ID_INS_FXCH));
        PyDict_SetItemStringSteal(opcodesDict, "XCRYPTCBC", PyLong_FromUint32(triton::arch::x86::ID_INS_XCRYPTCBC));
        PyDict_SetItemStringSteal(opcodesDict, "XCRYPTCFB", PyLong_FromUint32(triton::arch::x86::ID_INS_XCRYPTCFB));
        PyDict_SetItemStringSteal(opcodesDict, "XCRYPTCTR", PyLong_FromUint32(triton::arch::x86::ID_INS_XCRYPTCTR));
        PyDict_SetItemStringSteal(opcodesDict, "XCRYPTECB", PyLong_FromUint32(triton::arch::x86::ID_INS_XCRYPTECB));
        PyDict_SetItemStringSteal(opcodesDict, "XCRYPTOFB", PyLong_FromUint32(triton::arch::x86::ID_INS_XCRYPTOFB));
        PyDict_SetItemStringSteal(opcodesDict, "XEND", PyLong_FromUint32(triton::arch::x86::ID_INS_XEND));
        PyDict_SetItemStringSteal(opcodesDict, "XGETBV", PyLong_FromUint32(triton::arch::x86::ID_INS_XGETBV));
        PyDict_SetItemStringSteal(opcodesDict, "XLATB", PyLong_FromUint32(triton::arch::x86::ID_INS_XLATB));
        PyDict_SetItemStringSteal(opcodesDict, "XRELEASE", PyLong_FromUint32(triton::arch::x86::ID_INS_XRELEASE));
        PyDict_SetItemStringSteal(opcodesDict, "XRSTOR", PyLong_FromUint32(triton::arch::x86::ID_INS_XRSTOR));
        PyDict_SetItemStringSteal(opcodesDict, "XRSTOR64", PyLong_FromUint32(triton::arch::x86::ID_INS_XRSTOR64));
        PyDict_SetItemStringSteal(opcodesDict, "XSAVE", PyLong_FromUint32(triton::arch::x86::ID_INS_XSAVE));
        PyDict_SetItemStringSteal(opcodesDict, "XSAVE64", PyLong_FromUint32(triton::arch::x86::ID_INS_XSAVE64));
        PyDict_SetItemStringSteal(opcodesDict, "XSAVEOPT", PyLong_FromUint32(triton::arch::x86::ID_INS_XSAVEOPT));
        PyDict_SetItemStringSteal(opcodesDict, "XSAVEOPT64", PyLong_FromUint32(triton::arch::x86::ID_INS_XSAVEOPT64));
        PyDict_SetItemStringSteal(opcodesDict, "XSETBV", PyLong_FromUint32(triton::arch::x86::ID_INS_XSETBV));
        PyDict_SetItemStringSteal(opcodesDict, "XSHA1", PyLong_FromUint32(triton::arch::x86::ID_INS_XSHA1));
        PyDict_SetItemStringSteal(opcodesDict, "XSHA256", PyLong_FromUint32(triton::arch::x86::ID_INS_XSHA256));
        PyDict_SetItemStringSteal(opcodesDict, "XSTORE", PyLong_FromUint32(triton::arch::x86::ID_INS_XSTORE));
        PyDict_SetItemStringSteal(opcodesDict, "XTEST", PyLong_FromUint32(triton::arch::x86::ID_INS_XTEST));
      }

    }; /* python namespace */
  }; /* bindings namespace */
}; /* triton namespace */
