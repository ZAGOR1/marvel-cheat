﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PC_UISettingEntryBestSettingHandlerBP

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PC_UISettingEntryBestSettingHandlerBP.PC_UISettingEntryBestSettingHandlerBP_C
// 0x0010 (0x0040 - 0x0030)
class UPC_UISettingEntryBestSettingHandlerBP_C final : public UUISettingEntrySettingHandler
{
public:
	TArray<class FString>                         TagRefresh;                                        // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	TMap<class FString, int32> BP_OnBtnClicked(class UObject* Object, const class FString& SettingKey, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& CurrentTags);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PC_UISettingEntryBestSettingHandlerBP_C">();
	}
	static class UPC_UISettingEntryBestSettingHandlerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPC_UISettingEntryBestSettingHandlerBP_C>();
	}
};

}

