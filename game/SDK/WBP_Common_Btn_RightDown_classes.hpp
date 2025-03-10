﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WBP_Common_Btn_RightDown

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Common_Btn_RightDown.WBP_Common_Btn_RightDown_C
// 0x0020 (0x03D8 - 0x03B8)
class UWBP_Common_Btn_RightDown_C final : public UUserWidget
{
public:
	class UMarvelImage*                           Img_Ps_KeyProg_Bg;                                 // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Prog_Ps_KeyProg;                                   // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Key_Function;                                 // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShortCut_Info_Button_C*            WBP_ShortCut_Info_Button;                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Common_Btn_RightDown_C">();
	}
	static class UWBP_Common_Btn_RightDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Common_Btn_RightDown_C>();
	}
};

}

