﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WBP_Battle_HeroHead

#include "Basic.hpp"

#include "PyWidget_ViewTargetHeroIcon_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Battle_HeroHead.WBP_Battle_HeroHead_C
// 0x0030 (0x05E0 - 0x05B0)
class UWBP_Battle_HeroHead_C final : public UPyWidget_ViewTargetHeroIcon
{
public:
	class UWidgetAnimation*                       Anim_Faction;                                      // 0x05B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Bg_PortaitBg;                                      // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Bg_PortaitBg_LeftTop;                              // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Bg_PortaitBg_RightBottom;                          // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Bg_PortaitFrame;                                   // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       Img_Portrait;                                      // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Battle_HeroHead_C">();
	}
	static class UWBP_Battle_HeroHead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Battle_HeroHead_C>();
	}
};

}

