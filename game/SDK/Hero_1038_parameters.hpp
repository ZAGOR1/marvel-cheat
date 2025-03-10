﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: Hero_1038

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function Hero_1038.TraceComponent_10381101.OnAbilityInit
// 0x0004 (0x0004 - 0x0000)
struct TraceComponent_10381101_OnAbilityInit final
{
public:
	int32                                         AbilityID;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1038.Cue_Scope_Loop_10381101.OnComponentCollisionChanged
// 0x0008 (0x0008 - 0x0000)
struct Cue_Scope_Loop_10381101_OnComponentCollisionChanged final
{
public:
	class UPrimitiveComponent*                    ChangedComponent;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1038.Cue_Scope_Loop_10381101.OnGetInstigator
// 0x0008 (0x0008 - 0x0000)
struct Cue_Scope_Loop_10381101_OnGetInstigator final
{
public:
	class AActor*                                 InstigatorActor;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1038.Cue_Scope_Loop_10381101.OnTakeDamage
// 0x0028 (0x0028 - 0x0000)
struct Cue_Scope_Loop_10381101_OnTakeDamage final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1038.Cue_Scope_Loop_10381101.OnTraceHitResult
// 0x0018 (0x0018 - 0x0000)
struct Cue_Scope_Loop_10381101_OnTraceHitResult final
{
public:
	class UObject*                                TraceSource;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Hero_1038.UIController_103831.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct UIController_103831_OnTagUpdate final
{
public:
	struct FGameplayTag                           TagUpdated;                                        // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TagExists;                                         // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// Function Hero_1038.Cue_Buff_10384101.OnViewingSideChanged
// 0x0001 (0x0001 - 0x0000)
struct Cue_Buff_10384101_OnViewingSideChanged final
{
public:
	EClientPlayerViewSide                         InViewSide;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1038.Cue_Ability_Loop_10385101.OnSelfViewSideChanged
// 0x0001 (0x0001 - 0x0000)
struct Cue_Ability_Loop_10385101_OnSelfViewSideChanged final
{
public:
	EClientPlayerViewSide                         ViewSide;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1038.Cue_Ability_Loop_10386301.OnPlayerViewSideChanged
// 0x0001 (0x0001 - 0x0000)
struct Cue_Ability_Loop_10386301_OnPlayerViewSideChanged final
{
public:
	EClientPlayerViewSide                         InViewSide;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1038.UIController_103871.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct UIController_103871_OnTagUpdate final
{
public:
	struct FGameplayTag                           TagUpdated;                                        // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TagExists;                                         // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// Function Hero_1038.Cue_Ability_Loop_10387101.OnOwnerTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct Cue_Ability_Loop_10387101_OnOwnerTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Count;                                             // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1038.ScarletWitchChildActor.OnOwnerDeath
// 0x0028 (0x0028 - 0x0000)
struct ScarletWitchChildActor_OnOwnerDeath final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1038.TabData_1038.OnAbilityUse
// 0x0238 (0x0238 - 0x0000)
struct TabData_1038_OnAbilityUse final
{
public:
	struct FActionLogAbilityRecord                Record;                                            // 0x0000(0x0238)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}

