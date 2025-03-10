﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyShowActorBase

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "python_enums_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyShowActorBase.PyShowActorBase.OnLevelSequenceFinished
// 0x0008 (0x0008 - 0x0000)
struct PyShowActorBase_OnLevelSequenceFinished final
{
public:
	class ULevelSequence*                         LevelSequence;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetBindingTagInLevelSequenceActor
// 0x0008 (0x0008 - 0x0000)
struct PyShowActorBase_SetBindingTagInLevelSequenceActor final
{
public:
	class ALevelSequenceActor*                    ls_actor;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.PlayHeroGaller_HoverStand
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_PlayHeroGaller_HoverStand final
{
public:
	bool                                          IsPlay_HoverStand;                                 // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.PlayHeroGaller_CardPose
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_PlayHeroGaller_CardPose final
{
public:
	bool                                          IsPlay_CardPose;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.PlayMVPAnim
// 0x0008 (0x0008 - 0x0000)
struct PyShowActorBase_PlayMVPAnim final
{
public:
	class ULevelSequence*                         MVPLevelSequence;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.OnPlayEmoteAnimItem
// 0x0010 (0x0010 - 0x0000)
struct PyShowActorBase_OnPlayEmoteAnimItem final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.PlayEmoteAnim
// 0x0010 (0x0010 - 0x0000)
struct PyShowActorBase_PlayEmoteAnim final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.PlayToggleAnim
// 0x0003 (0x0003 - 0x0000)
struct PyShowActorBase_PlayToggleAnim final
{
public:
	bool                                          IsToggleHalf_0;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHalfToHalf_0;                                    // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDynamic;                                         // 0x0002(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.PlayShowAnim
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_PlayShowAnim final
{
public:
	bool                                          IsPlay;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetIsPlayIdleAnim
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_SetIsPlayIdleAnim final
{
public:
	bool                                          IsPlayIdleAnim;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.LoadRimlightDetailOutlineFinished
// 0x0008 (0x0008 - 0x0000)
struct PyShowActorBase_LoadRimlightDetailOutlineFinished final
{
public:
	class UObject*                                OverlayMaterial;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetMeshRotation
// 0x0008 (0x0008 - 0x0000)
struct PyShowActorBase_SetMeshRotation final
{
public:
	float                                         Yaw;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReset;                                           // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.OnRotatioAngleSignChange
// 0x0004 (0x0004 - 0x0000)
struct PyShowActorBase_OnRotatioAngleSignChange final
{
public:
	int32                                         ChangesNum;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.OnMeshRotation
// 0x0008 (0x0008 - 0x0000)
struct PyShowActorBase_OnMeshRotation final
{
public:
	float                                         Yaw;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnglePerSecond;                                    // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetMeshsVisibleByTag
// 0x0080 (0x0080 - 0x0000)
struct PyShowActorBase_SetMeshsVisibleByTag final
{
public:
	TArray<class USkeletalMeshComponent*>         MeshList;                                          // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                  MeshTag;                                           // 0x0010(0x0068)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          Visible;                                           // 0x0078(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetMeshVisibleByTag
// 0x0078 (0x0078 - 0x0000)
struct PyShowActorBase_SetMeshVisibleByTag final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  MeshTag;                                           // 0x0008(0x0068)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          Visible;                                           // 0x0070(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetMeshsVisible
// 0x0018 (0x0018 - 0x0000)
struct PyShowActorBase_SetMeshsVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	TArray<class USkeletalMeshComponent*>         MeshList;                                          // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetMeshVisible
// 0x0010 (0x0010 - 0x0000)
struct PyShowActorBase_SetMeshVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetComponentsVisibleByTag
// 0x0080 (0x0080 - 0x0000)
struct PyShowActorBase_SetComponentsVisibleByTag final
{
public:
	TArray<class USceneComponent*>                ComponentList;                                     // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                  ComponentTag;                                      // 0x0010(0x0068)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          Visible;                                           // 0x0078(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetComponentVisibleByTag
// 0x0078 (0x0078 - 0x0000)
struct PyShowActorBase_SetComponentVisibleByTag final
{
public:
	class USceneComponent*                        Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ComponentTag;                                      // 0x0008(0x0068)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          Visible;                                           // 0x0070(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetComponentsVisible
// 0x0018 (0x0018 - 0x0000)
struct PyShowActorBase_SetComponentsVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	TArray<class USceneComponent*>                ComponentList;                                     // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetComponentVisible
// 0x0010 (0x0010 - 0x0000)
struct PyShowActorBase_SetComponentVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class USceneComponent*                        Component;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.ToggleCameraBlur
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_ToggleCameraBlur final
{
public:
	bool                                          bUseCameraBlur;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetEnabledPostProcess
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_SetEnabledPostProcess final
{
public:
	bool                                          IsEnabledPostProcess_0;                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetMeshsPhysicsBlendWeight
// 0x0020 (0x0020 - 0x0000)
struct PyShowActorBase_SetMeshsPhysicsBlendWeight final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           BoneNameList;                                      // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          bIncludeSelf;                                      // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	float                                         PhysicsBlendWeight;                                // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.ResetAllPhysicsBlendWeightToMin
// 0x0004 (0x0004 - 0x0000)
struct PyShowActorBase_ResetAllPhysicsBlendWeightToMin final
{
public:
	float                                         MinWeight;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.ResetAllPhysicsBlendWeight
// 0x0004 (0x0004 - 0x0000)
struct PyShowActorBase_ResetAllPhysicsBlendWeight final
{
public:
	float                                         BlendWeight;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.ReversePhysicsBlendWeight
// 0x0020 (0x0020 - 0x0000)
struct PyShowActorBase_ReversePhysicsBlendWeight final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           BoneNameList;                                      // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          bIncludeSelf;                                      // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.ForwardPhysicsBlendWeight
// 0x0020 (0x0020 - 0x0000)
struct PyShowActorBase_ForwardPhysicsBlendWeight final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           BoneNameList;                                      // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          bIncludeSelf;                                      // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.OnANSSetAllBodiesBelowSimulatePhysicsEnd
// 0x0018 (0x0018 - 0x0000)
struct PyShowActorBase_OnANSSetAllBodiesBelowSimulatePhysicsEnd final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0008(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSimulatePhysics;                                  // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIncludeSelf;                                      // 0x0015(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0016(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.OnANSSetAllBodiesBelowSimulatePhysicsBegin
// 0x0018 (0x0018 - 0x0000)
struct PyShowActorBase_OnANSSetAllBodiesBelowSimulatePhysicsBegin final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0008(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSimulatePhysics;                                  // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIncludeSelf;                                      // 0x0015(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0016(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.AutoReversePhysicsBlendWeight
// 0x0020 (0x0020 - 0x0000)
struct PyShowActorBase_AutoReversePhysicsBlendWeight final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           BoneNameList;                                      // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          bIncludeSelf;                                      // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.AutoForwardPhysicsBlendWeight
// 0x0020 (0x0020 - 0x0000)
struct PyShowActorBase_AutoForwardPhysicsBlendWeight final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           BoneNameList;                                      // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          bIncludeSelf;                                      // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.OnMeshPhysicsEnable
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_OnMeshPhysicsEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetCustomBoneChain
// 0x0018 (0x0018 - 0x0000)
struct PyShowActorBase_SetCustomBoneChain final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FShowActorCustomPhysicsBlendConfig> PhysicsConfigs;                                    // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyShowActorBase.PyShowActorBase.CallExtensionFunction
// 0x0010 (0x0010 - 0x0000)
struct PyShowActorBase_CallExtensionFunction final
{
public:
	class FString                                 func_name;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetShowActorStageChanged
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_SetShowActorStageChanged final
{
public:
	EShowActorStage                               ShowActorStage_0;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetComponentVisibility
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_SetComponentVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.SetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_SetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.LoadShowAssetsFinished
// 0x0010 (0x0010 - 0x0000)
struct PyShowActorBase_LoadShowAssetsFinished final
{
public:
	TArray<class UObject*>                        Assets;                                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyShowActorBase.PyShowActorBase.GetSoftReferenceAssets
// 0x0010 (0x0010 - 0x0000)
struct PyShowActorBase_GetSoftReferenceAssets final
{
public:
	TArray<struct FSoftObjectPath>                ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};

// PythonFunction PyShowActorBase.PyShowActorBase.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct PyShowActorBase_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyShowActorBase.PyShowActorBase.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyShowActorBase_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

