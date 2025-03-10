﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_104392

#include "Basic.hpp"

#include "PyAbility_104331_classes.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104392.PyConfig_104392
// 0x0030 (0x1130 - 0x1100)
class UPyConfig_104392 final : public UConfig_AeroBase
{
public:
	uint8                                         Pad_10F8[0x8];                                     // 0x10F8(0x0008)(Fixing Size After Last Property [ Chaos Dumper ])
	bool                                          RefreshCDAfterKill;                                // 0x1100(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1101[0x3];                                     // 0x1101(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	int32                                         AbilityID;                                         // 0x1104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateChangedTaskParam                 AbilityActiveUserSetting;                          // 0x1108(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104392">();
	}
	static class UPyConfig_104392* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104392>();
	}
};

// PythonClass PyAbility_104392.PyAbility_104392
// 0x0000 (0x5CB0 - 0x5CB0)
class UPyAbility_104392 : public UPyAbility_104331
{
public:
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104392">();
	}
	static class UPyAbility_104392* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104392>();
	}
};

}

