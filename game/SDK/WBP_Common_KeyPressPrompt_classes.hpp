﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WBP_Common_KeyPressPrompt

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Common_KeyPressPrompt.WBP_Common_KeyPressPrompt_C
// 0x0018 (0x04A0 - 0x0488)
class UWBP_Common_KeyPressPrompt_C final : public UCommonKeyPressPrompt
{
public:
	class UWidgetAnimation*                       Anim_Normal_State;                                 // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Img_Key;                                           // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NameSlot;                                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Common_KeyPressPrompt_C">();
	}
	static class UWBP_Common_KeyPressPrompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Common_KeyPressPrompt_C>();
	}
};

}

