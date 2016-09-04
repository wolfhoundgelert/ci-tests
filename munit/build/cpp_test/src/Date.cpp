#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif

Void Date_obj::__construct(int year,int month,int day,int hour,int min,int sec)
{
HX_STACK_FRAME("Date","new",0x9aa26240,"Date.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",26,0x1bc6780a)
HX_STACK_THIS(this)
HX_STACK_ARG(year,"year")
HX_STACK_ARG(month,"month")
HX_STACK_ARG(day,"day")
HX_STACK_ARG(hour,"hour")
HX_STACK_ARG(min,"min")
HX_STACK_ARG(sec,"sec")
{
	HX_STACK_LINE(27)
	Float tmp = ::__hxcpp_new_date(year,month,day,hour,min,sec);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->mSeconds = tmp;
}
;
	return null();
}

//Date_obj::~Date_obj() { }

Dynamic Date_obj::__CreateEmpty() { return  new Date_obj; }
hx::ObjectPtr< Date_obj > Date_obj::__new(int year,int month,int day,int hour,int min,int sec)
{  hx::ObjectPtr< Date_obj > _result_ = new Date_obj();
	_result_->__construct(year,month,day,hour,min,sec);
	return _result_;}

Dynamic Date_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Date_obj > _result_ = new Date_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::String Date_obj::toString( ){
	HX_STACK_FRAME("Date","toString",0xd2a372cc,"Date.toString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",48,0x1bc6780a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::String tmp = ::__hxcpp_to_string(this->mSeconds);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Date_obj,toString,return )

::Date Date_obj::now( ){
	HX_STACK_FRAME("Date","now",0x9aa26af6,"Date.now","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",50,0x1bc6780a)
	HX_STACK_LINE(51)
	int tmp = ::__hxcpp_date_now();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Float tmp1 = (tmp * ((Float)1000.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	::Date tmp2 = ::Date_obj::fromTime(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Date_obj,now,return )

::Date Date_obj::fromTime( Float t){
	HX_STACK_FRAME("Date","fromTime",0x44fd3cb7,"Date.fromTime","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",57,0x1bc6780a)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(58)
	::Date tmp = ::Date_obj::__new((int)0,(int)0,(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::Date result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(59)
	Float tmp1 = (t * ((Float)0.001));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	result->mSeconds = tmp1;
	HX_STACK_LINE(60)
	::Date tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Date_obj,fromTime,return )


Date_obj::Date_obj()
{
}

Dynamic Date_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mSeconds") ) { return mSeconds; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Date_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"now") ) { outValue = now_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromTime") ) { outValue = fromTime_dyn(); return true;  }
	}
	return false;
}

Dynamic Date_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mSeconds") ) { mSeconds=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Date_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mSeconds","\x92","\x75","\x59","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Date_obj,mSeconds),HX_HCSTRING("mSeconds","\x92","\x75","\x59","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mSeconds","\x92","\x75","\x59","\x82"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Date_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Date_obj::__mClass,"__mClass");
};

#endif

hx::Class Date_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("now","\x16","\xd9","\x53","\x00"),
	HX_HCSTRING("fromTime","\x97","\x9a","\xc8","\xaa"),
	::String(null()) };

void Date_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Date","\x4e","\x82","\x3c","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Date_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Date_obj >;
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

