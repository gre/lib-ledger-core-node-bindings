// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSTrustIndicatorCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSTrustIndicator::getTrustWeight) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTrustIndicator::getTrustWeight needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TrustIndicator>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTrustIndicator::getTrustWeight : implementation of TrustIndicator is not valid");
    }

    auto result = cpp_impl->getTrustWeight();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTrustIndicator::getTrustLevel) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTrustIndicator::getTrustLevel needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TrustIndicator>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTrustIndicator::getTrustLevel : implementation of TrustIndicator is not valid");
    }

    auto result = cpp_impl->getTrustLevel();

    //Wrap result in node object
    auto arg_0 = Nan::New<Integer>((int)result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTrustIndicator::getConflictingOperationUids) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTrustIndicator::getConflictingOperationUids needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TrustIndicator>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTrustIndicator::getConflictingOperationUids : implementation of TrustIndicator is not valid");
    }

    auto result = cpp_impl->getConflictingOperationUids();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<String>(result[arg_0_id]).ToLocalChecked();
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTrustIndicator::getOrigin) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTrustIndicator::getOrigin needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TrustIndicator>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTrustIndicator::getOrigin : implementation of TrustIndicator is not valid");
    }

    auto result = cpp_impl->getOrigin();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSTrustIndicator::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSTrustIndicator function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSTrustIndicator::TrustIndicator_prototype;

Local<Object> NJSTrustIndicator::wrap(const std::shared_ptr<ledger::core::api::TrustIndicator> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(TrustIndicator_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::TrustIndicator>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSTrustIndicator::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSTrustIndicator::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::TrustIndicator>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSTrustIndicator::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSTrustIndicator::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSTrustIndicator").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getTrustWeight", getTrustWeight);
    Nan::SetPrototypeMethod(func_template,"getTrustLevel", getTrustLevel);
    Nan::SetPrototypeMethod(func_template,"getConflictingOperationUids", getConflictingOperationUids);
    Nan::SetPrototypeMethod(func_template,"getOrigin", getOrigin);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    TrustIndicator_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSTrustIndicator").ToLocalChecked(), func_template->GetFunction());
}
