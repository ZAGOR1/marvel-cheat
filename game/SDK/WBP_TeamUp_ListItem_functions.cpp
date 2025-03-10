﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WBP_TeamUp_ListItem

#include "Basic.hpp"

#include "WBP_TeamUp_ListItem_classes.hpp"
#include "WBP_TeamUp_ListItem_parameters.hpp"


namespace SDK
{

// Function WBP_TeamUp_ListItem.WBP_TeamUp_ListItem_C.ExecuteUbergraph_WBP_TeamUp_ListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TeamUp_ListItem_C::ExecuteUbergraph_WBP_TeamUp_ListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamUp_ListItem_C", "ExecuteUbergraph_WBP_TeamUp_ListItem");

	Params::WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TeamUp_ListItem.WBP_TeamUp_ListItem_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TeamUp_ListItem_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamUp_ListItem_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TeamUp_ListItem.WBP_TeamUp_ListItem_C.SetRoles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Role                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEmpty                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TeamUp_ListItem_C::SetRoles(class UImage* Image, int32 Role, bool IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamUp_ListItem_C", "SetRoles");

	Params::WBP_TeamUp_ListItem_C_SetRoles Parms{};

	Parms.Image = Image;
	Parms.Role = Role;
	Parms.IsEmpty = IsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}

}

