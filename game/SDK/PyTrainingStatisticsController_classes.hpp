﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyTrainingStatisticsController

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "MarvelLevel_structs.hpp"


namespace SDK
{

// PythonClass PyTrainingStatisticsController.PyTrainingStatisticsController
// 0x0000 (0x0030 - 0x0030)
class UPyTrainingStatisticsController final : public UObject
{
public:
	void Initialize(class UObject* ActionLogController);
	void Shutdown();
	void OnBattleLoading();
	void OnBattlePreparing();
	void OnRoundStart();
	void OnBattleFighting();
	void OnBattleTransition();
	void OnBattleQuitting();
	void OnAddPlayerState(class AMarvelPlayerState* player_state);
	void OnDelPlayerState(class AMarvelPlayerState* player_state);
	void OnEnterTrainArea(class APyMarvelPlayerState* player_state, ETrainAreaType area_type);
	void OnLeaveTrainArea(class APyMarvelPlayerState* player_state, ETrainAreaType area_type);
	void OnTrainStart(const struct FTrainLogContent& Info);
	void OnTrainEnd(int32 ret, ETrainAction Action, int32 UID, bool is_finish);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyTrainingStatisticsController">();
	}
	static class UPyTrainingStatisticsController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyTrainingStatisticsController>();
	}
};

}

