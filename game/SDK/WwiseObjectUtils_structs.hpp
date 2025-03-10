﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WwiseObjectUtils

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct WwiseObjectUtils.AkUInt64Wrapper
// 0x0008 (0x0008 - 0x0000)
struct FAkUInt64Wrapper
{
public:
	uint64                                        UInt64Value;                                       // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct WwiseObjectUtils.AkUInt32Wrapper
// 0x0004 (0x0004 - 0x0000)
struct FAkUInt32Wrapper
{
public:
	uint32                                        UInt32Value;                                       // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct WwiseObjectUtils.AkOutputDeviceID
// 0x0000 (0x0008 - 0x0008)
struct FAkOutputDeviceID final : public FAkUInt64Wrapper
{
};

// ScriptStruct WwiseObjectUtils.AkUniqueID
// 0x0000 (0x0004 - 0x0004)
struct FAkUniqueID final : public FAkUInt32Wrapper
{
};

}

