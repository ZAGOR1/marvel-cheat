﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyLevelSpringFestivalAudioComponent

#include "Basic.hpp"

#include "PyLevelSpringFestivalAudioComponent_classes.hpp"
#include "PyLevelSpringFestivalAudioComponent_parameters.hpp"


namespace SDK
{

// PythonFunction PyLevelSpringFestivalAudioComponent.PyLevelSpringFestivalAudioComponent.ReceiveEndPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyLevelSpringFestivalAudioComponent::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSpringFestivalAudioComponent", "ReceiveEndPlay");

	Params::PyLevelSpringFestivalAudioComponent_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

