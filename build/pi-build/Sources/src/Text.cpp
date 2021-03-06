// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_Origin
#include <hxinc/Origin.h>
#endif
#ifndef INCLUDED_OriginPoint
#include <hxinc/OriginPoint.h>
#endif
#ifndef INCLUDED_Text
#include <hxinc/Text.h>
#endif
#ifndef INCLUDED_TokenType
#include <hxinc/TokenType.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <hxinc/kha/math/Vector2.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_06e1ad076737d8b4_14_textSize,"Text","textSize",0x945fd7cf,"Text.textSize","Text.hx",14,0x6bfc0811)
HX_LOCAL_STACK_FRAME(_hx_pos_06e1ad076737d8b4_35_drawText,"Text","drawText",0xa6745a92,"Text.drawText","Text.hx",35,0x6bfc0811)
HX_LOCAL_STACK_FRAME(_hx_pos_06e1ad076737d8b4_57_getTokens,"Text","getTokens",0x37f405af,"Text.getTokens","Text.hx",57,0x6bfc0811)

void Text_obj::__construct() { }

Dynamic Text_obj::__CreateEmpty() { return new Text_obj; }

void *Text_obj::_hx_vtable = 0;

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Text_obj > _hx_result = new Text_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Text_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37d2f8cd;
}

 ::kha::math::Vector2 Text_obj::textSize(::String text,Float hSeperation,Float vSeperation,::Array< ::Dynamic> preGenTokens){
            	HX_GC_STACKFRAME(&_hx_pos_06e1ad076737d8b4_14_textSize)
HXLINE(  15)		int newLines = 0;
HXDLIN(  15)		int longestLineLength = 0;
HXDLIN(  15)		::Array< ::Dynamic> tokens;
HXLINE(  17)		if (hx::IsNotNull( preGenTokens )) {
HXLINE(  15)			tokens = preGenTokens;
            		}
            		else {
HXLINE(  15)			tokens = ::Text_obj::getTokens(text);
            		}
HXLINE(  19)		{
HXLINE(  19)			int _g = 0;
HXDLIN(  19)			while((_g < tokens->length)){
HXLINE(  19)				 ::Dynamic token = tokens->__get(_g);
HXDLIN(  19)				_g = (_g + 1);
HXLINE(  20)				switch((int)( ::Dynamic(token->__Field(HX_("type",ba,f2,08,4d),hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)0: {
HXLINE(  22)						::String str = hx::TCast< ::String >::cast( ::Dynamic(token->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)));
HXLINE(  23)						if ((str.length > longestLineLength)) {
HXLINE(  24)							longestLineLength = str.length;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  27)						newLines = (newLines + 1);
            					}
            					break;
            				}
            			}
            		}
HXLINE(  32)		return  ::kha::math::Vector2_obj::__alloc( HX_CTX ,(( (Float)(longestLineLength) ) * hSeperation),(( (Float)((newLines + 1)) ) * vSeperation));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Text_obj,textSize,return )

void Text_obj::drawText( ::kha::graphics2::Graphics graphics,::String text, ::kha::math::Vector2 position,Float hSeperation,Float vSeperation, ::OriginPoint __o_origin){
            		 ::OriginPoint origin = __o_origin;
            		if (hx::IsNull(__o_origin)) origin = ::OriginPoint_obj::topLeft_dyn();
            	HX_STACKFRAME(&_hx_pos_06e1ad076737d8b4_35_drawText)
HXLINE(  36)		::Array< ::Dynamic> tokens = ::Text_obj::getTokens(text);
HXDLIN(  36)		 ::kha::math::Vector2 textSize = ::Text_obj::textSize(text,hSeperation,vSeperation,tokens);
HXDLIN(  36)		 ::kha::math::Vector2 offsets = ::Origin_obj::getOriginOffset(origin,textSize);
HXLINE(  39)		Float startingPos_x = (position->x + offsets->x);
HXDLIN(  39)		Float startingPos_y = (position->y + offsets->y);
HXLINE(  40)		Float currentPos_x = startingPos_x;
HXDLIN(  40)		Float currentPos_y = startingPos_y;
HXLINE(  42)		{
HXLINE(  42)			int _g = 0;
HXDLIN(  42)			while((_g < tokens->length)){
HXLINE(  42)				 ::Dynamic token = tokens->__get(_g);
HXDLIN(  42)				_g = (_g + 1);
HXLINE(  43)				switch((int)( ::Dynamic(token->__Field(HX_("type",ba,f2,08,4d),hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)0: {
HXLINE(  45)						::String str = hx::TCast< ::String >::cast( ::Dynamic(token->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)));
HXLINE(  46)						{
HXLINE(  46)							int _g1 = 0;
HXDLIN(  46)							int _g11 = str.length;
HXDLIN(  46)							while((_g1 < _g11)){
HXLINE(  46)								_g1 = (_g1 + 1);
HXDLIN(  46)								int i = (_g1 - 1);
HXLINE(  47)								graphics->drawString(str.charAt(i),currentPos_x,currentPos_y);
HXLINE(  48)								currentPos_x = (currentPos_x + hSeperation);
            							}
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  51)						currentPos_x = startingPos_x;
HXLINE(  52)						currentPos_y = (currentPos_y + vSeperation);
            					}
            					break;
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Text_obj,drawText,(void))

::Array< ::Dynamic> Text_obj::getTokens(::String text){
            	HX_STACKFRAME(&_hx_pos_06e1ad076737d8b4_57_getTokens)
HXLINE(  58)		::Array< ::Dynamic> tokens = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  59)		::String textReturn = HX_("",00,00,00,00);
HXLINE(  60)		int i = -1;
HXLINE(  61)		while(((i + 1) < text.length)){
HXLINE(  62)			i = (i + 1);
HXLINE(  63)			::String _hx_char = text.charAt(i);
HXLINE(  64)			textReturn = (textReturn + _hx_char);
HXLINE(  66)			if ((_hx_char == HX_("<",3c,00,00,00))) {
HXLINE(  67)				int peek = i;
HXLINE(  68)				::String cmd = HX_("",00,00,00,00);
HXLINE(  69)				while((peek < text.length)){
HXLINE(  70)					peek = (peek + 1);
HXLINE(  71)					if ((text.charAt(peek) == HX_(">",3e,00,00,00))) {
HXLINE(  72)						goto _hx_goto_6;
            					}
            					else {
HXLINE(  75)						cmd = (cmd + text.charAt(peek));
            					}
            				}
            				_hx_goto_6:;
HXLINE(  78)				i = peek;
HXLINE(  79)				if ((cmd == HX_("nl",3e,60,00,00))) {
HXLINE(  81)					tokens->push( ::Dynamic(hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("value",71,7f,b8,31),null())
            						->setFixed(1,HX_("type",ba,f2,08,4d),::TokenType_obj::newLine_dyn())));
            				}
            				else {
HXLINE(  83)					HX_STACK_DO_THROW(HX_("Unknown command",95,7a,40,14));
            				}
            			}
            			else {
HXLINE(  87)				int peek1 = (i - 1);
HXLINE(  88)				::String tokenString = HX_("",00,00,00,00);
HXLINE(  89)				while((peek1 < text.length)){
HXLINE(  90)					if (((peek1 + 1) < text.length)) {
HXLINE(  91)						if ((text.charAt((peek1 + 1)) == HX_("<",3c,00,00,00))) {
HXLINE(  92)							goto _hx_goto_7;
            						}
            						else {
HXLINE(  95)							peek1 = (peek1 + 1);
HXLINE(  96)							tokenString = (tokenString + text.charAt(peek1));
            						}
            					}
            					else {
HXLINE( 100)						peek1 = (peek1 + 1);
            					}
            				}
            				_hx_goto_7:;
HXLINE( 103)				i = peek1;
HXLINE( 104)				tokens->push( ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("value",71,7f,b8,31),tokenString)
            					->setFixed(1,HX_("type",ba,f2,08,4d),::TokenType_obj::text_dyn())));
            			}
            		}
HXLINE( 109)		return tokens;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,getTokens,return )


Text_obj::Text_obj()
{
}

bool Text_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { outValue = textSize_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawText") ) { outValue = drawText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getTokens") ) { outValue = getTokens_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Text_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Text_obj_sStaticStorageInfo = 0;
#endif

hx::Class Text_obj::__mClass;

static ::String Text_obj_sStaticFields[] = {
	HX_("textSize",0e,f4,4e,4f),
	HX_("drawText",d1,76,63,61),
	HX_("getTokens",90,a0,3d,0e),
	::String(null())
};

void Text_obj::__register()
{
	Text_obj _hx_dummy;
	Text_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Text",cd,f8,d2,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Text_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Text_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Text_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Text_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Text_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

