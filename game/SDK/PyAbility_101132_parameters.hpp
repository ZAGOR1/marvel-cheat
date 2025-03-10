﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_101132

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101132.PyAbility_101132.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101132_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101132.PyAbility_101132.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101132_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101132.PyAbility_101132.OnTargetDeath
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_101132_OnTargetDeath final
{
public:
	class AActor*                                 DamageCauser;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101132.PyAbility_101132.GetEnergyToCache
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_101132_GetEnergyToCache final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101132.PyAbility_101132.IsPrimaryAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101132_IsPrimaryAbility final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

