#include <hxcpp.h>

#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
#ifndef INCLUDED_org_hamcrest_IllegalArgumentException
#include <org/hamcrest/IllegalArgumentException.h>
#endif
namespace org{
namespace hamcrest{

Void IllegalArgumentException_obj::__construct(::String __o_message,Dynamic cause,Dynamic info)
{
HX_STACK_FRAME("org.hamcrest.IllegalArgumentException","new",0x236854ef,"org.hamcrest.IllegalArgumentException.new","org/hamcrest/Exception.hx",44,0x940281f0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(cause,"cause")
HX_STACK_ARG(info,"info")
::String message = __o_message.Default(HX_HCSTRING("Argument could not be processed.","\xee","\x2b","\x9a","\x87"));
{
	HX_STACK_LINE(45)
	::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Dynamic tmp1 = cause;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	Dynamic tmp2 = info;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//IllegalArgumentException_obj::~IllegalArgumentException_obj() { }

Dynamic IllegalArgumentException_obj::__CreateEmpty() { return  new IllegalArgumentException_obj; }
hx::ObjectPtr< IllegalArgumentException_obj > IllegalArgumentException_obj::__new(::String __o_message,Dynamic cause,Dynamic info)
{  hx::ObjectPtr< IllegalArgumentException_obj > _result_ = new IllegalArgumentException_obj();
	_result_->__construct(__o_message,cause,info);
	return _result_;}

Dynamic IllegalArgumentException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IllegalArgumentException_obj > _result_ = new IllegalArgumentException_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


IllegalArgumentException_obj::IllegalArgumentException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IllegalArgumentException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IllegalArgumentException_obj::__mClass,"__mClass");
};

#endif

hx::Class IllegalArgumentException_obj::__mClass;

void IllegalArgumentException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.hamcrest.IllegalArgumentException","\x7d","\xb1","\x69","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< IllegalArgumentException_obj >;
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

} // end namespace org
} // end namespace hamcrest
