﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WBP_Setting_Describe_Bright

#include "Basic.hpp"

#include "PyWidget_SettingDescribeBright_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Setting_Describe_Bright.WBP_Setting_Describe_Bright_C
// 0x0010 (0x0600 - 0x05F0)
class UWBP_Setting_Describe_Bright_C final : public UPyWidget_SettingDescribeBright
{
public:
	class UMarvelImage*                           Img_Birght_Scene;                                  // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Scene_Mask;                                    // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Setting_Describe_Bright_C">();
	}
	static class UWBP_Setting_Describe_Bright_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Setting_Describe_Bright_C>();
	}
};

}

