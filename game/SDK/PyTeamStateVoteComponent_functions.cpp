﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyTeamStateVoteComponent

#include "Basic.hpp"

#include "PyTeamStateVoteComponent_classes.hpp"


namespace SDK
{

// PythonFunction PyTeamStateVoteComponent.PyTeamStateVoteComponent.OnRep_VoteChanged
// (Native, Public, BlueprintCallable)

void UPyTeamStateVoteComponent::OnRep_VoteChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTeamStateVoteComponent", "OnRep_VoteChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

