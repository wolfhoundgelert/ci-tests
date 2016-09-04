#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_Assert
#include <massive/munit/Assert.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
namespace massive{
namespace munit{

Void Assert_obj::__construct()
{
	return null();
}

//Assert_obj::~Assert_obj() { }

Dynamic Assert_obj::__CreateEmpty() { return  new Assert_obj; }
hx::ObjectPtr< Assert_obj > Assert_obj::__new()
{  hx::ObjectPtr< Assert_obj > _result_ = new Assert_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assert_obj > _result_ = new Assert_obj();
	_result_->__construct();
	return _result_;}

int Assert_obj::assertionCount;

Void Assert_obj::isTrue( bool value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isTrue",0x34cf1719,"massive.munit.Assert.isTrue","massive/munit/Assert.hx",52,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(53)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(54)
		bool tmp = (value != true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		if ((tmp)){
			HX_STACK_LINE(54)
			bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			::String tmp3 = (HX_HCSTRING("Expected TRUE but was [","\xbb","\x60","\xfc","\x33") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			::String tmp4 = (tmp3 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			Dynamic tmp5 = info;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			::massive::munit::Assert_obj::fail(tmp4,tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isTrue,(void))

Void Assert_obj::isFalse( bool value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isFalse",0xe5859778,"massive.munit.Assert.isFalse","massive/munit/Assert.hx",64,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(65)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(66)
		bool tmp = (value != false);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		if ((tmp)){
			HX_STACK_LINE(66)
			bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			::String tmp3 = (HX_HCSTRING("Expected FALSE but was [","\x20","\x19","\xa9","\x73") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			::String tmp4 = (tmp3 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			Dynamic tmp5 = info;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			::massive::munit::Assert_obj::fail(tmp4,tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isFalse,(void))

Void Assert_obj::isNull( Dynamic value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isNull",0x30da0e52,"massive.munit.Assert.isNull","massive/munit/Assert.hx",76,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(77)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(78)
		bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		if ((tmp)){
			HX_STACK_LINE(78)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			::String tmp3 = (HX_HCSTRING("Value [","\xcc","\x41","\xbd","\x3d") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			::String tmp4 = (tmp3 + HX_HCSTRING("] was not NULL","\x2e","\xe4","\x6d","\x32"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			Dynamic tmp5 = info;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			::massive::munit::Assert_obj::fail(tmp4,tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isNull,(void))

Void Assert_obj::isNotNull( Dynamic value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isNotNull",0xec2b6a4f,"massive.munit.Assert.isNotNull","massive/munit/Assert.hx",88,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(89)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(90)
		bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		if ((tmp)){
			HX_STACK_LINE(90)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(90)
			::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			::String tmp3 = (HX_HCSTRING("Value [","\xcc","\x41","\xbd","\x3d") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			::String tmp4 = (tmp3 + HX_HCSTRING("] was NULL","\x01","\x2d","\xfc","\x2c"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			Dynamic tmp5 = info;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			::massive::munit::Assert_obj::fail(tmp4,tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isNotNull,(void))

Void Assert_obj::isNaN( Float value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isNaN",0x97c09f50,"massive.munit.Assert.isNaN","massive/munit/Assert.hx",100,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(101)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(102)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		bool tmp1 = ::Math_obj::isNaN(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		if ((tmp2)){
			HX_STACK_LINE(102)
			::String tmp3 = (HX_HCSTRING("Value [","\xcc","\x41","\xbd","\x3d") + value);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			::String tmp4 = (tmp3 + HX_HCSTRING("]  was not NaN","\x9a","\x1a","\x04","\x75"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			Dynamic tmp5 = info;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			::massive::munit::Assert_obj::fail(tmp4,tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isNaN,(void))

Void Assert_obj::isNotNaN( Float value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isNotNaN",0x370391f3,"massive.munit.Assert.isNotNaN","massive/munit/Assert.hx",112,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(113)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(114)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		bool tmp1 = ::Math_obj::isNaN(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		if ((tmp1)){
			HX_STACK_LINE(114)
			::String tmp2 = (HX_HCSTRING("Value [","\xcc","\x41","\xbd","\x3d") + value);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			::String tmp3 = (tmp2 + HX_HCSTRING("] was NaN","\x61","\xab","\x90","\x31"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(114)
			Dynamic tmp4 = info;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			::massive::munit::Assert_obj::fail(tmp3,tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isNotNaN,(void))

Void Assert_obj::isType( Dynamic value,Dynamic type,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isType",0x34d46285,"massive.munit.Assert.isType","massive/munit/Assert.hx",124,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(125)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(126)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		Dynamic tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		bool tmp2 = ::Std_obj::is(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		if ((tmp3)){
			HX_STACK_LINE(126)
			Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			::String tmp6 = (HX_HCSTRING("Value [","\xcc","\x41","\xbd","\x3d") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			::String tmp7 = (tmp6 + HX_HCSTRING("] was not of type: ","\xc2","\x44","\x01","\x71"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			Dynamic tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(126)
			::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(126)
			::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(126)
			Dynamic tmp11 = info;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(126)
			::massive::munit::Assert_obj::fail(tmp10,tmp11);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,isType,(void))

Void Assert_obj::isNotType( Dynamic value,Dynamic type,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isNotType",0xf025be82,"massive.munit.Assert.isNotType","massive/munit/Assert.hx",136,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(137)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(138)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		Dynamic tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		bool tmp2 = ::Std_obj::is(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		if ((tmp2)){
			HX_STACK_LINE(138)
			Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			::String tmp5 = (HX_HCSTRING("Value [","\xcc","\x41","\xbd","\x3d") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			::String tmp6 = (tmp5 + HX_HCSTRING("] was of type: ","\x0f","\x1f","\xfb","\x82"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			Dynamic tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(138)
			::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(138)
			Dynamic tmp10 = info;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(138)
			::massive::munit::Assert_obj::fail(tmp9,tmp10);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,isNotType,(void))

Void Assert_obj::areEqual( Dynamic expected,Dynamic actual,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","areEqual",0x455d6dc1,"massive.munit.Assert.areEqual","massive/munit/Assert.hx",152,0xdba0f24f)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(153)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(154)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			Dynamic tmp1 = expected;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(154)
			::ValueType tmp2 = ::Type_obj::_typeof(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			::ValueType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(154)
			switch( (int)(_g->__Index())){
				case (int)7: {
					HX_STACK_LINE(157)
					Dynamic tmp3 = expected;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(157)
					Dynamic tmp4 = actual;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(157)
					tmp = ::Type_obj::enumEq(tmp3,tmp4);
				}
				;break;
				default: {
					HX_STACK_LINE(162)
					tmp = (expected == actual);
				}
			}
		}
		HX_STACK_LINE(154)
		bool equal = tmp;		HX_STACK_VAR(equal,"equal");
		HX_STACK_LINE(164)
		bool tmp1 = equal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		if ((tmp2)){
			HX_STACK_LINE(164)
			Dynamic tmp3 = actual;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			::String tmp5 = (HX_HCSTRING("Value [","\xcc","\x41","\xbd","\x3d") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			::String tmp6 = (tmp5 + HX_HCSTRING("] was not equal to expected value [","\x16","\xa1","\x2f","\x2d"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			Dynamic tmp7 = expected;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(164)
			::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(164)
			::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(164)
			::String tmp10 = (tmp9 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(164)
			Dynamic tmp11 = info;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(164)
			::massive::munit::Assert_obj::fail(tmp10,tmp11);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,areEqual,(void))

Void Assert_obj::areNotEqual( Dynamic expected,Dynamic actual,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","areNotEqual",0x6c4589b4,"massive.munit.Assert.areNotEqual","massive/munit/Assert.hx",178,0xdba0f24f)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(179)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(180)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			Dynamic tmp1 = expected;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(180)
			::ValueType tmp2 = ::Type_obj::_typeof(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(180)
			::ValueType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(180)
			switch( (int)(_g->__Index())){
				case (int)7: {
					HX_STACK_LINE(183)
					Dynamic tmp3 = expected;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(183)
					Dynamic tmp4 = actual;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(183)
					tmp = ::Type_obj::enumEq(tmp3,tmp4);
				}
				;break;
				default: {
					HX_STACK_LINE(187)
					tmp = (expected == actual);
				}
			}
		}
		HX_STACK_LINE(180)
		bool equal = tmp;		HX_STACK_VAR(equal,"equal");
		HX_STACK_LINE(190)
		bool tmp1 = equal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		if ((tmp1)){
			HX_STACK_LINE(190)
			Dynamic tmp2 = actual;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(190)
			::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			::String tmp4 = (HX_HCSTRING("Value [","\xcc","\x41","\xbd","\x3d") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			::String tmp5 = (tmp4 + HX_HCSTRING("] was equal to value [","\xad","\xd8","\xe6","\xf1"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			Dynamic tmp6 = expected;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(190)
			::String tmp9 = (tmp8 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(190)
			Dynamic tmp10 = info;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(190)
			::massive::munit::Assert_obj::fail(tmp9,tmp10);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,areNotEqual,(void))

Void Assert_obj::areSame( Dynamic expected,Dynamic actual,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","areSame",0x02a125f9,"massive.munit.Assert.areSame","massive/munit/Assert.hx",201,0xdba0f24f)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(202)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(203)
		bool tmp = (expected != actual);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		if ((tmp)){
			HX_STACK_LINE(203)
			Dynamic tmp1 = actual;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(203)
			::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(203)
			::String tmp3 = (HX_HCSTRING("Value [","\xcc","\x41","\xbd","\x3d") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			::String tmp4 = (tmp3 + HX_HCSTRING("] was not the same as expected value [","\xae","\x5f","\x06","\x10"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			Dynamic tmp5 = expected;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(203)
			::String tmp8 = (tmp7 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(203)
			Dynamic tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(203)
			::massive::munit::Assert_obj::fail(tmp8,tmp9);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,areSame,(void))

Void Assert_obj::areNotSame( Dynamic expected,Dynamic actual,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","areNotSame",0x76c00966,"massive.munit.Assert.areNotSame","massive/munit/Assert.hx",214,0xdba0f24f)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(215)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(216)
		bool tmp = (expected == actual);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		if ((tmp)){
			HX_STACK_LINE(216)
			Dynamic tmp1 = actual;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(216)
			::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			::String tmp3 = (HX_HCSTRING("Value [","\xcc","\x41","\xbd","\x3d") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(216)
			::String tmp4 = (tmp3 + HX_HCSTRING("] was the same as expected value [","\x81","\x49","\x22","\x3e"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(216)
			Dynamic tmp5 = expected;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(216)
			::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(216)
			::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(216)
			::String tmp8 = (tmp7 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(216)
			Dynamic tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(216)
			::massive::munit::Assert_obj::fail(tmp8,tmp9);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,areNotSame,(void))

Void Assert_obj::fail( ::String msg,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","fail",0x65f6825f,"massive.munit.Assert.fail","massive/munit/Assert.hx",226,0xdba0f24f)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(227)
		::massive::munit::AssertionException tmp = ::massive::munit::AssertionException_obj::__new(msg,info);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		HX_STACK_DO_THROW(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,fail,(void))


Assert_obj::Assert_obj()
{
}

bool Assert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fail") ) { outValue = fail_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isNaN") ) { outValue = isNaN_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isTrue") ) { outValue = isTrue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isNull") ) { outValue = isNull_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isType") ) { outValue = isType_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isFalse") ) { outValue = isFalse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"areSame") ) { outValue = areSame_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isNotNaN") ) { outValue = isNotNaN_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"areEqual") ) { outValue = areEqual_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isNotNull") ) { outValue = isNotNull_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isNotType") ) { outValue = isNotType_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"areNotSame") ) { outValue = areNotSame_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"areNotEqual") ) { outValue = areNotEqual_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"assertionCount") ) { outValue = assertionCount; return true;  }
	}
	return false;
}

bool Assert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"assertionCount") ) { assertionCount=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Assert_obj::assertionCount,HX_HCSTRING("assertionCount","\xad","\x2e","\xc2","\x06")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assert_obj::assertionCount,"assertionCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assert_obj::assertionCount,"assertionCount");
};

#endif

hx::Class Assert_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("assertionCount","\xad","\x2e","\xc2","\x06"),
	HX_HCSTRING("isTrue","\x58","\x6c","\x6a","\x6a"),
	HX_HCSTRING("isFalse","\x59","\xd9","\xd4","\x97"),
	HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"),
	HX_HCSTRING("isNotNull","\x70","\xa6","\x37","\x42"),
	HX_HCSTRING("isNaN","\xf1","\xf6","\x51","\xc1"),
	HX_HCSTRING("isNotNaN","\xf2","\xf4","\x0d","\x8a"),
	HX_HCSTRING("isType","\xc4","\xb7","\x6f","\x6a"),
	HX_HCSTRING("isNotType","\xa3","\xfa","\x31","\x46"),
	HX_HCSTRING("areEqual","\xc0","\xd0","\x67","\x98"),
	HX_HCSTRING("areNotEqual","\x15","\xd0","\xf1","\x8a"),
	HX_HCSTRING("areSame","\xda","\x67","\xf0","\xb4"),
	HX_HCSTRING("areNotSame","\x25","\x6a","\x68","\x6b"),
	HX_HCSTRING("fail","\xde","\xb9","\xb5","\x43"),
	::String(null()) };

void Assert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.Assert","\x8d","\x67","\x6a","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assert_obj::__GetStatic;
	__mClass->mSetStaticField = &Assert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assert_obj >;
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

void Assert_obj::__boot()
{
	assertionCount= (int)0;
}

} // end namespace massive
} // end namespace munit
