﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_102951

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102951.PyTraceComponent_10295101_Base
// 0x0000 (0x1710 - 0x1710)
class UPyTraceComponent_10295101_Base final : public UMarvelAgentTraceComponent
{
public:
	struct FVector K2_OnGetTraceStart(struct FVector& Location);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyTraceComponent_10295101_Base">();
	}
	static class UPyTraceComponent_10295101_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyTraceComponent_10295101_Base>();
	}
};

}

