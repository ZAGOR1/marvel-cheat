﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: Ability_105223_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Ability_105223_BP.Ability_105223_BP_C.CanActivate
// 0x0218 (0x0218 - 0x0000)
struct Ability_105223_BP_C_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class AMarvelBaseCharacter*                   CallFunc_AE_GetCharacterActor_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMarvelBaseCharacter*                   CallFunc_AE_GetCharacterActor_ReturnValue_1;       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ENetRole                                      CallFunc_GetLocalRole_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class AMarvelBaseCharacter*                   CallFunc_AE_GetCharacterActor_ReturnValue_2;       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMarvelBaseCharacter*                   CallFunc_AE_GetCharacterActor_ReturnValue_3;       // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_SimpleLineTraceForStationary_OutHit;      // 0x0098(0x0170)(ContainsInstancedReference)
	bool                                          CallFunc_SimpleLineTraceForStationary_ReturnValue; // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWalking_ReturnValue;                    // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanActivate_ReturnValue;                  // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x020B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20D[0x3];                                      // 0x020D(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ability_105223_BP.Ability_105223_BP_C.ExecuteUbergraph_Ability_105223_BP
// 0x0298 (0x0298 - 0x0000)
struct Ability_105223_BP_C_ExecuteUbergraph_Ability_105223_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x0290)(ConstParm)
};

// Function Ability_105223_BP.Ability_105223_BP_C.K2_ActivateAbilityFromEvent
// 0x0290 (0x0290 - 0x0000)
struct Ability_105223_BP_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0290)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_105223_BP.Ability_105223_BP_C.TryMakeTriggerContext
// 0x0580 (0x0580 - 0x0000)
struct Ability_105223_BP_C_TryMakeTriggerContext final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0290)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0290(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FPortalSegments                        CallFunc_GetSelectTarget_OutPortalSegment;         // 0x0298(0x0050)()
	class AActor*                                 CallFunc_GetSelectTarget_ReturnValue;              // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x02F0(0x0290)()
};

}

