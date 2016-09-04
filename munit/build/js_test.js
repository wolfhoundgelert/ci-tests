(function (console, $hx_exports, $global) { "use strict";
$hx_exports.massive = $hx_exports.massive || {};
$hx_exports.massive.munit = $hx_exports.massive.munit || {};
$hx_exports.massive.munit.util = $hx_exports.massive.munit.util || {};
var $estr = function() { return js_Boot.__string_rec(this,''); };
function $extend(from, fields) {
	function Inherit() {} Inherit.prototype = from; var proto = new Inherit();
	for (var name in fields) proto[name] = fields[name];
	if( fields.toString !== Object.prototype.toString ) proto.toString = fields.toString;
	return proto;
}
var EReg = function(r,opt) {
	opt = opt.split("u").join("");
	this.r = new RegExp(r,opt);
};
EReg.__name__ = ["EReg"];
EReg.prototype = {
	match: function(s) {
		if(this.r.global) this.r.lastIndex = 0;
		this.r.m = this.r.exec(s);
		this.r.s = s;
		return this.r.m != null;
	}
	,matched: function(n) {
		if(this.r.m != null && n >= 0 && n < this.r.m.length) return this.r.m[n]; else throw new js__$Boot_HaxeError("EReg::matched");
	}
	,__class__: EReg
};
var ExampleTest = function() {
};
ExampleTest.__name__ = ["ExampleTest"];
ExampleTest.prototype = {
	beforeClass: function() {
	}
	,afterClass: function() {
	}
	,setup: function() {
	}
	,tearDown: function() {
	}
	,testExample: function() {
		massive_munit_Assert.isTrue(true,{ fileName : "ExampleTest.hx", lineNumber : 45, className : "ExampleTest", methodName : "testExample"});
	}
	,testAsyncExample: function(factory) {
		var handler = factory.createHandler(this,$bind(this,this.onTestAsyncExampleComplete),300,{ fileName : "ExampleTest.hx", lineNumber : 51, className : "ExampleTest", methodName : "testAsyncExample"});
		this.timer = massive_munit_util_Timer.delay(handler,200);
	}
	,onTestAsyncExampleComplete: function() {
		massive_munit_Assert.isFalse(false,{ fileName : "ExampleTest.hx", lineNumber : 57, className : "ExampleTest", methodName : "onTestAsyncExampleComplete"});
	}
	,testExampleThatOnlyRunsWithDebugFlag: function() {
		massive_munit_Assert.isTrue(true,{ fileName : "ExampleTest.hx", lineNumber : 67, className : "ExampleTest", methodName : "testExampleThatOnlyRunsWithDebugFlag"});
	}
	,__class__: ExampleTest
};
var HxOverrides = function() { };
HxOverrides.__name__ = ["HxOverrides"];
HxOverrides.dateStr = function(date) {
	var m = date.getMonth() + 1;
	var d = date.getDate();
	var h = date.getHours();
	var mi = date.getMinutes();
	var s = date.getSeconds();
	return date.getFullYear() + "-" + (m < 10?"0" + m:"" + m) + "-" + (d < 10?"0" + d:"" + d) + " " + (h < 10?"0" + h:"" + h) + ":" + (mi < 10?"0" + mi:"" + mi) + ":" + (s < 10?"0" + s:"" + s);
};
HxOverrides.cca = function(s,index) {
	var x = s.charCodeAt(index);
	if(x != x) return undefined;
	return x;
};
HxOverrides.substr = function(s,pos,len) {
	if(pos != null && pos != 0 && len != null && len < 0) return "";
	if(len == null) len = s.length;
	if(pos < 0) {
		pos = s.length + pos;
		if(pos < 0) pos = 0;
	} else if(len < 0) len = s.length + len - pos;
	return s.substr(pos,len);
};
HxOverrides.iter = function(a) {
	return { cur : 0, arr : a, hasNext : function() {
		return this.cur < this.arr.length;
	}, next : function() {
		return this.arr[this.cur++];
	}};
};
var Lambda = function() { };
Lambda.__name__ = ["Lambda"];
Lambda.exists = function(it,f) {
	var $it0 = $iterator(it)();
	while( $it0.hasNext() ) {
		var x = $it0.next();
		if(f(x)) return true;
	}
	return false;
};
Lambda.filter = function(it,f) {
	var l = new List();
	var $it0 = $iterator(it)();
	while( $it0.hasNext() ) {
		var x = $it0.next();
		if(f(x)) l.add(x);
	}
	return l;
};
var List = function() {
	this.length = 0;
};
List.__name__ = ["List"];
List.prototype = {
	add: function(item) {
		var x = [item];
		if(this.h == null) this.h = x; else this.q[1] = x;
		this.q = x;
		this.length++;
	}
	,push: function(item) {
		var x = [item,this.h];
		this.h = x;
		if(this.q == null) this.q = x;
		this.length++;
	}
	,iterator: function() {
		return new _$List_ListIterator(this.h);
	}
	,__class__: List
};
var _$List_ListIterator = function(head) {
	this.head = head;
	this.val = null;
};
_$List_ListIterator.__name__ = ["_List","ListIterator"];
_$List_ListIterator.prototype = {
	hasNext: function() {
		return this.head != null;
	}
	,next: function() {
		this.val = this.head[0];
		this.head = this.head[1];
		return this.val;
	}
	,__class__: _$List_ListIterator
};
Math.__name__ = ["Math"];
var Reflect = function() { };
Reflect.__name__ = ["Reflect"];
Reflect.field = function(o,field) {
	try {
		return o[field];
	} catch( e ) {
		haxe_CallStack.lastException = e;
		if (e instanceof js__$Boot_HaxeError) e = e.val;
		return null;
	}
};
Reflect.setField = function(o,field,value) {
	o[field] = value;
};
Reflect.callMethod = function(o,func,args) {
	return func.apply(o,args);
};
Reflect.fields = function(o) {
	var a = [];
	if(o != null) {
		var hasOwnProperty = Object.prototype.hasOwnProperty;
		for( var f in o ) {
		if(f != "__id__" && f != "hx__closures__" && hasOwnProperty.call(o,f)) a.push(f);
		}
	}
	return a;
};
Reflect.isFunction = function(f) {
	return typeof(f) == "function" && !(f.__name__ || f.__ename__);
};
Reflect.deleteField = function(o,field) {
	if(!Object.prototype.hasOwnProperty.call(o,field)) return false;
	delete(o[field]);
	return true;
};
Reflect.makeVarArgs = function(f) {
	return function() {
		var a = Array.prototype.slice.call(arguments);
		return f(a);
	};
};
var Std = function() { };
Std.__name__ = ["Std"];
Std.string = function(s) {
	return js_Boot.__string_rec(s,"");
};
Std.parseInt = function(x) {
	var v = parseInt(x,10);
	if(v == 0 && (HxOverrides.cca(x,1) == 120 || HxOverrides.cca(x,1) == 88)) v = parseInt(x);
	if(isNaN(v)) return null;
	return v;
};
var StringBuf = function() {
	this.b = "";
};
StringBuf.__name__ = ["StringBuf"];
StringBuf.prototype = {
	add: function(x) {
		this.b += Std.string(x);
	}
	,__class__: StringBuf
};
var StringTools = function() { };
StringTools.__name__ = ["StringTools"];
StringTools.htmlEscape = function(s,quotes) {
	s = s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
	if(quotes) return s.split("\"").join("&quot;").split("'").join("&#039;"); else return s;
};
StringTools.isSpace = function(s,pos) {
	var c = HxOverrides.cca(s,pos);
	return c > 8 && c < 14 || c == 32;
};
StringTools.ltrim = function(s) {
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,r)) r++;
	if(r > 0) return HxOverrides.substr(s,r,l - r); else return s;
};
StringTools.rtrim = function(s) {
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,l - r - 1)) r++;
	if(r > 0) return HxOverrides.substr(s,0,l - r); else return s;
};
StringTools.trim = function(s) {
	return StringTools.ltrim(StringTools.rtrim(s));
};
StringTools.lpad = function(s,c,l) {
	if(c.length <= 0) return s;
	while(s.length < l) s = c + s;
	return s;
};
var TestMain = function() {
	var suites = [];
	suites.push(TestSuite);
	var client = new massive_munit_client_RichPrintClient();
	var httpClient = new massive_munit_client_HTTPClient(new massive_munit_client_SummaryReportClient());
	var runner = new massive_munit_TestRunner(client);
	runner.addResultClient(httpClient);
	runner.completionHandler = $bind(this,this.completionHandler);
	var seconds = 0;
	var delayStartup;
	var delayStartup1 = null;
	delayStartup1 = function() {
		if(seconds > 0) {
			seconds--;
			window.document.getElementById("munit").innerHTML = "Tests will start in " + seconds + "s...";
			haxe_Timer.delay(delayStartup1,1000);
		} else {
			window.document.getElementById("munit").innerHTML = "";
			runner.run(suites);
		}
	};
	delayStartup = delayStartup1;
	delayStartup();
};
TestMain.__name__ = ["TestMain"];
TestMain.main = function() {
	new TestMain();
};
TestMain.prototype = {
	completionHandler: function(successful) {
		try {
			eval("testResult(" + (successful == null?"null":"" + successful) + ");");
		} catch( e ) {
			haxe_CallStack.lastException = e;
			if (e instanceof js__$Boot_HaxeError) e = e.val;
		}
	}
	,__class__: TestMain
};
var massive_munit_TestSuite = function() {
	this.tests = [];
	this.index = 0;
};
massive_munit_TestSuite.__name__ = ["massive","munit","TestSuite"];
massive_munit_TestSuite.prototype = {
	add: function(test) {
		this.tests.push(test);
		this.sortTests();
	}
	,hasNext: function() {
		return this.index < this.tests.length;
	}
	,next: function() {
		if(this.hasNext()) return this.tests[this.index++]; else return null;
	}
	,repeat: function() {
		if(this.index > 0) this.index--;
	}
	,sortTests: function() {
		this.tests.sort($bind(this,this.sortByName));
	}
	,sortByName: function(x,y) {
		var xName = Type.getClassName(x);
		var yName = Type.getClassName(y);
		if(xName == yName) return 0;
		if(xName > yName) return 1; else return -1;
	}
	,__class__: massive_munit_TestSuite
};
var TestSuite = function() {
	massive_munit_TestSuite.call(this);
	this.add(ExampleTest);
	this.add(test_some_AnotherOneTest);
	this.add(test_some_AnotherTest);
	this.add(test_some_SomeTest);
};
TestSuite.__name__ = ["TestSuite"];
TestSuite.__super__ = massive_munit_TestSuite;
TestSuite.prototype = $extend(massive_munit_TestSuite.prototype,{
	__class__: TestSuite
});
var ValueType = { __ename__ : true, __constructs__ : ["TNull","TInt","TFloat","TBool","TObject","TFunction","TClass","TEnum","TUnknown"] };
ValueType.TNull = ["TNull",0];
ValueType.TNull.toString = $estr;
ValueType.TNull.__enum__ = ValueType;
ValueType.TInt = ["TInt",1];
ValueType.TInt.toString = $estr;
ValueType.TInt.__enum__ = ValueType;
ValueType.TFloat = ["TFloat",2];
ValueType.TFloat.toString = $estr;
ValueType.TFloat.__enum__ = ValueType;
ValueType.TBool = ["TBool",3];
ValueType.TBool.toString = $estr;
ValueType.TBool.__enum__ = ValueType;
ValueType.TObject = ["TObject",4];
ValueType.TObject.toString = $estr;
ValueType.TObject.__enum__ = ValueType;
ValueType.TFunction = ["TFunction",5];
ValueType.TFunction.toString = $estr;
ValueType.TFunction.__enum__ = ValueType;
ValueType.TClass = function(c) { var $x = ["TClass",6,c]; $x.__enum__ = ValueType; $x.toString = $estr; return $x; };
ValueType.TEnum = function(e) { var $x = ["TEnum",7,e]; $x.__enum__ = ValueType; $x.toString = $estr; return $x; };
ValueType.TUnknown = ["TUnknown",8];
ValueType.TUnknown.toString = $estr;
ValueType.TUnknown.__enum__ = ValueType;
var Type = function() { };
Type.__name__ = ["Type"];
Type.getSuperClass = function(c) {
	return c.__super__;
};
Type.getClassName = function(c) {
	var a = c.__name__;
	if(a == null) return null;
	return a.join(".");
};
Type.createInstance = function(cl,args) {
	var _g = args.length;
	switch(_g) {
	case 0:
		return new cl();
	case 1:
		return new cl(args[0]);
	case 2:
		return new cl(args[0],args[1]);
	case 3:
		return new cl(args[0],args[1],args[2]);
	case 4:
		return new cl(args[0],args[1],args[2],args[3]);
	case 5:
		return new cl(args[0],args[1],args[2],args[3],args[4]);
	case 6:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5]);
	case 7:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6]);
	case 8:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6],args[7]);
	default:
		throw new js__$Boot_HaxeError("Too many arguments");
	}
	return null;
};
Type.createEmptyInstance = function(cl) {
	function empty() {}; empty.prototype = cl.prototype;
	return new empty();
};
Type["typeof"] = function(v) {
	var _g = typeof(v);
	switch(_g) {
	case "boolean":
		return ValueType.TBool;
	case "string":
		return ValueType.TClass(String);
	case "number":
		if(Math.ceil(v) == v % 2147483648.0) return ValueType.TInt;
		return ValueType.TFloat;
	case "object":
		if(v == null) return ValueType.TNull;
		var e = v.__enum__;
		if(e != null) return ValueType.TEnum(e);
		var c = js_Boot.getClass(v);
		if(c != null) return ValueType.TClass(c);
		return ValueType.TObject;
	case "function":
		if(v.__name__ || v.__ename__) return ValueType.TObject;
		return ValueType.TFunction;
	case "undefined":
		return ValueType.TNull;
	default:
		return ValueType.TUnknown;
	}
};
Type.enumEq = function(a,b) {
	if(a == b) return true;
	try {
		if(a[0] != b[0]) return false;
		var _g1 = 2;
		var _g = a.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(!Type.enumEq(a[i],b[i])) return false;
		}
		var e = a.__enum__;
		if(e != b.__enum__ || e == null) return false;
	} catch( e1 ) {
		haxe_CallStack.lastException = e1;
		if (e1 instanceof js__$Boot_HaxeError) e1 = e1.val;
		return false;
	}
	return true;
};
var haxe_StackItem = { __ename__ : true, __constructs__ : ["CFunction","Module","FilePos","Method","LocalFunction"] };
haxe_StackItem.CFunction = ["CFunction",0];
haxe_StackItem.CFunction.toString = $estr;
haxe_StackItem.CFunction.__enum__ = haxe_StackItem;
haxe_StackItem.Module = function(m) { var $x = ["Module",1,m]; $x.__enum__ = haxe_StackItem; $x.toString = $estr; return $x; };
haxe_StackItem.FilePos = function(s,file,line) { var $x = ["FilePos",2,s,file,line]; $x.__enum__ = haxe_StackItem; $x.toString = $estr; return $x; };
haxe_StackItem.Method = function(classname,method) { var $x = ["Method",3,classname,method]; $x.__enum__ = haxe_StackItem; $x.toString = $estr; return $x; };
haxe_StackItem.LocalFunction = function(v) { var $x = ["LocalFunction",4,v]; $x.__enum__ = haxe_StackItem; $x.toString = $estr; return $x; };
var haxe_CallStack = function() { };
haxe_CallStack.__name__ = ["haxe","CallStack"];
haxe_CallStack.getStack = function(e) {
	if(e == null) return [];
	var oldValue = Error.prepareStackTrace;
	Error.prepareStackTrace = function(error,callsites) {
		var stack = [];
		var _g = 0;
		while(_g < callsites.length) {
			var site = callsites[_g];
			++_g;
			if(haxe_CallStack.wrapCallSite != null) site = haxe_CallStack.wrapCallSite(site);
			var method = null;
			var fullName = site.getFunctionName();
			if(fullName != null) {
				var idx = fullName.lastIndexOf(".");
				if(idx >= 0) {
					var className = HxOverrides.substr(fullName,0,idx);
					var methodName = HxOverrides.substr(fullName,idx + 1,null);
					method = haxe_StackItem.Method(className,methodName);
				}
			}
			stack.push(haxe_StackItem.FilePos(method,site.getFileName(),site.getLineNumber()));
		}
		return stack;
	};
	var a = haxe_CallStack.makeStack(e.stack);
	Error.prepareStackTrace = oldValue;
	return a;
};
haxe_CallStack.exceptionStack = function() {
	return haxe_CallStack.getStack(haxe_CallStack.lastException);
};
haxe_CallStack.makeStack = function(s) {
	if(s == null) return []; else if(typeof(s) == "string") {
		var stack = s.split("\n");
		if(stack[0] == "Error") stack.shift();
		var m = [];
		var rie10 = new EReg("^   at ([A-Za-z0-9_. ]+) \\(([^)]+):([0-9]+):([0-9]+)\\)$","");
		var _g = 0;
		while(_g < stack.length) {
			var line = stack[_g];
			++_g;
			if(rie10.match(line)) {
				var path = rie10.matched(1).split(".");
				var meth = path.pop();
				var file = rie10.matched(2);
				var line1 = Std.parseInt(rie10.matched(3));
				m.push(haxe_StackItem.FilePos(meth == "Anonymous function"?haxe_StackItem.LocalFunction():meth == "Global code"?null:haxe_StackItem.Method(path.join("."),meth),file,line1));
			} else m.push(haxe_StackItem.Module(StringTools.trim(line)));
		}
		return m;
	} else return s;
};
var haxe_IMap = function() { };
haxe_IMap.__name__ = ["haxe","IMap"];
var haxe_Http = function(url) {
	this.url = url;
	this.headers = new List();
	this.params = new List();
	this.async = true;
};
haxe_Http.__name__ = ["haxe","Http"];
haxe_Http.prototype = {
	setHeader: function(header,value) {
		this.headers = Lambda.filter(this.headers,function(h) {
			return h.header != header;
		});
		this.headers.push({ header : header, value : value});
		return this;
	}
	,setPostData: function(data) {
		this.postData = data;
		return this;
	}
	,request: function(post) {
		var me = this;
		me.responseData = null;
		var r = this.req = js_Browser.createXMLHttpRequest();
		var onreadystatechange = function(_) {
			if(r.readyState != 4) return;
			var s;
			try {
				s = r.status;
			} catch( e ) {
				haxe_CallStack.lastException = e;
				if (e instanceof js__$Boot_HaxeError) e = e.val;
				s = null;
			}
			if(s != null) {
				var protocol = window.location.protocol.toLowerCase();
				var rlocalProtocol = new EReg("^(?:about|app|app-storage|.+-extension|file|res|widget):$","");
				var isLocal = rlocalProtocol.match(protocol);
				if(isLocal) if(r.responseText != null) s = 200; else s = 404;
			}
			if(s == undefined) s = null;
			if(s != null) me.onStatus(s);
			if(s != null && s >= 200 && s < 400) {
				me.req = null;
				me.onData(me.responseData = r.responseText);
			} else if(s == null) {
				me.req = null;
				me.onError("Failed to connect or resolve host");
			} else switch(s) {
			case 12029:
				me.req = null;
				me.onError("Failed to connect to host");
				break;
			case 12007:
				me.req = null;
				me.onError("Unknown host");
				break;
			default:
				me.req = null;
				me.responseData = r.responseText;
				me.onError("Http Error #" + r.status);
			}
		};
		if(this.async) r.onreadystatechange = onreadystatechange;
		var uri = this.postData;
		if(uri != null) post = true; else {
			var _g_head = this.params.h;
			var _g_val = null;
			while(_g_head != null) {
				var p;
				p = (function($this) {
					var $r;
					_g_val = _g_head[0];
					_g_head = _g_head[1];
					$r = _g_val;
					return $r;
				}(this));
				if(uri == null) uri = ""; else uri += "&";
				uri += encodeURIComponent(p.param) + "=" + encodeURIComponent(p.value);
			}
		}
		try {
			if(post) r.open("POST",this.url,this.async); else if(uri != null) {
				var question = this.url.split("?").length <= 1;
				r.open("GET",this.url + (question?"?":"&") + uri,this.async);
				uri = null;
			} else r.open("GET",this.url,this.async);
		} catch( e1 ) {
			haxe_CallStack.lastException = e1;
			if (e1 instanceof js__$Boot_HaxeError) e1 = e1.val;
			me.req = null;
			this.onError(e1.toString());
			return;
		}
		if(!Lambda.exists(this.headers,function(h) {
			return h.header == "Content-Type";
		}) && post && this.postData == null) r.setRequestHeader("Content-Type","application/x-www-form-urlencoded");
		var _g_head1 = this.headers.h;
		var _g_val1 = null;
		while(_g_head1 != null) {
			var h1;
			h1 = (function($this) {
				var $r;
				_g_val1 = _g_head1[0];
				_g_head1 = _g_head1[1];
				$r = _g_val1;
				return $r;
			}(this));
			r.setRequestHeader(h1.header,h1.value);
		}
		r.send(uri);
		if(!this.async) onreadystatechange(null);
	}
	,onData: function(data) {
	}
	,onError: function(msg) {
	}
	,onStatus: function(status) {
	}
	,__class__: haxe_Http
};
var haxe_Log = function() { };
haxe_Log.__name__ = ["haxe","Log"];
haxe_Log.trace = function(v,infos) {
	js_Boot.__trace(v,infos);
};
var haxe_Timer = function(time_ms) {
	var me = this;
	this.id = setInterval(function() {
		me.run();
	},time_ms);
};
haxe_Timer.__name__ = ["haxe","Timer"];
haxe_Timer.delay = function(f,time_ms) {
	var t = new haxe_Timer(time_ms);
	t.run = function() {
		t.stop();
		f();
	};
	return t;
};
haxe_Timer.prototype = {
	stop: function() {
		if(this.id == null) return;
		clearInterval(this.id);
		this.id = null;
	}
	,run: function() {
	}
	,__class__: haxe_Timer
};
var haxe_ds_StringMap = function() { };
haxe_ds_StringMap.__name__ = ["haxe","ds","StringMap"];
haxe_ds_StringMap.__interfaces__ = [haxe_IMap];
var haxe_rtti_Meta = function() { };
haxe_rtti_Meta.__name__ = ["haxe","rtti","Meta"];
haxe_rtti_Meta.getMeta = function(t) {
	return t.__meta__;
};
haxe_rtti_Meta.getFields = function(t) {
	var meta = haxe_rtti_Meta.getMeta(t);
	if(meta == null || meta.fields == null) return { }; else return meta.fields;
};
var js__$Boot_HaxeError = function(val) {
	Error.call(this);
	this.val = val;
	this.message = String(val);
	if(Error.captureStackTrace) Error.captureStackTrace(this,js__$Boot_HaxeError);
};
js__$Boot_HaxeError.__name__ = ["js","_Boot","HaxeError"];
js__$Boot_HaxeError.__super__ = Error;
js__$Boot_HaxeError.prototype = $extend(Error.prototype,{
	__class__: js__$Boot_HaxeError
});
var js_Boot = function() { };
js_Boot.__name__ = ["js","Boot"];
js_Boot.__unhtml = function(s) {
	return s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
};
js_Boot.__trace = function(v,i) {
	var msg;
	if(i != null) msg = i.fileName + ":" + i.lineNumber + ": "; else msg = "";
	msg += js_Boot.__string_rec(v,"");
	if(i != null && i.customParams != null) {
		var _g = 0;
		var _g1 = i.customParams;
		while(_g < _g1.length) {
			var v1 = _g1[_g];
			++_g;
			msg += "," + js_Boot.__string_rec(v1,"");
		}
	}
	var d;
	if(typeof(document) != "undefined" && (d = document.getElementById("haxe:trace")) != null) d.innerHTML += js_Boot.__unhtml(msg) + "<br/>"; else if(typeof console != "undefined" && console.log != null) console.log(msg);
};
js_Boot.getClass = function(o) {
	if((o instanceof Array) && o.__enum__ == null) return Array; else {
		var cl = o.__class__;
		if(cl != null) return cl;
		var name = js_Boot.__nativeClassName(o);
		if(name != null) return js_Boot.__resolveNativeClass(name);
		return null;
	}
};
js_Boot.__string_rec = function(o,s) {
	if(o == null) return "null";
	if(s.length >= 5) return "<...>";
	var t = typeof(o);
	if(t == "function" && (o.__name__ || o.__ename__)) t = "object";
	switch(t) {
	case "object":
		if(o instanceof Array) {
			if(o.__enum__) {
				if(o.length == 2) return o[0];
				var str2 = o[0] + "(";
				s += "\t";
				var _g1 = 2;
				var _g = o.length;
				while(_g1 < _g) {
					var i1 = _g1++;
					if(i1 != 2) str2 += "," + js_Boot.__string_rec(o[i1],s); else str2 += js_Boot.__string_rec(o[i1],s);
				}
				return str2 + ")";
			}
			var l = o.length;
			var i;
			var str1 = "[";
			s += "\t";
			var _g2 = 0;
			while(_g2 < l) {
				var i2 = _g2++;
				str1 += (i2 > 0?",":"") + js_Boot.__string_rec(o[i2],s);
			}
			str1 += "]";
			return str1;
		}
		var tostr;
		try {
			tostr = o.toString;
		} catch( e ) {
			haxe_CallStack.lastException = e;
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			return "???";
		}
		if(tostr != null && tostr != Object.toString && typeof(tostr) == "function") {
			var s2 = o.toString();
			if(s2 != "[object Object]") return s2;
		}
		var k = null;
		var str = "{\n";
		s += "\t";
		var hasp = o.hasOwnProperty != null;
		for( var k in o ) {
		if(hasp && !o.hasOwnProperty(k)) {
			continue;
		}
		if(k == "prototype" || k == "__class__" || k == "__super__" || k == "__interfaces__" || k == "__properties__") {
			continue;
		}
		if(str.length != 2) str += ", \n";
		str += s + k + " : " + js_Boot.__string_rec(o[k],s);
		}
		s = s.substring(1);
		str += "\n" + s + "}";
		return str;
	case "function":
		return "<function>";
	case "string":
		return o;
	default:
		return String(o);
	}
};
js_Boot.__interfLoop = function(cc,cl) {
	if(cc == null) return false;
	if(cc == cl) return true;
	var intf = cc.__interfaces__;
	if(intf != null) {
		var _g1 = 0;
		var _g = intf.length;
		while(_g1 < _g) {
			var i = _g1++;
			var i1 = intf[i];
			if(i1 == cl || js_Boot.__interfLoop(i1,cl)) return true;
		}
	}
	return js_Boot.__interfLoop(cc.__super__,cl);
};
js_Boot.__instanceof = function(o,cl) {
	if(cl == null) return false;
	switch(cl) {
	case Int:
		return (o|0) === o;
	case Float:
		return typeof(o) == "number";
	case Bool:
		return typeof(o) == "boolean";
	case String:
		return typeof(o) == "string";
	case Array:
		return (o instanceof Array) && o.__enum__ == null;
	case Dynamic:
		return true;
	default:
		if(o != null) {
			if(typeof(cl) == "function") {
				if(o instanceof cl) return true;
				if(js_Boot.__interfLoop(js_Boot.getClass(o),cl)) return true;
			} else if(typeof(cl) == "object" && js_Boot.__isNativeObj(cl)) {
				if(o instanceof cl) return true;
			}
		} else return false;
		if(cl == Class && o.__name__ != null) return true;
		if(cl == Enum && o.__ename__ != null) return true;
		return o.__enum__ == cl;
	}
};
js_Boot.__cast = function(o,t) {
	if(js_Boot.__instanceof(o,t)) return o; else throw new js__$Boot_HaxeError("Cannot cast " + Std.string(o) + " to " + Std.string(t));
};
js_Boot.__nativeClassName = function(o) {
	var name = js_Boot.__toStr.call(o).slice(8,-1);
	if(name == "Object" || name == "Function" || name == "Math" || name == "JSON") return null;
	return name;
};
js_Boot.__isNativeObj = function(o) {
	return js_Boot.__nativeClassName(o) != null;
};
js_Boot.__resolveNativeClass = function(name) {
	return $global[name];
};
var js_Browser = function() { };
js_Browser.__name__ = ["js","Browser"];
js_Browser.createXMLHttpRequest = function() {
	if(typeof XMLHttpRequest != "undefined") return new XMLHttpRequest();
	if(typeof ActiveXObject != "undefined") return new ActiveXObject("Microsoft.XMLHTTP");
	throw new js__$Boot_HaxeError("Unable to create XMLHttpRequest object.");
};
var js_Lib = function() { };
js_Lib.__name__ = ["js","Lib"];
js_Lib.alert = function(v) {
	alert(js_Boot.__string_rec(v,""));
};
var massive_haxe_Exception = function(message,info) {
	this.message = message;
	this.info = info;
	this.type = massive_haxe_util_ReflectUtil.here({ fileName : "Exception.hx", lineNumber : 70, className : "massive.haxe.Exception", methodName : "new"}).className;
};
massive_haxe_Exception.__name__ = ["massive","haxe","Exception"];
massive_haxe_Exception.prototype = {
	toString: function() {
		var str = this.type + ": " + this.message;
		if(this.info != null) str += " at " + this.info.className + "#" + this.info.methodName + " (" + this.info.lineNumber + ")";
		return str;
	}
	,__class__: massive_haxe_Exception
};
var massive_haxe_util_ReflectUtil = function() { };
massive_haxe_util_ReflectUtil.__name__ = ["massive","haxe","util","ReflectUtil"];
massive_haxe_util_ReflectUtil.here = function(info) {
	return info;
};
var massive_munit_Assert = function() { };
massive_munit_Assert.__name__ = ["massive","munit","Assert"];
massive_munit_Assert.isTrue = function(value,info) {
	massive_munit_Assert.assertionCount++;
	if(value != true) massive_munit_Assert.fail("Expected TRUE but was [" + (value == null?"null":"" + value) + "]",info);
};
massive_munit_Assert.isFalse = function(value,info) {
	massive_munit_Assert.assertionCount++;
	if(value != false) massive_munit_Assert.fail("Expected FALSE but was [" + (value == null?"null":"" + value) + "]",info);
};
massive_munit_Assert.isNull = function(value,info) {
	massive_munit_Assert.assertionCount++;
	if(value != null) massive_munit_Assert.fail("Value [" + Std.string(value) + "] was not NULL",info);
};
massive_munit_Assert.isNotNull = function(value,info) {
	massive_munit_Assert.assertionCount++;
	if(value == null) massive_munit_Assert.fail("Value [" + Std.string(value) + "] was NULL",info);
};
massive_munit_Assert.isNaN = function(value,info) {
	massive_munit_Assert.assertionCount++;
	if(!isNaN(value)) massive_munit_Assert.fail("Value [" + value + "]  was not NaN",info);
};
massive_munit_Assert.isNotNaN = function(value,info) {
	massive_munit_Assert.assertionCount++;
	if(isNaN(value)) massive_munit_Assert.fail("Value [" + value + "] was NaN",info);
};
massive_munit_Assert.isType = function(value,type,info) {
	massive_munit_Assert.assertionCount++;
	if(!js_Boot.__instanceof(value,type)) massive_munit_Assert.fail("Value [" + Std.string(value) + "] was not of type: " + Type.getClassName(type),info);
};
massive_munit_Assert.isNotType = function(value,type,info) {
	massive_munit_Assert.assertionCount++;
	if(js_Boot.__instanceof(value,type)) massive_munit_Assert.fail("Value [" + Std.string(value) + "] was of type: " + Type.getClassName(type),info);
};
massive_munit_Assert.areEqual = function(expected,actual,info) {
	massive_munit_Assert.assertionCount++;
	var equal;
	{
		var _g = Type["typeof"](expected);
		switch(_g[1]) {
		case 7:
			equal = Type.enumEq(expected,actual);
			break;
		default:
			equal = expected == actual;
		}
	}
	if(!equal) massive_munit_Assert.fail("Value [" + Std.string(actual) + "] was not equal to expected value [" + Std.string(expected) + "]",info);
};
massive_munit_Assert.areNotEqual = function(expected,actual,info) {
	massive_munit_Assert.assertionCount++;
	var equal;
	{
		var _g = Type["typeof"](expected);
		switch(_g[1]) {
		case 7:
			equal = Type.enumEq(expected,actual);
			break;
		default:
			equal = expected == actual;
		}
	}
	if(equal) massive_munit_Assert.fail("Value [" + Std.string(actual) + "] was equal to value [" + Std.string(expected) + "]",info);
};
massive_munit_Assert.areSame = function(expected,actual,info) {
	massive_munit_Assert.assertionCount++;
	if(expected != actual) massive_munit_Assert.fail("Value [" + Std.string(actual) + "] was not the same as expected value [" + Std.string(expected) + "]",info);
};
massive_munit_Assert.areNotSame = function(expected,actual,info) {
	massive_munit_Assert.assertionCount++;
	if(expected == actual) massive_munit_Assert.fail("Value [" + Std.string(actual) + "] was the same as expected value [" + Std.string(expected) + "]",info);
};
massive_munit_Assert.fail = function(msg,info) {
	throw new js__$Boot_HaxeError(new massive_munit_AssertionException(msg,info));
};
var massive_munit_MUnitException = function(message,info) {
	massive_haxe_Exception.call(this,message,info);
	this.type = massive_haxe_util_ReflectUtil.here({ fileName : "MUnitException.hx", lineNumber : 50, className : "massive.munit.MUnitException", methodName : "new"}).className;
};
massive_munit_MUnitException.__name__ = ["massive","munit","MUnitException"];
massive_munit_MUnitException.__super__ = massive_haxe_Exception;
massive_munit_MUnitException.prototype = $extend(massive_haxe_Exception.prototype,{
	__class__: massive_munit_MUnitException
});
var massive_munit_AssertionException = function(msg,info) {
	massive_munit_MUnitException.call(this,msg,info);
	this.type = massive_haxe_util_ReflectUtil.here({ fileName : "AssertionException.hx", lineNumber : 49, className : "massive.munit.AssertionException", methodName : "new"}).className;
};
massive_munit_AssertionException.__name__ = ["massive","munit","AssertionException"];
massive_munit_AssertionException.__super__ = massive_munit_MUnitException;
massive_munit_AssertionException.prototype = $extend(massive_munit_MUnitException.prototype,{
	__class__: massive_munit_AssertionException
});
var massive_munit_ITestResultClient = function() { };
massive_munit_ITestResultClient.__name__ = ["massive","munit","ITestResultClient"];
massive_munit_ITestResultClient.prototype = {
	__class__: massive_munit_ITestResultClient
};
var massive_munit_IAdvancedTestResultClient = function() { };
massive_munit_IAdvancedTestResultClient.__name__ = ["massive","munit","IAdvancedTestResultClient"];
massive_munit_IAdvancedTestResultClient.__interfaces__ = [massive_munit_ITestResultClient];
massive_munit_IAdvancedTestResultClient.prototype = {
	__class__: massive_munit_IAdvancedTestResultClient
};
var massive_munit_ICoverageTestResultClient = function() { };
massive_munit_ICoverageTestResultClient.__name__ = ["massive","munit","ICoverageTestResultClient"];
massive_munit_ICoverageTestResultClient.__interfaces__ = [massive_munit_IAdvancedTestResultClient];
massive_munit_ICoverageTestResultClient.prototype = {
	__class__: massive_munit_ICoverageTestResultClient
};
var massive_munit_TestClassHelper = function(type,isDebug) {
	if(isDebug == null) isDebug = false;
	this.type = type;
	this.isDebug = isDebug;
	this.tests = [];
	this.index = 0;
	this.className = Type.getClassName(type);
	this.beforeClass = $bind(this,this.nullFunc);
	this.afterClass = $bind(this,this.nullFunc);
	this.before = $bind(this,this.nullFunc);
	this.after = $bind(this,this.nullFunc);
	this.parse(type);
};
massive_munit_TestClassHelper.__name__ = ["massive","munit","TestClassHelper"];
massive_munit_TestClassHelper.prototype = {
	hasNext: function() {
		return this.index < this.tests.length;
	}
	,next: function() {
		if(this.hasNext()) return this.tests[this.index++]; else return null;
	}
	,current: function() {
		if(this.index <= 0) return this.tests[0]; else return this.tests[this.index - 1];
	}
	,parse: function(type) {
		this.test = Type.createEmptyInstance(type);
		var inherintanceChain = this.getInheritanceChain(type);
		var fieldMeta = this.collateFieldMeta(inherintanceChain);
		this.scanForTests(fieldMeta);
		this.tests.sort($bind(this,this.sortTestsByName));
	}
	,getInheritanceChain: function(clazz) {
		var inherintanceChain = [clazz];
		while((clazz = Type.getSuperClass(clazz)) != null) inherintanceChain.push(clazz);
		return inherintanceChain;
	}
	,collateFieldMeta: function(inherintanceChain) {
		var meta = { };
		while(inherintanceChain.length > 0) {
			var clazz = inherintanceChain.pop();
			var newMeta = haxe_rtti_Meta.getFields(clazz);
			var markedFieldNames = Reflect.fields(newMeta);
			var _g = 0;
			while(_g < markedFieldNames.length) {
				var fieldName = markedFieldNames[_g];
				++_g;
				var recordedFieldTags = Reflect.field(meta,fieldName);
				var newFieldTags = Reflect.field(newMeta,fieldName);
				var newTagNames = Reflect.fields(newFieldTags);
				if(recordedFieldTags == null) {
					var tagsCopy = { };
					var _g1 = 0;
					while(_g1 < newTagNames.length) {
						var tagName = newTagNames[_g1];
						++_g1;
						Reflect.setField(tagsCopy,tagName,Reflect.field(newFieldTags,tagName));
					}
					meta[fieldName] = tagsCopy;
				} else {
					var ignored = false;
					var _g11 = 0;
					while(_g11 < newTagNames.length) {
						var tagName1 = newTagNames[_g11];
						++_g11;
						if(tagName1 == "Ignore") ignored = true;
						if(!ignored && (tagName1 == "Test" || tagName1 == "AsyncTest") && Object.prototype.hasOwnProperty.call(recordedFieldTags,"Ignore")) Reflect.deleteField(recordedFieldTags,"Ignore");
						var tagValue = Reflect.field(newFieldTags,tagName1);
						recordedFieldTags[tagName1] = tagValue;
					}
				}
			}
		}
		return meta;
	}
	,scanForTests: function(fieldMeta) {
		var fieldNames = Reflect.fields(fieldMeta);
		var _g = 0;
		while(_g < fieldNames.length) {
			var fieldName = fieldNames[_g];
			++_g;
			var f = Reflect.field(this.test,fieldName);
			if(Reflect.isFunction(f)) {
				var funcMeta = Reflect.field(fieldMeta,fieldName);
				this.searchForMatchingTags(fieldName,f,funcMeta);
			}
		}
	}
	,searchForMatchingTags: function(fieldName,func,funcMeta) {
		var _g = 0;
		var _g1 = massive_munit_TestClassHelper.META_TAGS;
		while(_g < _g1.length) {
			var tag = _g1[_g];
			++_g;
			if(Object.prototype.hasOwnProperty.call(funcMeta,tag)) {
				var args = Reflect.field(funcMeta,tag);
				var description;
				if(args != null) description = args[0]; else description = "";
				var isAsync = args != null && description == "Async";
				var isIgnored = Object.prototype.hasOwnProperty.call(funcMeta,"Ignore");
				if(isAsync) description = ""; else if(isIgnored) {
					args = Reflect.field(funcMeta,"Ignore");
					if(args != null) description = args[0]; else description = "";
				}
				switch(tag) {
				case "BeforeClass":
					this.beforeClass = func;
					break;
				case "AfterClass":
					this.afterClass = func;
					break;
				case "Before":
					this.before = func;
					break;
				case "After":
					this.after = func;
					break;
				case "AsyncTest":
					if(!this.isDebug) this.addTest(fieldName,func,this.test,true,isIgnored,description);
					break;
				case "Test":
					if(!this.isDebug) this.addTest(fieldName,func,this.test,isAsync,isIgnored,description);
					break;
				case "TestDebug":
					if(this.isDebug) this.addTest(fieldName,func,this.test,isAsync,isIgnored,description);
					break;
				}
			}
		}
	}
	,addTest: function(field,testFunction,testInstance,isAsync,isIgnored,description) {
		var result = new massive_munit_TestResult();
		result.async = isAsync;
		result.ignore = isIgnored;
		result.className = this.className;
		result.description = description;
		result.name = field;
		var data = { test : testFunction, scope : testInstance, result : result};
		this.tests.push(data);
	}
	,sortTestsByName: function(x,y) {
		if(x.result.name == y.result.name) return 0;
		if(x.result.name > y.result.name) return 1; else return -1;
	}
	,nullFunc: function() {
	}
	,__class__: massive_munit_TestClassHelper
};
var massive_munit_TestResult = function() {
	this.passed = false;
	this.executionTime = 0.0;
	this.name = "";
	this.className = "";
	this.description = "";
	this.async = false;
	this.ignore = false;
	this.error = null;
	this.failure = null;
};
massive_munit_TestResult.__name__ = ["massive","munit","TestResult"];
massive_munit_TestResult.prototype = {
	get_location: function() {
		if(this.name == "" && this.className == "") return ""; else return this.className + "#" + this.name;
	}
	,get_type: function() {
		if(this.error != null) return massive_munit_TestResultType.ERROR;
		if(this.failure != null) return massive_munit_TestResultType.FAIL;
		if(this.ignore == true) return massive_munit_TestResultType.IGNORE;
		if(this.passed == true) return massive_munit_TestResultType.PASS;
		return massive_munit_TestResultType.UNKNOWN;
	}
	,__class__: massive_munit_TestResult
};
var massive_munit_TestResultType = { __ename__ : true, __constructs__ : ["UNKNOWN","PASS","FAIL","ERROR","IGNORE"] };
massive_munit_TestResultType.UNKNOWN = ["UNKNOWN",0];
massive_munit_TestResultType.UNKNOWN.toString = $estr;
massive_munit_TestResultType.UNKNOWN.__enum__ = massive_munit_TestResultType;
massive_munit_TestResultType.PASS = ["PASS",1];
massive_munit_TestResultType.PASS.toString = $estr;
massive_munit_TestResultType.PASS.__enum__ = massive_munit_TestResultType;
massive_munit_TestResultType.FAIL = ["FAIL",2];
massive_munit_TestResultType.FAIL.toString = $estr;
massive_munit_TestResultType.FAIL.__enum__ = massive_munit_TestResultType;
massive_munit_TestResultType.ERROR = ["ERROR",3];
massive_munit_TestResultType.ERROR.toString = $estr;
massive_munit_TestResultType.ERROR.__enum__ = massive_munit_TestResultType;
massive_munit_TestResultType.IGNORE = ["IGNORE",4];
massive_munit_TestResultType.IGNORE.toString = $estr;
massive_munit_TestResultType.IGNORE.__enum__ = massive_munit_TestResultType;
var massive_munit_async_IAsyncDelegateObserver = function() { };
massive_munit_async_IAsyncDelegateObserver.__name__ = ["massive","munit","async","IAsyncDelegateObserver"];
massive_munit_async_IAsyncDelegateObserver.prototype = {
	__class__: massive_munit_async_IAsyncDelegateObserver
};
var massive_munit_TestRunner = function(resultClient) {
	this.clients = [];
	this.addResultClient(resultClient);
	this.set_asyncFactory(this.createAsyncFactory());
	this.running = false;
	this.isDebug = false;
};
massive_munit_TestRunner.__name__ = ["massive","munit","TestRunner"];
massive_munit_TestRunner.__interfaces__ = [massive_munit_async_IAsyncDelegateObserver];
massive_munit_TestRunner.prototype = {
	get_clientCount: function() {
		return this.clients.length;
	}
	,set_asyncFactory: function(value) {
		if(value == this.asyncFactory) return value;
		if(this.running) throw new js__$Boot_HaxeError(new massive_munit_MUnitException("Can't change AsyncFactory while tests are running",{ fileName : "TestRunner.hx", lineNumber : 127, className : "massive.munit.TestRunner", methodName : "set_asyncFactory"}));
		value.observer = this;
		return this.asyncFactory = value;
	}
	,addResultClient: function(resultClient) {
		var _g = 0;
		var _g1 = this.clients;
		while(_g < _g1.length) {
			var client = _g1[_g];
			++_g;
			if(client == resultClient) return;
		}
		resultClient.set_completionHandler($bind(this,this.clientCompletionHandler));
		this.clients.push(resultClient);
	}
	,debug: function(testSuiteClasses) {
		this.isDebug = true;
		this.run(testSuiteClasses);
	}
	,run: function(testSuiteClasses) {
		if(this.running) return;
		this.running = true;
		this.asyncPending = false;
		this.asyncDelegate = null;
		this.testCount = 0;
		this.failCount = 0;
		this.errorCount = 0;
		this.passCount = 0;
		this.ignoreCount = 0;
		this.suiteIndex = 0;
		this.clientCompleteCount = 0;
		massive_munit_Assert.assertionCount = 0;
		this.emptyParams = [];
		this.testSuites = [];
		this.startTime = massive_munit_util_Timer.stamp();
		var _g = 0;
		while(_g < testSuiteClasses.length) {
			var suiteType = testSuiteClasses[_g];
			++_g;
			this.testSuites.push(Type.createInstance(suiteType,[]));
		}
		this.execute();
	}
	,execute: function() {
		var _g1 = this.suiteIndex;
		var _g = this.testSuites.length;
		while(_g1 < _g) {
			var i = _g1++;
			var suite = this.testSuites[i];
			while( suite.hasNext() ) {
				var testClass = suite.next();
				if(this.activeHelper == null || this.activeHelper.type != testClass) {
					this.activeHelper = new massive_munit_TestClassHelper(testClass,this.isDebug);
					Reflect.callMethod(this.activeHelper.test,this.activeHelper.beforeClass,this.emptyParams);
				}
				this.executeTestCases();
				if(!this.asyncPending) Reflect.callMethod(this.activeHelper.test,this.activeHelper.afterClass,this.emptyParams); else {
					suite.repeat();
					this.suiteIndex = i;
					return;
				}
			}
			this.testSuites[i] = null;
		}
		if(!this.asyncPending) {
			var time = massive_munit_util_Timer.stamp() - this.startTime;
			var _g2 = 0;
			var _g11 = this.clients;
			while(_g2 < _g11.length) {
				var client = _g11[_g2];
				++_g2;
				if(js_Boot.__instanceof(client,massive_munit_IAdvancedTestResultClient)) {
					var cl = client;
					cl.setCurrentTestClass(null);
				}
				client.reportFinalStatistics(this.testCount,this.passCount,this.failCount,this.errorCount,this.ignoreCount,time);
			}
		}
	}
	,executeTestCases: function() {
		var _g = 0;
		var _g1 = this.clients;
		while(_g < _g1.length) {
			var c = _g1[_g];
			++_g;
			if(js_Boot.__instanceof(c,massive_munit_IAdvancedTestResultClient)) {
				if(this.activeHelper.hasNext()) {
					var cl = c;
					cl.setCurrentTestClass(this.activeHelper.className);
				}
			}
		}
		var $it0 = this.activeHelper;
		while( $it0.hasNext() ) {
			var testCaseData = $it0.next();
			if(testCaseData.result.ignore) {
				this.ignoreCount++;
				var _g2 = 0;
				var _g11 = this.clients;
				while(_g2 < _g11.length) {
					var c1 = _g11[_g2];
					++_g2;
					c1.addIgnore(testCaseData.result);
				}
			} else {
				this.testCount++;
				Reflect.callMethod(this.activeHelper.test,this.activeHelper.before,this.emptyParams);
				this.testStartTime = massive_munit_util_Timer.stamp();
				this.executeTestCase(testCaseData,testCaseData.result.async);
				if(!this.asyncPending) Reflect.callMethod(this.activeHelper.test,this.activeHelper.after,this.emptyParams); else break;
			}
		}
	}
	,executeTestCase: function(testCaseData,async) {
		var result = testCaseData.result;
		try {
			var assertionCount = massive_munit_Assert.assertionCount;
			if(async) {
				Reflect.callMethod(testCaseData.scope,testCaseData.test,[this.asyncFactory]);
				if(this.asyncDelegate == null) throw new js__$Boot_HaxeError(new massive_munit_async_MissingAsyncDelegateException("No AsyncDelegate was created in async test at " + result.get_location(),null));
				this.asyncPending = true;
			} else {
				Reflect.callMethod(testCaseData.scope,testCaseData.test,this.emptyParams);
				result.passed = true;
				result.executionTime = massive_munit_util_Timer.stamp() - this.testStartTime;
				this.passCount++;
				var _g = 0;
				var _g1 = this.clients;
				while(_g < _g1.length) {
					var c = _g1[_g];
					++_g;
					c.addPass(result);
				}
			}
		} catch( e ) {
			haxe_CallStack.lastException = e;
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			if(async && this.asyncDelegate != null) {
				this.asyncDelegate.cancelTest();
				this.asyncDelegate = null;
			}
			if(js_Boot.__instanceof(e,org_hamcrest_AssertionException)) e = new massive_munit_AssertionException(e.message,e.info);
			if(js_Boot.__instanceof(e,massive_munit_AssertionException)) {
				result.executionTime = massive_munit_util_Timer.stamp() - this.testStartTime;
				result.failure = e;
				this.failCount++;
				var _g2 = 0;
				var _g11 = this.clients;
				while(_g2 < _g11.length) {
					var c1 = _g11[_g2];
					++_g2;
					c1.addFail(result);
				}
			} else {
				result.executionTime = massive_munit_util_Timer.stamp() - this.testStartTime;
				if(!js_Boot.__instanceof(e,massive_munit_MUnitException)) e = new massive_munit_UnhandledException(e,result.get_location());
				result.error = e;
				this.errorCount++;
				var _g3 = 0;
				var _g12 = this.clients;
				while(_g3 < _g12.length) {
					var c2 = _g12[_g3];
					++_g3;
					c2.addError(result);
				}
			}
		}
	}
	,clientCompletionHandler: function(resultClient) {
		if(++this.clientCompleteCount == this.clients.length) {
			if(this.completionHandler != null) {
				var successful = this.passCount == this.testCount;
				var handler = this.completionHandler;
				massive_munit_util_Timer.delay(function() {
					handler(successful);
				},10);
			}
			this.running = false;
		}
	}
	,asyncResponseHandler: function(delegate) {
		var testCaseData = this.activeHelper.current();
		testCaseData.test = $bind(delegate,delegate.runTest);
		testCaseData.scope = delegate;
		this.asyncPending = false;
		this.asyncDelegate = null;
		this.executeTestCase(testCaseData,false);
		Reflect.callMethod(this.activeHelper.test,this.activeHelper.after,this.emptyParams);
		this.execute();
	}
	,asyncTimeoutHandler: function(delegate) {
		var testCaseData = this.activeHelper.current();
		var result = testCaseData.result;
		result.executionTime = massive_munit_util_Timer.stamp() - this.testStartTime;
		result.error = new massive_munit_async_AsyncTimeoutException("",delegate.info);
		this.asyncPending = false;
		this.asyncDelegate = null;
		this.errorCount++;
		var _g = 0;
		var _g1 = this.clients;
		while(_g < _g1.length) {
			var c = _g1[_g];
			++_g;
			c.addError(result);
		}
		Reflect.callMethod(this.activeHelper.test,this.activeHelper.after,this.emptyParams);
		this.execute();
	}
	,asyncDelegateCreatedHandler: function(delegate) {
		this.asyncDelegate = delegate;
	}
	,createAsyncFactory: function() {
		return new massive_munit_async_AsyncFactory(this);
	}
	,__class__: massive_munit_TestRunner
};
var massive_munit_UnhandledException = function(source,testLocation) {
	massive_munit_MUnitException.call(this,Std.string(source.toString()) + this.formatLocation(source,testLocation),null);
	this.type = massive_haxe_util_ReflectUtil.here({ fileName : "UnhandledException.hx", lineNumber : 53, className : "massive.munit.UnhandledException", methodName : "new"}).className;
};
massive_munit_UnhandledException.__name__ = ["massive","munit","UnhandledException"];
massive_munit_UnhandledException.__super__ = massive_munit_MUnitException;
massive_munit_UnhandledException.prototype = $extend(massive_munit_MUnitException.prototype,{
	formatLocation: function(source,testLocation) {
		var stackTrace = " at " + testLocation;
		var stack = this.getStackTrace(source);
		if(stack != "") stackTrace += " " + HxOverrides.substr(stack,1,null);
		return stackTrace;
	}
	,getStackTrace: function(source) {
		var s = "";
		if(s == "") {
			var stack = haxe_CallStack.exceptionStack();
			while(stack.length > 0) {
				var _g = stack.shift();
				if(_g != null) switch(_g[1]) {
				case 2:
					var line = _g[4];
					var file = _g[3];
					s += "\tat " + file + " (" + line + ")\n";
					break;
				case 3:
					var method = _g[3];
					var classname = _g[2];
					s += "\tat " + classname + "#" + method + "\n";
					break;
				default:
				} else {
				}
			}
		}
		return s;
	}
	,__class__: massive_munit_UnhandledException
});
var massive_munit_async_AsyncDelegate = function(testCase,handler,timeout,info) {
	var self = this;
	this.testCase = testCase;
	this.handler = handler;
	this.delegateHandler = Reflect.makeVarArgs($bind(this,this.responseHandler));
	this.info = info;
	this.params = [];
	this.timedOut = false;
	this.canceled = false;
	if(timeout == null || timeout <= 0) timeout = 400;
	this.timeoutDelay = timeout;
	this.timer = massive_munit_util_Timer.delay($bind(this,this.timeoutHandler),this.timeoutDelay);
};
massive_munit_async_AsyncDelegate.__name__ = ["massive","munit","async","AsyncDelegate"];
massive_munit_async_AsyncDelegate.prototype = {
	runTest: function() {
		Reflect.callMethod(this.testCase,this.handler,this.params);
	}
	,cancelTest: function() {
		this.canceled = true;
		this.timer.stop();
		if(this.deferredTimer != null) this.deferredTimer.stop();
	}
	,responseHandler: function(params) {
		if(this.timedOut || this.canceled) return null;
		this.timer.stop();
		if(this.deferredTimer != null) this.deferredTimer.stop();
		if(params == null) params = [];
		this.params = params;
		if(this.observer != null) massive_munit_util_Timer.delay($bind(this,this.delayActualResponseHandler),1);
		return null;
	}
	,delayActualResponseHandler: function() {
		this.observer.asyncResponseHandler(this);
		this.observer = null;
	}
	,timeoutHandler: function() {
		this.actualTimeoutHandler();
	}
	,actualTimeoutHandler: function() {
		this.deferredTimer = null;
		this.handler = null;
		this.delegateHandler = null;
		this.timedOut = true;
		if(this.observer != null) {
			this.observer.asyncTimeoutHandler(this);
			this.observer = null;
		}
	}
	,__class__: massive_munit_async_AsyncDelegate
};
var massive_munit_async_AsyncFactory = function(observer) {
	this.observer = observer;
	this.asyncDelegateCount = 0;
};
massive_munit_async_AsyncFactory.__name__ = ["massive","munit","async","AsyncFactory"];
massive_munit_async_AsyncFactory.prototype = {
	createHandler: function(testCase,handler,timeout,info) {
		var delegate = new massive_munit_async_AsyncDelegate(testCase,handler,timeout,info);
		delegate.observer = this.observer;
		this.asyncDelegateCount++;
		this.observer.asyncDelegateCreatedHandler(delegate);
		return delegate.delegateHandler;
	}
	,__class__: massive_munit_async_AsyncFactory
};
var massive_munit_async_AsyncTimeoutException = function(message,info) {
	massive_munit_MUnitException.call(this,message,info);
	this.type = massive_haxe_util_ReflectUtil.here({ fileName : "AsyncTimeoutException.hx", lineNumber : 47, className : "massive.munit.async.AsyncTimeoutException", methodName : "new"}).className;
};
massive_munit_async_AsyncTimeoutException.__name__ = ["massive","munit","async","AsyncTimeoutException"];
massive_munit_async_AsyncTimeoutException.__super__ = massive_munit_MUnitException;
massive_munit_async_AsyncTimeoutException.prototype = $extend(massive_munit_MUnitException.prototype,{
	__class__: massive_munit_async_AsyncTimeoutException
});
var massive_munit_async_MissingAsyncDelegateException = function(message,info) {
	massive_munit_MUnitException.call(this,message,info);
	this.type = massive_haxe_util_ReflectUtil.here({ fileName : "MissingAsyncDelegateException.hx", lineNumber : 47, className : "massive.munit.async.MissingAsyncDelegateException", methodName : "new"}).className;
};
massive_munit_async_MissingAsyncDelegateException.__name__ = ["massive","munit","async","MissingAsyncDelegateException"];
massive_munit_async_MissingAsyncDelegateException.__super__ = massive_munit_MUnitException;
massive_munit_async_MissingAsyncDelegateException.prototype = $extend(massive_munit_MUnitException.prototype,{
	__class__: massive_munit_async_MissingAsyncDelegateException
});
var massive_munit_client_AbstractTestResultClient = function() {
	this.init();
};
massive_munit_client_AbstractTestResultClient.__name__ = ["massive","munit","client","AbstractTestResultClient"];
massive_munit_client_AbstractTestResultClient.__interfaces__ = [massive_munit_ICoverageTestResultClient,massive_munit_IAdvancedTestResultClient];
massive_munit_client_AbstractTestResultClient.prototype = {
	get_completionHandler: function() {
		return this.completionHandler;
	}
	,set_completionHandler: function(value) {
		return this.completionHandler = value;
	}
	,get_output: function() {
		return this.output;
	}
	,init: function() {
		this.currentTestClass = null;
		this.currentClassResults = [];
		massive_munit_client_AbstractTestResultClient.traces = [];
		this.passCount = 0;
		this.failCount = 0;
		this.errorCount = 0;
		this.ignoreCount = 0;
		this.currentCoverageResult = null;
		this.totalResults = [];
		this.totalCoveragePercent = 0;
		this.totalCoverageReport = null;
		this.totalCoverageResults = null;
	}
	,setCurrentTestClass: function(className) {
		if(this.currentTestClass == className) return;
		if(this.currentTestClass != null) this.finalizeTestClass();
		this.currentTestClass = className;
		if(this.currentTestClass != null) this.initializeTestClass();
	}
	,addPass: function(result) {
		this.passCount++;
		this.updateTestClass(result);
	}
	,addFail: function(result) {
		this.failCount++;
		this.updateTestClass(result);
	}
	,addError: function(result) {
		this.errorCount++;
		this.updateTestClass(result);
	}
	,addIgnore: function(result) {
		this.ignoreCount++;
		this.updateTestClass(result);
	}
	,setCurrentTestClassCoverage: function(result) {
		this.currentCoverageResult = result;
	}
	,reportFinalCoverage: function(percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency) {
		if(percent == null) percent = 0;
		this.totalCoveragePercent = percent;
		this.totalCoverageResults = missingCoverageResults;
		this.totalCoverageReport = summary;
	}
	,reportFinalStatistics: function(testCount,passCount,failCount,errorCount,ignoreCount,time) {
		this.finalResult = passCount == testCount;
		this.printReports();
		this.printFinalStatistics(this.finalResult,testCount,passCount,failCount,errorCount,ignoreCount,time);
		this.printOverallResult(this.finalResult);
		haxe_Log.trace = this.originalTrace;
		if(this.get_completionHandler() != null) (this.get_completionHandler())(this);
		return this.get_output();
	}
	,initializeTestClass: function() {
		this.currentClassResults = [];
		massive_munit_client_AbstractTestResultClient.traces = [];
		this.passCount = 0;
		this.failCount = 0;
		this.errorCount = 0;
		this.ignoreCount = 0;
	}
	,updateTestClass: function(result) {
		this.currentClassResults.push(result);
		this.totalResults.push(result);
	}
	,finalizeTestClass: function() {
		this.currentClassResults.sort($bind(this,this.sortTestResults));
	}
	,printReports: function() {
	}
	,printFinalStatistics: function(result,testCount,passCount,failCount,errorCount,ignoreCount,time) {
	}
	,printOverallResult: function(result) {
	}
	,addTrace: function(value,info) {
		var traceString = info.fileName + "|" + info.lineNumber + "| " + Std.string(value);
		massive_munit_client_AbstractTestResultClient.traces.push(traceString);
	}
	,getTraces: function() {
		return massive_munit_client_AbstractTestResultClient.traces.concat([]);
	}
	,sortTestResults: function(a,b) {
		var aInt;
		var _g = a.get_type();
		switch(_g[1]) {
		case 3:
			aInt = 2;
			break;
		case 2:
			aInt = 1;
			break;
		case 4:
			aInt = 0;
			break;
		case 1:
			aInt = -1;
			break;
		default:
			aInt = -2;
		}
		var bInt;
		var _g1 = b.get_type();
		switch(_g1[1]) {
		case 3:
			bInt = 2;
			break;
		case 2:
			bInt = 1;
			break;
		case 4:
			bInt = 0;
			break;
		case 1:
			bInt = -1;
			break;
		default:
			bInt = -2;
		}
		return aInt - bInt;
	}
	,__class__: massive_munit_client_AbstractTestResultClient
};
var massive_munit_client_HTTPClient = function(client,url,queueRequest) {
	if(queueRequest == null) queueRequest = true;
	if(url == null) url = "http://localhost:2000";
	this.id = "HTTPClient";
	this.client = client;
	this.url = url;
	this.queueRequest = queueRequest;
};
massive_munit_client_HTTPClient.__name__ = ["massive","munit","client","HTTPClient"];
massive_munit_client_HTTPClient.__interfaces__ = [massive_munit_IAdvancedTestResultClient];
massive_munit_client_HTTPClient.dispatchNextRequest = function() {
	if(massive_munit_client_HTTPClient.responsePending || massive_munit_client_HTTPClient.queue.length == 0) return;
	massive_munit_client_HTTPClient.responsePending = true;
	var request = massive_munit_client_HTTPClient.queue.pop();
	request.send();
};
massive_munit_client_HTTPClient.prototype = {
	get_completionHandler: function() {
		return this.completionHandler;
	}
	,set_completionHandler: function(value) {
		return this.completionHandler = value;
	}
	,setCurrentTestClass: function(className) {
		if(js_Boot.__instanceof(this.client,massive_munit_IAdvancedTestResultClient)) (js_Boot.__cast(this.client , massive_munit_IAdvancedTestResultClient)).setCurrentTestClass(className);
	}
	,addPass: function(result) {
		this.client.addPass(result);
	}
	,addFail: function(result) {
		this.client.addFail(result);
	}
	,addError: function(result) {
		this.client.addError(result);
	}
	,addIgnore: function(result) {
		this.client.addIgnore(result);
	}
	,reportFinalStatistics: function(testCount,passCount,failCount,errorCount,ignoreCount,time) {
		var result = this.client.reportFinalStatistics(testCount,passCount,failCount,errorCount,ignoreCount,time);
		this.sendResult(result);
		return result;
	}
	,sendResult: function(result) {
		this.request = new massive_munit_client_URLRequest(this.url);
		this.request.setHeader("munit-clientId",this.client.id);
		this.request.setHeader("munit-platformId",this.platform());
		this.request.onData = $bind(this,this.onData);
		this.request.onError = $bind(this,this.onError);
		this.request.data = result;
		if(this.queueRequest) {
			massive_munit_client_HTTPClient.queue.unshift(this.request);
			massive_munit_client_HTTPClient.dispatchNextRequest();
		} else this.request.send();
	}
	,platform: function() {
		return "js";
		return "unknown";
	}
	,onData: function(data) {
		if(this.queueRequest) {
			massive_munit_client_HTTPClient.responsePending = false;
			massive_munit_client_HTTPClient.dispatchNextRequest();
		}
		if(this.get_completionHandler() != null) (this.get_completionHandler())(this);
	}
	,onError: function(msg) {
		if(this.queueRequest) {
			massive_munit_client_HTTPClient.responsePending = false;
			massive_munit_client_HTTPClient.dispatchNextRequest();
		}
		if(this.get_completionHandler() != null) (this.get_completionHandler())(this);
	}
	,__class__: massive_munit_client_HTTPClient
};
var massive_munit_client_URLRequest = function(url) {
	this.url = url;
	this.createClient(url);
	this.setHeader("Content-Type","text/plain");
};
massive_munit_client_URLRequest.__name__ = ["massive","munit","client","URLRequest"];
massive_munit_client_URLRequest.prototype = {
	createClient: function(url) {
		this.client = new haxe_Http(url);
	}
	,setHeader: function(name,value) {
		this.client.setHeader(name,value);
	}
	,send: function() {
		this.client.onData = this.onData;
		this.client.onError = this.onError;
		this.client.setPostData(this.data);
		this.client.request(true);
	}
	,__class__: massive_munit_client_URLRequest
};
var massive_munit_client_JUnitReportClient = function() {
	this.id = "junit";
	this.xml = new StringBuf();
	this.currentTestClass = "";
	this.newline = "\n";
	this.testSuiteXML = null;
	this.xml.b += Std.string("<testsuites>" + this.newline);
};
massive_munit_client_JUnitReportClient.__name__ = ["massive","munit","client","JUnitReportClient"];
massive_munit_client_JUnitReportClient.__interfaces__ = [massive_munit_IAdvancedTestResultClient];
massive_munit_client_JUnitReportClient.prototype = {
	get_completionHandler: function() {
		return this.completionHandler;
	}
	,set_completionHandler: function(value) {
		return this.completionHandler = value;
	}
	,setCurrentTestClass: function(className) {
		if(this.currentTestClass == className) return;
		if(this.currentTestClass != null) this.endTestSuite();
		this.currentTestClass = className;
		if(this.currentTestClass != null) this.startTestSuite();
	}
	,addPass: function(result) {
		this.suitePassCount++;
		this.testSuiteXML.add("<testcase classname=\"" + result.className + "\" name=\"" + result.name + "\" time=\"" + massive_munit_util_MathUtil.round(result.executionTime,5) + "\" />" + this.newline);
	}
	,addFail: function(result) {
		this.suiteFailCount++;
		this.testSuiteXML.add("<testcase classname=\"" + result.className + "\" name=\"" + result.name + "\" time=\"" + massive_munit_util_MathUtil.round(result.executionTime,5) + "\" >" + this.newline);
		this.testSuiteXML.b += Std.string("<failure message=\"" + result.failure.message + "\" type=\"" + result.failure.type + "\">");
		this.testSuiteXML.b += Std.string(result.failure);
		this.testSuiteXML.b += Std.string("</failure>" + this.newline);
		this.testSuiteXML.b += Std.string("</testcase>" + this.newline);
	}
	,addError: function(result) {
		this.suiteErrorCount++;
		this.testSuiteXML.add("<testcase classname=\"" + result.className + "\" name=\"" + result.name + "\" time=\"" + massive_munit_util_MathUtil.round(result.executionTime,5) + "\" >" + this.newline);
		this.testSuiteXML.b += Std.string("<error message=\"" + Std.string(result.error.message) + "\" type=\"" + Std.string(result.error.type) + "\">");
		this.testSuiteXML.add(result.error);
		this.testSuiteXML.b += Std.string("</error>" + this.newline);
		this.testSuiteXML.b += Std.string("</testcase>" + this.newline);
	}
	,addIgnore: function(result) {
	}
	,reportFinalStatistics: function(testCount,passCount,failCount,errorCount,ignoreCount,time) {
		this.xml.b += "</testsuites>";
		if(this.get_completionHandler() != null) (this.get_completionHandler())(this);
		return this.xml.b;
	}
	,endTestSuite: function() {
		if(this.testSuiteXML == null) return;
		var suiteTestCount = this.suitePassCount + this.suiteFailCount + this.suiteErrorCount;
		this.suiteExecutionTime = massive_munit_util_Timer.stamp() - this.suiteExecutionTime;
		var header = "<testsuite errors=\"" + this.suiteErrorCount + "\" failures=\"" + this.suiteFailCount + "\" hostname=\"\" name=\"" + this.currentTestClass + "\" tests=\"" + suiteTestCount + "\" time=\"" + massive_munit_util_MathUtil.round(this.suiteExecutionTime,5) + "\" timestamp=\"" + Std.string(new Date()) + "\">" + this.newline;
		var footer = "</testsuite>" + this.newline;
		this.testSuiteXML.b += Std.string("<system-out></system-out>" + this.newline);
		this.testSuiteXML.b += Std.string("<system-err></system-err>" + this.newline);
		if(header == null) this.xml.b += "null"; else this.xml.b += "" + header;
		this.xml.b += Std.string(this.testSuiteXML.b);
		if(footer == null) this.xml.b += "null"; else this.xml.b += "" + footer;
	}
	,startTestSuite: function() {
		this.suitePassCount = 0;
		this.suiteFailCount = 0;
		this.suiteErrorCount = 0;
		this.suiteExecutionTime = massive_munit_util_Timer.stamp();
		this.testSuiteXML = new StringBuf();
	}
	,__class__: massive_munit_client_JUnitReportClient
};
var massive_munit_client_PrintClientBase = function(includeIgnoredReport) {
	if(includeIgnoredReport == null) includeIgnoredReport = true;
	massive_munit_client_AbstractTestResultClient.call(this);
	this.id = "simple";
	this.verbose = false;
	this.includeIgnoredReport = includeIgnoredReport;
	this.printLine("MUnit Results");
	this.printLine(this.divider);
};
massive_munit_client_PrintClientBase.__name__ = ["massive","munit","client","PrintClientBase"];
massive_munit_client_PrintClientBase.__super__ = massive_munit_client_AbstractTestResultClient;
massive_munit_client_PrintClientBase.prototype = $extend(massive_munit_client_AbstractTestResultClient.prototype,{
	init: function() {
		massive_munit_client_AbstractTestResultClient.prototype.init.call(this);
		this.divider = "------------------------------";
		this.divider2 = "==============================";
	}
	,initializeTestClass: function() {
		massive_munit_client_AbstractTestResultClient.prototype.initializeTestClass.call(this);
		this.printLine("Class: " + this.currentTestClass + " ");
	}
	,updateTestClass: function(result) {
		massive_munit_client_AbstractTestResultClient.prototype.updateTestClass.call(this,result);
		if(this.verbose) this.printLine(" " + result.name + ": " + Std.string(result.get_type()) + " "); else {
			var _g = result.get_type();
			switch(_g[1]) {
			case 1:
				this.print(".");
				break;
			case 2:
				this.print("!");
				break;
			case 3:
				this.print("x");
				break;
			case 4:
				this.print(",");
				break;
			case 0:
				null;
				break;
			}
		}
	}
	,finalizeTestClass: function() {
		massive_munit_client_AbstractTestResultClient.prototype.finalizeTestClass.call(this);
		var _g = 0;
		var _g1 = this.getTraces();
		while(_g < _g1.length) {
			var item = _g1[_g];
			++_g;
			this.printLine("TRACE: " + item,1);
		}
		var _g2 = 0;
		var _g11 = this.currentClassResults;
		while(_g2 < _g11.length) {
			var result = _g11[_g2];
			++_g2;
			var _g21 = result.get_type();
			switch(_g21[1]) {
			case 3:
				this.printLine("ERROR: " + Std.string(result.error),1);
				break;
			case 2:
				this.printLine("FAIL: " + Std.string(result.failure),1);
				break;
			case 4:
				var ingoredString = result.get_location();
				if(result.description != null) ingoredString += " - " + result.description;
				this.printLine("IGNORE: " + ingoredString,1);
				break;
			case 1:case 0:
				null;
				break;
			}
		}
	}
	,setCurrentTestClassCoverage: function(result) {
		massive_munit_client_AbstractTestResultClient.prototype.setCurrentTestClassCoverage.call(this,result);
		this.print(" [" + result.percent + "%]");
	}
	,reportFinalCoverage: function(percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency) {
		if(percent == null) percent = 0;
		massive_munit_client_AbstractTestResultClient.prototype.reportFinalCoverage.call(this,percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency);
		this.printLine("");
		this.printLine(this.divider);
		this.printLine("COVERAGE REPORT");
		this.printLine(this.divider);
		if(missingCoverageResults != null && missingCoverageResults.length > 0) {
			this.printLine("MISSING CODE BLOCKS:");
			var _g = 0;
			while(_g < missingCoverageResults.length) {
				var result = missingCoverageResults[_g];
				++_g;
				this.printLine(result.className + " [" + result.percent + "%]",1);
				var _g1 = 0;
				var _g2 = result.blocks;
				while(_g1 < _g2.length) {
					var item = _g2[_g1];
					++_g1;
					this.printIndentedLines(item,2);
				}
				this.printLine("");
			}
		}
		if(executionFrequency != null) {
			this.printLine("CODE EXECUTION FREQUENCY:");
			this.printIndentedLines(executionFrequency,1);
			this.printLine("");
		}
		if(classBreakdown != null) this.printIndentedLines(classBreakdown,0);
		if(packageBreakdown != null) this.printIndentedLines(packageBreakdown,0);
		if(summary != null) this.printIndentedLines(summary,0);
	}
	,printIndentedLines: function(value,indent) {
		if(indent == null) indent = 1;
		var lines = value.split("\n");
		var _g = 0;
		while(_g < lines.length) {
			var line = lines[_g];
			++_g;
			this.printLine(line,indent);
		}
	}
	,printReports: function() {
		this.printFinalIgnoredStatistics(this.ignoreCount);
	}
	,printFinalIgnoredStatistics: function(count) {
		if(!this.includeIgnoredReport || count == 0) return;
		var items = Lambda.filter(this.totalResults,$bind(this,this.filterIngored));
		if(items.length == 0) return;
		this.printLine("");
		this.printLine("Ignored (" + count + "):");
		this.printLine(this.divider);
		var _g_head = items.h;
		var _g_val = null;
		while(_g_head != null) {
			var result;
			result = (function($this) {
				var $r;
				_g_val = _g_head[0];
				_g_head = _g_head[1];
				$r = _g_val;
				return $r;
			}(this));
			var ingoredString = result.get_location();
			if(result.description != null) ingoredString += " - " + result.description;
			this.printLine("IGNORE: " + ingoredString,1);
		}
		this.printLine("");
	}
	,filterIngored: function(result) {
		return result.get_type() == massive_munit_TestResultType.IGNORE;
	}
	,printFinalStatistics: function(result,testCount,passCount,failCount,errorCount,ignoreCount,time) {
		this.printLine(this.divider2);
		var resultString;
		if(result) resultString = "PASSED"; else resultString = "FAILED";
		resultString += "\n" + "Tests: " + testCount + "  Passed: " + passCount + "  Failed: " + failCount + " Errors: " + errorCount + " Ignored: " + ignoreCount + " Time: " + massive_munit_util_MathUtil.round(time,5);
		this.printLine(resultString);
		this.printLine("");
	}
	,printOverallResult: function(result) {
		this.printLine("");
	}
	,print: function(value) {
		this.output += Std.string(value);
	}
	,printLine: function(value,indent) {
		if(indent == null) indent = 0;
		value = Std.string(value);
		value = this.indentString(value,indent);
		this.print("\n" + Std.string(value));
	}
	,indentString: function(value,indent) {
		if(indent == null) indent = 0;
		if(indent > 0) value = StringTools.lpad(""," ",indent * 4) + value;
		if(value == "") value = "";
		return value;
	}
	,__class__: massive_munit_client_PrintClientBase
});
var massive_munit_client_PrintClient = function(includeIgnoredReport) {
	if(includeIgnoredReport == null) includeIgnoredReport = true;
	massive_munit_client_PrintClientBase.call(this,includeIgnoredReport);
	this.id = "print";
};
massive_munit_client_PrintClient.__name__ = ["massive","munit","client","PrintClient"];
massive_munit_client_PrintClient.__super__ = massive_munit_client_PrintClientBase;
massive_munit_client_PrintClient.prototype = $extend(massive_munit_client_PrintClientBase.prototype,{
	init: function() {
		massive_munit_client_PrintClientBase.prototype.init.call(this);
		this.external = new massive_munit_client_ExternalPrintClientJS();
		this.initJS();
		this.originalTrace = haxe_Log.trace;
		haxe_Log.trace = $bind(this,this.customTrace);
	}
	,initJS: function() {
		var div = window.document.getElementById("haxe:trace");
		if(div == null) {
			var positionInfo = massive_haxe_util_ReflectUtil.here({ fileName : "PrintClient.hx", lineNumber : 141, className : "massive.munit.client.PrintClient", methodName : "initJS"});
			var error = "MissingElementException: 'haxe:trace' element not found at " + positionInfo.className + "#" + positionInfo.methodName + "(" + positionInfo.lineNumber + ")";
			js_Lib.alert(error);
		}
	}
	,printOverallResult: function(result) {
		massive_munit_client_PrintClientBase.prototype.printOverallResult.call(this,result);
		this.external.setResult(result);
		this.external.setResultBackground(result);
	}
	,customTrace: function(value,info) {
		this.addTrace(value,info);
	}
	,reportFinalStatistics: function(testCount,passCount,failCount,errorCount,ignoreCount,time) {
		return massive_munit_client_PrintClientBase.prototype.reportFinalStatistics.call(this,testCount,passCount,failCount,errorCount,ignoreCount,time);
	}
	,print: function(value) {
		massive_munit_client_PrintClientBase.prototype.print.call(this,value);
		this.external.print(value);
	}
	,printLine: function(value,indent) {
		if(indent == null) indent = 0;
		massive_munit_client_PrintClientBase.prototype.printLine.call(this,value,indent);
	}
	,__class__: massive_munit_client_PrintClient
});
var massive_munit_client_ExternalPrintClient = function() { };
massive_munit_client_ExternalPrintClient.__name__ = ["massive","munit","client","ExternalPrintClient"];
massive_munit_client_ExternalPrintClient.prototype = {
	__class__: massive_munit_client_ExternalPrintClient
};
var massive_munit_client_ExternalPrintClientJS = function() {
	var div = window.document.getElementById("haxe:trace");
	if(div == null) {
		var positionInfo = massive_haxe_util_ReflectUtil.here({ fileName : "PrintClientBase.hx", lineNumber : 347, className : "massive.munit.client.ExternalPrintClientJS", methodName : "new"});
		var error = "MissingElementException: 'haxe:trace' element not found at " + positionInfo.className + "#" + positionInfo.methodName + "(" + positionInfo.lineNumber + ")";
		js_Lib.alert(error);
	}
};
massive_munit_client_ExternalPrintClientJS.__name__ = ["massive","munit","client","ExternalPrintClientJS"];
massive_munit_client_ExternalPrintClientJS.__interfaces__ = [massive_munit_client_ExternalPrintClient];
massive_munit_client_ExternalPrintClientJS.prototype = {
	print: function(value) {
		this.queue("munitPrint",value);
	}
	,printLine: function(value) {
		this.queue("munitPrintLine",value);
	}
	,setResult: function(value) {
		this.queue("setResult",value);
	}
	,setResultBackground: function(value) {
		this.queue("setResultBackground",value);
	}
	,trace: function(value) {
		this.queue("munitTrace",value);
	}
	,createTestClass: function(className) {
		this.queue("createTestClass",className);
	}
	,printToTestClassSummary: function(value) {
		this.queue("updateTestSummary",value);
	}
	,setTestClassResult: function(resultType) {
		this.queue("setTestClassResult",resultType);
	}
	,addTestPass: function(value) {
		if(value == null) return;
		this.queue("addTestPass",value);
	}
	,addTestFail: function(value) {
		this.queue("addTestFail",value);
	}
	,addTestError: function(value) {
		this.queue("addTestError",value);
	}
	,addTestIgnore: function(value) {
		this.queue("addTestIgnore",value);
	}
	,addTestClassCoverage: function(className,percent) {
		if(percent == null) percent = 0;
		this.queue("addTestCoverageClass",[className,percent]);
	}
	,addTestClassCoverageItem: function(value) {
		this.queue("addTestCoverageItem",value);
	}
	,createCoverageReport: function(percent) {
		if(percent == null) percent = 0;
		this.queue("createCoverageReport",percent);
	}
	,addMissingCoverageClass: function(className,percent) {
		if(percent == null) percent = 0;
		this.queue("addMissingCoverageClass",[className,percent]);
	}
	,addCoverageReportSection: function(name,value) {
		this.queue("addCoverageReportSection",[name,value]);
	}
	,addCoverageSummary: function(value) {
		this.queue("addCoverageSummary",value);
	}
	,printSummary: function(value) {
		this.queue("printSummary",value);
	}
	,queue: function(method,args) {
		var a = [];
		if((args instanceof Array) && args.__enum__ == null) a = a.concat(js_Boot.__cast(args , Array)); else a.push(args);
		var jsCode = this.convertToJavaScript(method,a);
		return eval(jsCode);
		return false;
	}
	,convertToJavaScript: function(method,args) {
		var htmlArgs = [];
		var _g = 0;
		while(_g < args.length) {
			var arg = args[_g];
			++_g;
			var html = this.serialiseToHTML(Std.string(arg));
			htmlArgs.push(html);
		}
		var jsCode;
		if(htmlArgs == null || htmlArgs.length == 0) jsCode = "addToQueue(\"" + method + "\")"; else {
			jsCode = "addToQueue(\"" + method + "\"";
			var _g1 = 0;
			while(_g1 < htmlArgs.length) {
				var arg1 = htmlArgs[_g1];
				++_g1;
				jsCode += ",\"" + arg1 + "\"";
			}
			jsCode += ")";
		}
		return jsCode;
	}
	,serialiseToHTML: function(value) {
		value = js_Boot.__string_rec(value,"");
		var v = StringTools.htmlEscape(value);
		v = v.split("\n").join("<br/>");
		v = v.split(" ").join("&nbsp;");
		v = v.split("\"").join("\\'");
		return v;
	}
	,__class__: massive_munit_client_ExternalPrintClientJS
};
var massive_munit_client_RichPrintClient = function() {
	massive_munit_client_PrintClientBase.call(this);
	this.id = "RichPrintClient";
};
massive_munit_client_RichPrintClient.__name__ = ["massive","munit","client","RichPrintClient"];
massive_munit_client_RichPrintClient.__super__ = massive_munit_client_PrintClientBase;
massive_munit_client_RichPrintClient.prototype = $extend(massive_munit_client_PrintClientBase.prototype,{
	init: function() {
		massive_munit_client_PrintClientBase.prototype.init.call(this);
		this.originalTrace = haxe_Log.trace;
		haxe_Log.trace = $bind(this,this.customTrace);
		this.external = new massive_munit_client_ExternalPrintClientJS();
	}
	,initializeTestClass: function() {
		massive_munit_client_PrintClientBase.prototype.initializeTestClass.call(this);
		this.external.createTestClass(this.currentTestClass);
		this.external.printToTestClassSummary("Class: " + this.currentTestClass + " ");
	}
	,updateTestClass: function(result) {
		massive_munit_client_PrintClientBase.prototype.updateTestClass.call(this,result);
		var value = this.serializeTestResult(result);
		var _g = result.get_type();
		switch(_g[1]) {
		case 1:
			this.external.printToTestClassSummary(".");
			this.external.addTestPass(value);
			break;
		case 2:
			this.external.printToTestClassSummary("!");
			this.external.addTestFail(value);
			break;
		case 3:
			this.external.printToTestClassSummary("x");
			this.external.addTestError(value);
			break;
		case 4:
			this.external.printToTestClassSummary(",");
			this.external.addTestIgnore(value);
			break;
		case 0:
			null;
			break;
		}
	}
	,serializeTestResult: function(result) {
		var summary = result.name;
		if(result.description != null && result.description != "") summary += " - " + result.description + " -";
		summary += " (" + massive_munit_util_MathUtil.round(result.executionTime,4) + "s)";
		var str = null;
		if(result.error != null) str = "Error: " + summary + "\n" + Std.string(result.error); else if(result.failure != null) str = "Failure: " + summary + "\n" + Std.string(result.failure); else if(result.ignore) str = "Ignore: " + summary; else if(result.passed) {
		}
		return str;
	}
	,finalizeTestClass: function() {
		massive_munit_client_PrintClientBase.prototype.finalizeTestClass.call(this);
		this.testClassResultType = this.getTestClassResultType();
		var code;
		var _g = this.testClassResultType;
		switch(_g[1]) {
		case 1:
			code = 0;
			break;
		case 2:
			code = 1;
			break;
		case 3:
			code = 2;
			break;
		case 4:
			code = 3;
			break;
		default:
			code = -1;
		}
		if(code == -1) return;
		this.external.setTestClassResult(code);
	}
	,getTestClassResultType: function() {
		if(this.errorCount > 0) return massive_munit_TestResultType.ERROR; else if(this.failCount > 0) return massive_munit_TestResultType.FAIL; else if(this.ignoreCount > 0) return massive_munit_TestResultType.IGNORE; else return massive_munit_TestResultType.PASS;
	}
	,setCurrentTestClassCoverage: function(result) {
		massive_munit_client_PrintClientBase.prototype.setCurrentTestClassCoverage.call(this,result);
		this.external.printToTestClassSummary(" [" + result.percent + "%]");
		if(result.percent == 100) return;
		this.external.addTestClassCoverage(result.className,result.percent);
		var _g = 0;
		var _g1 = result.blocks;
		while(_g < _g1.length) {
			var item = _g1[_g];
			++_g;
			this.external.addTestClassCoverageItem(item);
		}
	}
	,reportFinalCoverage: function(percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency) {
		if(percent == null) percent = 0;
		massive_munit_client_PrintClientBase.prototype.reportFinalCoverage.call(this,percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency);
		this.external.createCoverageReport(percent);
		this.printMissingCoverage(missingCoverageResults);
		if(executionFrequency != null) this.external.addCoverageReportSection("Code Execution Frequency",this.trim(executionFrequency));
		if(classBreakdown != null) this.external.addCoverageReportSection("Class Breakdown",this.trim(classBreakdown));
		if(packageBreakdown != null) this.external.addCoverageReportSection("Package Breakdown",this.trim(packageBreakdown));
		if(packageBreakdown != null) this.external.addCoverageReportSection("Summary",this.trim(summary));
	}
	,trim: function(output) {
		while(output.indexOf("\n") == 0) output = HxOverrides.substr(output,1,null);
		while(output.lastIndexOf("\n") == output.length - 2) output = HxOverrides.substr(output,0,output.length - 2);
		return output;
	}
	,printMissingCoverage: function(missingCoverageResults) {
		if(missingCoverageResults == null || missingCoverageResults.length == 0) return;
		var _g = 0;
		while(_g < missingCoverageResults.length) {
			var result = missingCoverageResults[_g];
			++_g;
			this.external.addMissingCoverageClass(result.className,result.percent);
			var _g1 = 0;
			var _g2 = result.blocks;
			while(_g1 < _g2.length) {
				var item = _g2[_g1];
				++_g1;
				this.external.addTestClassCoverageItem(item);
			}
		}
	}
	,printReports: function() {
		massive_munit_client_PrintClientBase.prototype.printReports.call(this);
	}
	,printFinalStatistics: function(result,testCount,passCount,failCount,errorCount,ignoreCount,time) {
		massive_munit_client_PrintClientBase.prototype.printFinalStatistics.call(this,result,testCount,passCount,failCount,errorCount,ignoreCount,time);
		var resultString;
		if(result) resultString = "PASSED"; else resultString = "FAILED";
		resultString += "\n" + "Tests: " + testCount + "  Passed: " + passCount + "  Failed: " + failCount + " Errors: " + errorCount + " Ignored: " + ignoreCount + " Time: " + massive_munit_util_MathUtil.round(time,5);
		this.external.printSummary(resultString);
	}
	,printOverallResult: function(result) {
		massive_munit_client_PrintClientBase.prototype.printOverallResult.call(this,result);
		this.external.setResult(result);
	}
	,customTrace: function(value,info) {
		this.addTrace(value,info);
		var traces = this.getTraces();
		var t = traces[traces.length - 1];
		this.external.trace(t);
	}
	,print: function(value) {
		massive_munit_client_PrintClientBase.prototype.print.call(this,value);
		return;
	}
	,printLine: function(value,indent) {
		if(indent == null) indent = 0;
		massive_munit_client_PrintClientBase.prototype.printLine.call(this,value,indent);
	}
	,__class__: massive_munit_client_RichPrintClient
});
var massive_munit_client_SummaryReportClient = function() {
	massive_munit_client_AbstractTestResultClient.call(this);
	this.id = "summary";
};
massive_munit_client_SummaryReportClient.__name__ = ["massive","munit","client","SummaryReportClient"];
massive_munit_client_SummaryReportClient.__super__ = massive_munit_client_AbstractTestResultClient;
massive_munit_client_SummaryReportClient.prototype = $extend(massive_munit_client_AbstractTestResultClient.prototype,{
	printFinalStatistics: function(result,testCount,passCount,failCount,errorCount,ignoreCount,time) {
		this.output = "";
		this.output += "result:" + (result == null?"null":"" + result);
		this.output += "\ncount:" + testCount;
		this.output += "\npass:" + passCount;
		this.output += "\nfail:" + failCount;
		this.output += "\nerror:" + errorCount;
		this.output += "\nignore:" + ignoreCount;
		this.output += "\ntime:" + time;
		this.output += "\n";
		var resultCount = 0;
		while(this.totalResults.length > 0 && resultCount < 10) {
			var result1 = this.totalResults.shift();
			if(!result1.passed) {
				this.output += "\n# " + result1.get_location();
				resultCount++;
			}
		}
		var remainder = failCount + errorCount - resultCount;
		if(remainder > 0) this.output += "# ... plus " + remainder + " more";
	}
	,printOverallResult: function(result) {
	}
	,printReports: function() {
	}
	,__class__: massive_munit_client_SummaryReportClient
});
var massive_munit_util_MathUtil = function() {
};
massive_munit_util_MathUtil.__name__ = ["massive","munit","util","MathUtil"];
massive_munit_util_MathUtil.round = function(value,precision) {
	value = value * Math.pow(10,precision);
	return Math.round(value) / Math.pow(10,precision);
};
massive_munit_util_MathUtil.prototype = {
	__class__: massive_munit_util_MathUtil
};
var massive_munit_util_Timer = $hx_exports.massive.munit.util.Timer = function(time_ms) {
	this.id = massive_munit_util_Timer.arr.length;
	massive_munit_util_Timer.arr[this.id] = this;
	this.timerId = window.setInterval("massive.munit.util.Timer.arr[" + this.id + "].run();",time_ms);
};
massive_munit_util_Timer.__name__ = ["massive","munit","util","Timer"];
massive_munit_util_Timer.delay = function(f,time_ms) {
	var t = new massive_munit_util_Timer(time_ms);
	t.run = function() {
		t.stop();
		f();
	};
	return t;
};
massive_munit_util_Timer.stamp = function() {
	return new Date().getTime() / 1000;
};
massive_munit_util_Timer.prototype = {
	stop: function() {
		if(this.id == null) return;
		window.clearInterval(this.timerId);
		massive_munit_util_Timer.arr[this.id] = null;
		if(this.id > 100 && this.id == massive_munit_util_Timer.arr.length - 1) {
			var p = this.id - 1;
			while(p >= 0 && massive_munit_util_Timer.arr[p] == null) p--;
			massive_munit_util_Timer.arr = massive_munit_util_Timer.arr.slice(0,p + 1);
		}
		this.id = null;
	}
	,run: function() {
	}
	,__class__: massive_munit_util_Timer
};
var org_hamcrest_Exception = function(message,cause,info) {
	if(message == null) message = "";
	this.name = Type.getClassName(js_Boot.getClass(this));
	this.message = message;
	this.cause = cause;
	this.info = info;
};
org_hamcrest_Exception.__name__ = ["org","hamcrest","Exception"];
org_hamcrest_Exception.prototype = {
	get_name: function() {
		return this.name;
	}
	,get_message: function() {
		return this.message;
	}
	,get_cause: function() {
		return this.cause;
	}
	,toString: function() {
		var str = this.get_name() + ": " + this.get_message();
		if(this.info != null) str += " at " + this.info.className + "#" + this.info.methodName + " (" + this.info.lineNumber + ")";
		if(this.get_cause() != null) str += "\n\t Caused by: " + Std.string(this.get_cause());
		return str;
	}
	,__class__: org_hamcrest_Exception
};
var org_hamcrest_AssertionException = function(message,cause,info) {
	if(message == null) message = "";
	org_hamcrest_Exception.call(this,message,cause,info);
};
org_hamcrest_AssertionException.__name__ = ["org","hamcrest","AssertionException"];
org_hamcrest_AssertionException.__super__ = org_hamcrest_Exception;
org_hamcrest_AssertionException.prototype = $extend(org_hamcrest_Exception.prototype,{
	__class__: org_hamcrest_AssertionException
});
var org_hamcrest_IllegalArgumentException = function(message,cause,info) {
	if(message == null) message = "Argument could not be processed.";
	org_hamcrest_Exception.call(this,message,cause,info);
};
org_hamcrest_IllegalArgumentException.__name__ = ["org","hamcrest","IllegalArgumentException"];
org_hamcrest_IllegalArgumentException.__super__ = org_hamcrest_Exception;
org_hamcrest_IllegalArgumentException.prototype = $extend(org_hamcrest_Exception.prototype,{
	__class__: org_hamcrest_IllegalArgumentException
});
var org_hamcrest_MissingImplementationException = function(message,cause,info) {
	if(message == null) message = "Abstract method not overridden.";
	org_hamcrest_Exception.call(this,message,cause,info);
};
org_hamcrest_MissingImplementationException.__name__ = ["org","hamcrest","MissingImplementationException"];
org_hamcrest_MissingImplementationException.__super__ = org_hamcrest_Exception;
org_hamcrest_MissingImplementationException.prototype = $extend(org_hamcrest_Exception.prototype,{
	__class__: org_hamcrest_MissingImplementationException
});
var org_hamcrest_UnsupportedOperationException = function(message,cause,info) {
	if(message == null) message = "";
	org_hamcrest_Exception.call(this,message,cause,info);
};
org_hamcrest_UnsupportedOperationException.__name__ = ["org","hamcrest","UnsupportedOperationException"];
org_hamcrest_UnsupportedOperationException.__super__ = org_hamcrest_Exception;
org_hamcrest_UnsupportedOperationException.prototype = $extend(org_hamcrest_Exception.prototype,{
	__class__: org_hamcrest_UnsupportedOperationException
});
var some_Another = function() {
};
some_Another.__name__ = ["some","Another"];
some_Another.prototype = {
	triple: function(value) {
		return value * 3;
	}
	,__class__: some_Another
};
var some_Some = function() { };
some_Some.__name__ = ["some","Some"];
some_Some["double"] = function(value) {
	return value * 2;
};
var test_some_AnotherOneTest = function() {
};
test_some_AnotherOneTest.__name__ = ["test","some","AnotherOneTest"];
test_some_AnotherOneTest.prototype = {
	__class__: test_some_AnotherOneTest
};
var test_some_AnotherTest = function() { };
test_some_AnotherTest.__name__ = ["test","some","AnotherTest"];
test_some_AnotherTest.prototype = {
	triple: function() {
		massive_munit_Assert.areEqual(9,new some_Another().triple(3),{ fileName : "AnotherTest.hx", lineNumber : 13, className : "test.some.AnotherTest", methodName : "triple"});
	}
	,__class__: test_some_AnotherTest
};
var test_some_SomeTest = function() { };
test_some_SomeTest.__name__ = ["test","some","SomeTest"];
test_some_SomeTest.prototype = {
	'double': function() {
		massive_munit_Assert.areEqual(6,some_Some["double"](3),{ fileName : "SomeTest.hx", lineNumber : 14, className : "test.some.SomeTest", methodName : "double"});
	}
	,__class__: test_some_SomeTest
};
function $iterator(o) { if( o instanceof Array ) return function() { return HxOverrides.iter(o); }; return typeof(o.iterator) == 'function' ? $bind(o,o.iterator) : o.iterator; }
var $_, $fid = 0;
function $bind(o,m) { if( m == null ) return null; if( m.__id__ == null ) m.__id__ = $fid++; var f; if( o.hx__closures__ == null ) o.hx__closures__ = {}; else f = o.hx__closures__[m.__id__]; if( f == null ) { f = function(){ return f.method.apply(f.scope, arguments); }; f.scope = o; f.method = m; o.hx__closures__[m.__id__] = f; } return f; }
String.prototype.__class__ = String;
String.__name__ = ["String"];
Array.__name__ = ["Array"];
Date.prototype.__class__ = Date;
Date.__name__ = ["Date"];
var Int = { __name__ : ["Int"]};
var Dynamic = { __name__ : ["Dynamic"]};
var Float = Number;
Float.__name__ = ["Float"];
var Bool = Boolean;
Bool.__ename__ = ["Bool"];
var Class = { __name__ : ["Class"]};
var Enum = { };
var __map_reserved = {}
ExampleTest.__meta__ = { fields : { beforeClass : { BeforeClass : null}, afterClass : { AfterClass : null}, setup : { Before : null}, tearDown : { After : null}, testExample : { Test : null}, testAsyncExample : { AsyncTest : null}, testExampleThatOnlyRunsWithDebugFlag : { TestDebug : null}}};
js_Boot.__toStr = {}.toString;
massive_munit_Assert.assertionCount = 0;
massive_munit_TestClassHelper.META_TAG_BEFORE_CLASS = "BeforeClass";
massive_munit_TestClassHelper.META_TAG_AFTER_CLASS = "AfterClass";
massive_munit_TestClassHelper.META_TAG_BEFORE = "Before";
massive_munit_TestClassHelper.META_TAG_AFTER = "After";
massive_munit_TestClassHelper.META_TAG_TEST = "Test";
massive_munit_TestClassHelper.META_TAG_ASYNC_TEST = "AsyncTest";
massive_munit_TestClassHelper.META_TAG_IGNORE = "Ignore";
massive_munit_TestClassHelper.META_PARAM_ASYNC_TEST = "Async";
massive_munit_TestClassHelper.META_TAG_TEST_DEBUG = "TestDebug";
massive_munit_TestClassHelper.META_TAGS = ["BeforeClass","AfterClass","Before","After","Test","AsyncTest","TestDebug"];
massive_munit_async_AsyncDelegate.DEFAULT_TIMEOUT = 400;
massive_munit_client_HTTPClient.queue = [];
massive_munit_client_HTTPClient.responsePending = false;
massive_munit_client_JUnitReportClient.DEFAULT_ID = "junit";
massive_munit_client_PrintClientBase.DEFAULT_ID = "simple";
massive_munit_client_PrintClient.DEFAULT_ID = "print";
massive_munit_client_RichPrintClient.DEFAULT_ID = "RichPrintClient";
massive_munit_client_SummaryReportClient.DEFAULT_ID = "summary";
massive_munit_util_Timer.arr = [];
test_some_AnotherTest.__meta__ = { fields : { triple : { Test : null}}};
test_some_SomeTest.__meta__ = { fields : { 'double' : { Test : null}}};
TestMain.main();
})(typeof console != "undefined" ? console : {log:function(){}}, typeof window != "undefined" ? window : exports, typeof window != "undefined" ? window : typeof global != "undefined" ? global : typeof self != "undefined" ? self : this);
