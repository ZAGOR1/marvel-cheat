﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PlayerStartBP

#include "Basic.hpp"

#include "PyPlayerStart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerStartBP.PlayerStartBP_C
// 0x0000 (0x04E8 - 0x04E8)
class APlayerStartBP_C final : public APyPlayerStart
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerStartBP_C">();
	}
	static class APlayerStartBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerStartBP_C>();
	}
};

}

