﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WBP_ComTips_Bg

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ComTips_Bg.WBP_ComTips_Bg_C
// 0x0010 (0x03C8 - 0x03B8)
class UWBP_ComTips_Bg_C final : public UUserWidget
{
public:
	class UMarvelImage*                           Img_Tips_Bg;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Tips_Frame;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ComTips_Bg_C">();
	}
	static class UWBP_ComTips_Bg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ComTips_Bg_C>();
	}
};

}

