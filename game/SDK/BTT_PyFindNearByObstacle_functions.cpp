﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: BTT_PyFindNearByObstacle

#include "Basic.hpp"

#include "BTT_PyFindNearByObstacle_classes.hpp"
#include "BTT_PyFindNearByObstacle_parameters.hpp"


namespace SDK
{

// PythonFunction BTT_PyFindNearByObstacle.BTT_PyFindNearByObstacle.ReceiveExecuteAI
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_PyFindNearByObstacle::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_PyFindNearByObstacle", "ReceiveExecuteAI");

	Params::BTT_PyFindNearByObstacle_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

