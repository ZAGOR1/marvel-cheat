﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyLevelStatistics

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// PythonClass PyLevelStatistics.PyLevelStatistics
// 0x0008 (0x0038 - 0x0030)
class UPyLevelStatistics : public UObject
{
public:
	class ULevelStatisticsController*             LevelController;                                   // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void Initialize();
	void Shutdown();
	void OnRoundStart();
	void OnRoundPrepareStart();
	void OnRoundFightStart();
	void OnRoundTransitionStart();
	void OnEscortRebirth();
	void OnOverTimeStart();
	void OnOverTimeEnd();
	float OnRoundEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelStatistics">();
	}
	static class UPyLevelStatistics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLevelStatistics>();
	}
};

}

