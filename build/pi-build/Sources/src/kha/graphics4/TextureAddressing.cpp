// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureAddressing
#include <hxinc/kha/graphics4/TextureAddressing.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::TextureAddressing TextureAddressing_obj::Clamp;

::kha::graphics4::TextureAddressing TextureAddressing_obj::Mirror;

::kha::graphics4::TextureAddressing TextureAddressing_obj::Repeat;

bool TextureAddressing_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clamp",db,e2,85,db)) { outValue = TextureAddressing_obj::Clamp; return true; }
	if (inName==HX_("Mirror",5f,e6,3e,8a)) { outValue = TextureAddressing_obj::Mirror; return true; }
	if (inName==HX_("Repeat",7b,0b,11,3b)) { outValue = TextureAddressing_obj::Repeat; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TextureAddressing_obj)

int TextureAddressing_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Clamp",db,e2,85,db)) return 2;
	if (inName==HX_("Mirror",5f,e6,3e,8a)) return 1;
	if (inName==HX_("Repeat",7b,0b,11,3b)) return 0;
	return super::__FindIndex(inName);
}

int TextureAddressing_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Clamp",db,e2,85,db)) return 0;
	if (inName==HX_("Mirror",5f,e6,3e,8a)) return 0;
	if (inName==HX_("Repeat",7b,0b,11,3b)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TextureAddressing_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clamp",db,e2,85,db)) return Clamp;
	if (inName==HX_("Mirror",5f,e6,3e,8a)) return Mirror;
	if (inName==HX_("Repeat",7b,0b,11,3b)) return Repeat;
	return super::__Field(inName,inCallProp);
}

static ::String TextureAddressing_obj_sStaticFields[] = {
	HX_("Repeat",7b,0b,11,3b),
	HX_("Mirror",5f,e6,3e,8a),
	HX_("Clamp",db,e2,85,db),
	::String(null())
};

hx::Class TextureAddressing_obj::__mClass;

Dynamic __Create_TextureAddressing_obj() { return new TextureAddressing_obj; }

void TextureAddressing_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("kha.graphics4.TextureAddressing",5a,bc,8b,d3), hx::TCanCast< TextureAddressing_obj >,TextureAddressing_obj_sStaticFields,0,
	&__Create_TextureAddressing_obj, &__Create,
	&super::__SGetClass(), &CreateTextureAddressing_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TextureAddressing_obj::__GetStatic;
}

void TextureAddressing_obj::__boot()
{
Clamp = hx::CreateConstEnum< TextureAddressing_obj >(HX_("Clamp",db,e2,85,db),2);
Mirror = hx::CreateConstEnum< TextureAddressing_obj >(HX_("Mirror",5f,e6,3e,8a),1);
Repeat = hx::CreateConstEnum< TextureAddressing_obj >(HX_("Repeat",7b,0b,11,3b),0);
}


} // end namespace kha
} // end namespace graphics4