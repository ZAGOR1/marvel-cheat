﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyHighLightData_1021

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyHighLightData_1021.PyHighLightData_1021.OnActorDeath
// 0x0030 (0x0030 - 0x0000)
struct PyHighLightData_1021_OnActorDeath final
{
public:
	class AActor*                                 Killer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParamHandle;                                       // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FGlobalEventExtraData                  ExtraData;                                         // 0x0028(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// PythonFunction PyHighLightData_1021.PyHighLightData_1021.OnTargetActorRecycleAgentTask
// 0x0068 (0x0068 - 0x0000)
struct PyHighLightData_1021_OnTargetActorRecycleAgentTask final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMarvelGameplayAbility*                 SourceAbility;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMarvelTargetActorGenerateInfo         GenerateInfo;                                      // 0x0010(0x0048)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEndAgentTaskInfo                      AgentTaskInfo;                                     // 0x0058(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

}

