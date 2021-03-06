// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_vr_TimeWarpImage
#include <hxinc/kha/vr/TimeWarpImage.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpParms
#include <hxinc/kha/vr/TimeWarpParms.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bd2a04d5a17b873f_53_new,"kha.vr.TimeWarpParms","new",0xb163567c,"kha.vr.TimeWarpParms.new","kha/vr/TimeWarpParms.hx",53,0xbe848314)
namespace kha{
namespace vr{

void TimeWarpParms_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bd2a04d5a17b873f_53_new)
            	}

Dynamic TimeWarpParms_obj::__CreateEmpty() { return new TimeWarpParms_obj; }

void *TimeWarpParms_obj::_hx_vtable = 0;

Dynamic TimeWarpParms_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TimeWarpParms_obj > _hx_result = new TimeWarpParms_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TimeWarpParms_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52284ed2;
}


TimeWarpParms_obj::TimeWarpParms_obj()
{
}

void TimeWarpParms_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimeWarpParms);
	HX_MARK_MEMBER_NAME(LeftImage,"LeftImage");
	HX_MARK_MEMBER_NAME(RightImage,"RightImage");
	HX_MARK_MEMBER_NAME(LeftOverlay,"LeftOverlay");
	HX_MARK_MEMBER_NAME(RightOverlay,"RightOverlay");
	HX_MARK_END_CLASS();
}

void TimeWarpParms_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(LeftImage,"LeftImage");
	HX_VISIT_MEMBER_NAME(RightImage,"RightImage");
	HX_VISIT_MEMBER_NAME(LeftOverlay,"LeftOverlay");
	HX_VISIT_MEMBER_NAME(RightOverlay,"RightOverlay");
}

hx::Val TimeWarpParms_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"LeftImage") ) { return hx::Val( LeftImage ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RightImage") ) { return hx::Val( RightImage ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LeftOverlay") ) { return hx::Val( LeftOverlay ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RightOverlay") ) { return hx::Val( RightOverlay ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TimeWarpParms_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"LeftImage") ) { LeftImage=inValue.Cast<  ::kha::vr::TimeWarpImage >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RightImage") ) { RightImage=inValue.Cast<  ::kha::vr::TimeWarpImage >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LeftOverlay") ) { LeftOverlay=inValue.Cast<  ::kha::vr::TimeWarpImage >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RightOverlay") ) { RightOverlay=inValue.Cast<  ::kha::vr::TimeWarpImage >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimeWarpParms_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("LeftImage",b4,ed,1b,74));
	outFields->push(HX_("RightImage",ff,09,df,b6));
	outFields->push(HX_("LeftOverlay",29,1a,d6,8c));
	outFields->push(HX_("RightOverlay",34,1f,d1,5b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo TimeWarpParms_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::kha::vr::TimeWarpImage */ ,(int)offsetof(TimeWarpParms_obj,LeftImage),HX_("LeftImage",b4,ed,1b,74)},
	{hx::fsObject /*  ::kha::vr::TimeWarpImage */ ,(int)offsetof(TimeWarpParms_obj,RightImage),HX_("RightImage",ff,09,df,b6)},
	{hx::fsObject /*  ::kha::vr::TimeWarpImage */ ,(int)offsetof(TimeWarpParms_obj,LeftOverlay),HX_("LeftOverlay",29,1a,d6,8c)},
	{hx::fsObject /*  ::kha::vr::TimeWarpImage */ ,(int)offsetof(TimeWarpParms_obj,RightOverlay),HX_("RightOverlay",34,1f,d1,5b)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TimeWarpParms_obj_sStaticStorageInfo = 0;
#endif

static ::String TimeWarpParms_obj_sMemberFields[] = {
	HX_("LeftImage",b4,ed,1b,74),
	HX_("RightImage",ff,09,df,b6),
	HX_("LeftOverlay",29,1a,d6,8c),
	HX_("RightOverlay",34,1f,d1,5b),
	::String(null()) };

hx::Class TimeWarpParms_obj::__mClass;

void TimeWarpParms_obj::__register()
{
	TimeWarpParms_obj _hx_dummy;
	TimeWarpParms_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.vr.TimeWarpParms",8a,a8,67,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TimeWarpParms_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimeWarpParms_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TimeWarpParms_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TimeWarpParms_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace vr
