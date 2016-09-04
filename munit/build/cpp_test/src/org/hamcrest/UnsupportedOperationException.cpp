#include <hxcpp.h>

#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
#ifndef INCLUDED_org_hamcrest_UnsupportedOperationException
#include <org/hamcrest/UnsupportedOperationException.h>
#endif
namespace org{
namespace hamcrest{

Void UnsupportedOperationException_obj::__construct(::String __o_message,Dynamic cause,Dynamic info)
{
HX_STACK_FRAME("org.hamcrest.UnsupportedOperationException","new",0xfc132ace,"org.hamcrest.UnsupportedOperationException.new","org/hamcrest/Exception.hx",60,0x940281f0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(cause,"cause")
HX_STACK_ARG(info,"info")
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(61)
	::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	Dynamic tmp1 = cause;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	Dynamic tmp2 = info;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//UnsupportedOperationException_obj::~UnsupportedOperationException_obj() { }

Dynamic UnsupportedOperationException_obj::__CreateEmpty() { return  new UnsupportedOperationException_obj; }
hx::ObjectPtr< UnsupportedOperationException_obj > UnsupportedOperationException_obj::__new(::String __o_message,Dynamic cause,Dynamic info)
{  hx::ObjectPtr< UnsupportedOperationException_obj > _result_ = new UnsupportedOperationException_obj();
	_result_->__construct(__o_message,cause,info);
	return _result_;}

Dynamic UnsupportedOperationException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UnsupportedOperationException_obj > _result_ = new UnsupportedOperationException_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


UnsupportedOperationException_obj::UnsupportedOperationException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UnsupportedOperationException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UnsupportedOperationException_obj::__mClass,"__mClass");
};

#endif

hx::Class UnsupportedOperationException_obj::__mClass;

void UnsupportedOperationException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.hamcrest.UnsupportedOperationException","\xdc","\x6b","\x1e","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UnsupportedOperationException_obj >;
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
