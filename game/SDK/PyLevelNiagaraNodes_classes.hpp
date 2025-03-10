﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyLevelNiagaraNodes

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// PythonClass PyLevelNiagaraNodes.PyLevelVoiceNodes
// 0x0000 (0x0030 - 0x0030)
class UPyLevelVoiceNodes final : public UObject
{
public:
	static void PlayNiagaraEffect(class AActor* Instance, class UNiagaraSystem* Niagara, const struct FVector& Location, const struct FRotator& Rotation);
	static void BanWeakenStep(class AActor* Instance);
	static void PlayDoorEffect(class AActor* Instance);
	static void EndDoorEffect(class AActor* Instance);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelVoiceNodes">();
	}
	static class UPyLevelVoiceNodes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLevelVoiceNodes>();
	}
};

}

