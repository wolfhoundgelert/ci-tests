#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#define INCLUDED_massive_munit_client_ExternalPrintClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(massive,munit,client,ExternalPrintClient)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  ExternalPrintClient_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ExternalPrintClient_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool queue( ::String methodName,Dynamic args)=0;
virtual Dynamic queue_dyn()=0;
		virtual Void setResult( bool value)=0;
virtual Dynamic setResult_dyn()=0;
		virtual Void print( ::String value)=0;
virtual Dynamic print_dyn()=0;
		virtual Void printLine( ::String value)=0;
virtual Dynamic printLine_dyn()=0;
		virtual Void setResultBackground( bool value)=0;
virtual Dynamic setResultBackground_dyn()=0;
		virtual Void createTestClass( ::String className)=0;
virtual Dynamic createTestClass_dyn()=0;
		virtual Void printToTestClassSummary( ::String value)=0;
virtual Dynamic printToTestClassSummary_dyn()=0;
		virtual Void setTestClassResult( int resultType)=0;
virtual Dynamic setTestClassResult_dyn()=0;
		virtual Void trace( Dynamic value)=0;
virtual Dynamic trace_dyn()=0;
		virtual Void addTestPass( ::String value)=0;
virtual Dynamic addTestPass_dyn()=0;
		virtual Void addTestFail( ::String value)=0;
virtual Dynamic addTestFail_dyn()=0;
		virtual Void addTestError( ::String value)=0;
virtual Dynamic addTestError_dyn()=0;
		virtual Void addTestIgnore( ::String value)=0;
virtual Dynamic addTestIgnore_dyn()=0;
		virtual Void addTestClassCoverage( ::String className,hx::Null< Float >  percent)=0;
virtual Dynamic addTestClassCoverage_dyn()=0;
		virtual Void addTestClassCoverageItem( ::String value)=0;
virtual Dynamic addTestClassCoverageItem_dyn()=0;
		virtual Void createCoverageReport( hx::Null< Float >  percent)=0;
virtual Dynamic createCoverageReport_dyn()=0;
		virtual Void addMissingCoverageClass( ::String className,hx::Null< Float >  percent)=0;
virtual Dynamic addMissingCoverageClass_dyn()=0;
		virtual Void addCoverageReportSection( ::String name,::String value)=0;
virtual Dynamic addCoverageReportSection_dyn()=0;
		virtual Void addCoverageSummary( ::String value)=0;
virtual Dynamic addCoverageSummary_dyn()=0;
		virtual Void printSummary( ::String value)=0;
virtual Dynamic printSummary_dyn()=0;
};



template<typename IMPL>
class ExternalPrintClient_delegate_ : public ExternalPrintClient_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ExternalPrintClient_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		bool queue( ::String methodName,Dynamic args) { return mDelegate->queue(methodName,args);}
		Dynamic queue_dyn() { return mDelegate->queue_dyn();}
		Void setResult( bool value) { return mDelegate->setResult(value);}
		Dynamic setResult_dyn() { return mDelegate->setResult_dyn();}
		Void print( ::String value) { return mDelegate->print(value);}
		Dynamic print_dyn() { return mDelegate->print_dyn();}
		Void printLine( ::String value) { return mDelegate->printLine(value);}
		Dynamic printLine_dyn() { return mDelegate->printLine_dyn();}
		Void setResultBackground( bool value) { return mDelegate->setResultBackground(value);}
		Dynamic setResultBackground_dyn() { return mDelegate->setResultBackground_dyn();}
		Void createTestClass( ::String className) { return mDelegate->createTestClass(className);}
		Dynamic createTestClass_dyn() { return mDelegate->createTestClass_dyn();}
		Void printToTestClassSummary( ::String value) { return mDelegate->printToTestClassSummary(value);}
		Dynamic printToTestClassSummary_dyn() { return mDelegate->printToTestClassSummary_dyn();}
		Void setTestClassResult( int resultType) { return mDelegate->setTestClassResult(resultType);}
		Dynamic setTestClassResult_dyn() { return mDelegate->setTestClassResult_dyn();}
		Void trace( Dynamic value) { return mDelegate->trace(value);}
		Dynamic trace_dyn() { return mDelegate->trace_dyn();}
		Void addTestPass( ::String value) { return mDelegate->addTestPass(value);}
		Dynamic addTestPass_dyn() { return mDelegate->addTestPass_dyn();}
		Void addTestFail( ::String value) { return mDelegate->addTestFail(value);}
		Dynamic addTestFail_dyn() { return mDelegate->addTestFail_dyn();}
		Void addTestError( ::String value) { return mDelegate->addTestError(value);}
		Dynamic addTestError_dyn() { return mDelegate->addTestError_dyn();}
		Void addTestIgnore( ::String value) { return mDelegate->addTestIgnore(value);}
		Dynamic addTestIgnore_dyn() { return mDelegate->addTestIgnore_dyn();}
		Void addTestClassCoverage( ::String className,hx::Null< Float >  percent) { return mDelegate->addTestClassCoverage(className,percent);}
		Dynamic addTestClassCoverage_dyn() { return mDelegate->addTestClassCoverage_dyn();}
		Void addTestClassCoverageItem( ::String value) { return mDelegate->addTestClassCoverageItem(value);}
		Dynamic addTestClassCoverageItem_dyn() { return mDelegate->addTestClassCoverageItem_dyn();}
		Void createCoverageReport( hx::Null< Float >  percent) { return mDelegate->createCoverageReport(percent);}
		Dynamic createCoverageReport_dyn() { return mDelegate->createCoverageReport_dyn();}
		Void addMissingCoverageClass( ::String className,hx::Null< Float >  percent) { return mDelegate->addMissingCoverageClass(className,percent);}
		Dynamic addMissingCoverageClass_dyn() { return mDelegate->addMissingCoverageClass_dyn();}
		Void addCoverageReportSection( ::String name,::String value) { return mDelegate->addCoverageReportSection(name,value);}
		Dynamic addCoverageReportSection_dyn() { return mDelegate->addCoverageReportSection_dyn();}
		Void addCoverageSummary( ::String value) { return mDelegate->addCoverageSummary(value);}
		Dynamic addCoverageSummary_dyn() { return mDelegate->addCoverageSummary_dyn();}
		Void printSummary( ::String value) { return mDelegate->printSummary(value);}
		Dynamic printSummary_dyn() { return mDelegate->printSummary_dyn();}
};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_ExternalPrintClient */ 
