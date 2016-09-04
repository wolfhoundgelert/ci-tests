#ifndef INCLUDED_massive_munit_client_PrintClientBase
#define INCLUDED_massive_munit_client_PrintClientBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ICoverageTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestResult)
HX_DECLARE_CLASS3(massive,munit,client,AbstractTestResultClient)
HX_DECLARE_CLASS3(massive,munit,client,PrintClientBase)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  PrintClientBase_obj : public ::massive::munit::client::AbstractTestResultClient_obj{
	public:
		typedef ::massive::munit::client::AbstractTestResultClient_obj super;
		typedef PrintClientBase_obj OBJ_;
		PrintClientBase_obj();
		Void __construct(Dynamic __o_includeIgnoredReport);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.client.PrintClientBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PrintClientBase_obj > __new(Dynamic __o_includeIgnoredReport);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PrintClientBase_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PrintClientBase","\x69","\x9e","\x73","\xa1"); }

		static void __boot();
		static ::String DEFAULT_ID;
		bool verbose;
		bool includeIgnoredReport;
		::String divider;
		::String divider2;
		virtual Void init( );

		virtual Void initializeTestClass( );

		virtual Void updateTestClass( ::massive::munit::TestResult result);

		virtual Void finalizeTestClass( );

		virtual Void setCurrentTestClassCoverage( Dynamic result);

		virtual Void reportFinalCoverage( Dynamic percent,cpp::ArrayBase missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency);

		virtual Void printIndentedLines( ::String value,hx::Null< int >  indent);
		Dynamic printIndentedLines_dyn();

		virtual Void printReports( );

		virtual Void printFinalIgnoredStatistics( int count);
		Dynamic printFinalIgnoredStatistics_dyn();

		virtual bool filterIngored( ::massive::munit::TestResult result);
		Dynamic filterIngored_dyn();

		virtual Void printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);

		virtual Void printOverallResult( bool result);

		virtual Void print( Dynamic value);
		Dynamic print_dyn();

		virtual Void printLine( Dynamic value,Dynamic indent);
		Dynamic printLine_dyn();

		virtual ::String indentString( ::String value,Dynamic indent);
		Dynamic indentString_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_PrintClientBase */ 
