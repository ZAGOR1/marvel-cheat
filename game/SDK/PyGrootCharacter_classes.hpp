﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyGrootCharacter

#include "Basic.hpp"

#include "Hero_1027_classes.hpp"


namespace SDK
{

// PythonClass PyGrootCharacter.PyGrootCharacter
// 0x0010 (0x1890 - 0x1880)
#pragma pack(push, 0x1)
class alignas(0x10) APyGrootCharacter : public AGrootCharacter
{
public:
	bool                                          IsBeAttached;                                      // 0x1880(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyGrootCharacter">();
	}
	static class APyGrootCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyGrootCharacter>();
	}
};
#pragma pack(pop)

}

