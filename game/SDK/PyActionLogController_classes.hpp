﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyActionLogController

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyActionLogController.PyActionLogController
// 0x0000 (0x00E0 - 0x00E0)
class UPyActionLogController : public UActionLogController
{
public:
	void OnInitialize();
	void OnShutdown();
	void OnPointActive(int32 player_uid, int32 point_id);
	void CreateLevelStatisticsController();
	void DestroyLevelStatisticsController();
	void OnPartNameChange(const class FString& current_part_name);
	void OnMatchStateChanged(EMatchState MatchState);
	void OnTransitionEnd();
	void OnOverTimeStart();
	void OnOverTimeEnd();
	void OnEscortRebirth();
	void OnFightEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyActionLogController">();
	}
	static class UPyActionLogController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyActionLogController>();
	}
};

}

