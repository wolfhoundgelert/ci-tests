#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#define INCLUDED_massive_munit_client_AbstractTestResultClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#include <massive/munit/ICoverageTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ICoverageTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestResult)
HX_DECLARE_CLASS3(massive,munit,client,AbstractTestResultClient)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  AbstractTestResultClient_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AbstractTestResultClient_obj OBJ_;
		AbstractTestResultClient_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.client.AbstractTestResultClient")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AbstractTestResultClient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractTestResultClient_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::massive::munit::ITestResultClient_obj *();
		operator ::massive::munit::ICoverageTestResultClient_obj *();
		operator ::massive::munit::IAdvancedTestResultClient_obj *();
		::String __ToString() const { return HX_HCSTRING("AbstractTestResultClient","\x9c","\x6f","\x8b","\x10"); }

		static Array< ::String > traces;
		::String id;
		Dynamic completionHandler;
		Dynamic &completionHandler_dyn() { return completionHandler;}
		virtual Dynamic get_completionHandler( );
		Dynamic get_completionHandler_dyn();

		virtual Dynamic set_completionHandler( Dynamic value);
		Dynamic set_completionHandler_dyn();

		::String output;
		virtual ::String get_output( );
		Dynamic get_output_dyn();

		int passCount;
		int failCount;
		int errorCount;
		int ignoreCount;
		::String currentTestClass;
		Array< ::Dynamic > currentClassResults;
		Dynamic currentCoverageResult;
		Array< ::Dynamic > totalResults;
		Float totalCoveragePercent;
		::String totalCoverageReport;
		cpp::ArrayBase totalCoverageResults;
		Dynamic originalTrace;
		bool finalResult;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void setCurrentTestClass( ::String className);
		Dynamic setCurrentTestClass_dyn();

		virtual Void addPass( ::massive::munit::TestResult result);
		Dynamic addPass_dyn();

		virtual Void addFail( ::massive::munit::TestResult result);
		Dynamic addFail_dyn();

		virtual Void addError( ::massive::munit::TestResult result);
		Dynamic addError_dyn();

		virtual Void addIgnore( ::massive::munit::TestResult result);
		Dynamic addIgnore_dyn();

		virtual Void setCurrentTestClassCoverage( Dynamic result);
		Dynamic setCurrentTestClassCoverage_dyn();

		virtual Void reportFinalCoverage( Dynamic percent,cpp::ArrayBase missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency);
		Dynamic reportFinalCoverage_dyn();

		virtual Dynamic reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);
		Dynamic reportFinalStatistics_dyn();

		virtual Void initializeTestClass( );
		Dynamic initializeTestClass_dyn();

		virtual Void updateTestClass( ::massive::munit::TestResult result);
		Dynamic updateTestClass_dyn();

		virtual Void finalizeTestClass( );
		Dynamic finalizeTestClass_dyn();

		virtual Void printReports( );
		Dynamic printReports_dyn();

		virtual Void printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);
		Dynamic printFinalStatistics_dyn();

		virtual Void printOverallResult( bool result);
		Dynamic printOverallResult_dyn();

		virtual Void addTrace( Dynamic value,Dynamic info);
		Dynamic addTrace_dyn();

		virtual Array< ::String > getTraces( );
		Dynamic getTraces_dyn();

		virtual int sortTestResults( ::massive::munit::TestResult a,::massive::munit::TestResult b);
		Dynamic sortTestResults_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_AbstractTestResultClient */ 
