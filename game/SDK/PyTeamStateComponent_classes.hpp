﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyTeamStateComponent

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyTeamStateComponent.PyTeamStateComponent
// 0x0000 (0x00F0 - 0x00F0)
class UPyTeamStateComponent : public UMarvelActorComponentBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyTeamStateComponent">();
	}
	static class UPyTeamStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyTeamStateComponent>();
	}
};

}

