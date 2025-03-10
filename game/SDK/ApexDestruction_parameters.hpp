﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: ApexDestruction

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ApexDestruction.DestructibleComponent.ApplyDamage
// 0x0040 (0x0040 - 0x0000)
struct DestructibleComponent_ApplyDamage final
{
public:
	float                                         DamageAmount;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FVector                                HitLocation;                                       // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ImpulseDir;                                        // 0x0020(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ImpulseStrength;                                   // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// 0x0030 (0x0030 - 0x0000)
struct DestructibleComponent_ApplyRadiusDamage final
{
public:
	float                                         BaseDamage;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FVector                                HurtOrigin;                                        // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DamageRadius;                                      // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ImpulseStrength;                                   // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFullDamage;                                       // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// 0x0008 (0x0008 - 0x0000)
struct DestructibleComponent_GetDestructibleMesh final
{
public:
	class UDestructibleMesh*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// 0x0008 (0x0008 - 0x0000)
struct DestructibleComponent_SetDestructibleMesh final
{
public:
	class UDestructibleMesh*                      NewMesh;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

