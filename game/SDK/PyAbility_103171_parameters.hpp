﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_103171

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103171.PyAbility_103171.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103171_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyAbility_103171.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103171_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyAbility_103171.OnActorDeath
// 0x0030 (0x0030 - 0x0000)
struct PyAbility_103171_OnActorDeath final
{
public:
	class AActor*                                 Killer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParameterHandle;                                   // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FGlobalEventExtraData                  ExtraData;                                         // 0x0028(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// PythonFunction PyAbility_103171.PyAbility_103171.OnSwitchScope
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_103171_OnSwitchScope final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyAbility_103171.OnSwitch
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_103171_OnSwitch final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyAbility_103171.OnGamepadSwitch
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_103171_OnGamepadSwitch final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyAbility_103171.ServerOnSwitch
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_103171_ServerOnSwitch final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyCue_Scope_Loop_10317101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Scope_Loop_10317101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103171.PyCue_Scope_Loop_10317101.UpdateMusic
// 0x0008 (0x0008 - 0x0000)
struct PyCue_Scope_Loop_10317101_UpdateMusic final
{
public:
	class AActor*                                 Instigator_0;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyCue_Scope_Loop_10317101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Scope_Loop_10317101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103171.PyUIController_103171.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103171_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyUIController_103171.UpdateWidget
// 0x0004 (0x0004 - 0x0000)
struct PyUIController_103171_UpdateWidget final
{
public:
	int32                                         ScopeId;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyCue_Ability_Loop_10317101.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Ability_Loop_10317101_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyCue_Ability_Loop_10317101.OnScopeChanged
// 0x0004 (0x0004 - 0x0000)
struct PyCue_Ability_Loop_10317101_OnScopeChanged final
{
public:
	int32                                         scope_id;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103171.PyCue_Ability_Loop_10317101.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Ability_Loop_10317101_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

