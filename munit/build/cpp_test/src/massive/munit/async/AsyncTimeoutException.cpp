#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncTimeoutException
#include <massive/munit/async/AsyncTimeoutException.h>
#endif
namespace massive{
namespace munit{
namespace async{

Void AsyncTimeoutException_obj::__construct(::String message,Dynamic info)
{
HX_STACK_FRAME("massive.munit.async.AsyncTimeoutException","new",0x38cd2b63,"massive.munit.async.AsyncTimeoutException.new","massive/munit/async/AsyncTimeoutException.hx",45,0x266cf6b0)
HX_STACK_THIS(this)
HX_STACK_ARG(message,"message")
HX_STACK_ARG(info,"info")
{
	HX_STACK_LINE(46)
	::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	Dynamic tmp1 = info;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(47)
	Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("AsyncTimeoutException.hx","\x54","\xcc","\xf7","\x06"),47,HX_HCSTRING("massive.munit.async.AsyncTimeoutException","\xf1","\x3d","\x9d","\xd2"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	Dynamic tmp3 = ::massive::haxe::util::ReflectUtil_obj::here(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	this->type = tmp3->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );
}
;
	return null();
}

//AsyncTimeoutException_obj::~AsyncTimeoutException_obj() { }

Dynamic AsyncTimeoutException_obj::__CreateEmpty() { return  new AsyncTimeoutException_obj; }
hx::ObjectPtr< AsyncTimeoutException_obj > AsyncTimeoutException_obj::__new(::String message,Dynamic info)
{  hx::ObjectPtr< AsyncTimeoutException_obj > _result_ = new AsyncTimeoutException_obj();
	_result_->__construct(message,info);
	return _result_;}

Dynamic AsyncTimeoutException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncTimeoutException_obj > _result_ = new AsyncTimeoutException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


AsyncTimeoutException_obj::AsyncTimeoutException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncTimeoutException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncTimeoutException_obj::__mClass,"__mClass");
};

#endif

hx::Class AsyncTimeoutException_obj::__mClass;

void AsyncTimeoutException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.async.AsyncTimeoutException","\xf1","\x3d","\x9d","\xd2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AsyncTimeoutException_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace massive
} // end namespace munit
} // end namespace async
