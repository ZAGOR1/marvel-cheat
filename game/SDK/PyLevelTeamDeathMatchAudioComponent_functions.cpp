﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyLevelTeamDeathMatchAudioComponent

#include "Basic.hpp"

#include "PyLevelTeamDeathMatchAudioComponent_classes.hpp"


namespace SDK
{

// PythonFunction PyLevelTeamDeathMatchAudioComponent.PyLevelTeamDeathMatchArcadeAudioComponent.ReceiveBeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyLevelTeamDeathMatchArcadeAudioComponent::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelTeamDeathMatchArcadeAudioComponent", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

