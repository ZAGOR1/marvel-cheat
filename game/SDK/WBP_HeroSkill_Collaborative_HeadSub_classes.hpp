﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WBP_HeroSkill_Collaborative_HeadSub

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeroSkill_Collaborative_HeadSub.WBP_HeroSkill_Collaborative_HeadSub_C
// 0x0010 (0x03C8 - 0x03B8)
class UWBP_HeroSkill_Collaborative_HeadSub_C final : public UUserWidget
{
public:
	class UMarvelButton*                          Btn_Head;                                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_HeroHead_Spuare_C*          WBP_HeroHead;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeroSkill_Collaborative_HeadSub_C">();
	}
	static class UWBP_HeroSkill_Collaborative_HeadSub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeroSkill_Collaborative_HeadSub_C>();
	}
};

}

