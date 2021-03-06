// This file is generated by omniidl (C++ backend)- omniORB_4_0. Do not edit.

#include "IAccessCorbaDef.h"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_0;



Base_Bus::IAccessCorbaDef_ptr Base_Bus::IAccessCorbaDef_Helper::_nil() {
  return ::Base_Bus::IAccessCorbaDef::_nil();
}

CORBA::Boolean Base_Bus::IAccessCorbaDef_Helper::is_nil(::Base_Bus::IAccessCorbaDef_ptr p) {
  return CORBA::is_nil(p);

}

void Base_Bus::IAccessCorbaDef_Helper::release(::Base_Bus::IAccessCorbaDef_ptr p) {
  CORBA::release(p);
}

void Base_Bus::IAccessCorbaDef_Helper::duplicate(::Base_Bus::IAccessCorbaDef_ptr p) {
  if( p && !p->_NP_is_nil() )  omni::duplicateObjRef(p);
}

void Base_Bus::IAccessCorbaDef_Helper::marshalObjRef(::Base_Bus::IAccessCorbaDef_ptr obj, cdrStream& s) {
  ::Base_Bus::IAccessCorbaDef::_marshalObjRef(obj, s);
}

Base_Bus::IAccessCorbaDef_ptr Base_Bus::IAccessCorbaDef_Helper::unmarshalObjRef(cdrStream& s) {
  return ::Base_Bus::IAccessCorbaDef::_unmarshalObjRef(s);
}

Base_Bus::IAccessCorbaDef_ptr
Base_Bus::IAccessCorbaDef::_duplicate(::Base_Bus::IAccessCorbaDef_ptr obj)
{
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);

  return obj;
}


Base_Bus::IAccessCorbaDef_ptr
Base_Bus::IAccessCorbaDef::_narrow(CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


Base_Bus::IAccessCorbaDef_ptr
Base_Bus::IAccessCorbaDef::_unchecked_narrow(CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}


Base_Bus::IAccessCorbaDef_ptr
Base_Bus::IAccessCorbaDef::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_IAccessCorbaDef _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_IAccessCorbaDef* _the_nil_ptr = 0;
  if( !_the_nil_ptr ) {
    omni::nilRefLock().lock();
    if( !_the_nil_ptr ) {
      _the_nil_ptr = new _objref_IAccessCorbaDef;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* Base_Bus::IAccessCorbaDef::_PD_repoId = "IDL:Base_Bus/IAccessCorbaDef:1.0";


Base_Bus::_objref_IAccessCorbaDef::~_objref_IAccessCorbaDef() {}


Base_Bus::_objref_IAccessCorbaDef::_objref_IAccessCorbaDef(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::Base_Bus::IAccessCorbaDef::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
Base_Bus::_objref_IAccessCorbaDef::_ptrToObjRef(const char* id)
{
  if( id == ::Base_Bus::IAccessCorbaDef::_PD_repoId )
    return (::Base_Bus::IAccessCorbaDef_ptr) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (::CORBA::Object_ptr) this;

  if( omni::strMatch(id, ::Base_Bus::IAccessCorbaDef::_PD_repoId) )
    return (::Base_Bus::IAccessCorbaDef_ptr) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (::CORBA::Object_ptr) this;

  return 0;
}

// Proxy call descriptor class. Mangled signature:
//  void_i_cBase__Bus_mCorbaTypes_mEDatapointAlarm
class _0RL_cd_ECB4CA53CA82D03F_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_ECB4CA53CA82D03F_00000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, 0, 0, upcall) {}
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  Base_Bus::CorbaTypes::EDatapointAlarm arg_0;
};

void _0RL_cd_ECB4CA53CA82D03F_00000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;

}

void _0RL_cd_ECB4CA53CA82D03F_00000000::unmarshalArguments(cdrStream& _n)
{
  (Base_Bus::CorbaTypes::EDatapointAlarm&)arg_0 <<= _n;

}

// Local call call-back function.
static void
_0RL_lcfn_ECB4CA53CA82D03F_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_ECB4CA53CA82D03F_00000000* tcd = (_0RL_cd_ECB4CA53CA82D03F_00000000*)cd;
  Base_Bus::_impl_IAccessCorbaDef* impl = (Base_Bus::_impl_IAccessCorbaDef*) svnt->_ptrToInterface(Base_Bus::IAccessCorbaDef::_PD_repoId);
  impl->SetATestValue(tcd->arg_0);


}

void Base_Bus::_objref_IAccessCorbaDef::SetATestValue(CorbaTypes::EDatapointAlarm v)
{
  _0RL_cd_ECB4CA53CA82D03F_00000000 _call_desc(_0RL_lcfn_ECB4CA53CA82D03F_10000000, "SetATestValue", 14);
  _call_desc.arg_0 = v;

  _invoke(_call_desc);



}
// Proxy call descriptor class. Mangled signature:
//  void_i_cstring
class _0RL_cd_ECB4CA53CA82D03F_20000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_ECB4CA53CA82D03F_20000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, 0, 0, upcall) {}
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  CORBA::String_var arg_0_;
  const char* arg_0;
};

void _0RL_cd_ECB4CA53CA82D03F_20000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);

}

void _0RL_cd_ECB4CA53CA82D03F_20000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();

}

// Local call call-back function.
static void
_0RL_lcfn_ECB4CA53CA82D03F_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_ECB4CA53CA82D03F_20000000* tcd = (_0RL_cd_ECB4CA53CA82D03F_20000000*)cd;
  Base_Bus::_impl_IAccessCorbaDef* impl = (Base_Bus::_impl_IAccessCorbaDef*) svnt->_ptrToInterface(Base_Bus::IAccessCorbaDef::_PD_repoId);
  impl->sendStringToSvt(tcd->arg_0);


}

void Base_Bus::_objref_IAccessCorbaDef::sendStringToSvt(const char* s)
{
  _0RL_cd_ECB4CA53CA82D03F_20000000 _call_desc(_0RL_lcfn_ECB4CA53CA82D03F_30000000, "sendStringToSvt", 16);
  _call_desc.arg_0 = s;

  _invoke(_call_desc);



}
Base_Bus::_pof_IAccessCorbaDef::~_pof_IAccessCorbaDef() {}


omniObjRef*
Base_Bus::_pof_IAccessCorbaDef::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::Base_Bus::_objref_IAccessCorbaDef(ior, id);
}


CORBA::Boolean
Base_Bus::_pof_IAccessCorbaDef::is_a(const char* id) const
{
  if( omni::ptrStrMatch(id, ::Base_Bus::IAccessCorbaDef::_PD_repoId) )
    return 1;
  
  return 0;
}

const Base_Bus::_pof_IAccessCorbaDef _the_pof_Base__Bus_mIAccessCorbaDef;

Base_Bus::_impl_IAccessCorbaDef::~_impl_IAccessCorbaDef() {}


CORBA::Boolean
Base_Bus::_impl_IAccessCorbaDef::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if( omni::strMatch(op, "SetATestValue") ) {

    _0RL_cd_ECB4CA53CA82D03F_00000000 _call_desc(_0RL_lcfn_ECB4CA53CA82D03F_10000000, "SetATestValue", 14, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "sendStringToSvt") ) {

    _0RL_cd_ECB4CA53CA82D03F_20000000 _call_desc(_0RL_lcfn_ECB4CA53CA82D03F_30000000, "sendStringToSvt", 16, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
Base_Bus::_impl_IAccessCorbaDef::_ptrToInterface(const char* id)
{
  if( id == ::Base_Bus::IAccessCorbaDef::_PD_repoId )
    return (::Base_Bus::_impl_IAccessCorbaDef*) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (void*) 1;

  if( omni::strMatch(id, ::Base_Bus::IAccessCorbaDef::_PD_repoId) )
    return (::Base_Bus::_impl_IAccessCorbaDef*) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (void*) 1;
  return 0;
}

const char*
Base_Bus::_impl_IAccessCorbaDef::_mostDerivedRepoId()
{
  return ::Base_Bus::IAccessCorbaDef::_PD_repoId;
}

POA_Base_Bus::IAccessCorbaDef::~IAccessCorbaDef() {}

