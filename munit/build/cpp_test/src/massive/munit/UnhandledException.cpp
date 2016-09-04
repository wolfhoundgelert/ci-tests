#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_UnhandledException
#include <massive/munit/UnhandledException.h>
#endif
namespace massive{
namespace munit{

Void UnhandledException_obj::__construct(Dynamic source,::String testLocation)
{
HX_STACK_FRAME("massive.munit.UnhandledException","new",0x1b256705,"massive.munit.UnhandledException.new","massive/munit/UnhandledException.hx",51,0x46824609)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(testLocation,"testLocation")
{
	HX_STACK_LINE(52)
	Dynamic tmp = source->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	Dynamic tmp2 = source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	::String tmp3 = testLocation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	::String tmp4 = this->formatLocation(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	::String tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	super::__construct(tmp5,null());
	HX_STACK_LINE(53)
	Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("UnhandledException.hx","\xd2","\x78","\x21","\x40"),53,HX_HCSTRING("massive.munit.UnhandledException","\x93","\x80","\x42","\x45"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(53)
	Dynamic tmp7 = ::massive::haxe::util::ReflectUtil_obj::here(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(53)
	this->type = tmp7->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );
}
;
	return null();
}

//UnhandledException_obj::~UnhandledException_obj() { }

Dynamic UnhandledException_obj::__CreateEmpty() { return  new UnhandledException_obj; }
hx::ObjectPtr< UnhandledException_obj > UnhandledException_obj::__new(Dynamic source,::String testLocation)
{  hx::ObjectPtr< UnhandledException_obj > _result_ = new UnhandledException_obj();
	_result_->__construct(source,testLocation);
	return _result_;}

Dynamic UnhandledException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UnhandledException_obj > _result_ = new UnhandledException_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String UnhandledException_obj::formatLocation( Dynamic source,::String testLocation){
	HX_STACK_FRAME("massive.munit.UnhandledException","formatLocation",0x55771a07,"massive.munit.UnhandledException.formatLocation","massive/munit/UnhandledException.hx",57,0x46824609)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(testLocation,"testLocation")
	HX_STACK_LINE(58)
	::String tmp = (HX_HCSTRING(" at ","\xad","\xd3","\x70","\x15") + testLocation);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::String stackTrace = tmp;		HX_STACK_VAR(stackTrace,"stackTrace");
	HX_STACK_LINE(60)
	Dynamic tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	::String tmp2 = this->getStackTrace(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	::String stack = tmp2;		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(62)
	bool tmp3 = (stack != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	if ((tmp3)){
		HX_STACK_LINE(63)
		::String tmp4 = stack.substr((int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		::String tmp5 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		hx::AddEq(stackTrace,tmp5);
	}
	HX_STACK_LINE(65)
	::String tmp4 = stackTrace;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(UnhandledException_obj,formatLocation,return )

::String UnhandledException_obj::getStackTrace( Dynamic source){
	HX_STACK_FRAME("massive.munit.UnhandledException","getStackTrace",0x11f4c538,"massive.munit.UnhandledException.getStackTrace","massive/munit/UnhandledException.hx",69,0x46824609)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(70)
	::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(82)
	bool tmp = (s == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(84)
		Array< ::Dynamic > stack = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(85)
		while((true)){
			HX_STACK_LINE(85)
			bool tmp1 = (stack->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			if ((tmp2)){
				HX_STACK_LINE(85)
				break;
			}
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				::haxe::StackItem tmp3 = stack->shift().StaticCast< ::haxe::StackItem >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				::haxe::StackItem _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(87)
				bool tmp4 = (_g != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				if ((tmp4)){
					HX_STACK_LINE(87)
					switch( (int)(_g->__Index())){
						case (int)2: {
							HX_STACK_LINE(87)
							int tmp5 = (::haxe::StackItem(_g))->__Param(2);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(87)
							int line = tmp5;		HX_STACK_VAR(line,"line");
							HX_STACK_LINE(87)
							::String tmp6 = (::haxe::StackItem(_g))->__Param(1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(87)
							::String file = tmp6;		HX_STACK_VAR(file,"file");
							HX_STACK_LINE(90)
							{
								HX_STACK_LINE(90)
								::String tmp7 = (HX_HCSTRING("\tat ","\x64","\xeb","\x3c","\x06") + file);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(90)
								::String tmp8 = (tmp7 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(90)
								int tmp9 = line;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(90)
								::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(90)
								::String tmp11 = (tmp10 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(90)
								hx::AddEq(s,tmp11);
							}
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(87)
							::String tmp5 = (::haxe::StackItem(_g))->__Param(1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(87)
							::String method = tmp5;		HX_STACK_VAR(method,"method");
							HX_STACK_LINE(87)
							::String tmp6 = (::haxe::StackItem(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(87)
							::String classname = tmp6;		HX_STACK_VAR(classname,"classname");
							HX_STACK_LINE(91)
							{
								HX_STACK_LINE(91)
								::String tmp7 = (HX_HCSTRING("\tat ","\x64","\xeb","\x3c","\x06") + classname);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(91)
								::String tmp8 = (tmp7 + HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(91)
								::String tmp9 = method;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(91)
								::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(91)
								::String tmp11 = (tmp10 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(91)
								hx::AddEq(s,tmp11);
							}
						}
						;break;
						default: {
						}
					}
				}
				else{
				}
			}
		}
	}
	HX_STACK_LINE(107)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(UnhandledException_obj,getStackTrace,return )


UnhandledException_obj::UnhandledException_obj()
{
}

Dynamic UnhandledException_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"getStackTrace") ) { return getStackTrace_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"formatLocation") ) { return formatLocation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("formatLocation","\x8c","\x48","\x0b","\x26"),
	HX_HCSTRING("getStackTrace","\x53","\x8e","\xb0","\x85"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UnhandledException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UnhandledException_obj::__mClass,"__mClass");
};

#endif

hx::Class UnhandledException_obj::__mClass;

void UnhandledException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.UnhandledException","\x93","\x80","\x42","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UnhandledException_obj >;
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
