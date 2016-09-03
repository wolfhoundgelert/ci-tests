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
#ifndef INCLUDED_massive_munit_async_MissingAsyncDelegateException
#include <massive/munit/async/MissingAsyncDelegateException.h>
#endif
namespace massive{
namespace munit{
namespace async{

Void MissingAsyncDelegateException_obj::__construct(::String message,Dynamic info)
{
HX_STACK_FRAME("massive.munit.async.MissingAsyncDelegateException","new",0xcec4300d,"massive.munit.async.MissingAsyncDelegateException.new","massive/munit/async/MissingAsyncDelegateException.hx",45,0x3fd83046)
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
	Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("MissingAsyncDelegateException.hx","\xea","\x49","\x67","\xb9"),47,HX_HCSTRING("massive.munit.async.MissingAsyncDelegateException","\x9b","\x25","\x76","\x2a"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	Dynamic tmp3 = ::massive::haxe::util::ReflectUtil_obj::here(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	this->type = tmp3->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );
}
;
	return null();
}

//MissingAsyncDelegateException_obj::~MissingAsyncDelegateException_obj() { }

Dynamic MissingAsyncDelegateException_obj::__CreateEmpty() { return  new MissingAsyncDelegateException_obj; }
hx::ObjectPtr< MissingAsyncDelegateException_obj > MissingAsyncDelegateException_obj::__new(::String message,Dynamic info)
{  hx::ObjectPtr< MissingAsyncDelegateException_obj > _result_ = new MissingAsyncDelegateException_obj();
	_result_->__construct(message,info);
	return _result_;}

Dynamic MissingAsyncDelegateException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MissingAsyncDelegateException_obj > _result_ = new MissingAsyncDelegateException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


MissingAsyncDelegateException_obj::MissingAsyncDelegateException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MissingAsyncDelegateException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MissingAsyncDelegateException_obj::__mClass,"__mClass");
};

#endif

hx::Class MissingAsyncDelegateException_obj::__mClass;

void MissingAsyncDelegateException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.async.MissingAsyncDelegateException","\x9b","\x25","\x76","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MissingAsyncDelegateException_obj >;
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
