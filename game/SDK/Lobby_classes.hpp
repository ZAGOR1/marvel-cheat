﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: Lobby

#include "Basic.hpp"

#include "Marvel_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lobby.Lobby_C
// 0x0018 (0x0508 - 0x04F0)
class ALobby_C final : public AMarvelLevelScriptActor
{
public:
	struct FVector                                TargetLocation;                                    // 0x04F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lobby_C">();
	}
	static class ALobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobby_C>();
	}
};

}

