// This file is generated by omniidl (C++ backend)- omniORB_4_0. Do not edit.
#ifndef __IAccessCorbaDef_hh__
#define __IAccessCorbaDef_hh__

#ifndef USE_omniORB_logStream
#define USE_omniORB_logStream
#endif

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IAccessCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IAccessCorbaDef
#endif



#ifndef __CorbaTypes_hh_EXTERNAL_GUARD__
#define __CorbaTypes_hh_EXTERNAL_GUARD__
#include <CorbaTypes.h>
#endif



#ifdef USE_stub_in_nt_dll
#ifndef USE_core_stub_in_nt_dll
#define USE_core_stub_in_nt_dll
#endif
#ifndef USE_dyn_stub_in_nt_dll
#define USE_dyn_stub_in_nt_dll
#endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE Base_Bus

_CORBA_MODULE_BEG

#ifndef __Base__Bus_mIAccessCorbaDef__
#define __Base__Bus_mIAccessCorbaDef__

  class IAccessCorbaDef;
  class _objref_IAccessCorbaDef;
  class _impl_IAccessCorbaDef;
  
  typedef _objref_IAccessCorbaDef* IAccessCorbaDef_ptr;
  typedef IAccessCorbaDef_ptr IAccessCorbaDefRef;

  class IAccessCorbaDef_Helper {
  public:
    typedef IAccessCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IAccessCorbaDef, IAccessCorbaDef_Helper> IAccessCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IAccessCorbaDef,IAccessCorbaDef_Helper > IAccessCorbaDef_out;

#endif

  class IAccessCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IAccessCorbaDef_ptr _ptr_type;
    typedef IAccessCorbaDef_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(CORBA::Object_ptr);
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_IAccessCorbaDef :
    public virtual CORBA::Object, public virtual omniObjRef
  {
  public:
    void SetATestValue(CorbaTypes::EDatapointAlarm v);
    void sendStringToSvt(const char* s);

    inline _objref_IAccessCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IAccessCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IAccessCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IAccessCorbaDef(const _objref_IAccessCorbaDef&);
    _objref_IAccessCorbaDef& operator = (const _objref_IAccessCorbaDef&);
    // not implemented

    friend class IAccessCorbaDef;
  };

  class _pof_IAccessCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IAccessCorbaDef() : _OMNI_NS(proxyObjectFactory)(IAccessCorbaDef::_PD_repoId) {}
    virtual ~_pof_IAccessCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IAccessCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_IAccessCorbaDef();

    virtual void SetATestValue(CorbaTypes::EDatapointAlarm v) = 0;
    virtual void sendStringToSvt(const char* s) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
  };


  _CORBA_MODULE_VAR _dyn_attr const CORBA::TypeCode_ptr _tc_IAccessCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_Base_Bus
_CORBA_MODULE_BEG

  class IAccessCorbaDef :
    public virtual Base_Bus::_impl_IAccessCorbaDef,
    public virtual PortableServer::ServantBase
  {
  public:
    virtual ~IAccessCorbaDef();

    inline ::Base_Bus::IAccessCorbaDef_ptr _this() {
      return (::Base_Bus::IAccessCorbaDef_ptr) _do_this(::Base_Bus::IAccessCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(CORBA::Any& _a, Base_Bus::IAccessCorbaDef_ptr _s);
void operator<<=(CORBA::Any& _a, Base_Bus::IAccessCorbaDef_ptr* _s);
CORBA::Boolean operator>>=(const CORBA::Any& _a, Base_Bus::IAccessCorbaDef_ptr& _s);



inline void
Base_Bus::IAccessCorbaDef::_marshalObjRef(::Base_Bus::IAccessCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IAccessCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IAccessCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IAccessCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IAccessCorbaDef
#endif

#endif  // __IAccessCorbaDef_hh__

