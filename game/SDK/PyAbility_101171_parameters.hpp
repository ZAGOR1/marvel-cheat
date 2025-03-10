﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_101171

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101171.PyCue_Buff_10117101.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Buff_10117101_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnMarvelSculptChanged
// 0x0008 (0x0008 - 0x0000)
struct PyCue_Buff_10117101_OnMarvelSculptChanged final
{
public:
	class AActor*                                 InOwner;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnMontageEnded
// 0x0010 (0x0010 - 0x0000)
struct PyCue_Buff_10117101_OnMontageEnded final
{
public:
	class UAnimMontage*                           InMontage;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInterrupted;                                     // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Buff_10117101_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnRecoverBuffTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyCue_Buff_10117101_OnRecoverBuffTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyCue_Buff_10117101_OnTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101171_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.OnLokiDisguiseTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101171_OnLokiDisguiseTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.OnTargetDeath
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_101171_OnTargetDeath final
{
public:
	class AActor*                                 DamageCauser;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ModifierParameter;                                 // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.OnTargetEndTask
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_101171_OnTargetEndTask final
{
public:
	class AActor*                                 Summoned;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101171_K2_OnEndAbility final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101171_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.NativeOnMontageBlendOut
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101171_NativeOnMontageBlendOut final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101171_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101171_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.NativeOnMontageEvent
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_101171_NativeOnMontageEvent final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_101171.PyAbility_101171.IsPrimaryAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_101171_IsPrimaryAbility final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

