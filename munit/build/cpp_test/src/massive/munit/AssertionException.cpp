#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
namespace massive{
namespace munit{

Void AssertionException_obj::__construct(::String msg,Dynamic info)
{
HX_STACK_FRAME("massive.munit.AssertionException","new",0xc7bddb66,"massive.munit.AssertionException.new","massive/munit/AssertionException.hx",47,0xfa5e38c8)
HX_STACK_THIS(this)
HX_STACK_ARG(msg,"msg")
HX_STACK_ARG(info,"info")
{
	HX_STACK_LINE(48)
	::String tmp = msg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	Dynamic tmp1 = info;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(49)
	Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("AssertionException.hx","\x91","\x6b","\xfd","\xf3"),49,HX_HCSTRING("massive.munit.AssertionException","\x74","\xf0","\x4e","\x74"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	Dynamic tmp3 = ::massive::haxe::util::ReflectUtil_obj::here(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	this->type = tmp3->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );
}
;
	return null();
}

//AssertionException_obj::~AssertionException_obj() { }

Dynamic AssertionException_obj::__CreateEmpty() { return  new AssertionException_obj; }
hx::ObjectPtr< AssertionException_obj > AssertionException_obj::__new(::String msg,Dynamic info)
{  hx::ObjectPtr< AssertionException_obj > _result_ = new AssertionException_obj();
	_result_->__construct(msg,info);
	return _result_;}

Dynamic AssertionException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssertionException_obj > _result_ = new AssertionException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


AssertionException_obj::AssertionException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssertionException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssertionException_obj::__mClass,"__mClass");
};

#endif

hx::Class AssertionException_obj::__mClass;

void AssertionException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.AssertionException","\x74","\xf0","\x4e","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssertionException_obj >;
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
