﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: BTS_PySelectTargetToFollow

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction BTS_PySelectTargetToFollow.BTS_PySelectTargetToFollow.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_PySelectTargetToFollow_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction BTS_PySelectTargetToFollow.BTS_PySelectTargetToFollow.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_PySelectTargetToFollow_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

