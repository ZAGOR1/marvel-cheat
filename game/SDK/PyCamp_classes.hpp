﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyCamp

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyCamp.PyCamp
// 0x0110 (0x0620 - 0x0510)
class APyCamp : public AControlPointBase
{
public:
	EBattleSide                                   WinnerSide;                                        // 0x0510(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOwnershipType                                HolderSide;                                        // 0x0511(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECampState                                    CampState;                                         // 0x0512(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_513[0x5];                                      // 0x0513(0x0005)(Fixing Size After Last Property [ Chaos Dumper ])
	TArray<class AActor*>                         InsideCharList;                                    // 0x0518(0x0010)(BlueprintVisible, Net, RepNotify, NativeAccessSpecifierPublic)
	TMap<EBattleSide, int32>                      TeamCountDict;                                     // 0x0528(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         BluePlayerCount;                                   // 0x0578(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RedPlayerCount;                                    // 0x057C(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsVisibleInPrepare;                                // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_581[0x3];                                      // 0x0581(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	float                                         UpdateInterval;                                    // 0x0584(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UNLOCK_TIME;                                       // 0x0588(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           CueTag;                                            // 0x058C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CueBiasLocation;                                   // 0x0598(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeInterval;                                      // 0x05B0(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FinalTriggerTime;                                  // 0x05B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalTimeInterval;                                // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ShortTimeInterval;                                 // 0x05BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class AActor* Camp, float block_time)> DispatchCampBlockOccupying;                        // 0x05C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class AActor* Camp)> DispatchCampPlayerChanged;                         // 0x05D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class AActor* Camp, EOwnershipType hold_side)> VHolderSideDispatcher;                             // 0x05E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(ECampState camp_state)> DispatchCampStateChange;                           // 0x05F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class AActor* Camp)> DispatchClientCampPlayerChanged;                   // 0x0600(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(float Speed)>   DispatcherClientProgressSpeed;                     // 0x0610(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void ReceiveInit();
	void ReceiveBeginPlay();
	void OnRep_TimeInterval();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RewindForReplayForPy();
	void Update();
	void S_Initialize();
	void S_Activate();
	void S_on_player_enter_camp(class AActor* Char);
	void S_on_player_exit_camp(class AActor* Char);
	void OnRep_CampState();
	void OnRep_HolderSide();
	void OnRep_InsideCharList();
	void OnRep_BluePlayerCount();
	void OnRep_RedPlayerCount();
	float GetUpdateDeltaSeconds();
	void C_on_player_enter_camp(class AActor* Char);
	void C_on_player_exit_camp(class AActor* Char);
	int32 GetBattleSideCount(EBattleSide battle_side);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCamp">();
	}
	static class APyCamp* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCamp>();
	}
};

}

