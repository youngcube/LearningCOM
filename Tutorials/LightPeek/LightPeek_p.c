

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for LightPeek.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "LightPeek_i.h"

#define TYPE_FORMAT_STRING_SIZE   1063                              
#define PROC_FORMAT_STRING_SIZE   133                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _LightPeek_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } LightPeek_MIDL_TYPE_FORMAT_STRING;

typedef struct _LightPeek_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } LightPeek_MIDL_PROC_FORMAT_STRING;

typedef struct _LightPeek_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } LightPeek_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const LightPeek_MIDL_TYPE_FORMAT_STRING LightPeek__MIDL_TypeFormatString;
extern const LightPeek_MIDL_PROC_FORMAT_STRING LightPeek__MIDL_ProcFormatString;
extern const LightPeek_MIDL_EXPR_FORMAT_STRING LightPeek__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWinRTCapture_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWinRTCapture_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const LightPeek_MIDL_PROC_FORMAT_STRING LightPeek__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure InitApartment */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 24 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitWCapture */

/* 30 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 32 */	NdrFcLong( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 46 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x1 ),	/* 1 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lang */

/* 54 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 56 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 58 */	NdrFcShort( 0x400 ),	/* Type Offset=1024 */

	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 62 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Capture */

/* 66 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 68 */	NdrFcLong( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x5 ),	/* 5 */
/* 74 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 76 */	NdrFcShort( 0x18 ),	/* 24 */
/* 78 */	NdrFcShort( 0x8 ),	/* 8 */
/* 80 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 82 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 84 */	NdrFcShort( 0x1 ),	/* 1 */
/* 86 */	NdrFcShort( 0x1 ),	/* 1 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter img */

/* 90 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 92 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 94 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Parameter imgLength */

/* 96 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 98 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xPos */

/* 102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yPos */

/* 108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter line */

/* 114 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 118 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Parameter curPos */

/* 120 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 122 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 124 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const LightPeek_MIDL_TYPE_FORMAT_STRING LightPeek__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0x3e8 ),	/* Offset= 1000 (1004) */
/*  6 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/*  8 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 10 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 12 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 14 */	NdrFcShort( 0x2 ),	/* Offset= 2 (16) */
/* 16 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18 */	NdrFcShort( 0x2f ),	/* 47 */
/* 20 */	NdrFcLong( 0x14 ),	/* 20 */
/* 24 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 26 */	NdrFcLong( 0x3 ),	/* 3 */
/* 30 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 32 */	NdrFcLong( 0x11 ),	/* 17 */
/* 36 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 38 */	NdrFcLong( 0x2 ),	/* 2 */
/* 42 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 44 */	NdrFcLong( 0x4 ),	/* 4 */
/* 48 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 50 */	NdrFcLong( 0x5 ),	/* 5 */
/* 54 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 56 */	NdrFcLong( 0xb ),	/* 11 */
/* 60 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 62 */	NdrFcLong( 0xa ),	/* 10 */
/* 66 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 68 */	NdrFcLong( 0x6 ),	/* 6 */
/* 72 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (304) */
/* 74 */	NdrFcLong( 0x7 ),	/* 7 */
/* 78 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 80 */	NdrFcLong( 0x8 ),	/* 8 */
/* 84 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (310) */
/* 86 */	NdrFcLong( 0xd ),	/* 13 */
/* 90 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (336) */
/* 92 */	NdrFcLong( 0x9 ),	/* 9 */
/* 96 */	NdrFcShort( 0x102 ),	/* Offset= 258 (354) */
/* 98 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 102 */	NdrFcShort( 0x10e ),	/* Offset= 270 (372) */
/* 104 */	NdrFcLong( 0x24 ),	/* 36 */
/* 108 */	NdrFcShort( 0x336 ),	/* Offset= 822 (930) */
/* 110 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 114 */	NdrFcShort( 0x330 ),	/* Offset= 816 (930) */
/* 116 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 120 */	NdrFcShort( 0x32e ),	/* Offset= 814 (934) */
/* 122 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 126 */	NdrFcShort( 0x32c ),	/* Offset= 812 (938) */
/* 128 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 132 */	NdrFcShort( 0x32a ),	/* Offset= 810 (942) */
/* 134 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 138 */	NdrFcShort( 0x328 ),	/* Offset= 808 (946) */
/* 140 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 144 */	NdrFcShort( 0x326 ),	/* Offset= 806 (950) */
/* 146 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 150 */	NdrFcShort( 0x324 ),	/* Offset= 804 (954) */
/* 152 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 156 */	NdrFcShort( 0x30e ),	/* Offset= 782 (938) */
/* 158 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 162 */	NdrFcShort( 0x30c ),	/* Offset= 780 (942) */
/* 164 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 168 */	NdrFcShort( 0x316 ),	/* Offset= 790 (958) */
/* 170 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 174 */	NdrFcShort( 0x30c ),	/* Offset= 780 (954) */
/* 176 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 180 */	NdrFcShort( 0x30e ),	/* Offset= 782 (962) */
/* 182 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 186 */	NdrFcShort( 0x30c ),	/* Offset= 780 (966) */
/* 188 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 192 */	NdrFcShort( 0x30a ),	/* Offset= 778 (970) */
/* 194 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 198 */	NdrFcShort( 0x308 ),	/* Offset= 776 (974) */
/* 200 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 204 */	NdrFcShort( 0x306 ),	/* Offset= 774 (978) */
/* 206 */	NdrFcLong( 0x10 ),	/* 16 */
/* 210 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 212 */	NdrFcLong( 0x12 ),	/* 18 */
/* 216 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 218 */	NdrFcLong( 0x13 ),	/* 19 */
/* 222 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 224 */	NdrFcLong( 0x15 ),	/* 21 */
/* 228 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 230 */	NdrFcLong( 0x16 ),	/* 22 */
/* 234 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 236 */	NdrFcLong( 0x17 ),	/* 23 */
/* 240 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 242 */	NdrFcLong( 0xe ),	/* 14 */
/* 246 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (986) */
/* 248 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 252 */	NdrFcShort( 0x2e8 ),	/* Offset= 744 (996) */
/* 254 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 258 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (1000) */
/* 260 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 264 */	NdrFcShort( 0x2a2 ),	/* Offset= 674 (938) */
/* 266 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 270 */	NdrFcShort( 0x2a0 ),	/* Offset= 672 (942) */
/* 272 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 276 */	NdrFcShort( 0x29e ),	/* Offset= 670 (946) */
/* 278 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 282 */	NdrFcShort( 0x294 ),	/* Offset= 660 (942) */
/* 284 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 288 */	NdrFcShort( 0x28e ),	/* Offset= 654 (942) */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* Offset= 0 (294) */
/* 296 */	NdrFcLong( 0x1 ),	/* 1 */
/* 300 */	NdrFcShort( 0x0 ),	/* Offset= 0 (300) */
/* 302 */	NdrFcShort( 0xffff ),	/* Offset= -1 (301) */
/* 304 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 310 */	
			0x12, 0x0,	/* FC_UP */
/* 312 */	NdrFcShort( 0xe ),	/* Offset= 14 (326) */
/* 314 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 316 */	NdrFcShort( 0x2 ),	/* 2 */
/* 318 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 320 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 322 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 324 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 326 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 330 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (314) */
/* 332 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 334 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 336 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 348 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 350 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 352 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 354 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 356 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 366 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 368 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 370 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 372 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 374 */	NdrFcShort( 0x2 ),	/* Offset= 2 (376) */
/* 376 */	
			0x12, 0x0,	/* FC_UP */
/* 378 */	NdrFcShort( 0x216 ),	/* Offset= 534 (912) */
/* 380 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 382 */	NdrFcShort( 0x18 ),	/* 24 */
/* 384 */	NdrFcShort( 0xa ),	/* 10 */
/* 386 */	NdrFcLong( 0x8 ),	/* 8 */
/* 390 */	NdrFcShort( 0x5a ),	/* Offset= 90 (480) */
/* 392 */	NdrFcLong( 0xd ),	/* 13 */
/* 396 */	NdrFcShort( 0x7e ),	/* Offset= 126 (522) */
/* 398 */	NdrFcLong( 0x9 ),	/* 9 */
/* 402 */	NdrFcShort( 0x9e ),	/* Offset= 158 (560) */
/* 404 */	NdrFcLong( 0xc ),	/* 12 */
/* 408 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (608) */
/* 410 */	NdrFcLong( 0x24 ),	/* 36 */
/* 414 */	NdrFcShort( 0x124 ),	/* Offset= 292 (706) */
/* 416 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 420 */	NdrFcShort( 0x140 ),	/* Offset= 320 (740) */
/* 422 */	NdrFcLong( 0x10 ),	/* 16 */
/* 426 */	NdrFcShort( 0x15a ),	/* Offset= 346 (772) */
/* 428 */	NdrFcLong( 0x2 ),	/* 2 */
/* 432 */	NdrFcShort( 0x174 ),	/* Offset= 372 (804) */
/* 434 */	NdrFcLong( 0x3 ),	/* 3 */
/* 438 */	NdrFcShort( 0x18e ),	/* Offset= 398 (836) */
/* 440 */	NdrFcLong( 0x14 ),	/* 20 */
/* 444 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (868) */
/* 446 */	NdrFcShort( 0xffff ),	/* Offset= -1 (445) */
/* 448 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 450 */	NdrFcShort( 0x4 ),	/* 4 */
/* 452 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 458 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 460 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 462 */	NdrFcShort( 0x4 ),	/* 4 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	0x12, 0x0,	/* FC_UP */
/* 474 */	NdrFcShort( 0xff6c ),	/* Offset= -148 (326) */
/* 476 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 478 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 480 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 484 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 486 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 488 */	NdrFcShort( 0x4 ),	/* 4 */
/* 490 */	NdrFcShort( 0x4 ),	/* 4 */
/* 492 */	0x11, 0x0,	/* FC_RP */
/* 494 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (448) */
/* 496 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 498 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 500 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 510 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 514 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 516 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 518 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (336) */
/* 520 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 522 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x6 ),	/* Offset= 6 (534) */
/* 530 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 532 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 534 */	
			0x11, 0x0,	/* FC_RP */
/* 536 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (500) */
/* 538 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 548 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 552 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 554 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 556 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (354) */
/* 558 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 560 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 562 */	NdrFcShort( 0x8 ),	/* 8 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x6 ),	/* Offset= 6 (572) */
/* 568 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 570 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 572 */	
			0x11, 0x0,	/* FC_RP */
/* 574 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (538) */
/* 576 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 578 */	NdrFcShort( 0x4 ),	/* 4 */
/* 580 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 586 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 588 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 590 */	NdrFcShort( 0x4 ),	/* 4 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	0x12, 0x0,	/* FC_UP */
/* 602 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1004) */
/* 604 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 606 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 608 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x6 ),	/* Offset= 6 (620) */
/* 616 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 618 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 620 */	
			0x11, 0x0,	/* FC_RP */
/* 622 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (576) */
/* 624 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 626 */	NdrFcLong( 0x2f ),	/* 47 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 636 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 638 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 640 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 642 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 646 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 648 */	NdrFcShort( 0x4 ),	/* 4 */
/* 650 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 652 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 654 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 656 */	NdrFcShort( 0x10 ),	/* 16 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0xa ),	/* Offset= 10 (670) */
/* 662 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 664 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 666 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (624) */
/* 668 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 670 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 672 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (642) */
/* 674 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 676 */	NdrFcShort( 0x4 ),	/* 4 */
/* 678 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 684 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 686 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 688 */	NdrFcShort( 0x4 ),	/* 4 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x1 ),	/* 1 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	0x12, 0x0,	/* FC_UP */
/* 700 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (654) */
/* 702 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 704 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 706 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x6 ),	/* Offset= 6 (718) */
/* 714 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 716 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 718 */	
			0x11, 0x0,	/* FC_RP */
/* 720 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (674) */
/* 722 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 726 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 728 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 730 */	NdrFcShort( 0x10 ),	/* 16 */
/* 732 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 734 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 736 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (722) */
			0x5b,		/* FC_END */
/* 740 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 742 */	NdrFcShort( 0x18 ),	/* 24 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0xa ),	/* Offset= 10 (756) */
/* 748 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 750 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 752 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (728) */
/* 754 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 756 */	
			0x11, 0x0,	/* FC_RP */
/* 758 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (500) */
/* 760 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 764 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 770 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 772 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 778 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 780 */	NdrFcShort( 0x4 ),	/* 4 */
/* 782 */	NdrFcShort( 0x4 ),	/* 4 */
/* 784 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 786 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (760) */
/* 788 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 790 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 792 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 794 */	NdrFcShort( 0x2 ),	/* 2 */
/* 796 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 802 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 804 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 808 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 810 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 812 */	NdrFcShort( 0x4 ),	/* 4 */
/* 814 */	NdrFcShort( 0x4 ),	/* 4 */
/* 816 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 818 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (792) */
/* 820 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 822 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 824 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 828 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 834 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 836 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 840 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 842 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 844 */	NdrFcShort( 0x4 ),	/* 4 */
/* 846 */	NdrFcShort( 0x4 ),	/* 4 */
/* 848 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 850 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (824) */
/* 852 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 854 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 856 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 866 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 868 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 874 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 876 */	NdrFcShort( 0x4 ),	/* 4 */
/* 878 */	NdrFcShort( 0x4 ),	/* 4 */
/* 880 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 882 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (856) */
/* 884 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 886 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 888 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 892 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 894 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 896 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 902 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 904 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 906 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 908 */	NdrFcShort( 0xffec ),	/* Offset= -20 (888) */
/* 910 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 912 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 914 */	NdrFcShort( 0x28 ),	/* 40 */
/* 916 */	NdrFcShort( 0xffec ),	/* Offset= -20 (896) */
/* 918 */	NdrFcShort( 0x0 ),	/* Offset= 0 (918) */
/* 920 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 922 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 924 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 926 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (380) */
/* 928 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 930 */	
			0x12, 0x0,	/* FC_UP */
/* 932 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (654) */
/* 934 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 936 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 938 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 940 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 942 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 944 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 946 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 948 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 950 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 952 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 954 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 956 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 958 */	
			0x12, 0x0,	/* FC_UP */
/* 960 */	NdrFcShort( 0xfd70 ),	/* Offset= -656 (304) */
/* 962 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 964 */	NdrFcShort( 0xfd72 ),	/* Offset= -654 (310) */
/* 966 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 968 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (336) */
/* 970 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 972 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (354) */
/* 974 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 976 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (372) */
/* 978 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 980 */	NdrFcShort( 0x2 ),	/* Offset= 2 (982) */
/* 982 */	
			0x12, 0x0,	/* FC_UP */
/* 984 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1004) */
/* 986 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 988 */	NdrFcShort( 0x10 ),	/* 16 */
/* 990 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 992 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 994 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 996 */	
			0x12, 0x0,	/* FC_UP */
/* 998 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (986) */
/* 1000 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1002 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1004 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1006 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1010) */
/* 1012 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1014 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1016 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1018 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1020 */	NdrFcShort( 0xfc0a ),	/* Offset= -1014 (6) */
/* 1022 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1024 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0xfbfa ),	/* Offset= -1030 (2) */
/* 1034 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1036 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1038 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0xfd62 ),	/* Offset= -670 (372) */
/* 1044 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1046 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1052) */
/* 1048 */	
			0x13, 0x0,	/* FC_OP */
/* 1050 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1004) */
/* 1052 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1048) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWinRTCapture, ver. 0.0,
   GUID={0x6fbddf61,0x0143,0x4c35,{0xa5,0xf2,0xa8,0xcc,0x96,0x88,0x83,0x41}} */

#pragma code_seg(".orpc")
static const unsigned short IWinRTCapture_FormatStringOffsetTable[] =
    {
    0,
    30,
    66
    };

static const MIDL_STUBLESS_PROXY_INFO IWinRTCapture_ProxyInfo =
    {
    &Object_StubDesc,
    LightPeek__MIDL_ProcFormatString.Format,
    &IWinRTCapture_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWinRTCapture_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    LightPeek__MIDL_ProcFormatString.Format,
    &IWinRTCapture_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IWinRTCaptureProxyVtbl = 
{
    &IWinRTCapture_ProxyInfo,
    &IID_IWinRTCapture,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWinRTCapture::InitApartment */ ,
    (void *) (INT_PTR) -1 /* IWinRTCapture::InitWCapture */ ,
    (void *) (INT_PTR) -1 /* IWinRTCapture::Capture */
};

const CInterfaceStubVtbl _IWinRTCaptureStubVtbl =
{
    &IID_IWinRTCapture,
    &IWinRTCapture_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    LightPeek__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _LightPeek_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IWinRTCaptureProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _LightPeek_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IWinRTCaptureStubVtbl,
    0
};

PCInterfaceName const _LightPeek_InterfaceNamesList[] = 
{
    "IWinRTCapture",
    0
};


#define _LightPeek_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _LightPeek, pIID, n)

int __stdcall _LightPeek_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_LightPeek_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo LightPeek_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _LightPeek_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _LightPeek_StubVtblList,
    (const PCInterfaceName * ) & _LightPeek_InterfaceNamesList,
    0, /* no delegation */
    & _LightPeek_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

