// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_ScreenRotation
#define INCLUDED_kha_ScreenRotation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,ScreenRotation)
namespace kha{


class ScreenRotation_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ScreenRotation_obj OBJ_;

	public:
		ScreenRotation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("kha.ScreenRotation",f4,85,3e,bb); }
		::String __ToString() const { return HX_("ScreenRotation.",04,38,5c,1d) + _hx_tag; }

		static ::kha::ScreenRotation Rotation180;
		static inline ::kha::ScreenRotation Rotation180_dyn() { return Rotation180; }
		static ::kha::ScreenRotation Rotation270;
		static inline ::kha::ScreenRotation Rotation270_dyn() { return Rotation270; }
		static ::kha::ScreenRotation Rotation90;
		static inline ::kha::ScreenRotation Rotation90_dyn() { return Rotation90; }
		static ::kha::ScreenRotation RotationNone;
		static inline ::kha::ScreenRotation RotationNone_dyn() { return RotationNone; }
};

} // end namespace kha

#endif /* INCLUDED_kha_ScreenRotation */ 
