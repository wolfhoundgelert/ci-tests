#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
namespace massive{
namespace haxe{

Void Exception_obj::__construct(::String message,Dynamic info)
{
HX_STACK_FRAME("massive.haxe.Exception","new",0x75c9a923,"massive.haxe.Exception.new","massive/haxe/Exception.hx",67,0x32c9780d)
HX_STACK_THIS(this)
HX_STACK_ARG(message,"message")
HX_STACK_ARG(info,"info")
{
	HX_STACK_LINE(68)
	this->message = message;
	HX_STACK_LINE(69)
	this->info = info;
	HX_STACK_LINE(70)
	Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Exception.hx","\xef","\x59","\x7d","\xc2"),70,HX_HCSTRING("massive.haxe.Exception","\xb1","\xdb","\x97","\x14"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	Dynamic tmp1 = ::massive::haxe::util::ReflectUtil_obj::here(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	this->type = tmp1->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );
}
;
	return null();
}

//Exception_obj::~Exception_obj() { }

Dynamic Exception_obj::__CreateEmpty() { return  new Exception_obj; }
hx::ObjectPtr< Exception_obj > Exception_obj::__new(::String message,Dynamic info)
{  hx::ObjectPtr< Exception_obj > _result_ = new Exception_obj();
	_result_->__construct(message,info);
	return _result_;}

Dynamic Exception_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Exception_obj > _result_ = new Exception_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String Exception_obj::toString( ){
	HX_STACK_FRAME("massive.haxe.Exception","toString",0xe8615509,"massive.haxe.Exception.toString","massive/haxe/Exception.hx",79,0x32c9780d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	::String tmp1 = (tmp + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	::String tmp2 = this->message;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	::String str = tmp3;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(81)
	Dynamic tmp4 = this->info;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	if ((tmp5)){
		HX_STACK_LINE(82)
		Dynamic tmp6 = this->info;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		::String tmp7 = tmp6->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		::String tmp8 = (HX_HCSTRING(" at ","\xad","\xd3","\x70","\x15") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		::String tmp9 = (tmp8 + HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		Dynamic tmp10 = this->info;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		::String tmp11 = tmp10->__Field(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(82)
		::String tmp13 = (tmp12 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(82)
		Dynamic tmp14 = this->info;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(82)
		int tmp15 = tmp14->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(82)
		::String tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(82)
		::String tmp17 = (tmp16 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(82)
		hx::AddEq(str,tmp17);
	}
	HX_STACK_LINE(83)
	::String tmp6 = str;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(83)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,toString,return )


Exception_obj::Exception_obj()
{
}

void Exception_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exception);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_END_CLASS();
}

void Exception_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(info,"info");
}

Dynamic Exception_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Exception_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Exception_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Exception_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(Exception_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Exception_obj,info),HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
};

#endif

hx::Class Exception_obj::__mClass;

void Exception_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.haxe.Exception","\xb1","\xdb","\x97","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Exception_obj >;
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
} // end namespace haxe
