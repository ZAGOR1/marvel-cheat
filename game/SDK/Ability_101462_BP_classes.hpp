﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: Ability_101462_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyAbility_101462_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_101462_BP.Ability_101462_BP_C
// 0x0008 (0x25E0 - 0x25D8)
class UAbility_101462_BP_C final : public UPyAbility_101462
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x25D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_101462_BP(int32 EntryPoint);
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_101462_BP_C">();
	}
	static class UAbility_101462_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_101462_BP_C>();
	}
};

}

