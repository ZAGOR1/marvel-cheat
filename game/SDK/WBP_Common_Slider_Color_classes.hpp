﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WBP_Common_Slider_Color

#include "Basic.hpp"

#include "PyWidget_Common_Slider_V2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Common_Slider_Color.WBP_Common_Slider_Color_C
// 0x0028 (0x0648 - 0x0620)
class UWBP_Common_Slider_Color_C final : public UPyWidget_Common_Slider_V2
{
public:
	class UWidgetAnimation*                       Anim_Normal;                                       // 0x0620(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Press;                                        // 0x0628(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           img_color;                                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_Quantity;                                   // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_Quantity_DefaultValue;                      // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Common_Slider_Color_C">();
	}
	static class UWBP_Common_Slider_Color_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Common_Slider_Color_C>();
	}
};

}

