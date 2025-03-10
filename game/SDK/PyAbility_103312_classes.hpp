﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_103312

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103312.PyConfig_103312
// 0x0010 (0x00A8 - 0x0098)
class UPyConfig_103312 final : public UMarvelAbilityConfig
{
public:
	struct FGameplayTag                           WeaponLoadEndEvent;                                // 0x0098(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_103312">();
	}
	static class UPyConfig_103312* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_103312>();
	}
};

// PythonClass PyAbility_103312.PyAbility_103312
// 0x0008 (0x2590 - 0x2588)
class UPyAbility_103312 : public UMarvelGameplayAbility
{
public:
	int32                                         SniperRifleID;                                     // 0x2588(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool CanActivate();
	void BeginPlay();
	void OnActivateFailed(const struct FGameplayTagContainer& FailReason);
	void OnNeedTryPullBullet();
	float GetAbilityDuration();
	void OnDurationEnd();
	void CheckBulletLoadedAndMultiPullBullet();
	void MulticastTryPullBullet();
	void TryActive();
	void WeaponLoadComplete();
	bool IsWeaponLoaded();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103312">();
	}
	static class UPyAbility_103312* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103312>();
	}
};

}

