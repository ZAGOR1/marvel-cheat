﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyMarvelLobbyGameState

#include "Basic.hpp"

#include "PyMarvelLobbyGameState_classes.hpp"


namespace SDK
{

// PythonFunction PyMarvelLobbyGameState.PyMarvelLobbyGameState.ReceiveBeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyMarvelLobbyGameState::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelLobbyGameState", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

