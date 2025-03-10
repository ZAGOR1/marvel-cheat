﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyWidget_InvitePopup

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_InvitePopup.PyWidget_InvitePopupBase
// 0x0030 (0x0620 - 0x05F0)
class UPyWidget_InvitePopupBase : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UAkAudioEvent*                          AKEvent_ClickYes;                                  // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AKEvent_ClickNo;                                   // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           InviteColor;                                       // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ApplyColor;                                        // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_InvitePopupBase">();
	}
	static class UPyWidget_InvitePopupBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_InvitePopupBase>();
	}
};

// PythonClass PyWidget_InvitePopup.PyWidget_InvitePopup
// 0x0000 (0x0620 - 0x0620)
class UPyWidget_InvitePopup : public UPyWidget_InvitePopupBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_InvitePopup">();
	}
	static class UPyWidget_InvitePopup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_InvitePopup>();
	}
};

// PythonClass PyWidget_InvitePopup.PyWidget_InvitePopup_League
// 0x0000 (0x0620 - 0x0620)
class UPyWidget_InvitePopup_League : public UPyWidget_InvitePopupBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_InvitePopup_League">();
	}
	static class UPyWidget_InvitePopup_League* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_InvitePopup_League>();
	}
};

}

