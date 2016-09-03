#include <hxcpp.h>

#ifndef INCLUDED_some_Another
#include <some/Another.h>
#endif
namespace some{

Void Another_obj::__construct()
{
HX_STACK_FRAME("some.Another","new",0x100ee09b,"some.Another.new","some/Another.hx",9,0xc5d1d676)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Another_obj::~Another_obj() { }

Dynamic Another_obj::__CreateEmpty() { return  new Another_obj; }
hx::ObjectPtr< Another_obj > Another_obj::__new()
{  hx::ObjectPtr< Another_obj > _result_ = new Another_obj();
	_result_->__construct();
	return _result_;}

Dynamic Another_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Another_obj > _result_ = new Another_obj();
	_result_->__construct();
	return _result_;}

Float Another_obj::triple( Float value){
	HX_STACK_FRAME("some.Another","triple",0x3c5f4543,"some.Another.triple","some/Another.hx",11,0xc5d1d676)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	Float tmp = (value * (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Another_obj,triple,return )


Another_obj::Another_obj()
{
}

Dynamic Another_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"triple") ) { return triple_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("triple","\x9e","\xbe","\xd0","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Another_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Another_obj::__mClass,"__mClass");
};

#endif

hx::Class Another_obj::__mClass;

void Another_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("some.Another","\x29","\xf7","\x1d","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Another_obj >;
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

} // end namespace some
