﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: VideoRecord

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass VideoRecord.UISettingVideoRecordParam
// 0x0000 (0x0030 - 0x0030)
class UUISettingVideoRecordParam final : public UUISettingEntrySettingHandler
{
public:
	TMap<class FString, int32> BP_OnBtnClicked(class UObject* Obj, const class FString& setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UISettingVideoRecordParam">();
	}
	static class UUISettingVideoRecordParam* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUISettingVideoRecordParam>();
	}
};

// PythonClass VideoRecord.UISettingVideoRecordOpenPath
// 0x0000 (0x0030 - 0x0030)
class UUISettingVideoRecordOpenPath final : public UUISettingEntrySettingHandler
{
public:
	TMap<class FString, int32> BP_OnBtnClicked(class UObject* Obj, const class FString& setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UISettingVideoRecordOpenPath">();
	}
	static class UUISettingVideoRecordOpenPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUISettingVideoRecordOpenPath>();
	}
};

// PythonClass VideoRecord.UISettingVideoRecordChangePath
// 0x0000 (0x0030 - 0x0030)
class UUISettingVideoRecordChangePath final : public UUISettingEntrySettingHandler
{
public:
	TMap<class FString, int32> BP_OnBtnClicked(class UObject* Obj, const class FString& setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UISettingVideoRecordChangePath">();
	}
	static class UUISettingVideoRecordChangePath* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUISettingVideoRecordChangePath>();
	}
};

}

