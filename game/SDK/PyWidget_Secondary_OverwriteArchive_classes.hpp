﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyWidget_Secondary_OverwriteArchive

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Secondary_OverwriteArchive.PyWidget_Secondary_OverwriteArchive
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_Secondary_OverwriteArchive : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Secondary_OverwriteArchive">();
	}
	static class UPyWidget_Secondary_OverwriteArchive* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Secondary_OverwriteArchive>();
	}
};

// PythonClass PyWidget_Secondary_OverwriteArchive.PyWidget_OverwriteArchiveItem
// 0x0010 (0x03C8 - 0x03B8)
class UPyWidget_OverwriteArchiveItem : public UUserWidget
{
public:
	TMulticastInlineDelegate<void(int32 ID)>      OnClicked;                                         // 0x03B8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_OverwriteArchiveItem">();
	}
	static class UPyWidget_OverwriteArchiveItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_OverwriteArchiveItem>();
	}
};

}

