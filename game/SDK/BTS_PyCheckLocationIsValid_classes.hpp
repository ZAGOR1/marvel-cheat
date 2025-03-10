﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: BTS_PyCheckLocationIsValid

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"
#include "PyBTNodeBase_classes.hpp"


namespace SDK
{

// PythonClass BTS_PyCheckLocationIsValid.BTS_PyCheckLocationIsValid
// 0x0058 (0x0100 - 0x00A8)
class UBTS_PyCheckLocationIsValid : public UBTService_PyBase
{
public:
	struct FVector                                NavCheckExtent;                                    // 0x00A8(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NavCheckOffsetZ;                                   // 0x00C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FBlackboardKeySelector                 TryingExitState;                                   // 0x00C8(0x0030)(Edit, NativeAccessSpecifierPublic)
	int32                                         LeaveMeshTolerance;                                // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTS_PyCheckLocationIsValid">();
	}
	static class UBTS_PyCheckLocationIsValid* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_PyCheckLocationIsValid>();
	}
};

}

