﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: ItemCurrency_LightBP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ItemCurrency_LightBP.ItemCurrency_LightBP_C
// 0x0020 (0x04B0 - 0x0490)
class AItemCurrency_LightBP_C final : public AActor
{
public:
	class UDirectionalLightComponent*             Rim_Light_01;                                      // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             Main_Light;                                        // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             Rim_Light_02;                                      // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCurrency_LightBP_C">();
	}
	static class AItemCurrency_LightBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItemCurrency_LightBP_C>();
	}
};

}

