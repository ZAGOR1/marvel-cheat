﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyWidget_CustomCharacterPanel

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_Common_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_CustomCharacterPanel.PyWidget_CustomCharacterPanel
// 0x0058 (0x0670 - 0x0618)
class UPyWidget_CustomCharacterPanel : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_611[0x7];                                      // 0x0611(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	TSubclassOf<class UUserWidget>                CharacterItemClass;                                // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LineCount;                                         // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayShowTime;                                     // 0x0624(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RowAnimInterval;                                   // 0x0628(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LineAnimInterval;                                  // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                GuideActions;                                      // 0x0630(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   EnableText;                                        // 0x0640(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   DisableText;                                       // 0x0658(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnOpenHeroListChange();
	void MarvelSetVisible(bool Visible);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	class UButton* on_try_srcoll_when_next_focusable_child_change(int32 ChildIndex, int32 FocusedChildDirection, int32 NumItemsLine);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CustomCharacterPanel">();
	}
	static class UPyWidget_CustomCharacterPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CustomCharacterPanel>();
	}
};

// PythonClass PyWidget_CustomCharacterPanel.PyWidget_CustomCharacterItem
// 0x0080 (0x0970 - 0x08F0)
#pragma pack(push, 0x1)
class alignas(0x10) UPyWidget_CustomCharacterItem : public UPyWidget_BaseCommonButton
{
public:
	class UTexture2D*                             Icon_Tank;                                         // 0x08E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             icon_damage;                                       // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             icon_support;                                      // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Icon_Random;                                       // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Icon_All;                                          // 0x0908(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            NormalNameColor;                                   // 0x0910(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            SelectedNameColor;                                 // 0x0924(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            NormalBgColor;                                     // 0x0938(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            SelectedBgColor;                                   // 0x094C(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnClicked;                                 // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void OnHeadPictureLoadCompleted(class UTexture2D* Picture);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CustomCharacterItem">();
	}
	static class UPyWidget_CustomCharacterItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CustomCharacterItem>();
	}
};
#pragma pack(pop)

}

