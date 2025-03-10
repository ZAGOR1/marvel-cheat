﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: Summoned_10475201_BP

#include "Basic.hpp"

#include "Summoned_10475201_BP_classes.hpp"
#include "Summoned_10475201_BP_parameters.hpp"


namespace SDK
{

// Function Summoned_10475201_BP.Summoned_10475201_BP_C.ExecuteUbergraph_Summoned_10475201_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASummoned_10475201_BP_C::ExecuteUbergraph_Summoned_10475201_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Summoned_10475201_BP_C", "ExecuteUbergraph_Summoned_10475201_BP");

	Params::Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Summoned_10475201_BP.Summoned_10475201_BP_C.K2_OnEndAgentTask_GraphAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// ETargetActorDestroyReason               SummonedDestroyReason                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASummoned_10475201_BP_C::K2_OnEndAgentTask_GraphAbility(ETargetActorDestroyReason SummonedDestroyReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Summoned_10475201_BP_C", "K2_OnEndAgentTask_GraphAbility");

	Params::Summoned_10475201_BP_C_K2_OnEndAgentTask_GraphAbility Parms{};

	Parms.SummonedDestroyReason = SummonedDestroyReason;

	UObject::ProcessEvent(Func, &Parms);
}

}

