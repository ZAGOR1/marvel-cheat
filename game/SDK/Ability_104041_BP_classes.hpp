﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: Ability_104041_BP

#include "Basic.hpp"

#include "Hero_1040_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_104041_BP.Ability_104041_BP_C
// 0x0008 (0x27D8 - 0x27D0)
class UAbility_104041_BP_C final : public UAbility_104041
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x27D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_104041_BP(int32 EntryPoint);
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_104041_BP_C">();
	}
	static class UAbility_104041_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_104041_BP_C>();
	}
};

}

