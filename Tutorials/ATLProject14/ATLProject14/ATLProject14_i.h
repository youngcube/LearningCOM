

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ATLProject14.idl:
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

#ifndef __ATLProject14_i_h__
#define __ATLProject14_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ILightPeek_FWD_DEFINED__
#define __ILightPeek_FWD_DEFINED__
typedef interface ILightPeek ILightPeek;

#endif 	/* __ILightPeek_FWD_DEFINED__ */


#ifndef __LightPeek_FWD_DEFINED__
#define __LightPeek_FWD_DEFINED__

#ifdef __cplusplus
typedef class LightPeek LightPeek;
#else
typedef struct LightPeek LightPeek;
#endif /* __cplusplus */

#endif 	/* __LightPeek_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ILightPeek_INTERFACE_DEFINED__
#define __ILightPeek_INTERFACE_DEFINED__

/* interface ILightPeek */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_ILightPeek;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23cea8f7-f130-4984-80f6-a0c919ff4bde")
    ILightPeek : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Print( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILightPeekVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILightPeek * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILightPeek * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILightPeek * This);
        
        HRESULT ( STDMETHODCALLTYPE *Print )( 
            ILightPeek * This);
        
        END_INTERFACE
    } ILightPeekVtbl;

    interface ILightPeek
    {
        CONST_VTBL struct ILightPeekVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILightPeek_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILightPeek_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILightPeek_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILightPeek_Print(This)	\
    ( (This)->lpVtbl -> Print(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILightPeek_INTERFACE_DEFINED__ */



#ifndef __ATLProject14Lib_LIBRARY_DEFINED__
#define __ATLProject14Lib_LIBRARY_DEFINED__

/* library ATLProject14Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATLProject14Lib;

EXTERN_C const CLSID CLSID_LightPeek;

#ifdef __cplusplus

class DECLSPEC_UUID("4f56ff29-a760-4282-bb48-619e9d49ba43")
LightPeek;
#endif
#endif /* __ATLProject14Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


