﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: NiagaraCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class NiagaraCore.NiagaraMergeable
// 0x0000 (0x0030 - 0x0030)
class UNiagaraMergeable : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraMergeable">();
	}
	static class UNiagaraMergeable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraMergeable>();
	}
};

// Class NiagaraCore.NiagaraDataInterfaceBase
// 0x0000 (0x0030 - 0x0030)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceBase">();
	}
	static class UNiagaraDataInterfaceBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceBase>();
	}
};

}

