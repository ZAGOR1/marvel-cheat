﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_104202

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104202.PyAbility_104202.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104202_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104202.PyAbility_104202.K2_CanGetOnWall
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104202_K2_CanGetOnWall final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104202.PyAbility_104202.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104202_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104202.PyAbility_104202.OnMovementChanged
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104202_OnMovementChanged final
{
public:
	class ACharacter*                             MyCharacter;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 PrevMode;                                          // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CustomMode;                                        // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104202.PyAbility_104202.OnClimbAbilityActivate
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_104202_OnClimbAbilityActivate final
{
public:
	class UGameplayAbility*                       Ability;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

