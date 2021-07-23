

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#ifndef __LightPeek_i_h__
#define __LightPeek_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWinRTCapture_FWD_DEFINED__
#define __IWinRTCapture_FWD_DEFINED__
typedef interface IWinRTCapture IWinRTCapture;

#endif 	/* __IWinRTCapture_FWD_DEFINED__ */


#ifndef __WinRTCapture_FWD_DEFINED__
#define __WinRTCapture_FWD_DEFINED__

#ifdef __cplusplus
typedef class WinRTCapture WinRTCapture;
#else
typedef struct WinRTCapture WinRTCapture;
#endif /* __cplusplus */

#endif 	/* __WinRTCapture_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IWinRTCapture_INTERFACE_DEFINED__
#define __IWinRTCapture_INTERFACE_DEFINED__

/* interface IWinRTCapture */
/* [oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IWinRTCapture;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6fbddf61-0143-4c35-a5f2-a8cc96888341")
    IWinRTCapture : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitApartment( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitWCapture( 
            /* [in] */ VARIANT lang) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Capture( 
            /* [in] */ SAFEARRAY * img,
            DWORD imgLength,
            /* [in] */ int xPos,
            /* [in] */ int yPos,
            /* [out] */ VARIANT *line,
            /* [out] */ VARIANT *curPos) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWinRTCaptureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWinRTCapture * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWinRTCapture * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWinRTCapture * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitApartment )( 
            IWinRTCapture * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitWCapture )( 
            IWinRTCapture * This,
            /* [in] */ VARIANT lang);
        
        HRESULT ( STDMETHODCALLTYPE *Capture )( 
            IWinRTCapture * This,
            /* [in] */ SAFEARRAY * img,
            DWORD imgLength,
            /* [in] */ int xPos,
            /* [in] */ int yPos,
            /* [out] */ VARIANT *line,
            /* [out] */ VARIANT *curPos);
        
        END_INTERFACE
    } IWinRTCaptureVtbl;

    interface IWinRTCapture
    {
        CONST_VTBL struct IWinRTCaptureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWinRTCapture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWinRTCapture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWinRTCapture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWinRTCapture_InitApartment(This)	\
    ( (This)->lpVtbl -> InitApartment(This) ) 

#define IWinRTCapture_InitWCapture(This,lang)	\
    ( (This)->lpVtbl -> InitWCapture(This,lang) ) 

#define IWinRTCapture_Capture(This,img,imgLength,xPos,yPos,line,curPos)	\
    ( (This)->lpVtbl -> Capture(This,img,imgLength,xPos,yPos,line,curPos) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWinRTCapture_INTERFACE_DEFINED__ */



#ifndef __LightPeekLib_LIBRARY_DEFINED__
#define __LightPeekLib_LIBRARY_DEFINED__

/* library LightPeekLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_LightPeekLib;

EXTERN_C const CLSID CLSID_WinRTCapture;

#ifdef __cplusplus

class DECLSPEC_UUID("8586f96d-29e3-4bdc-aa3b-84d645f4fb58")
WinRTCapture;
#endif
#endif /* __LightPeekLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


