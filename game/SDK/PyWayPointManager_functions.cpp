﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyWayPointManager

#include "Basic.hpp"

#include "PyWayPointManager_classes.hpp"


namespace SDK
{

// PythonFunction PyWayPointManager.PyWayPointManager.ShowDebugInfo
// (Native, Public, BlueprintCallable)

void APyWayPointManager::ShowDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWayPointManager", "ShowDebugInfo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

