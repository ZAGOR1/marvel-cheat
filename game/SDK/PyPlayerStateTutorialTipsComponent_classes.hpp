﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyPlayerStateTutorialTipsComponent

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyPlayerStateTutorialTipsComponent.PyPlayerStateTutorialTipsComponent
// 0x0020 (0x0110 - 0x00F0)
class UPyPlayerStateTutorialTipsComponent final : public UMarvelActorComponentBase
{
public:
	TArray<int32>                                 TipsIDInSingleGame;                                // 0x00F0(0x0010)(Net, NativeAccessSpecifierPublic)
	TArray<int32>                                 TipsCountInSingleGame;                             // 0x0100(0x0010)(Net, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyPlayerStateTutorialTipsComponent">();
	}
	static class UPyPlayerStateTutorialTipsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyPlayerStateTutorialTipsComponent>();
	}
};

}

