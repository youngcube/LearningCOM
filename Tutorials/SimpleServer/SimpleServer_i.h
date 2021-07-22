

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for SimpleServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
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

#ifndef __SimpleServer_i_h__
#define __SimpleServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMessageBox_FWD_DEFINED__
#define __IMessageBox_FWD_DEFINED__
typedef interface IMessageBox IMessageBox;

#endif 	/* __IMessageBox_FWD_DEFINED__ */


#ifndef __MessageBoxClass_FWD_DEFINED__
#define __MessageBoxClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class MessageBoxClass MessageBoxClass;
#else
typedef struct MessageBoxClass MessageBoxClass;
#endif /* __cplusplus */

#endif 	/* __MessageBoxClass_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_SimpleServer_0000_0000 */
/* [local] */ 

typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_SimpleServer_0000_0000_0001
    {
    BSTR line;
    int curPos;
    } 	IDLCaptureResult;



extern RPC_IF_HANDLE __MIDL_itf_SimpleServer_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SimpleServer_0000_0000_v0_0_s_ifspec;

#ifndef __IMessageBox_INTERFACE_DEFINED__
#define __IMessageBox_INTERFACE_DEFINED__

/* interface IMessageBox */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMessageBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59371D05-3025-4E52-AF88-977B219F0E97")
    IMessageBox : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitApartment( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitWCapture( 
            BSTR lang) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CaptureSample( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Capture( 
            /* [in] */ SAFEARRAY * img,
            DWORD imgLength,
            /* [in] */ int xPos,
            /* [in] */ int yPos,
            /* [out] */ IDLCaptureResult *result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CapturePointer( 
            /* [in] */ unsigned char *img,
            DWORD imgLength,
            /* [in] */ int xPos,
            /* [in] */ int yPos,
            /* [out] */ IDLCaptureResult *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessageBox * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessageBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessageBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitApartment )( 
            IMessageBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitWCapture )( 
            IMessageBox * This,
            BSTR lang);
        
        HRESULT ( STDMETHODCALLTYPE *CaptureSample )( 
            IMessageBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *Capture )( 
            IMessageBox * This,
            /* [in] */ SAFEARRAY * img,
            DWORD imgLength,
            /* [in] */ int xPos,
            /* [in] */ int yPos,
            /* [out] */ IDLCaptureResult *result);
        
        HRESULT ( STDMETHODCALLTYPE *CapturePointer )( 
            IMessageBox * This,
            /* [in] */ unsigned char *img,
            DWORD imgLength,
            /* [in] */ int xPos,
            /* [in] */ int yPos,
            /* [out] */ IDLCaptureResult *result);
        
        END_INTERFACE
    } IMessageBoxVtbl;

    interface IMessageBox
    {
        CONST_VTBL struct IMessageBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessageBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessageBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessageBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessageBox_InitApartment(This)	\
    ( (This)->lpVtbl -> InitApartment(This) ) 

#define IMessageBox_InitWCapture(This,lang)	\
    ( (This)->lpVtbl -> InitWCapture(This,lang) ) 

#define IMessageBox_CaptureSample(This)	\
    ( (This)->lpVtbl -> CaptureSample(This) ) 

#define IMessageBox_Capture(This,img,imgLength,xPos,yPos,result)	\
    ( (This)->lpVtbl -> Capture(This,img,imgLength,xPos,yPos,result) ) 

#define IMessageBox_CapturePointer(This,img,imgLength,xPos,yPos,result)	\
    ( (This)->lpVtbl -> CapturePointer(This,img,imgLength,xPos,yPos,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessageBox_INTERFACE_DEFINED__ */



#ifndef __SimpleServerLib_LIBRARY_DEFINED__
#define __SimpleServerLib_LIBRARY_DEFINED__

/* library SimpleServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SimpleServerLib;

EXTERN_C const CLSID CLSID_MessageBoxClass;

#ifdef __cplusplus

class DECLSPEC_UUID("3A68BEBC-3A60-46A5-8CA1-508C1406B73D")
MessageBoxClass;
#endif
#endif /* __SimpleServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


