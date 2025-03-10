﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_103621

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103621.PyProjectile_10362101.K2_OnProcessHit
// 0x0170 (0x0170 - 0x0000)
struct PyProjectile_10362101_K2_OnProcessHit final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103621.PyCue_Buff_10362111.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Buff_10362111_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103621.PyCue_Buff_10362111.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Buff_10362111_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103621.PyCue_Projectile_HitImpact_10362101.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_HitImpact_10362101_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103621.PyUIController_103621.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103621_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103621.PyUIController_103621.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103621_OnTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103621.PyCue_Summoner_Loop_10362101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_10362101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103621.PyCue_Summoner_Loop_10362101.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_10362101_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103621.PyCue_Summoner_Loop_10362101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_10362101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103621.PyAbility_103621.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103621_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103621.PyAbility_103621.OnTargetAppliedDamage
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_103621_OnTargetAppliedDamage final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParameterHandle;                                   // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

}

