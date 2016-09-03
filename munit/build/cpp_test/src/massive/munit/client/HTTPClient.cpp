#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_client_HTTPClient
#include <massive/munit/client/HTTPClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_URLRequest
#include <massive/munit/client/URLRequest.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void HTTPClient_obj::__construct(::massive::munit::ITestResultClient client,::String __o_url,Dynamic __o_queueRequest)
{
HX_STACK_FRAME("massive.munit.client.HTTPClient","new",0x4380ec61,"massive.munit.client.HTTPClient.new","massive/munit/client/HTTPClient.hx",106,0xff13f150)
HX_STACK_THIS(this)
HX_STACK_ARG(client,"client")
HX_STACK_ARG(__o_url,"url")
HX_STACK_ARG(__o_queueRequest,"queueRequest")
::String url = __o_url.Default(HX_HCSTRING("http://localhost:2000","\x17","\xd0","\x62","\x55"));
Dynamic queueRequest = __o_queueRequest.Default(true);
{
	HX_STACK_LINE(107)
	this->id = HX_HCSTRING("HTTPClient","\xf3","\xf7","\x4e","\x4e");
	HX_STACK_LINE(108)
	this->client = client;
	HX_STACK_LINE(109)
	this->url = url;
	HX_STACK_LINE(110)
	this->queueRequest = queueRequest;
}
;
	return null();
}

//HTTPClient_obj::~HTTPClient_obj() { }

Dynamic HTTPClient_obj::__CreateEmpty() { return  new HTTPClient_obj; }
hx::ObjectPtr< HTTPClient_obj > HTTPClient_obj::__new(::massive::munit::ITestResultClient client,::String __o_url,Dynamic __o_queueRequest)
{  hx::ObjectPtr< HTTPClient_obj > _result_ = new HTTPClient_obj();
	_result_->__construct(client,__o_url,__o_queueRequest);
	return _result_;}

Dynamic HTTPClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPClient_obj > _result_ = new HTTPClient_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *HTTPClient_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::massive::munit::ITestResultClient_obj)) return operator ::massive::munit::ITestResultClient_obj *();
	if (inType==typeid( ::massive::munit::IAdvancedTestResultClient_obj)) return operator ::massive::munit::IAdvancedTestResultClient_obj *();
	return super::__ToInterface(inType);
}

HTTPClient_obj::operator ::massive::munit::ITestResultClient_obj *()
	{ return new ::massive::munit::ITestResultClient_delegate_< HTTPClient_obj >(this); }
HTTPClient_obj::operator ::massive::munit::IAdvancedTestResultClient_obj *()
	{ return new ::massive::munit::IAdvancedTestResultClient_delegate_< HTTPClient_obj >(this); }
Dynamic HTTPClient_obj::get_completionHandler( ){
	HX_STACK_FRAME("massive.munit.client.HTTPClient","get_completionHandler",0xe0121b26,"massive.munit.client.HTTPClient.get_completionHandler","massive/munit/client/HTTPClient.hx",85,0xff13f150)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	Dynamic tmp = this->completionHandler_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,get_completionHandler,return )

Dynamic HTTPClient_obj::set_completionHandler( Dynamic value){
	HX_STACK_FRAME("massive.munit.client.HTTPClient","set_completionHandler",0x341ae932,"massive.munit.client.HTTPClient.set_completionHandler","massive/munit/client/HTTPClient.hx",89,0xff13f150)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(90)
	Dynamic tmp = this->completionHandler = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,set_completionHandler,return )

Void HTTPClient_obj::setCurrentTestClass( ::String className){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","setCurrentTestClass",0x566774d0,"massive.munit.client.HTTPClient.setCurrentTestClass","massive/munit/client/HTTPClient.hx",119,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_LINE(120)
		::massive::munit::ITestResultClient tmp = this->client;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::massive::munit::IAdvancedTestResultClient >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		if ((tmp1)){
			HX_STACK_LINE(122)
			::massive::munit::ITestResultClient tmp2 = this->client;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(122)
			::massive::munit::IAdvancedTestResultClient tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			tmp3 = hx::TCast< ::massive::munit::IAdvancedTestResultClient >::cast(tmp2);
			HX_STACK_LINE(122)
			::String tmp4 = className;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			tmp3->setCurrentTestClass(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,setCurrentTestClass,(void))

Void HTTPClient_obj::addPass( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","addPass",0x2fe0d813,"massive.munit.client.HTTPClient.addPass","massive/munit/client/HTTPClient.hx",132,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(133)
		::massive::munit::ITestResultClient tmp = this->client;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::massive::munit::TestResult tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		tmp->addPass(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addPass,(void))

Void HTTPClient_obj::addFail( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","addFail",0x2944ad20,"massive.munit.client.HTTPClient.addFail","massive/munit/client/HTTPClient.hx",142,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(143)
		::massive::munit::ITestResultClient tmp = this->client;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		::massive::munit::TestResult tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		tmp->addFail(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addFail,(void))

Void HTTPClient_obj::addError( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","addError",0x6aafb246,"massive.munit.client.HTTPClient.addError","massive/munit/client/HTTPClient.hx",152,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(153)
		::massive::munit::ITestResultClient tmp = this->client;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		::massive::munit::TestResult tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		tmp->addError(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addError,(void))

Void HTTPClient_obj::addIgnore( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","addIgnore",0x306c80d4,"massive.munit.client.HTTPClient.addIgnore","massive/munit/client/HTTPClient.hx",162,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(163)
		::massive::munit::ITestResultClient tmp = this->client;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		::massive::munit::TestResult tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		tmp->addIgnore(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addIgnore,(void))

Dynamic HTTPClient_obj::reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
	HX_STACK_FRAME("massive.munit.client.HTTPClient","reportFinalStatistics",0x120fd026,"massive.munit.client.HTTPClient.reportFinalStatistics","massive/munit/client/HTTPClient.hx",178,0xff13f150)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCount,"testCount")
	HX_STACK_ARG(passCount,"passCount")
	HX_STACK_ARG(failCount,"failCount")
	HX_STACK_ARG(errorCount,"errorCount")
	HX_STACK_ARG(ignoreCount,"ignoreCount")
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(179)
	::massive::munit::ITestResultClient tmp = this->client;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	int tmp1 = testCount;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	int tmp2 = passCount;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	int tmp3 = failCount;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	int tmp4 = errorCount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	int tmp5 = ignoreCount;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(179)
	Float tmp6 = time;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(179)
	Dynamic tmp7 = tmp->reportFinalStatistics(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(179)
	Dynamic result = tmp7;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(180)
	Dynamic tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(180)
	this->sendResult(tmp8);
	HX_STACK_LINE(181)
	Dynamic tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(181)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC6(HTTPClient_obj,reportFinalStatistics,return )

Void HTTPClient_obj::sendResult( Dynamic result){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","sendResult",0x93fb6664,"massive.munit.client.HTTPClient.sendResult","massive/munit/client/HTTPClient.hx",185,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(186)
		::String tmp = this->url;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		::massive::munit::client::URLRequest tmp1 = ::massive::munit::client::URLRequest_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		this->request = tmp1;
		HX_STACK_LINE(187)
		::massive::munit::client::URLRequest tmp2 = this->request;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		::massive::munit::ITestResultClient tmp3 = this->client;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		::String tmp4 = tmp3->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		tmp2->setHeader(HX_HCSTRING("munit-clientId","\xa2","\x2c","\xfe","\x2b"),tmp4);
		HX_STACK_LINE(188)
		::massive::munit::client::URLRequest tmp5 = this->request;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		::String tmp6 = this->platform();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(188)
		tmp5->setHeader(HX_HCSTRING("munit-platformId","\x0a","\x9e","\x97","\x3a"),tmp6);
		HX_STACK_LINE(189)
		Dynamic tmp7 = this->onData_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		::massive::munit::client::URLRequest tmp8 = this->request;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(189)
		tmp8->onData = tmp7;
		HX_STACK_LINE(190)
		Dynamic tmp9 = this->onError_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(190)
		::massive::munit::client::URLRequest tmp10 = this->request;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(190)
		tmp10->onError = tmp9;
		HX_STACK_LINE(191)
		::massive::munit::client::URLRequest tmp11 = this->request;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(191)
		tmp11->data = result;
		HX_STACK_LINE(193)
		bool tmp12 = this->queueRequest;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(193)
		if ((tmp12)){
			HX_STACK_LINE(195)
			::massive::munit::client::URLRequest tmp13 = this->request;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(195)
			::massive::munit::client::HTTPClient_obj::queue->unshift(tmp13);
			HX_STACK_LINE(196)
			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
		}
		else{
			HX_STACK_LINE(200)
			::massive::munit::client::URLRequest tmp13 = this->request;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(200)
			tmp13->send();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,sendResult,(void))

::String HTTPClient_obj::platform( ){
	HX_STACK_FRAME("massive.munit.client.HTTPClient","platform",0xe6227312,"massive.munit.client.HTTPClient.platform","massive/munit/client/HTTPClient.hx",205,0xff13f150)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	return HX_HCSTRING("cpp","\x23","\x81","\x4b","\x00");
	HX_STACK_LINE(213)
	return HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
}


HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,platform,return )

Void HTTPClient_obj::onData( ::String data){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","onData",0x9e82f988,"massive.munit.client.HTTPClient.onData","massive/munit/client/HTTPClient.hx",217,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(218)
		bool tmp = this->queueRequest;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		if ((tmp)){
			HX_STACK_LINE(220)
			::massive::munit::client::HTTPClient_obj::responsePending = false;
			HX_STACK_LINE(221)
			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
		}
		HX_STACK_LINE(223)
		Dynamic tmp1 = this->get_completionHandler();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		if ((tmp2)){
			HX_STACK_LINE(224)
			Dynamic tmp3 = this->get_completionHandler();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(224)
			tmp3(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,onData,(void))

Void HTTPClient_obj::onError( ::String msg){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","onError",0xb2b91aaa,"massive.munit.client.HTTPClient.onError","massive/munit/client/HTTPClient.hx",228,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(229)
		bool tmp = this->queueRequest;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		if ((tmp)){
			HX_STACK_LINE(231)
			::massive::munit::client::HTTPClient_obj::responsePending = false;
			HX_STACK_LINE(232)
			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
		}
		HX_STACK_LINE(234)
		Dynamic tmp1 = this->get_completionHandler();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		if ((tmp2)){
			HX_STACK_LINE(235)
			Dynamic tmp3 = this->get_completionHandler();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			tmp3(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,onError,(void))

Array< ::Dynamic > HTTPClient_obj::queue;

bool HTTPClient_obj::responsePending;

Void HTTPClient_obj::dispatchNextRequest( ){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","dispatchNextRequest",0x2fe27403,"massive.munit.client.HTTPClient.dispatchNextRequest","massive/munit/client/HTTPClient.hx",239,0xff13f150)
		HX_STACK_LINE(240)
		bool tmp = ::massive::munit::client::HTTPClient_obj::responsePending;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		if ((tmp1)){
			HX_STACK_LINE(240)
			int tmp3 = ::massive::munit::client::HTTPClient_obj::queue->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(240)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			tmp2 = (tmp4 == (int)0);
		}
		else{
			HX_STACK_LINE(240)
			tmp2 = true;
		}
		HX_STACK_LINE(240)
		if ((tmp2)){
			HX_STACK_LINE(241)
			return null();
		}
		HX_STACK_LINE(243)
		::massive::munit::client::HTTPClient_obj::responsePending = true;
		HX_STACK_LINE(245)
		::massive::munit::client::URLRequest tmp3 = ::massive::munit::client::HTTPClient_obj::queue->pop().StaticCast< ::massive::munit::client::URLRequest >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		::massive::munit::client::URLRequest request = tmp3;		HX_STACK_VAR(request,"request");
		HX_STACK_LINE(246)
		request->send();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,dispatchNextRequest,(void))


HTTPClient_obj::HTTPClient_obj()
{
}

void HTTPClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPClient);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(completionHandler,"completionHandler");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(request,"request");
	HX_MARK_MEMBER_NAME(queueRequest,"queueRequest");
	HX_MARK_END_CLASS();
}

void HTTPClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(completionHandler,"completionHandler");
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(request,"request");
	HX_VISIT_MEMBER_NAME(queueRequest,"queueRequest");
}

Dynamic HTTPClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return client; }
		if (HX_FIELD_EQ(inName,"onData") ) { return onData_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return request; }
		if (HX_FIELD_EQ(inName,"addPass") ) { return addPass_dyn(); }
		if (HX_FIELD_EQ(inName,"addFail") ) { return addFail_dyn(); }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addError") ) { return addError_dyn(); }
		if (HX_FIELD_EQ(inName,"platform") ) { return platform_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addIgnore") ) { return addIgnore_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sendResult") ) { return sendResult_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"queueRequest") ) { return queueRequest; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return inCallProp == hx::paccAlways ? get_completionHandler() : completionHandler; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setCurrentTestClass") ) { return setCurrentTestClass_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_completionHandler") ) { return get_completionHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_completionHandler") ) { return set_completionHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"reportFinalStatistics") ) { return reportFinalStatistics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool HTTPClient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responsePending") ) { outValue = responsePending; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"dispatchNextRequest") ) { outValue = dispatchNextRequest_dyn(); return true;  }
	}
	return false;
}

Dynamic HTTPClient_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast< ::massive::munit::ITestResultClient >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { request=inValue.Cast< ::massive::munit::client::URLRequest >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"queueRequest") ) { queueRequest=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { if (inCallProp == hx::paccAlways) return set_completionHandler(inValue);completionHandler=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HTTPClient_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { queue=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responsePending") ) { responsePending=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void HTTPClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"));
	outFields->push(HX_HCSTRING("queueRequest","\xbe","\xbd","\x99","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(HTTPClient_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HTTPClient_obj,completionHandler),HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b")},
	{hx::fsObject /*::massive::munit::ITestResultClient*/ ,(int)offsetof(HTTPClient_obj,client),HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a")},
	{hx::fsString,(int)offsetof(HTTPClient_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*::massive::munit::client::URLRequest*/ ,(int)offsetof(HTTPClient_obj,request),HX_HCSTRING("request","\x4f","\xdf","\x84","\x44")},
	{hx::fsBool,(int)offsetof(HTTPClient_obj,queueRequest),HX_HCSTRING("queueRequest","\xbe","\xbd","\x99","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &HTTPClient_obj::queue,HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d")},
	{hx::fsBool,(void *) &HTTPClient_obj::responsePending,HX_HCSTRING("responsePending","\xd6","\x53","\xae","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b"),
	HX_HCSTRING("get_completionHandler","\xe5","\xea","\x60","\xda"),
	HX_HCSTRING("set_completionHandler","\xf1","\xb8","\x69","\x2e"),
	HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
	HX_HCSTRING("queueRequest","\xbe","\xbd","\x99","\xd3"),
	HX_HCSTRING("setCurrentTestClass","\xcf","\x86","\x4e","\xfb"),
	HX_HCSTRING("addPass","\x92","\x27","\x8f","\x86"),
	HX_HCSTRING("addFail","\x9f","\xfc","\xf2","\x7f"),
	HX_HCSTRING("addError","\xe7","\xf1","\x86","\xec"),
	HX_HCSTRING("addIgnore","\x13","\xee","\xec","\x4a"),
	HX_HCSTRING("reportFinalStatistics","\xe5","\x9f","\x5e","\x0c"),
	HX_HCSTRING("sendResult","\x45","\x90","\xda","\xa9"),
	HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"),
	HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPClient_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(HTTPClient_obj::responsePending,"responsePending");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::responsePending,"responsePending");
};

#endif

hx::Class HTTPClient_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("responsePending","\xd6","\x53","\xae","\x0c"),
	HX_HCSTRING("dispatchNextRequest","\x02","\x86","\xc9","\xd4"),
	::String(null()) };

void HTTPClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.HTTPClient","\xef","\x27","\xe1","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HTTPClient_obj::__GetStatic;
	__mClass->mSetStaticField = &HTTPClient_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPClient_obj >;
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

void HTTPClient_obj::__boot()
{
	queue= Array_obj< ::Dynamic >::__new();
	responsePending= false;
}

} // end namespace massive
} // end namespace munit
} // end namespace client
