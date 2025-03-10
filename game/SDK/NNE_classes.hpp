﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: NNE

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class NNE.NNEModelData
// 0x00E0 (0x0110 - 0x0030)
class UNNEModelData final : public UObject
{
public:
	uint8                                         Pad_30[0xE0];                                      // 0x0030(0x00E0)(Fixing Struct Size After Last Property [ Chaos Dumper ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NNEModelData">();
	}
	static class UNNEModelData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNNEModelData>();
	}
};

// Class NNE.NNERuntime
// 0x0000 (0x0030 - 0x0030)
class INNERuntime final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NNERuntime">();
	}
	static class INNERuntime* GetDefaultObj()
	{
		return GetDefaultObjImpl<INNERuntime>();
	}
};

// Class NNE.NNERuntimeCPU
// 0x0000 (0x0030 - 0x0030)
class INNERuntimeCPU final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NNERuntimeCPU">();
	}
	static class INNERuntimeCPU* GetDefaultObj()
	{
		return GetDefaultObjImpl<INNERuntimeCPU>();
	}
};

// Class NNE.NNERuntimeGPU
// 0x0000 (0x0030 - 0x0030)
class INNERuntimeGPU final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NNERuntimeGPU">();
	}
	static class INNERuntimeGPU* GetDefaultObj()
	{
		return GetDefaultObjImpl<INNERuntimeGPU>();
	}
};

// Class NNE.NNERuntimeRDG
// 0x0000 (0x0030 - 0x0030)
class INNERuntimeRDG final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NNERuntimeRDG">();
	}
	static class INNERuntimeRDG* GetDefaultObj()
	{
		return GetDefaultObjImpl<INNERuntimeRDG>();
	}
};

}

