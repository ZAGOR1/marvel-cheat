﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyWidget_UIDPanel

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_UIDPanel.PyWidget_UIDPanel
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_UIDPanel : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_UIDPanel">();
	}
	static class UPyWidget_UIDPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_UIDPanel>();
	}
};

}

