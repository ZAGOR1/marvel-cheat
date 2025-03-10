﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: NiagaraCore

#include "Basic.hpp"


namespace SDK
{

// Enum NiagaraCore.ENiagaraIterationSource
// NumValues: 0x0004
enum class ENiagaraIterationSource : uint8
{
	Particles                                = 0,
	DataInterface                            = 1,
	DirectSet                                = 2,
	ENiagaraIterationSource_MAX              = 3,
};

// ScriptStruct NiagaraCore.NiagaraVariableCommonReference
// 0x0018 (0x0018 - 0x0000)
struct FNiagaraVariableCommonReference final
{
public:
	class FName                                   Name;                                              // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	class UObject*                                UnderlyingType;                                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct NiagaraCore.NiagaraCompileHash
// 0x0010 (0x0010 - 0x0000)
struct FNiagaraCompileHash final
{
public:
	TArray<uint8>                                 DataHash;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

}

