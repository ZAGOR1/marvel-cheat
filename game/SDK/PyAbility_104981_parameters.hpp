﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_104981

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Marvel_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104981.PyAbility_104981.GetAbilityDuration
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_104981_GetAbilityDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104981.PyAbility_104981.OnRaiseDashFinish
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104981_OnRaiseDashFinish final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104981.PyAbility_104981.OnSelectConfirm
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_104981_OnSelectConfirm final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104981.PyAbility_104981.OnTraceResults
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104981_OnTraceResults final
{
public:
	TArray<struct FHitResult>                     HitResults;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104981.PyAbility_104981.GetCollideKnockDownRequire
// 0x0118 (0x0118 - 0x0000)
struct PyAbility_104981_GetCollideKnockDownRequire final
{
public:
	struct FGameplayTagRequirements               ReturnValue;                                       // 0x0000(0x0118)(Parm, OutParm, ReturnParm)
};

// PythonFunction PyAbility_104981.PyAbility_104981.OnDashFinish
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104981_OnDashFinish final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104981.PyAbility_104981.OnHoverBuffRemove
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_104981_OnHoverBuffRemove final
{
public:
	struct FGameplayEffectRemovalInfo             InGameplayEffectRemovalInfo;                       // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104981.PyAbility_104981.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104981_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104981.PyAbility_AirGrab_104981.K2_ShouldSkipInstigatorHit
// 0x0180 (0x0180 - 0x0000)
struct PyAbility_AirGrab_104981_K2_ShouldSkipInstigatorHit final
{
public:
	class AActor*                                 SelfActor;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             InHit;                                             // 0x0008(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0178(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

