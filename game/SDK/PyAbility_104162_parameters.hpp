﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_104162

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104162.PyEffectiveComponent_10416201.K2_OnPreApplyContainer
// 0x0020 (0x0020 - 0x0000)
struct PyEffectiveComponent_10416201_K2_OnPreApplyContainer final
{
public:
	TArray<struct FHitResult>                     HitResults;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                     ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ReturnParm)
};

// PythonFunction PyAbility_104162.PyAbility_104162.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104162_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104162.PyAbility_104162.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104162_OnTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104162.PyAbility_104162.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104162_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

