﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WBP_Common_HeroHead_BigSpuare

#include "Basic.hpp"

#include "PyWidget_Common_HeroHead_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Common_HeroHead_BigSpuare.WBP_Common_HeroHead_BigSpuare_C
// 0x0020 (0x0478 - 0x0458)
class UWBP_Common_HeroHead_BigSpuare_C final : public UPyWidget_Common_HeroHead_BigSpuare
{
public:
	class UMaskHeroHeadBP_C*                      EmptyMaskContent;                                  // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaskHeroHeadBP_C*                      ImgMaskContent;                                    // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Panel_HeroHead_Mask;                               // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Main;                                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Common_HeroHead_BigSpuare_C">();
	}
	static class UWBP_Common_HeroHead_BigSpuare_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Common_HeroHead_BigSpuare_C>();
	}
};

}

