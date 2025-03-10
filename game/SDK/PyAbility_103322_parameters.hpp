﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_103322

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103322.PyAbility_103322.OnActivateFailed
// 0x0068 (0x0068 - 0x0000)
struct PyAbility_103322_OnActivateFailed final
{
public:
	struct FGameplayTagContainer                  FailReason;                                        // 0x0000(0x0068)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103322.PyAbility_103322.K2_OnClientActivateAbilityRejected
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103322_K2_OnClientActivateAbilityRejected final
{
public:
	bool                                          bIsCurrentActivation;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103322.PyAbility_103322.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103322_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103322.PyAbility_103322.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_103322_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103322.PyAbility_103322.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103322_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

