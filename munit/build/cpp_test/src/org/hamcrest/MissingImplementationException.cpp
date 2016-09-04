#include <hxcpp.h>

#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
#ifndef INCLUDED_org_hamcrest_MissingImplementationException
#include <org/hamcrest/MissingImplementationException.h>
#endif
namespace org{
namespace hamcrest{

Void MissingImplementationException_obj::__construct(::String __o_message,Dynamic cause,Dynamic info)
{
HX_STACK_FRAME("org.hamcrest.MissingImplementationException","new",0x959d2a6a,"org.hamcrest.MissingImplementationException.new","org/hamcrest/Exception.hx",52,0x940281f0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(cause,"cause")
HX_STACK_ARG(info,"info")
::String message = __o_message.Default(HX_HCSTRING("Abstract method not overridden.","\xcc","\x27","\xef","\xce"));
{
	HX_STACK_LINE(53)
	::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Dynamic tmp1 = cause;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	Dynamic tmp2 = info;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//MissingImplementationException_obj::~MissingImplementationException_obj() { }

Dynamic MissingImplementationException_obj::__CreateEmpty() { return  new MissingImplementationException_obj; }
hx::ObjectPtr< MissingImplementationException_obj > MissingImplementationException_obj::__new(::String __o_message,Dynamic cause,Dynamic info)
{  hx::ObjectPtr< MissingImplementationException_obj > _result_ = new MissingImplementationException_obj();
	_result_->__construct(__o_message,cause,info);
	return _result_;}

Dynamic MissingImplementationException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MissingImplementationException_obj > _result_ = new MissingImplementationException_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


MissingImplementationException_obj::MissingImplementationException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MissingImplementationException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MissingImplementationException_obj::__mClass,"__mClass");
};

#endif

hx::Class MissingImplementationException_obj::__mClass;

void MissingImplementationException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.hamcrest.MissingImplementationException","\x78","\x6d","\x11","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MissingImplementationException_obj >;
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
