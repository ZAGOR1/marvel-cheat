﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: BTD_PyCheckHealthProportion

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction BTD_PyCheckHealthProportion.BTD_PyCheckHealthProportion.PerformConditionCheckAI
// 0x0018 (0x0018 - 0x0000)
struct BTD_PyCheckHealthProportion_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

