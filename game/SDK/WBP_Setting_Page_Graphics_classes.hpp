﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WBP_Setting_Page_Graphics

#include "Basic.hpp"

#include "PyWidget_SettingPageGraphics_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Setting_Page_Graphics.WBP_Setting_Page_Graphics_C
// 0x0008 (0x0608 - 0x0600)
class UWBP_Setting_Page_Graphics_C final : public UPyWidget_SettingPageGraphics
{
public:
	class UMarvelVerticalBox*                     VBox_Panel;                                        // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Setting_Page_Graphics_C">();
	}
	static class UWBP_Setting_Page_Graphics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Setting_Page_Graphics_C>();
	}
};

}

