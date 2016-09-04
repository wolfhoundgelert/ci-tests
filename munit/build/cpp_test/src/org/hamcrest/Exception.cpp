#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
namespace org{
namespace hamcrest{

Void Exception_obj::__construct(::String __o_message,Dynamic cause,Dynamic info)
{
HX_STACK_FRAME("org.hamcrest.Exception","new",0xab539160,"org.hamcrest.Exception.new","org/hamcrest/Exception.hx",22,0x940281f0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(cause,"cause")
HX_STACK_ARG(info,"info")
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(23)
	::hx::Class tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	this->name = tmp1;
	HX_STACK_LINE(24)
	this->message = message;
	HX_STACK_LINE(25)
	this->cause = cause;
	HX_STACK_LINE(26)
	this->info = info;
}
;
	return null();
}

//Exception_obj::~Exception_obj() { }

Dynamic Exception_obj::__CreateEmpty() { return  new Exception_obj; }
hx::ObjectPtr< Exception_obj > Exception_obj::__new(::String __o_message,Dynamic cause,Dynamic info)
{  hx::ObjectPtr< Exception_obj > _result_ = new Exception_obj();
	_result_->__construct(__o_message,cause,info);
	return _result_;}

Dynamic Exception_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Exception_obj > _result_ = new Exception_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String Exception_obj::get_name( ){
	HX_STACK_FRAME("org.hamcrest.Exception","get_name",0xc1feccd4,"org.hamcrest.Exception.get_name","org/hamcrest/Exception.hx",11,0x940281f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,get_name,return )

::String Exception_obj::get_message( ){
	HX_STACK_FRAME("org.hamcrest.Exception","get_message",0x623456de,"org.hamcrest.Exception.get_message","org/hamcrest/Exception.hx",14,0x940281f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	::String tmp = this->message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,get_message,return )

Dynamic Exception_obj::get_cause( ){
	HX_STACK_FRAME("org.hamcrest.Exception","get_cause",0xa79229c0,"org.hamcrest.Exception.get_cause","org/hamcrest/Exception.hx",17,0x940281f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	Dynamic tmp = this->cause;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,get_cause,return )

::String Exception_obj::toString( ){
	HX_STACK_FRAME("org.hamcrest.Exception","toString",0x31b36fac,"org.hamcrest.Exception.toString","org/hamcrest/Exception.hx",31,0x940281f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::String tmp = this->get_name();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::String tmp1 = (tmp + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	::String tmp2 = this->get_message();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	::String str = tmp3;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(33)
	Dynamic tmp4 = this->info;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	if ((tmp5)){
		HX_STACK_LINE(34)
		Dynamic tmp6 = this->info;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		::String tmp7 = tmp6->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		::String tmp8 = (HX_HCSTRING(" at ","\xad","\xd3","\x70","\x15") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		::String tmp9 = (tmp8 + HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(34)
		Dynamic tmp10 = this->info;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		::String tmp11 = tmp10->__Field(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(34)
		::String tmp13 = (tmp12 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(34)
		Dynamic tmp14 = this->info;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(34)
		int tmp15 = tmp14->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(34)
		::String tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(34)
		::String tmp17 = (tmp16 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(34)
		hx::AddEq(str,tmp17);
	}
	HX_STACK_LINE(35)
	Dynamic tmp6 = this->get_cause();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(35)
	if ((tmp7)){
		HX_STACK_LINE(36)
		Dynamic tmp8 = this->get_cause();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		::String tmp10 = (HX_HCSTRING("\n\t Caused by: ","\xa1","\x89","\x80","\x08") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		hx::AddEq(str,tmp10);
	}
	HX_STACK_LINE(37)
	::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(37)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,toString,return )


Exception_obj::Exception_obj()
{
}

void Exception_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exception);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(cause,"cause");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_END_CLASS();
}

void Exception_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(cause,"cause");
	HX_VISIT_MEMBER_NAME(info,"info");
}

Dynamic Exception_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return inCallProp == hx::paccAlways ? get_name() : name; }
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cause") ) { return inCallProp == hx::paccAlways ? get_cause() : cause; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return inCallProp == hx::paccAlways ? get_message() : message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_cause") ) { return get_cause_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_message") ) { return get_message_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Exception_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cause") ) { cause=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Exception_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("cause","\x69","\x4c","\x22","\x41"));
	outFields->push(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Exception_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(Exception_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Exception_obj,cause),HX_HCSTRING("cause","\x69","\x4c","\x22","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Exception_obj,info),HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("get_message","\xde","\x95","\x0b","\x20"),
	HX_HCSTRING("cause","\x69","\x4c","\x22","\x41"),
	HX_HCSTRING("get_cause","\xc0","\xa8","\xcb","\x84"),
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
	__mClass->mName = HX_HCSTRING("org.hamcrest.Exception","\x6e","\xa1","\x9f","\xf7");
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

} // end namespace org
} // end namespace hamcrest
