// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_netsync_SyncBuilder
#include <hxinc/kha/netsync/SyncBuilder.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7678c11e469ff500_8_boot,"kha.netsync.SyncBuilder","boot",0x37607700,"kha.netsync.SyncBuilder.boot","kha/netsync/SyncBuilder.hx",8,0x8231c6e0)
HX_LOCAL_STACK_FRAME(_hx_pos_7678c11e469ff500_9_boot,"kha.netsync.SyncBuilder","boot",0x37607700,"kha.netsync.SyncBuilder.boot","kha/netsync/SyncBuilder.hx",9,0x8231c6e0)
namespace kha{
namespace netsync{

void SyncBuilder_obj::__construct() { }

Dynamic SyncBuilder_obj::__CreateEmpty() { return new SyncBuilder_obj; }

void *SyncBuilder_obj::_hx_vtable = 0;

Dynamic SyncBuilder_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SyncBuilder_obj > _hx_result = new SyncBuilder_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SyncBuilder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x034570cc;
}

int SyncBuilder_obj::nextId;

::cpp::VirtualArray SyncBuilder_obj::objects;


SyncBuilder_obj::SyncBuilder_obj()
{
}

bool SyncBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { outValue = ( nextId ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { outValue = ( objects ); return true; }
	}
	return false;
}

bool SyncBuilder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { nextId=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *SyncBuilder_obj_sMemberStorageInfo = 0;
static hx::StaticInfo SyncBuilder_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SyncBuilder_obj::nextId,HX_("nextId",ae,27,64,72)},
	{hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &SyncBuilder_obj::objects,HX_("objects",d4,68,4f,82)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void SyncBuilder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SyncBuilder_obj::nextId,"nextId");
	HX_MARK_MEMBER_NAME(SyncBuilder_obj::objects,"objects");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SyncBuilder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SyncBuilder_obj::nextId,"nextId");
	HX_VISIT_MEMBER_NAME(SyncBuilder_obj::objects,"objects");
};

#endif

hx::Class SyncBuilder_obj::__mClass;

static ::String SyncBuilder_obj_sStaticFields[] = {
	HX_("nextId",ae,27,64,72),
	HX_("objects",d4,68,4f,82),
	::String(null())
};

void SyncBuilder_obj::__register()
{
	SyncBuilder_obj _hx_dummy;
	SyncBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.netsync.SyncBuilder",60,60,10,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SyncBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &SyncBuilder_obj::__SetStatic;
	__mClass->mMarkFunc = SyncBuilder_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SyncBuilder_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SyncBuilder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SyncBuilder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SyncBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SyncBuilder_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SyncBuilder_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7678c11e469ff500_8_boot)
HXDLIN(   8)		nextId = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7678c11e469ff500_9_boot)
HXDLIN(   9)		objects = ::cpp::VirtualArray_obj::__new();
            	}
}

} // end namespace kha
} // end namespace netsync
