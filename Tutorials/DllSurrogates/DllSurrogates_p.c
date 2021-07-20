

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for DllSurrogates.idl:
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


#include "DllSurrogates_i.h"

#define TYPE_FORMAT_STRING_SIZE   75                                
#define PROC_FORMAT_STRING_SIZE   127                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _DllSurrogates_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } DllSurrogates_MIDL_TYPE_FORMAT_STRING;

typedef struct _DllSurrogates_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } DllSurrogates_MIDL_PROC_FORMAT_STRING;

typedef struct _DllSurrogates_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } DllSurrogates_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const DllSurrogates_MIDL_TYPE_FORMAT_STRING DllSurrogates__MIDL_TypeFormatString;
extern const DllSurrogates_MIDL_PROC_FORMAT_STRING DllSurrogates__MIDL_ProcFormatString;
extern const DllSurrogates_MIDL_EXPR_FORMAT_STRING DllSurrogates__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMessage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMessage_ProxyInfo;


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


static const DllSurrogates_MIDL_PROC_FORMAT_STRING DllSurrogates__MIDL_ProcFormatString =
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
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
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
/* 58 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 62 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Capture */

/* 66 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 68 */	NdrFcLong( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x5 ),	/* 5 */
/* 74 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 76 */	NdrFcShort( 0x31 ),	/* 49 */
/* 78 */	NdrFcShort( 0x8 ),	/* 8 */
/* 80 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 82 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 84 */	NdrFcShort( 0x1 ),	/* 1 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter img */

/* 90 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 92 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 94 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

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

	/* Parameter result */

/* 114 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 118 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const DllSurrogates_MIDL_TYPE_FORMAT_STRING DllSurrogates__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 40 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 42 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 44 */	NdrFcShort( 0x10 ),	/* Offset= 16 (60) */
/* 46 */	
			0x13, 0x0,	/* FC_OP */
/* 48 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (18) */
/* 50 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (46) */
/* 60 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 62 */	NdrFcShort( 0x8 ),	/* 8 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* Offset= 0 (66) */
/* 68 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0xffec ),	/* Offset= -20 (50) */
/* 72 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Standard interface: __MIDL_itf_DllSurrogates_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMessage, ver. 0.0,
   GUID={0xDE4972AA,0x53A3,0x40DA,{0x97,0x21,0x47,0x63,0x15,0x21,0x68,0x2C}} */

#pragma code_seg(".orpc")
static const unsigned short IMessage_FormatStringOffsetTable[] =
    {
    0,
    30,
    66
    };

static const MIDL_STUBLESS_PROXY_INFO IMessage_ProxyInfo =
    {
    &Object_StubDesc,
    DllSurrogates__MIDL_ProcFormatString.Format,
    &IMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMessage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DllSurrogates__MIDL_ProcFormatString.Format,
    &IMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IMessageProxyVtbl = 
{
    &IMessage_ProxyInfo,
    &IID_IMessage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMessage::InitApartment */ ,
    (void *) (INT_PTR) -1 /* IMessage::InitWCapture */ ,
    (void *) (INT_PTR) -1 /* IMessage::Capture */
};

const CInterfaceStubVtbl _IMessageStubVtbl =
{
    &IID_IMessage,
    &IMessage_ServerInfo,
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
    DllSurrogates__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _DllSurrogates_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IMessageProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _DllSurrogates_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IMessageStubVtbl,
    0
};

PCInterfaceName const _DllSurrogates_InterfaceNamesList[] = 
{
    "IMessage",
    0
};


#define _DllSurrogates_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _DllSurrogates, pIID, n)

int __stdcall _DllSurrogates_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_DllSurrogates_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo DllSurrogates_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _DllSurrogates_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _DllSurrogates_StubVtblList,
    (const PCInterfaceName * ) & _DllSurrogates_InterfaceNamesList,
    0, /* no delegation */
    & _DllSurrogates_IID_Lookup, 
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

