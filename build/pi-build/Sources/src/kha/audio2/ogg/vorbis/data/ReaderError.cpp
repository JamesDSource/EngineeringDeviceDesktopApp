// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError
#include <hxinc/kha/audio2/ogg/vorbis/data/ReaderError.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#include <hxinc/kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9667fc11258959a_14_new,"kha.audio2.ogg.vorbis.data.ReaderError","new",0x2cd57227,"kha.audio2.ogg.vorbis.data.ReaderError.new","kha/audio2/ogg/vorbis/data/ReaderError.hx",14,0x61997aea)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

void ReaderError_obj::__construct( ::kha::audio2::ogg::vorbis::data::ReaderErrorType type,::String __o_message, ::Dynamic posInfos){
            		::String message = __o_message;
            		if (hx::IsNull(__o_message)) message = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_c9667fc11258959a_14_new)
HXLINE(  15)		this->type = type;
HXLINE(  16)		this->message = message;
HXLINE(  17)		this->posInfos = posInfos;
            	}

Dynamic ReaderError_obj::__CreateEmpty() { return new ReaderError_obj; }

void *ReaderError_obj::_hx_vtable = 0;

Dynamic ReaderError_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ReaderError_obj > _hx_result = new ReaderError_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ReaderError_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c90cbb5;
}


hx::ObjectPtr< ReaderError_obj > ReaderError_obj::__new( ::kha::audio2::ogg::vorbis::data::ReaderErrorType type,::String __o_message, ::Dynamic posInfos) {
	hx::ObjectPtr< ReaderError_obj > __this = new ReaderError_obj();
	__this->__construct(type,__o_message,posInfos);
	return __this;
}

hx::ObjectPtr< ReaderError_obj > ReaderError_obj::__alloc(hx::Ctx *_hx_ctx, ::kha::audio2::ogg::vorbis::data::ReaderErrorType type,::String __o_message, ::Dynamic posInfos) {
	ReaderError_obj *__this = (ReaderError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ReaderError_obj), true, "kha.audio2.ogg.vorbis.data.ReaderError"));
	*(void **)__this = ReaderError_obj::_hx_vtable;
	__this->__construct(type,__o_message,posInfos);
	return __this;
}

ReaderError_obj::ReaderError_obj()
{
}

void ReaderError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ReaderError);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(posInfos,"posInfos");
	HX_MARK_END_CLASS();
}

void ReaderError_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(posInfos,"posInfos");
}

hx::Val ReaderError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return hx::Val( message ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"posInfos") ) { return hx::Val( posInfos ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ReaderError_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::kha::audio2::ogg::vorbis::data::ReaderErrorType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"posInfos") ) { posInfos=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ReaderError_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("message",c7,35,11,9a));
	outFields->push(HX_("posInfos",11,82,2e,5a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ReaderError_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::kha::audio2::ogg::vorbis::data::ReaderErrorType */ ,(int)offsetof(ReaderError_obj,type),HX_("type",ba,f2,08,4d)},
	{hx::fsString,(int)offsetof(ReaderError_obj,message),HX_("message",c7,35,11,9a)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ReaderError_obj,posInfos),HX_("posInfos",11,82,2e,5a)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ReaderError_obj_sStaticStorageInfo = 0;
#endif

static ::String ReaderError_obj_sMemberFields[] = {
	HX_("type",ba,f2,08,4d),
	HX_("message",c7,35,11,9a),
	HX_("posInfos",11,82,2e,5a),
	::String(null()) };

hx::Class ReaderError_obj::__mClass;

void ReaderError_obj::__register()
{
	ReaderError_obj _hx_dummy;
	ReaderError_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.ogg.vorbis.data.ReaderError",b5,d2,41,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ReaderError_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ReaderError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ReaderError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ReaderError_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
