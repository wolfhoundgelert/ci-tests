#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#include <massive/munit/ICoverageTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_TestResultType
#include <massive/munit/TestResultType.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void PrintClientBase_obj::__construct(Dynamic __o_includeIgnoredReport)
{
HX_STACK_FRAME("massive.munit.client.PrintClientBase","new",0x78e7185f,"massive.munit.client.PrintClientBase.new","massive/munit/client/PrintClientBase.hx",52,0x1ddc6930)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_includeIgnoredReport,"includeIgnoredReport")
Dynamic includeIgnoredReport = __o_includeIgnoredReport.Default(true);
{
	HX_STACK_LINE(53)
	super::__construct();
	HX_STACK_LINE(54)
	this->id = HX_HCSTRING("simple","\x32","\x04","\x7f","\xb8");
	HX_STACK_LINE(55)
	this->verbose = false;
	HX_STACK_LINE(56)
	this->includeIgnoredReport = includeIgnoredReport;
	HX_STACK_LINE(58)
	this->printLine(HX_HCSTRING("MUnit Results","\x27","\xbf","\xec","\x01"),null());
	HX_STACK_LINE(59)
	::String tmp = this->divider;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	this->printLine(tmp,null());
}
;
	return null();
}

//PrintClientBase_obj::~PrintClientBase_obj() { }

Dynamic PrintClientBase_obj::__CreateEmpty() { return  new PrintClientBase_obj; }
hx::ObjectPtr< PrintClientBase_obj > PrintClientBase_obj::__new(Dynamic __o_includeIgnoredReport)
{  hx::ObjectPtr< PrintClientBase_obj > _result_ = new PrintClientBase_obj();
	_result_->__construct(__o_includeIgnoredReport);
	return _result_;}

Dynamic PrintClientBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrintClientBase_obj > _result_ = new PrintClientBase_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PrintClientBase_obj::init( ){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","init",0x4e06f231,"massive.munit.client.PrintClientBase.init","massive/munit/client/PrintClientBase.hx",63,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->super::init();
		HX_STACK_LINE(65)
		this->divider = HX_HCSTRING("------------------------------","\xa0","\xa6","\x7a","\xe6");
		HX_STACK_LINE(66)
		this->divider2 = HX_HCSTRING("==============================","\xa0","\xf8","\x06","\xd2");
	}
return null();
}


Void PrintClientBase_obj::initializeTestClass( ){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","initializeTestClass",0x4df93115,"massive.munit.client.PrintClientBase.initializeTestClass","massive/munit/client/PrintClientBase.hx",72,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		this->super::initializeTestClass();
		HX_STACK_LINE(74)
		::String tmp = this->currentTestClass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		::String tmp1 = (HX_HCSTRING("Class: ","\xbe","\x50","\xe2","\x36") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		::String tmp2 = (tmp1 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		this->printLine(tmp2,null());
	}
return null();
}


Void PrintClientBase_obj::updateTestClass( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","updateTestClass",0xc78451bc,"massive.munit.client.PrintClientBase.updateTestClass","massive/munit/client/PrintClientBase.hx",78,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(79)
		::massive::munit::TestResult tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		this->super::updateTestClass(tmp);
		HX_STACK_LINE(80)
		bool tmp1 = this->verbose;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		if ((tmp1)){
			HX_STACK_LINE(80)
			::String tmp2 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + result->name);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			::String tmp3 = (tmp2 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(80)
			::massive::munit::TestResultType tmp4 = result->get_type();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(80)
			::String tmp7 = (tmp6 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			this->printLine(tmp7,null());
		}
		else{
			HX_STACK_LINE(83)
			::massive::munit::TestResultType tmp2 = result->get_type();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			::massive::munit::TestResultType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(85)
					this->print(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(86)
					this->print(HX_HCSTRING("!","\x21","\x00","\x00","\x00"));
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(87)
					this->print(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(88)
					this->print(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(89)
					Dynamic();
				}
				;break;
			}
		}
	}
return null();
}


Void PrintClientBase_obj::finalizeTestClass( ){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","finalizeTestClass",0x6abe5547,"massive.munit.client.PrintClientBase.finalizeTestClass","massive/munit/client/PrintClientBase.hx",95,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->super::finalizeTestClass();
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			Array< ::String > _g1 = this->getTraces();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(98)
			while((true)){
				HX_STACK_LINE(98)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(98)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(98)
				if ((tmp1)){
					HX_STACK_LINE(98)
					break;
				}
				HX_STACK_LINE(98)
				::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(98)
				::String item = tmp2;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(98)
				++(_g);
				HX_STACK_LINE(100)
				::String tmp3 = (HX_HCSTRING("TRACE: ","\x4b","\x1c","\xd8","\x07") + item);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				this->printLine(tmp3,(int)1);
			}
		}
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			Array< ::Dynamic > _g1 = this->currentClassResults;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(103)
			while((true)){
				HX_STACK_LINE(103)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(103)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(103)
				if ((tmp1)){
					HX_STACK_LINE(103)
					break;
				}
				HX_STACK_LINE(103)
				::massive::munit::TestResult tmp2 = _g1->__get(_g).StaticCast< ::massive::munit::TestResult >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(103)
				::massive::munit::TestResult result = tmp2;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(103)
				++(_g);
				HX_STACK_LINE(105)
				{
					HX_STACK_LINE(105)
					::massive::munit::TestResultType tmp3 = result->get_type();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(105)
					::massive::munit::TestResultType _g2 = tmp3;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(105)
					switch( (int)(_g2->__Index())){
						case (int)3: {
							HX_STACK_LINE(107)
							Dynamic tmp4 = result->error;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(107)
							::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(107)
							::String tmp6 = (HX_HCSTRING("ERROR: ","\x4e","\x70","\xde","\x69") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(107)
							this->printLine(tmp6,(int)1);
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(108)
							::massive::munit::AssertionException tmp4 = result->failure;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(108)
							::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(108)
							::String tmp6 = (HX_HCSTRING("FAIL: ","\x04","\x68","\x81","\x9a") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(108)
							this->printLine(tmp6,(int)1);
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(111)
							::String tmp4 = result->get_location();		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(111)
							::String ingoredString = tmp4;		HX_STACK_VAR(ingoredString,"ingoredString");
							HX_STACK_LINE(112)
							bool tmp5 = (result->description != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(112)
							if ((tmp5)){
								HX_STACK_LINE(112)
								::String tmp6 = (HX_HCSTRING(" - ","\x73","\x6f","\x18","\x00") + result->description);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(112)
								hx::AddEq(ingoredString,tmp6);
							}
							HX_STACK_LINE(113)
							::String tmp6 = (HX_HCSTRING("IGNORE: ","\x38","\x80","\xbc","\xba") + ingoredString);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(113)
							this->printLine(tmp6,(int)1);
						}
						;break;
						case (int)1: case (int)0: {
							HX_STACK_LINE(115)
							Dynamic();
						}
						;break;
					}
				}
			}
		}
	}
return null();
}


Void PrintClientBase_obj::setCurrentTestClassCoverage( Dynamic result){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","setCurrentTestClassCoverage",0xe1d848d6,"massive.munit.client.PrintClientBase.setCurrentTestClassCoverage","massive/munit/client/PrintClientBase.hx",122,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(123)
		Dynamic tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		this->super::setCurrentTestClassCoverage(tmp);
		HX_STACK_LINE(124)
		::String tmp1 = (HX_HCSTRING(" [","\x3b","\x1c","\x00","\x00") + result->__Field(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		::String tmp2 = (tmp1 + HX_HCSTRING("%]","\x98","\x20","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		this->print(tmp2);
	}
return null();
}


Void PrintClientBase_obj::reportFinalCoverage( Dynamic __o_percent,cpp::ArrayBase missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency){
Dynamic percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.PrintClientBase","reportFinalCoverage",0xbc183c29,"massive.munit.client.PrintClientBase.reportFinalCoverage","massive/munit/client/PrintClientBase.hx",142,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(percent,"percent")
	HX_STACK_ARG(missingCoverageResults,"missingCoverageResults")
	HX_STACK_ARG(summary,"summary")
	HX_STACK_ARG(classBreakdown,"classBreakdown")
	HX_STACK_ARG(packageBreakdown,"packageBreakdown")
	HX_STACK_ARG(executionFrequency,"executionFrequency")
{
		HX_STACK_LINE(143)
		Dynamic tmp = percent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		::String tmp1 = summary;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		::String tmp2 = classBreakdown;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		::String tmp3 = packageBreakdown;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		::String tmp4 = executionFrequency;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		this->super::reportFinalCoverage(tmp,missingCoverageResults,tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(145)
		this->printLine(HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());
		HX_STACK_LINE(146)
		::String tmp5 = this->divider;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		this->printLine(tmp5,null());
		HX_STACK_LINE(147)
		this->printLine(HX_HCSTRING("COVERAGE REPORT","\xec","\xab","\x03","\x2a"),null());
		HX_STACK_LINE(148)
		::String tmp6 = this->divider;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		this->printLine(tmp6,null());
		HX_STACK_LINE(150)
		bool tmp7 = (missingCoverageResults != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(150)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		if ((tmp7)){
			HX_STACK_LINE(150)
			tmp8 = (missingCoverageResults->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);
		}
		else{
			HX_STACK_LINE(150)
			tmp8 = false;
		}
		HX_STACK_LINE(150)
		if ((tmp8)){
			HX_STACK_LINE(152)
			this->printLine(HX_HCSTRING("MISSING CODE BLOCKS:","\x1b","\x96","\xb2","\x63"),null());
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(153)
				while((true)){
					HX_STACK_LINE(153)
					bool tmp9 = (_g < missingCoverageResults->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(153)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(153)
					if ((tmp10)){
						HX_STACK_LINE(153)
						break;
					}
					HX_STACK_LINE(153)
					Dynamic tmp11 = missingCoverageResults->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(153)
					Dynamic result = tmp11;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(153)
					++(_g);
					HX_STACK_LINE(155)
					::String tmp12 = (result->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ) + HX_HCSTRING(" [","\x3b","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(155)
					Float tmp13 = result->__Field(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(155)
					::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(155)
					::String tmp15 = (tmp14 + HX_HCSTRING("%]","\x98","\x20","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(155)
					this->printLine(tmp15,(int)1);
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(156)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(156)
						Array< ::String > _g2 = result->__Field(HX_HCSTRING("blocks","\x86","\x2e","\xea","\xa7"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(156)
						while((true)){
							HX_STACK_LINE(156)
							bool tmp16 = (_g1 < _g2->length);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(156)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(156)
							if ((tmp17)){
								HX_STACK_LINE(156)
								break;
							}
							HX_STACK_LINE(156)
							::String tmp18 = _g2->__get(_g1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(156)
							::String item = tmp18;		HX_STACK_VAR(item,"item");
							HX_STACK_LINE(156)
							++(_g1);
							HX_STACK_LINE(158)
							::String tmp19 = item;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(158)
							this->printIndentedLines(tmp19,(int)2);
						}
					}
					HX_STACK_LINE(160)
					this->printLine(HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());
				}
			}
		}
		HX_STACK_LINE(164)
		bool tmp9 = (executionFrequency != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		if ((tmp9)){
			HX_STACK_LINE(166)
			this->printLine(HX_HCSTRING("CODE EXECUTION FREQUENCY:","\xb9","\x13","\xe4","\x96"),null());
			HX_STACK_LINE(167)
			::String tmp10 = executionFrequency;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(167)
			this->printIndentedLines(tmp10,(int)1);
			HX_STACK_LINE(169)
			this->printLine(HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());
		}
		HX_STACK_LINE(172)
		bool tmp10 = (classBreakdown != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(172)
		if ((tmp10)){
			HX_STACK_LINE(174)
			::String tmp11 = classBreakdown;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			this->printIndentedLines(tmp11,(int)0);
		}
		HX_STACK_LINE(177)
		bool tmp11 = (packageBreakdown != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(177)
		if ((tmp11)){
			HX_STACK_LINE(179)
			::String tmp12 = packageBreakdown;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(179)
			this->printIndentedLines(tmp12,(int)0);
		}
		HX_STACK_LINE(182)
		bool tmp12 = (summary != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(182)
		if ((tmp12)){
			HX_STACK_LINE(184)
			::String tmp13 = summary;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(184)
			this->printIndentedLines(tmp13,(int)0);
		}
	}
return null();
}


Void PrintClientBase_obj::printIndentedLines( ::String value,hx::Null< int >  __o_indent){
int indent = __o_indent.Default(1);
	HX_STACK_FRAME("massive.munit.client.PrintClientBase","printIndentedLines",0x85b904a8,"massive.munit.client.PrintClientBase.printIndentedLines","massive/munit/client/PrintClientBase.hx",189,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(190)
		Array< ::String > lines = value.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(191)
			while((true)){
				HX_STACK_LINE(191)
				bool tmp = (_g < lines->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(191)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(191)
				if ((tmp1)){
					HX_STACK_LINE(191)
					break;
				}
				HX_STACK_LINE(191)
				::String tmp2 = lines->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(191)
				::String line = tmp2;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(191)
				++(_g);
				HX_STACK_LINE(193)
				::String tmp3 = line;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(193)
				int tmp4 = indent;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(193)
				this->printLine(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,printIndentedLines,(void))

Void PrintClientBase_obj::printReports( ){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","printReports",0x9ce900b3,"massive.munit.client.PrintClientBase.printReports","massive/munit/client/PrintClientBase.hx",199,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_LINE(200)
		int tmp = this->ignoreCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		this->printFinalIgnoredStatistics(tmp);
	}
return null();
}


Void PrintClientBase_obj::printFinalIgnoredStatistics( int count){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","printFinalIgnoredStatistics",0x09275b8b,"massive.munit.client.PrintClientBase.printFinalIgnoredStatistics","massive/munit/client/PrintClientBase.hx",204,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(205)
		bool tmp = this->includeIgnoredReport;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		if ((tmp3)){
			HX_STACK_LINE(205)
			tmp4 = (count == (int)0);
		}
		else{
			HX_STACK_LINE(205)
			tmp4 = true;
		}
		HX_STACK_LINE(205)
		if ((tmp4)){
			HX_STACK_LINE(205)
			return null();
		}
		HX_STACK_LINE(207)
		Dynamic tmp5 = this->filterIngored_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		::List tmp6 = ::Lambda_obj::filter(this->totalResults,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		::List items = tmp6;		HX_STACK_VAR(items,"items");
		HX_STACK_LINE(209)
		bool tmp7 = (items->length == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(209)
		if ((tmp7)){
			HX_STACK_LINE(209)
			return null();
		}
		HX_STACK_LINE(211)
		this->printLine(HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());
		HX_STACK_LINE(212)
		::String tmp8 = (HX_HCSTRING("Ignored (","\x7a","\x9b","\xb5","\x50") + count);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(212)
		::String tmp9 = (tmp8 + HX_HCSTRING("):","\xf1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(212)
		this->printLine(tmp9,null());
		HX_STACK_LINE(213)
		::String tmp10 = this->divider;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(213)
		this->printLine(tmp10,null());
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::_List::ListIterator tmp11 = ::_List::ListIterator_obj::__new(items->h);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(215)
			::_List::ListIterator _g = tmp11;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(215)
			while((true)){
				HX_STACK_LINE(215)
				bool tmp12 = (_g->head != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(215)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(215)
				if ((tmp13)){
					HX_STACK_LINE(215)
					break;
				}
				HX_STACK_LINE(215)
				Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					Dynamic tmp15 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(215)
					_g->val = tmp15;
					HX_STACK_LINE(215)
					Dynamic tmp16 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(215)
					_g->head = tmp16;
					HX_STACK_LINE(215)
					tmp14 = _g->val;
				}
				HX_STACK_LINE(215)
				::massive::munit::TestResult result = ((::massive::munit::TestResult)(tmp14));		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(217)
				::String tmp15 = result->get_location();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(217)
				::String ingoredString = tmp15;		HX_STACK_VAR(ingoredString,"ingoredString");
				HX_STACK_LINE(218)
				bool tmp16 = (result->description != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(218)
				if ((tmp16)){
					HX_STACK_LINE(218)
					::String tmp17 = (HX_HCSTRING(" - ","\x73","\x6f","\x18","\x00") + result->description);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(218)
					hx::AddEq(ingoredString,tmp17);
				}
				HX_STACK_LINE(219)
				::String tmp17 = (HX_HCSTRING("IGNORE: ","\x38","\x80","\xbc","\xba") + ingoredString);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(219)
				this->printLine(tmp17,(int)1);
			}
		}
		HX_STACK_LINE(221)
		this->printLine(HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,printFinalIgnoredStatistics,(void))

bool PrintClientBase_obj::filterIngored( ::massive::munit::TestResult result){
	HX_STACK_FRAME("massive.munit.client.PrintClientBase","filterIngored",0x7df97a0b,"massive.munit.client.PrintClientBase.filterIngored","massive/munit/client/PrintClientBase.hx",225,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(226)
	::massive::munit::TestResultType tmp = result->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	bool tmp1 = (tmp == ::massive::munit::TestResultType_obj::IGNORE);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,filterIngored,return )

Void PrintClientBase_obj::printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","printFinalStatistics",0x9f291dad,"massive.munit.client.PrintClientBase.printFinalStatistics","massive/munit/client/PrintClientBase.hx",230,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_ARG(testCount,"testCount")
		HX_STACK_ARG(passCount,"passCount")
		HX_STACK_ARG(failCount,"failCount")
		HX_STACK_ARG(errorCount,"errorCount")
		HX_STACK_ARG(ignoreCount,"ignoreCount")
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(231)
		::String tmp = this->divider2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		this->printLine(tmp,null());
		HX_STACK_LINE(232)
		bool tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		if ((tmp1)){
			HX_STACK_LINE(232)
			tmp2 = HX_HCSTRING("PASSED","\x70","\x7f","\xb4","\xa0");
		}
		else{
			HX_STACK_LINE(232)
			tmp2 = HX_HCSTRING("FAILED","\xbd","\x71","\x81","\x9a");
		}
		HX_STACK_LINE(232)
		::String resultString = tmp2;		HX_STACK_VAR(resultString,"resultString");
		HX_STACK_LINE(233)
		::String tmp3 = HX_HCSTRING("\nTests: ","\xdd","\xc9","\x27","\xc7");		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		int tmp4 = testCount;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		::String tmp6 = (tmp5 + HX_HCSTRING("  Passed: ","\x36","\x9a","\x0f","\x7e"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(234)
		int tmp7 = passCount;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(233)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(233)
		::String tmp9 = (tmp8 + HX_HCSTRING("  Failed: ","\xc3","\x79","\xb7","\x3a"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(235)
		int tmp10 = failCount;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(233)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(233)
		::String tmp12 = (tmp11 + HX_HCSTRING(" Errors: ","\x51","\x13","\x30","\x17"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(236)
		int tmp13 = errorCount;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(233)
		::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(233)
		::String tmp15 = (tmp14 + HX_HCSTRING(" Ignored: ","\xf8","\xad","\x04","\x5a"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(237)
		int tmp16 = ignoreCount;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(233)
		::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(233)
		::String tmp18 = (tmp17 + HX_HCSTRING(" Time: ","\x33","\x28","\x15","\x86"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(238)
		Float tmp19 = time;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(238)
		Float tmp20 = ::massive::munit::util::MathUtil_obj::round(tmp19,(int)5);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(233)
		::String tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(233)
		hx::AddEq(resultString,tmp21);
		HX_STACK_LINE(240)
		::String tmp22 = resultString;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(240)
		this->printLine(tmp22,null());
		HX_STACK_LINE(241)
		this->printLine(HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());
	}
return null();
}


Void PrintClientBase_obj::printOverallResult( bool result){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","printOverallResult",0x5757b77e,"massive.munit.client.PrintClientBase.printOverallResult","massive/munit/client/PrintClientBase.hx",246,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(246)
		this->printLine(HX_HCSTRING("","\x00","\x00","\x00","\x00"),null());
	}
return null();
}


Void PrintClientBase_obj::print( Dynamic value){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","print",0x027fddec,"massive.munit.client.PrintClientBase.print","massive/munit/client/PrintClientBase.hx",251,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(252)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		hx::AddEq(this->output,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,print,(void))

Void PrintClientBase_obj::printLine( Dynamic value,Dynamic __o_indent){
Dynamic indent = __o_indent.Default(0);
	HX_STACK_FRAME("massive.munit.client.PrintClientBase","printLine",0x514f8800,"massive.munit.client.PrintClientBase.printLine","massive/munit/client/PrintClientBase.hx",256,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(257)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		value = tmp1;
		HX_STACK_LINE(258)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		Dynamic tmp3 = indent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		::String tmp4 = this->indentString(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		value = tmp4;
		HX_STACK_LINE(259)
		Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(259)
		::String tmp7 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(259)
		this->print(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,printLine,(void))

::String PrintClientBase_obj::indentString( ::String value,Dynamic __o_indent){
Dynamic indent = __o_indent.Default(0);
	HX_STACK_FRAME("massive.munit.client.PrintClientBase","indentString",0xed10027e,"massive.munit.client.PrintClientBase.indentString","massive/munit/client/PrintClientBase.hx",263,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(264)
		bool tmp = (indent > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		if ((tmp)){
			HX_STACK_LINE(266)
			int tmp1 = (indent * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(266)
			::String tmp2 = ::StringTools_obj::lpad(HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(266)
			::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(266)
			::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(266)
			value = tmp4;
		}
		HX_STACK_LINE(269)
		bool tmp1 = (value == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		if ((tmp1)){
			HX_STACK_LINE(269)
			value = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(270)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,indentString,return )

::String PrintClientBase_obj::DEFAULT_ID;


PrintClientBase_obj::PrintClientBase_obj()
{
}

void PrintClientBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PrintClientBase);
	HX_MARK_MEMBER_NAME(verbose,"verbose");
	HX_MARK_MEMBER_NAME(includeIgnoredReport,"includeIgnoredReport");
	HX_MARK_MEMBER_NAME(divider,"divider");
	HX_MARK_MEMBER_NAME(divider2,"divider2");
	::massive::munit::client::AbstractTestResultClient_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PrintClientBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(verbose,"verbose");
	HX_VISIT_MEMBER_NAME(includeIgnoredReport,"includeIgnoredReport");
	HX_VISIT_MEMBER_NAME(divider,"divider");
	HX_VISIT_MEMBER_NAME(divider2,"divider2");
	::massive::munit::client::AbstractTestResultClient_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PrintClientBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { return verbose; }
		if (HX_FIELD_EQ(inName,"divider") ) { return divider; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"divider2") ) { return divider2; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return printLine_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"printReports") ) { return printReports_dyn(); }
		if (HX_FIELD_EQ(inName,"indentString") ) { return indentString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterIngored") ) { return filterIngored_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTestClass") ) { return updateTestClass_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finalizeTestClass") ) { return finalizeTestClass_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printIndentedLines") ) { return printIndentedLines_dyn(); }
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return printOverallResult_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initializeTestClass") ) { return initializeTestClass_dyn(); }
		if (HX_FIELD_EQ(inName,"reportFinalCoverage") ) { return reportFinalCoverage_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"includeIgnoredReport") ) { return includeIgnoredReport; }
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return printFinalStatistics_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setCurrentTestClassCoverage") ) { return setCurrentTestClassCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"printFinalIgnoredStatistics") ) { return printFinalIgnoredStatistics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PrintClientBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"divider") ) { divider=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"divider2") ) { divider2=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"includeIgnoredReport") ) { includeIgnoredReport=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PrintClientBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"));
	outFields->push(HX_HCSTRING("includeIgnoredReport","\x1e","\x1a","\xbf","\xa1"));
	outFields->push(HX_HCSTRING("divider","\xd9","\x5a","\xd7","\x70"));
	outFields->push(HX_HCSTRING("divider2","\x39","\x23","\x98","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PrintClientBase_obj,verbose),HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71")},
	{hx::fsBool,(int)offsetof(PrintClientBase_obj,includeIgnoredReport),HX_HCSTRING("includeIgnoredReport","\x1e","\x1a","\xbf","\xa1")},
	{hx::fsString,(int)offsetof(PrintClientBase_obj,divider),HX_HCSTRING("divider","\xd9","\x5a","\xd7","\x70")},
	{hx::fsString,(int)offsetof(PrintClientBase_obj,divider2),HX_HCSTRING("divider2","\x39","\x23","\x98","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &PrintClientBase_obj::DEFAULT_ID,HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("includeIgnoredReport","\x1e","\x1a","\xbf","\xa1"),
	HX_HCSTRING("divider","\xd9","\x5a","\xd7","\x70"),
	HX_HCSTRING("divider2","\x39","\x23","\x98","\x4b"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("initializeTestClass","\x16","\xbb","\x49","\x2f"),
	HX_HCSTRING("updateTestClass","\x3d","\x87","\xe5","\x60"),
	HX_HCSTRING("finalizeTestClass","\x08","\xad","\xf8","\x06"),
	HX_HCSTRING("setCurrentTestClassCoverage","\xd7","\x3b","\xb4","\x88"),
	HX_HCSTRING("reportFinalCoverage","\x2a","\xc6","\x68","\x9d"),
	HX_HCSTRING("printIndentedLines","\xc7","\x75","\x8b","\x9c"),
	HX_HCSTRING("printReports","\x92","\xc0","\x6f","\x0e"),
	HX_HCSTRING("printFinalIgnoredStatistics","\x8c","\x4e","\x03","\xb0"),
	HX_HCSTRING("filterIngored","\x4c","\x9d","\x5a","\x62"),
	HX_HCSTRING("printFinalStatistics","\x8c","\x54","\x51","\xe4"),
	HX_HCSTRING("printOverallResult","\x9d","\x28","\x2a","\x6e"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("printLine","\xc1","\xb6","\xab","\xc8"),
	HX_HCSTRING("indentString","\x5d","\xc2","\x96","\x5e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrintClientBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PrintClientBase_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrintClientBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PrintClientBase_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

hx::Class PrintClientBase_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18"),
	::String(null()) };

void PrintClientBase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.PrintClientBase","\xed","\xfc","\x85","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PrintClientBase_obj >;
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

void PrintClientBase_obj::__boot()
{
	DEFAULT_ID= HX_HCSTRING("simple","\x32","\x04","\x7f","\xb8");
}

} // end namespace massive
} // end namespace munit
} // end namespace client
