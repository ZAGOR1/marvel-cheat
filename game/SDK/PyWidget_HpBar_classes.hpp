﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyWidget_HpBar

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_HpBar.PyWidget_ScreenFXManager
// 0x00A0 (0x0678 - 0x05D8)
class UPyWidget_ScreenFXManager final : public UWidget_ScreenFXManager
{
public:
	TMap<struct FGameplayTag, class FString>      FXWidgetsNames;                                    // 0x05D8(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FGameplayTag> BlockCueTagsMap;                                   // 0x0628(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void SetTargetActor(class AActor* InActor);
	void SetTargetTreatPercentageCur(float InPercentage);
	bool ShouldShowBuff(const class FString& Tag);
	void OnTagUpdated(const struct FGameplayTag& Tag, bool TagExist);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ScreenFXManager">();
	}
	static class UPyWidget_ScreenFXManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ScreenFXManager>();
	}
};

// PythonClass PyWidget_HpBar.PyWidget_HpBar_V3
// 0x00E0 (0x0878 - 0x0798)
class UPyWidget_HpBar_V3 : public UWidget_HpBar
{
public:
	bool                                          IsUsedIn3D;                                        // 0x0798(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_799[0x3];                                      // 0x0799(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FLinearColor                           HpColor;                                           // 0x079C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7AC[0x4];                                      // 0x07AC(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	TArray<class FString>                         BuffWidgetsPrefix;                                 // 0x07B0(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FBuffFrameInfo> BuffWidgets;                                       // 0x07C0(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FGameplayTag> BlockCueTagsMap;                                   // 0x0810(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                HpBarVxClass;                                      // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              BreakEndedDispatcher;                              // 0x0868(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void SetTargetActor(class AActor* InActor);
	void OnTargetTakeTreat(class AActor* Source, class AActor* Target, const struct FAttributeModifierHandle& ModifierHandle);
	void SetIsFullHp(bool bInFullHp);
	void SetHpColor(const struct FLinearColor& Color);
	void SetShieldColor(const struct FLinearColor& Color);
	void SetHpDeductColor(const struct FLinearColor& DeductColor);
	void SetParentBg(bool IsCharacter, bool isReplay, bool IsTeammate);
	void SetTargetTreatPercentageCur(float InPercentage);
	bool ShouldShowBuff(const class FString& Tag);
	void OnTagUpdated(const struct FGameplayTag& Tag, bool TagExist);
	void SetAllExistingTags(const TArray<struct FGameplayTag>& InTags);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnComponentVisibilityChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_HpBar_V3">();
	}
	static class UPyWidget_HpBar_V3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_HpBar_V3>();
	}
};

// PythonClass PyWidget_HpBar.PyWidgetStyle_HpBarVX
// 0x0020 (0x0058 - 0x0038)
class UPyWidgetStyle_HpBarVX final : public UPrimaryDataAsset
{
public:
	struct FLinearColor                           BaseColorAlly;                                     // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           DotAColorAlly;                                     // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidgetStyle_HpBarVX">();
	}
	static class UPyWidgetStyle_HpBarVX* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidgetStyle_HpBarVX>();
	}
};

// PythonClass PyWidget_HpBar.PyWidget_DyingScreenFX
// 0x0010 (0x05F0 - 0x05E0)
class UPyWidget_DyingScreenFX final : public UWidget_HurtHintPanel
{
public:
	float                                         DyingEffectCD;                                     // 0x05E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5E4[0x4];                                      // 0x05E4(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	class UMaterialInterface*                     CameraMaterial;                                    // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	bool ShouldBeVisible();
	void SetTargetCharacter(class AMarvelBaseCharacter* InCharacter);
	void SetDying(bool InDying);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_DyingScreenFX">();
	}
	static class UPyWidget_DyingScreenFX* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_DyingScreenFX>();
	}
};

// PythonClass PyWidget_HpBar.PyWidget_HpBarVX_V3
// 0x0068 (0x0628 - 0x05C0)
class UPyWidget_HpBarVX_V3 : public UWidget_HpBar_VX
{
public:
	struct FSlateColor                            BaseColorAlly;                                     // 0x05C0(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            BaseColorEnemy;                                    // 0x05D4(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     PointerMaterial;                                   // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     PointerMaterial_3D;                                // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     PointerParticleMaterial1;                          // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     PointerParticleMaterial1_3D;                       // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     PointerParticleMaterial2;                          // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     PointerParticleMaterial2_3D;                       // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPyWidgetStyle_HpBarVX*                 WidgetStyle;                                       // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseTime;                                       // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnParentVisibilityChanged(ESlateVisibility InVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_HpBarVX_V3">();
	}
	static class UPyWidget_HpBarVX_V3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_HpBarVX_V3>();
	}
};

// PythonClass PyWidget_HpBar.PyWidget_BattleHpBar_V3
// 0x00A8 (0x0688 - 0x05E0)
class UPyWidget_BattleHpBar_V3 : public UWidget_ViewTargetHpBar
{
public:
	TMap<struct FGameplayTag, struct FSlateBrush> CueTagIconsMap;                                    // 0x05E0(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FGameplayTag> BlockCueTagsMap;                                   // 0x0630(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                         CustomColorPreview_Health;                         // 0x0680(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CustomColorPreview_Shield;                         // 0x0684(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	bool ShouldBeVisible();
	void SetTargetActor(class AActor* InActor);
	void OnMovementModeChanged(class ACharacter* Char, EMovementMode PreMode, uint8 PreviousCustomMove);
	void OnTakeDamage(class AActor* Source, class AActor* Dest, const struct FAttributeModifierHandle& Parm);
	void OnSpecialVXPlay(EMarvelAbilityUIHudAnim ShakeMode);
	void SetTotalHpMax(float InTotalHpMax);
	void SetTotalHpCur(float InTotalHpCur);
	void SetTargetTreatPercentageCur(float InPercentage);
	bool ShouldShowBuff(const class FString& Tag);
	void OnTagUpdated(const struct FGameplayTag& Tag, bool TagExist);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattleHpBar_V3">();
	}
	static class UPyWidget_BattleHpBar_V3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattleHpBar_V3>();
	}
};

// PythonClass PyWidget_HpBar.PyWidget_ScreenFXBase
// 0x0038 (0x03F0 - 0x03B8)
class UPyWidget_ScreenFXBase : public UUserWidget
{
public:
	struct FGameplayTag                           CueTag;                                            // 0x03B8(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C4[0x4];                                      // 0x03C4(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	class UWidgetAnimation*                       Anim_Loop;                                         // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_FadeIn;                                       // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_FadeOut;                                      // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                       Anim_FadeOutForInstant;                            // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          NeedFadeOutForInstant;                             // 0x03E8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E9[0x3];                                      // 0x03E9(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	float                                         InstantBuffDuration;                               // 0x03EC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void Construct();
	void SetBuffExistence(bool bInExist);
	void OnFinishFadeIn();
	void OnFinishFadeOut();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ScreenFXBase">();
	}
	static class UPyWidget_ScreenFXBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ScreenFXBase>();
	}
};

// PythonClass PyWidget_HpBar.PyWidget_ScreenFXHealing
// 0x0008 (0x03F8 - 0x03F0)
class UPyWidget_ScreenFXHealing final : public UPyWidget_ScreenFXBase
{
public:
	class UWidgetAnimation*                       Anim_RestoreMax;                                   // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void Destruct();
	void SetBuffExistence(bool bInExist);
	void OnTagUpdated(const struct FGameplayTag& Tag, bool TagExist);
	void OnFinishFadeIn();
	void OnFinishRestoreMax();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ScreenFXHealing">();
	}
	static class UPyWidget_ScreenFXHealing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ScreenFXHealing>();
	}
};

// PythonClass PyWidget_HpBar.PyWidget_CharacterInfo
// 0x0000 (0x1990 - 0x1990)
class UPyWidget_CharacterInfo final : public UWidget_CharacterInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CharacterInfo">();
	}
	static class UPyWidget_CharacterInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CharacterInfo>();
	}
};

}

