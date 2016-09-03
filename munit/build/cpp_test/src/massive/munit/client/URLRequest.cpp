#include <hxcpp.h>

#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_massive_munit_client_URLRequest
#include <massive/munit/client/URLRequest.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void URLRequest_obj::__construct(::String url)
{
HX_STACK_FRAME("massive.munit.client.URLRequest","new",0xe54fb6ae,"massive.munit.client.URLRequest.new","massive/munit/client/HTTPClient.hx",271,0xff13f150)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
{
	HX_STACK_LINE(272)
	this->url = url;
	HX_STACK_LINE(273)
	::String tmp = url;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	this->createClient(tmp);
	HX_STACK_LINE(274)
	this->setHeader(HX_HCSTRING("Content-Type","\xce","\x69","\x5d","\x3c"),HX_HCSTRING("text/plain","\xe8","\xfb","\xaf","\x91"));
}
;
	return null();
}

//URLRequest_obj::~URLRequest_obj() { }

Dynamic URLRequest_obj::__CreateEmpty() { return  new URLRequest_obj; }
hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new(::String url)
{  hx::ObjectPtr< URLRequest_obj > _result_ = new URLRequest_obj();
	_result_->__construct(url);
	return _result_;}

Dynamic URLRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequest_obj > _result_ = new URLRequest_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void URLRequest_obj::createClient( ::String url){
{
		HX_STACK_FRAME("massive.munit.client.URLRequest","createClient",0xceacea59,"massive.munit.client.URLRequest.createClient","massive/munit/client/HTTPClient.hx",278,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
		HX_STACK_LINE(280)
		::haxe::Http tmp = ::haxe::Http_obj::__new(url);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		this->client = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLRequest_obj,createClient,(void))

Void URLRequest_obj::setHeader( ::String name,::String value){
{
		HX_STACK_FRAME("massive.munit.client.URLRequest","setHeader",0xa41e139d,"massive.munit.client.URLRequest.setHeader","massive/munit/client/HTTPClient.hx",289,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(291)
		::haxe::Http tmp = this->client;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(291)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		tmp->setHeader(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLRequest_obj,setHeader,(void))

Void URLRequest_obj::send( ){
{
		HX_STACK_FRAME("massive.munit.client.URLRequest","send",0xc3be2b3a,"massive.munit.client.URLRequest.send","massive/munit/client/HTTPClient.hx",300,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_LINE(302)
		Dynamic tmp = this->onData_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		::haxe::Http tmp1 = this->client;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		tmp1->onData = tmp;
		HX_STACK_LINE(303)
		Dynamic tmp2 = this->onError_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		::haxe::Http tmp3 = this->client;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		tmp3->onError = tmp2;
		HX_STACK_LINE(307)
		::haxe::Http tmp4 = this->client;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(307)
		Dynamic tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(307)
		tmp4->setParameter(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),tmp5);
		HX_STACK_LINE(309)
		::haxe::Http tmp6 = this->client;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(309)
		tmp6->request(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,send,(void))


URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(onData,"onData");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(headers,"headers");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onData,"onData");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(headers,"headers");
	HX_VISIT_MEMBER_NAME(client,"client");
}

Dynamic URLRequest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"send") ) { return send_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onData") ) { return onData; }
		if (HX_FIELD_EQ(inName,"client") ) { return client; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError; }
		if (HX_FIELD_EQ(inName,"headers") ) { return headers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setHeader") ) { return setHeader_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createClient") ) { return createClient_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onData") ) { onData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast< ::haxe::Http >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"headers") ) { headers=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("headers","\x46","\x52","\x08","\x63"));
	outFields->push(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,onData),HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,onError),HX_HCSTRING("onError","\x29","\x6a","\x67","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(URLRequest_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(URLRequest_obj,headers),HX_HCSTRING("headers","\x46","\x52","\x08","\x63")},
	{hx::fsObject /*::haxe::Http*/ ,(int)offsetof(URLRequest_obj,client),HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("headers","\x46","\x52","\x08","\x63"),
	HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"),
	HX_HCSTRING("createClient","\x67","\x0a","\xa5","\x2c"),
	HX_HCSTRING("setHeader","\xcf","\x7e","\xa7","\x5c"),
	HX_HCSTRING("send","\x48","\x8d","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#endif

hx::Class URLRequest_obj::__mClass;

void URLRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.URLRequest","\xbc","\x87","\x6f","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLRequest_obj >;
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
} // end namespace client
