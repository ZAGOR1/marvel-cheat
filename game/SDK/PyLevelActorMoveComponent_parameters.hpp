﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyLevelActorMoveComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyLevelActorMoveComponent.PyLevelActorMoveComponent.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyLevelActorMoveComponent_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyLevelActorMoveComponent.PyLevelActorMoveComponent.PyTimelineUpdate
// 0x0004 (0x0004 - 0x0000)
struct PyLevelActorMoveComponent_PyTimelineUpdate final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyLevelActorMoveComponent.PyLevelActorMoveComponent.FollowTraceMoveStart
// 0x0018 (0x0018 - 0x0000)
struct PyLevelActorMoveComponent_FollowTraceMoveStart final
{
public:
	class FString                                 TraceName_0;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         StartPercent;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyLevelActorMoveComponent.PyLevelActorMoveComponent.SetCampMoveSpeed
// 0x0004 (0x0004 - 0x0000)
struct PyLevelActorMoveComponent_SetCampMoveSpeed final
{
public:
	float                                         move_speed;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyLevelActorMoveComponent.PyLevelActorMoveComponent.GetCurLength
// 0x0004 (0x0004 - 0x0000)
struct PyLevelActorMoveComponent_GetCurLength final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyLevelActorMoveComponent.PyLevelActorMoveComponent.ReachCheckPoint
// 0x0010 (0x0010 - 0x0000)
struct PyLevelActorMoveComponent_ReachCheckPoint final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

