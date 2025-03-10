﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyHeroComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyHeroComponent.PyHeroComponent.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyHeroComponent_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyHeroComponent.PyHeroComponent.BroadcastPlayerBreakRespawn
// 0x0004 (0x0004 - 0x0000)
struct PyHeroComponent_BroadcastPlayerBreakRespawn final
{
public:
	int32                                         UID;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyHeroComponent.PyHeroComponent.ResurrectPlayerByLevel
// 0x0010 (0x0010 - 0x0000)
struct PyHeroComponent_ResurrectPlayerByLevel final
{
public:
	class AActor*                                 TargetCharacter;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyHeroComponent.PyHeroComponent.BroadcastPlayerBeginRespawn
// 0x0008 (0x0008 - 0x0000)
struct PyHeroComponent_BroadcastPlayerBeginRespawn final
{
public:
	int32                                         UID;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RespawnTime;                                       // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyHeroComponent.PyHeroComponent.CreateAIHero
// 0x0088 (0x0088 - 0x0000)
struct PyHeroComponent_CreateAIHero final
{
public:
	int32                                         HeroID;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBattleSide                                   BattleSide;                                        // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FVector                                position;                                          // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0020(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                RelivePosition;                                    // 0x0038(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReliveTime;                                        // 0x0050(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	class FString                                 Name_0;                                            // 0x0058(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TreePath;                                          // 0x0068(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsScore;                                           // 0x0078(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class AActor*                                 ReturnValue;                                       // 0x0080(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyHeroComponent.PyHeroComponent.ResurrectAiByLevel
// 0x0010 (0x0010 - 0x0000)
struct PyHeroComponent_ResurrectAiByLevel final
{
public:
	class AActor*                                 TargetCharcater;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

