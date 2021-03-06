/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define V24_REGNUM 56
#define SVE_STRICT_GP 1
#define SP_REGNUM 31
#define R5_REGNUM 5
#define V6_REGNUM 38
#define R8_REGNUM 8
#define V2_REGNUM 34
#define R12_REGNUM 12
#define P4_REGNUM 72
#define P3_REGNUM 71
#define P7_REGNUM 75
#define R10_REGNUM 10
#define V15_REGNUM 47
#define R24_REGNUM 24
#define SVE_RELAXED_GP 0
#define R16_REGNUM 16
#define R0_REGNUM 0
#define SPECULATION_SCRATCH_REGNUM 14
#define IP0_REGNUM 16
#define V5_REGNUM 37
#define V4_REGNUM 36
#define V8_REGNUM 40
#define R15_REGNUM 15
#define R26_REGNUM 26
#define V18_REGNUM 50
#define R27_REGNUM 27
#define P11_REGNUM 79
#define SFP_REGNUM 64
#define EP0_REGNUM 12
#define V12_REGNUM 44
#define V31_REGNUM 63
#define FP_REGNUM 29
#define V0_REGNUM 32
#define R3_REGNUM 3
#define R30_REGNUM 30
#define P2_REGNUM 70
#define V10_REGNUM 42
#define R22_REGNUM 22
#define V22_REGNUM 54
#define R19_REGNUM 19
#define SVE_MAYBE_NOT_PTRUE 0
#define V25_REGNUM 57
#define R6_REGNUM 6
#define R9_REGNUM 9
#define STACK_CLASH_SVE_CFA_REGNUM 11
#define V3_REGNUM 35
#define R13_REGNUM 13
#define P8_REGNUM 76
#define V16_REGNUM 48
#define R25_REGNUM 25
#define LAST_SAVED_REGNUM 83
#define V26_REGNUM 58
#define V20_REGNUM 52
#define V28_REGNUM 60
#define R1_REGNUM 1
#define EP1_REGNUM 13
#define SVE_KNOWN_PTRUE 1
#define IP1_REGNUM 17
#define AP_REGNUM 65
#define P14_REGNUM 82
#define P0_REGNUM 68
#define FFRT_REGNUM 85
#define R28_REGNUM 28
#define P12_REGNUM 80
#define R4_REGNUM 4
#define SPECULATION_TRACKER_REGNUM 15
#define R7_REGNUM 7
#define V1_REGNUM 33
#define V19_REGNUM 51
#define V11_REGNUM 43
#define R20_REGNUM 20
#define VG_REGNUM 67
#define V27_REGNUM 59
#define V14_REGNUM 46
#define R23_REGNUM 23
#define V9_REGNUM 41
#define P15_REGNUM 83
#define V23_REGNUM 55
#define LR_REGNUM 30
#define CC_REGNUM 66
#define PROBE_STACK_FIRST_REGNUM 10
#define V7_REGNUM 39
#define R14_REGNUM 14
#define P6_REGNUM 74
#define P9_REGNUM 77
#define V17_REGNUM 49
#define P10_REGNUM 78
#define V29_REGNUM 61
#define R2_REGNUM 2
#define V30_REGNUM 62
#define PROBE_STACK_SECOND_REGNUM 11
#define R11_REGNUM 11
#define V13_REGNUM 45
#define R17_REGNUM 17
#define FFR_REGNUM 84
#define R18_REGNUM 18
#define P1_REGNUM 69
#define P5_REGNUM 73
#define R21_REGNUM 21
#define R29_REGNUM 29
#define P13_REGNUM 81
#define V21_REGNUM 53

enum arches {
  ARCHES_ANY = 0,
  ARCHES_RCPC8_4 = 1,
  ARCHES_FP = 2,
  ARCHES_SIMD = 3,
  ARCHES_SVE = 4,
  ARCHES_FP16 = 5
};
#define NUM_ARCHES_VALUES 6
extern const char *const arches_strings[];

enum unspec {
  UNSPEC_AUTIA1716 = 0,
  UNSPEC_AUTIB1716 = 1,
  UNSPEC_AUTIASP = 2,
  UNSPEC_AUTIBSP = 3,
  UNSPEC_CALLEE_ABI = 4,
  UNSPEC_CASESI = 5,
  UNSPEC_CRC32B = 6,
  UNSPEC_CRC32CB = 7,
  UNSPEC_CRC32CH = 8,
  UNSPEC_CRC32CW = 9,
  UNSPEC_CRC32CX = 10,
  UNSPEC_CRC32H = 11,
  UNSPEC_CRC32W = 12,
  UNSPEC_CRC32X = 13,
  UNSPEC_FCVTZS = 14,
  UNSPEC_FCVTZU = 15,
  UNSPEC_FJCVTZS = 16,
  UNSPEC_FRINT32Z = 17,
  UNSPEC_FRINT32X = 18,
  UNSPEC_FRINT64Z = 19,
  UNSPEC_FRINT64X = 20,
  UNSPEC_URECPE = 21,
  UNSPEC_FRECPE = 22,
  UNSPEC_FRECPS = 23,
  UNSPEC_FRECPX = 24,
  UNSPEC_FRINTA = 25,
  UNSPEC_FRINTI = 26,
  UNSPEC_FRINTM = 27,
  UNSPEC_FRINTN = 28,
  UNSPEC_FRINTP = 29,
  UNSPEC_FRINTX = 30,
  UNSPEC_FRINTZ = 31,
  UNSPEC_GOTSMALLPIC = 32,
  UNSPEC_GOTSMALLPIC28K = 33,
  UNSPEC_GOTSMALLTLS = 34,
  UNSPEC_GOTTINYPIC = 35,
  UNSPEC_GOTTINYTLS = 36,
  UNSPEC_LD1 = 37,
  UNSPEC_LD2 = 38,
  UNSPEC_LD2_DREG = 39,
  UNSPEC_LD2_DUP = 40,
  UNSPEC_LD3 = 41,
  UNSPEC_LD3_DREG = 42,
  UNSPEC_LD3_DUP = 43,
  UNSPEC_LD4 = 44,
  UNSPEC_LD4_DREG = 45,
  UNSPEC_LD4_DUP = 46,
  UNSPEC_LD2_LANE = 47,
  UNSPEC_LD3_LANE = 48,
  UNSPEC_LD4_LANE = 49,
  UNSPEC_MB = 50,
  UNSPEC_NOP = 51,
  UNSPEC_PACIA1716 = 52,
  UNSPEC_PACIB1716 = 53,
  UNSPEC_PACIASP = 54,
  UNSPEC_PACIBSP = 55,
  UNSPEC_PRLG_STK = 56,
  UNSPEC_REV = 57,
  UNSPEC_RBIT = 58,
  UNSPEC_SABAL = 59,
  UNSPEC_SABAL2 = 60,
  UNSPEC_SABDL = 61,
  UNSPEC_SABDL2 = 62,
  UNSPEC_SADALP = 63,
  UNSPEC_SCVTF = 64,
  UNSPEC_SISD_NEG = 65,
  UNSPEC_SISD_SSHL = 66,
  UNSPEC_SISD_USHL = 67,
  UNSPEC_SSHL_2S = 68,
  UNSPEC_ST1 = 69,
  UNSPEC_ST2 = 70,
  UNSPEC_ST3 = 71,
  UNSPEC_ST4 = 72,
  UNSPEC_ST2_LANE = 73,
  UNSPEC_ST3_LANE = 74,
  UNSPEC_ST4_LANE = 75,
  UNSPEC_TLS = 76,
  UNSPEC_TLSDESC = 77,
  UNSPEC_TLSLE12 = 78,
  UNSPEC_TLSLE24 = 79,
  UNSPEC_TLSLE32 = 80,
  UNSPEC_TLSLE48 = 81,
  UNSPEC_UABAL = 82,
  UNSPEC_UABAL2 = 83,
  UNSPEC_UABDL = 84,
  UNSPEC_UABDL2 = 85,
  UNSPEC_UADALP = 86,
  UNSPEC_UCVTF = 87,
  UNSPEC_USHL_2S = 88,
  UNSPEC_VSTRUCTDUMMY = 89,
  UNSPEC_SSP_SYSREG = 90,
  UNSPEC_SP_SET = 91,
  UNSPEC_SP_TEST = 92,
  UNSPEC_RSHRN = 93,
  UNSPEC_RSQRT = 94,
  UNSPEC_RSQRTE = 95,
  UNSPEC_RSQRTS = 96,
  UNSPEC_NZCV = 97,
  UNSPEC_XPACLRI = 98,
  UNSPEC_LD1_SVE = 99,
  UNSPEC_ST1_SVE = 100,
  UNSPEC_LDNT1_SVE = 101,
  UNSPEC_STNT1_SVE = 102,
  UNSPEC_LD1RQ = 103,
  UNSPEC_LD1_GATHER = 104,
  UNSPEC_LDFF1_GATHER = 105,
  UNSPEC_LDNT1_GATHER = 106,
  UNSPEC_ST1_SCATTER = 107,
  UNSPEC_STNT1_SCATTER = 108,
  UNSPEC_PRED_X = 109,
  UNSPEC_PRED_Z = 110,
  UNSPEC_PTEST = 111,
  UNSPEC_PTRUE = 112,
  UNSPEC_UNPACKSHI = 113,
  UNSPEC_UNPACKUHI = 114,
  UNSPEC_UNPACKSLO = 115,
  UNSPEC_UNPACKULO = 116,
  UNSPEC_PACK = 117,
  UNSPEC_WHILEGE = 118,
  UNSPEC_WHILEGT = 119,
  UNSPEC_WHILEHI = 120,
  UNSPEC_WHILEHS = 121,
  UNSPEC_WHILELE = 122,
  UNSPEC_WHILELO = 123,
  UNSPEC_WHILELS = 124,
  UNSPEC_WHILELT = 125,
  UNSPEC_WHILERW = 126,
  UNSPEC_WHILEWR = 127,
  UNSPEC_LDN = 128,
  UNSPEC_STN = 129,
  UNSPEC_INSR = 130,
  UNSPEC_CLASTA = 131,
  UNSPEC_CLASTB = 132,
  UNSPEC_FADDA = 133,
  UNSPEC_REV_SUBREG = 134,
  UNSPEC_REINTERPRET = 135,
  UNSPEC_SPECULATION_TRACKER = 136,
  UNSPEC_SPECULATION_TRACKER_REV = 137,
  UNSPEC_COPYSIGN = 138,
  UNSPEC_TTEST = 139,
  UNSPEC_UPDATE_FFR = 140,
  UNSPEC_UPDATE_FFRT = 141,
  UNSPEC_RDFFR = 142,
  UNSPEC_WRFFR = 143,
  UNSPEC_SVE_LANE_SELECT = 144,
  UNSPEC_SVE_CNT_PAT = 145,
  UNSPEC_SVE_PREFETCH = 146,
  UNSPEC_SVE_PREFETCH_GATHER = 147,
  UNSPEC_SVE_COMPACT = 148,
  UNSPEC_SVE_SPLICE = 149,
  UNSPEC_GEN_TAG = 150,
  UNSPEC_GEN_TAG_RND = 151,
  UNSPEC_TAG_SPACE = 152,
  UNSPEC_LD1RO = 153,
  UNSPEC_SALT_ADDR = 154,
  UNSPEC_ASHIFT_SIGNED = 155,
  UNSPEC_ASHIFT_UNSIGNED = 156,
  UNSPEC_ABS = 157,
  UNSPEC_FMAX = 158,
  UNSPEC_FMAXNMV = 159,
  UNSPEC_FMAXV = 160,
  UNSPEC_FMIN = 161,
  UNSPEC_FMINNMV = 162,
  UNSPEC_FMINV = 163,
  UNSPEC_FADDV = 164,
  UNSPEC_ADDV = 165,
  UNSPEC_SADDLV = 166,
  UNSPEC_UADDLV = 167,
  UNSPEC_SMAXV = 168,
  UNSPEC_SMINV = 169,
  UNSPEC_UMAXV = 170,
  UNSPEC_UMINV = 171,
  UNSPEC_SHADD = 172,
  UNSPEC_UHADD = 173,
  UNSPEC_SRHADD = 174,
  UNSPEC_URHADD = 175,
  UNSPEC_SHSUB = 176,
  UNSPEC_UHSUB = 177,
  UNSPEC_ADDHN = 178,
  UNSPEC_RADDHN = 179,
  UNSPEC_SUBHN = 180,
  UNSPEC_RSUBHN = 181,
  UNSPEC_ADDHN2 = 182,
  UNSPEC_RADDHN2 = 183,
  UNSPEC_SUBHN2 = 184,
  UNSPEC_RSUBHN2 = 185,
  UNSPEC_SQDMULH = 186,
  UNSPEC_SQRDMULH = 187,
  UNSPEC_PMUL = 188,
  UNSPEC_FMULX = 189,
  UNSPEC_USQADD = 190,
  UNSPEC_SUQADD = 191,
  UNSPEC_SQXTUN = 192,
  UNSPEC_SQXTUN2 = 193,
  UNSPEC_SQXTN = 194,
  UNSPEC_UQXTN = 195,
  UNSPEC_SSRA = 196,
  UNSPEC_USRA = 197,
  UNSPEC_SRSRA = 198,
  UNSPEC_URSRA = 199,
  UNSPEC_SRSHR = 200,
  UNSPEC_URSHR = 201,
  UNSPEC_SQSHLU = 202,
  UNSPEC_SQSHL = 203,
  UNSPEC_UQSHL = 204,
  UNSPEC_SQSHRUN = 205,
  UNSPEC_SQRSHRUN = 206,
  UNSPEC_SQSHRN = 207,
  UNSPEC_UQSHRN = 208,
  UNSPEC_SQRSHRN = 209,
  UNSPEC_UQRSHRN = 210,
  UNSPEC_SSHL = 211,
  UNSPEC_USHL = 212,
  UNSPEC_SRSHL = 213,
  UNSPEC_URSHL = 214,
  UNSPEC_SQRSHL = 215,
  UNSPEC_UQRSHL = 216,
  UNSPEC_SSLI = 217,
  UNSPEC_USLI = 218,
  UNSPEC_SSRI = 219,
  UNSPEC_USRI = 220,
  UNSPEC_SSHLL = 221,
  UNSPEC_USHLL = 222,
  UNSPEC_ADDP = 223,
  UNSPEC_TBL = 224,
  UNSPEC_TBX = 225,
  UNSPEC_CONCAT = 226,
  UNSPEC_ZIP1 = 227,
  UNSPEC_ZIP2 = 228,
  UNSPEC_UZP1 = 229,
  UNSPEC_UZP2 = 230,
  UNSPEC_TRN1 = 231,
  UNSPEC_TRN2 = 232,
  UNSPEC_EXT = 233,
  UNSPEC_REV64 = 234,
  UNSPEC_REV32 = 235,
  UNSPEC_REV16 = 236,
  UNSPEC_AESE = 237,
  UNSPEC_AESD = 238,
  UNSPEC_AESMC = 239,
  UNSPEC_AESIMC = 240,
  UNSPEC_SHA1C = 241,
  UNSPEC_SHA1M = 242,
  UNSPEC_SHA1P = 243,
  UNSPEC_SHA1H = 244,
  UNSPEC_SHA1SU0 = 245,
  UNSPEC_SHA1SU1 = 246,
  UNSPEC_SHA256H = 247,
  UNSPEC_SHA256H2 = 248,
  UNSPEC_SHA256SU0 = 249,
  UNSPEC_SHA256SU1 = 250,
  UNSPEC_PMULL = 251,
  UNSPEC_PMULL2 = 252,
  UNSPEC_REV_REGLIST = 253,
  UNSPEC_VEC_SHR = 254,
  UNSPEC_SQRDMLAH = 255,
  UNSPEC_SQRDMLSH = 256,
  UNSPEC_FMAXNM = 257,
  UNSPEC_FMINNM = 258,
  UNSPEC_SDOT = 259,
  UNSPEC_UDOT = 260,
  UNSPEC_SM3SS1 = 261,
  UNSPEC_SM3TT1A = 262,
  UNSPEC_SM3TT1B = 263,
  UNSPEC_SM3TT2A = 264,
  UNSPEC_SM3TT2B = 265,
  UNSPEC_SM3PARTW1 = 266,
  UNSPEC_SM3PARTW2 = 267,
  UNSPEC_SM4E = 268,
  UNSPEC_SM4EKEY = 269,
  UNSPEC_SHA512H = 270,
  UNSPEC_SHA512H2 = 271,
  UNSPEC_SHA512SU0 = 272,
  UNSPEC_SHA512SU1 = 273,
  UNSPEC_FMLAL = 274,
  UNSPEC_FMLSL = 275,
  UNSPEC_FMLAL2 = 276,
  UNSPEC_FMLSL2 = 277,
  UNSPEC_ADR = 278,
  UNSPEC_SEL = 279,
  UNSPEC_BRKA = 280,
  UNSPEC_BRKB = 281,
  UNSPEC_BRKN = 282,
  UNSPEC_BRKPA = 283,
  UNSPEC_BRKPB = 284,
  UNSPEC_PFIRST = 285,
  UNSPEC_PNEXT = 286,
  UNSPEC_CNTP = 287,
  UNSPEC_SADDV = 288,
  UNSPEC_UADDV = 289,
  UNSPEC_ANDV = 290,
  UNSPEC_IORV = 291,
  UNSPEC_XORV = 292,
  UNSPEC_ANDF = 293,
  UNSPEC_IORF = 294,
  UNSPEC_XORF = 295,
  UNSPEC_REVB = 296,
  UNSPEC_REVH = 297,
  UNSPEC_REVW = 298,
  UNSPEC_REVBHW = 299,
  UNSPEC_SMUL_HIGHPART = 300,
  UNSPEC_UMUL_HIGHPART = 301,
  UNSPEC_FMLA = 302,
  UNSPEC_FMLS = 303,
  UNSPEC_FEXPA = 304,
  UNSPEC_FMMLA = 305,
  UNSPEC_FTMAD = 306,
  UNSPEC_FTSMUL = 307,
  UNSPEC_FTSSEL = 308,
  UNSPEC_SMATMUL = 309,
  UNSPEC_UMATMUL = 310,
  UNSPEC_USMATMUL = 311,
  UNSPEC_TRN1Q = 312,
  UNSPEC_TRN2Q = 313,
  UNSPEC_UZP1Q = 314,
  UNSPEC_UZP2Q = 315,
  UNSPEC_ZIP1Q = 316,
  UNSPEC_ZIP2Q = 317,
  UNSPEC_TRN1_CONV = 318,
  UNSPEC_COND_CMPEQ_WIDE = 319,
  UNSPEC_COND_CMPGE_WIDE = 320,
  UNSPEC_COND_CMPGT_WIDE = 321,
  UNSPEC_COND_CMPHI_WIDE = 322,
  UNSPEC_COND_CMPHS_WIDE = 323,
  UNSPEC_COND_CMPLE_WIDE = 324,
  UNSPEC_COND_CMPLO_WIDE = 325,
  UNSPEC_COND_CMPLS_WIDE = 326,
  UNSPEC_COND_CMPLT_WIDE = 327,
  UNSPEC_COND_CMPNE_WIDE = 328,
  UNSPEC_COND_FABS = 329,
  UNSPEC_COND_FADD = 330,
  UNSPEC_COND_FCADD90 = 331,
  UNSPEC_COND_FCADD270 = 332,
  UNSPEC_COND_FCMEQ = 333,
  UNSPEC_COND_FCMGE = 334,
  UNSPEC_COND_FCMGT = 335,
  UNSPEC_COND_FCMLA = 336,
  UNSPEC_COND_FCMLA90 = 337,
  UNSPEC_COND_FCMLA180 = 338,
  UNSPEC_COND_FCMLA270 = 339,
  UNSPEC_COND_FCMLE = 340,
  UNSPEC_COND_FCMLT = 341,
  UNSPEC_COND_FCMNE = 342,
  UNSPEC_COND_FCMUO = 343,
  UNSPEC_COND_FCVT = 344,
  UNSPEC_COND_FCVTZS = 345,
  UNSPEC_COND_FCVTZU = 346,
  UNSPEC_COND_FDIV = 347,
  UNSPEC_COND_FMAX = 348,
  UNSPEC_COND_FMAXNM = 349,
  UNSPEC_COND_FMIN = 350,
  UNSPEC_COND_FMINNM = 351,
  UNSPEC_COND_FMLA = 352,
  UNSPEC_COND_FMLS = 353,
  UNSPEC_COND_FMUL = 354,
  UNSPEC_COND_FMULX = 355,
  UNSPEC_COND_FNEG = 356,
  UNSPEC_COND_FNMLA = 357,
  UNSPEC_COND_FNMLS = 358,
  UNSPEC_COND_FRECPX = 359,
  UNSPEC_COND_FRINTA = 360,
  UNSPEC_COND_FRINTI = 361,
  UNSPEC_COND_FRINTM = 362,
  UNSPEC_COND_FRINTN = 363,
  UNSPEC_COND_FRINTP = 364,
  UNSPEC_COND_FRINTX = 365,
  UNSPEC_COND_FRINTZ = 366,
  UNSPEC_COND_FSCALE = 367,
  UNSPEC_COND_FSQRT = 368,
  UNSPEC_COND_FSUB = 369,
  UNSPEC_COND_SCVTF = 370,
  UNSPEC_COND_UCVTF = 371,
  UNSPEC_LASTA = 372,
  UNSPEC_LASTB = 373,
  UNSPEC_ASHIFT_WIDE = 374,
  UNSPEC_ASHIFTRT_WIDE = 375,
  UNSPEC_LSHIFTRT_WIDE = 376,
  UNSPEC_LDFF1 = 377,
  UNSPEC_LDNF1 = 378,
  UNSPEC_FCADD90 = 379,
  UNSPEC_FCADD270 = 380,
  UNSPEC_FCMLA = 381,
  UNSPEC_FCMLA90 = 382,
  UNSPEC_FCMLA180 = 383,
  UNSPEC_FCMLA270 = 384,
  UNSPEC_FCMUL = 385,
  UNSPEC_FCMUL_CONJ = 386,
  UNSPEC_FCMLA_CONJ = 387,
  UNSPEC_FCMLA180_CONJ = 388,
  UNSPEC_ASRD = 389,
  UNSPEC_ADCLB = 390,
  UNSPEC_ADCLT = 391,
  UNSPEC_ADDHNB = 392,
  UNSPEC_ADDHNT = 393,
  UNSPEC_BDEP = 394,
  UNSPEC_BEXT = 395,
  UNSPEC_BGRP = 396,
  UNSPEC_CADD270 = 397,
  UNSPEC_CADD90 = 398,
  UNSPEC_CDOT = 399,
  UNSPEC_CDOT180 = 400,
  UNSPEC_CDOT270 = 401,
  UNSPEC_CDOT90 = 402,
  UNSPEC_CMLA = 403,
  UNSPEC_CMLA180 = 404,
  UNSPEC_CMLA270 = 405,
  UNSPEC_CMLA90 = 406,
  UNSPEC_CMLA_CONJ = 407,
  UNSPEC_CMLA180_CONJ = 408,
  UNSPEC_CMUL = 409,
  UNSPEC_CMUL_CONJ = 410,
  UNSPEC_COND_FCVTLT = 411,
  UNSPEC_COND_FCVTNT = 412,
  UNSPEC_COND_FCVTX = 413,
  UNSPEC_COND_FCVTXNT = 414,
  UNSPEC_COND_FLOGB = 415,
  UNSPEC_EORBT = 416,
  UNSPEC_EORTB = 417,
  UNSPEC_FADDP = 418,
  UNSPEC_FMAXNMP = 419,
  UNSPEC_FMAXP = 420,
  UNSPEC_FMINNMP = 421,
  UNSPEC_FMINP = 422,
  UNSPEC_FMLALB = 423,
  UNSPEC_FMLALT = 424,
  UNSPEC_FMLSLB = 425,
  UNSPEC_FMLSLT = 426,
  UNSPEC_HISTCNT = 427,
  UNSPEC_HISTSEG = 428,
  UNSPEC_MATCH = 429,
  UNSPEC_NMATCH = 430,
  UNSPEC_PMULLB = 431,
  UNSPEC_PMULLB_PAIR = 432,
  UNSPEC_PMULLT = 433,
  UNSPEC_PMULLT_PAIR = 434,
  UNSPEC_RADDHNB = 435,
  UNSPEC_RADDHNT = 436,
  UNSPEC_RSHRNB = 437,
  UNSPEC_RSHRNT = 438,
  UNSPEC_RSUBHNB = 439,
  UNSPEC_RSUBHNT = 440,
  UNSPEC_SABDLB = 441,
  UNSPEC_SABDLT = 442,
  UNSPEC_SADDLB = 443,
  UNSPEC_SADDLBT = 444,
  UNSPEC_SADDLT = 445,
  UNSPEC_SADDWB = 446,
  UNSPEC_SADDWT = 447,
  UNSPEC_SBCLB = 448,
  UNSPEC_SBCLT = 449,
  UNSPEC_SHRNB = 450,
  UNSPEC_SHRNT = 451,
  UNSPEC_SLI = 452,
  UNSPEC_SMAXP = 453,
  UNSPEC_SMINP = 454,
  UNSPEC_SMULHRS = 455,
  UNSPEC_SMULHS = 456,
  UNSPEC_SMULLB = 457,
  UNSPEC_SMULLT = 458,
  UNSPEC_SQCADD270 = 459,
  UNSPEC_SQCADD90 = 460,
  UNSPEC_SQDMULLB = 461,
  UNSPEC_SQDMULLBT = 462,
  UNSPEC_SQDMULLT = 463,
  UNSPEC_SQRDCMLAH = 464,
  UNSPEC_SQRDCMLAH180 = 465,
  UNSPEC_SQRDCMLAH270 = 466,
  UNSPEC_SQRDCMLAH90 = 467,
  UNSPEC_SQRSHRNB = 468,
  UNSPEC_SQRSHRNT = 469,
  UNSPEC_SQRSHRUNB = 470,
  UNSPEC_SQRSHRUNT = 471,
  UNSPEC_SQSHRNB = 472,
  UNSPEC_SQSHRNT = 473,
  UNSPEC_SQSHRUNB = 474,
  UNSPEC_SQSHRUNT = 475,
  UNSPEC_SQXTNB = 476,
  UNSPEC_SQXTNT = 477,
  UNSPEC_SQXTUNB = 478,
  UNSPEC_SQXTUNT = 479,
  UNSPEC_SRI = 480,
  UNSPEC_SSHLLB = 481,
  UNSPEC_SSHLLT = 482,
  UNSPEC_SSUBLB = 483,
  UNSPEC_SSUBLBT = 484,
  UNSPEC_SSUBLT = 485,
  UNSPEC_SSUBLTB = 486,
  UNSPEC_SSUBWB = 487,
  UNSPEC_SSUBWT = 488,
  UNSPEC_SUBHNB = 489,
  UNSPEC_SUBHNT = 490,
  UNSPEC_TBL2 = 491,
  UNSPEC_UABDLB = 492,
  UNSPEC_UABDLT = 493,
  UNSPEC_UADDLB = 494,
  UNSPEC_UADDLT = 495,
  UNSPEC_UADDWB = 496,
  UNSPEC_UADDWT = 497,
  UNSPEC_UMAXP = 498,
  UNSPEC_UMINP = 499,
  UNSPEC_UMULHRS = 500,
  UNSPEC_UMULHS = 501,
  UNSPEC_UMULLB = 502,
  UNSPEC_UMULLT = 503,
  UNSPEC_UQRSHRNB = 504,
  UNSPEC_UQRSHRNT = 505,
  UNSPEC_UQSHRNB = 506,
  UNSPEC_UQSHRNT = 507,
  UNSPEC_UQXTNB = 508,
  UNSPEC_UQXTNT = 509,
  UNSPEC_USHLLB = 510,
  UNSPEC_USHLLT = 511,
  UNSPEC_USUBLB = 512,
  UNSPEC_USUBLT = 513,
  UNSPEC_USUBWB = 514,
  UNSPEC_USUBWT = 515,
  UNSPEC_USDOT = 516,
  UNSPEC_SUDOT = 517,
  UNSPEC_BFDOT = 518,
  UNSPEC_BFMLALB = 519,
  UNSPEC_BFMLALT = 520,
  UNSPEC_BFMMLA = 521,
  UNSPEC_BFCVTN = 522,
  UNSPEC_BFCVTN2 = 523,
  UNSPEC_BFCVT = 524
};
#define NUM_UNSPEC_VALUES 525
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_EH_RETURN = 0,
  UNSPECV_GET_FPCR = 1,
  UNSPECV_SET_FPCR = 2,
  UNSPECV_GET_FPSR = 3,
  UNSPECV_SET_FPSR = 4,
  UNSPECV_BLOCKAGE = 5,
  UNSPECV_PROBE_STACK_RANGE = 6,
  UNSPECV_SPECULATION_BARRIER = 7,
  UNSPECV_BTI_NOARG = 8,
  UNSPECV_BTI_C = 9,
  UNSPECV_BTI_J = 10,
  UNSPECV_BTI_JC = 11,
  UNSPECV_TSTART = 12,
  UNSPECV_TCOMMIT = 13,
  UNSPECV_TCANCEL = 14,
  UNSPEC_RNDR = 15,
  UNSPEC_RNDRRS = 16,
  UNSPECV_LX = 17,
  UNSPECV_SX = 18,
  UNSPECV_LDA = 19,
  UNSPECV_STL = 20,
  UNSPECV_ATOMIC_CMPSW = 21,
  UNSPECV_ATOMIC_EXCHG = 22,
  UNSPECV_ATOMIC_CAS = 23,
  UNSPECV_ATOMIC_SWP = 24,
  UNSPECV_ATOMIC_OP = 25,
  UNSPECV_ATOMIC_LDOP_OR = 26,
  UNSPECV_ATOMIC_LDOP_BIC = 27,
  UNSPECV_ATOMIC_LDOP_XOR = 28,
  UNSPECV_ATOMIC_LDOP_PLUS = 29
};
#define NUM_UNSPECV_VALUES 30
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
