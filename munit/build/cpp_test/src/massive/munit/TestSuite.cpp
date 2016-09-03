#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_massive_munit_TestSuite
#include <massive/munit/TestSuite.h>
#endif
namespace massive{
namespace munit{

Void TestSuite_obj::__construct()
{
HX_STACK_FRAME("massive.munit.TestSuite","new",0x8e962f11,"massive.munit.TestSuite.new","massive/munit/TestSuite.hx",70,0x3355af41)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(71)
	this->tests = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(72)
	this->index = (int)0;
}
;
	return null();
}

//TestSuite_obj::~TestSuite_obj() { }

Dynamic TestSuite_obj::__CreateEmpty() { return  new TestSuite_obj; }
hx::ObjectPtr< TestSuite_obj > TestSuite_obj::__new()
{  hx::ObjectPtr< TestSuite_obj > _result_ = new TestSuite_obj();
	_result_->__construct();
	return _result_;}

Dynamic TestSuite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestSuite_obj > _result_ = new TestSuite_obj();
	_result_->__construct();
	return _result_;}

Void TestSuite_obj::add( ::hx::Class test){
{
		HX_STACK_FRAME("massive.munit.TestSuite","add",0x8e8c50d2,"massive.munit.TestSuite.add","massive/munit/TestSuite.hx",81,0x3355af41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(test,"test")
		HX_STACK_LINE(82)
		::hx::Class tmp = test;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		this->tests->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(83)
		this->sortTests();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestSuite_obj,add,(void))

bool TestSuite_obj::hasNext( ){
	HX_STACK_FRAME("massive.munit.TestSuite","hasNext",0x83fcb09e,"massive.munit.TestSuite.hasNext","massive/munit/TestSuite.hx",92,0x3355af41)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	int tmp1 = this->tests->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,hasNext,return )

::hx::Class TestSuite_obj::next( ){
	HX_STACK_FRAME("massive.munit.TestSuite","next",0x34d30122,"massive.munit.TestSuite.next","massive/munit/TestSuite.hx",102,0x3355af41)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	bool tmp = this->hasNext();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	::hx::Class tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	if ((tmp)){
		HX_STACK_LINE(103)
		int tmp2 = (this->index)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		tmp1 = this->tests->__GetItem(tmp2);
	}
	else{
		HX_STACK_LINE(103)
		tmp1 = null();
	}
	HX_STACK_LINE(103)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,next,return )

Void TestSuite_obj::repeat( ){
{
		HX_STACK_FRAME("massive.munit.TestSuite","repeat",0xe487bd4a,"massive.munit.TestSuite.repeat","massive/munit/TestSuite.hx",111,0x3355af41)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		if ((tmp1)){
			HX_STACK_LINE(112)
			(this->index)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,repeat,(void))

Void TestSuite_obj::sortTests( ){
{
		HX_STACK_FRAME("massive.munit.TestSuite","sortTests",0x63bd4d14,"massive.munit.TestSuite.sortTests","massive/munit/TestSuite.hx",116,0x3355af41)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		Dynamic tmp = this->sortByName_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		this->tests->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,sortTests,(void))

int TestSuite_obj::sortByName( ::hx::Class x,::hx::Class y){
	HX_STACK_FRAME("massive.munit.TestSuite","sortByName",0x1af9eb2f,"massive.munit.TestSuite.sortByName","massive/munit/TestSuite.hx",121,0x3355af41)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(122)
	::hx::Class tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	::String xName = tmp1;		HX_STACK_VAR(xName,"xName");
	HX_STACK_LINE(123)
	::hx::Class tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	::String yName = tmp3;		HX_STACK_VAR(yName,"yName");
	HX_STACK_LINE(124)
	bool tmp4 = (xName == yName);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(124)
	if ((tmp4)){
		HX_STACK_LINE(124)
		return (int)0;
	}
	HX_STACK_LINE(125)
	bool tmp5 = (xName > yName);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(125)
	if ((tmp5)){
		HX_STACK_LINE(125)
		return (int)1;
	}
	else{
		HX_STACK_LINE(126)
		return (int)-1;
	}
	HX_STACK_LINE(125)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(TestSuite_obj,sortByName,return )


TestSuite_obj::TestSuite_obj()
{
}

void TestSuite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestSuite);
	HX_MARK_MEMBER_NAME(tests,"tests");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void TestSuite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tests,"tests");
	HX_VISIT_MEMBER_NAME(index,"index");
}

Dynamic TestSuite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tests") ) { return tests; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sortTests") ) { return sortTests_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortByName") ) { return sortByName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestSuite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tests") ) { tests=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestSuite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tests","\xe1","\x7f","\x95","\x0d"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(TestSuite_obj,tests),HX_HCSTRING("tests","\xe1","\x7f","\x95","\x0d")},
	{hx::fsInt,(int)offsetof(TestSuite_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tests","\xe1","\x7f","\x95","\x0d"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("sortTests","\xa3","\x53","\x09","\x16"),
	HX_HCSTRING("sortByName","\xc0","\xa1","\x33","\x6b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestSuite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestSuite_obj::__mClass,"__mClass");
};

#endif

hx::Class TestSuite_obj::__mClass;

void TestSuite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.TestSuite","\x9f","\x52","\x13","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestSuite_obj >;
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
