﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyMantisCharacter

#include "Basic.hpp"

#include "PyMantisCharacter_classes.hpp"
#include "PyMantisCharacter_parameters.hpp"


namespace SDK
{

// PythonFunction PyMantisCharacter.PyUIController_MantisAbilities.Construct
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyUIController_MantisAbilities::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_MantisAbilities", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMantisCharacter.PyUIController_MantisAbilities.Destruct
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyUIController_MantisAbilities::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_MantisAbilities", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMantisCharacter.PyUIController_MantisAbilities.OnBuffedTeammatesUpdate
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMarvelBaseCharacter*             Target                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Action                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyUIController_MantisAbilities::OnBuffedTeammatesUpdate(class AMarvelBaseCharacter* Target, int32 Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_MantisAbilities", "OnBuffedTeammatesUpdate");

	Params::PyUIController_MantisAbilities_OnBuffedTeammatesUpdate Parms{};

	Parms.Target = Target;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

