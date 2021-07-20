

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for DllSurrogates.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __DllSurrogates_i_h__
#define __DllSurrogates_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMessage_FWD_DEFINED__
#define __IMessage_FWD_DEFINED__
typedef interface IMessage IMessage;

#endif 	/* __IMessage_FWD_DEFINED__ */


#ifndef __Message_FWD_DEFINED__
#define __Message_FWD_DEFINED__

#ifdef __cplusplus
typedef class Message Message;
#else
typedef struct Message Message;
#endif /* __cplusplus */

#endif 	/* __Message_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_DllSurrogates_0000_0000 */
/* [local] */ 

typedef /* [public][public] */ struct __MIDL___MIDL_itf_DllSurrogates_0000_0000_0001
    {
    BSTR line;
    int curPos;
    } 	IDLCaptureResult;



extern RPC_IF_HANDLE __MIDL_itf_DllSurrogates_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DllSurrogates_0000_0000_v0_0_s_ifspec;

#ifndef __IMessage_INTERFACE_DEFINED__
#define __IMessage_INTERFACE_DEFINED__

/* interface IMessage */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DE4972AA-53A3-40DA-9721-47631521682C")
    IMessage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitApartment( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitWCapture( 
            BSTR lang) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Capture( 
            unsigned char *img,
            DWORD imgLength,
            int xPos,
            int yPos,
            /* [out] */ IDLCaptureResult *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitApartment )( 
            IMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitWCapture )( 
            IMessage * This,
            BSTR lang);
        
        HRESULT ( STDMETHODCALLTYPE *Capture )( 
            IMessage * This,
            unsigned char *img,
            DWORD imgLength,
            int xPos,
            int yPos,
            /* [out] */ IDLCaptureResult *result);
        
        END_INTERFACE
    } IMessageVtbl;

    interface IMessage
    {
        CONST_VTBL struct IMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessage_InitApartment(This)	\
    ( (This)->lpVtbl -> InitApartment(This) ) 

#define IMessage_InitWCapture(This,lang)	\
    ( (This)->lpVtbl -> InitWCapture(This,lang) ) 

#define IMessage_Capture(This,img,imgLength,xPos,yPos,result)	\
    ( (This)->lpVtbl -> Capture(This,img,imgLength,xPos,yPos,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessage_INTERFACE_DEFINED__ */



#ifndef __DllSurrogatesLib_LIBRARY_DEFINED__
#define __DllSurrogatesLib_LIBRARY_DEFINED__

/* library DllSurrogatesLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_DllSurrogatesLib;

EXTERN_C const CLSID CLSID_Message;

#ifdef __cplusplus

class DECLSPEC_UUID("CA287451-6B99-47A0-BF9A-344742E72D3D")
Message;
#endif
#endif /* __DllSurrogatesLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


