﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyAbility_201

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "PyAbility_201_structs.hpp"
#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_201.PyAbility_201.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_201_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_201.PyAbility_201.OnClickShortcut
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_201_OnClickShortcut final
{
public:
	int32                                         InCommID;                                          // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_201.PyAbility_201.OnReplayStateChanged
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_201_OnReplayStateChanged final
{
public:
	EMarvelReplayState                            ReplayState;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_201.PyAbility_201.SetSignalInfo
// 0x01A8 (0x01A8 - 0x0000)
struct PyAbility_201_SetSignalInfo final
{
public:
	struct FGameplayTag                           InSignalTag;                                       // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FHitResult                             InHitResult;                                       // 0x0010(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                 InActor;                                           // 0x0180(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHandleCoolingdown;                               // 0x0188(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x3];                                      // 0x0189(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FGameplayTag                           InAbilityTag;                                      // 0x018C(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class FString                                 handle_type_tag;                                   // 0x0198(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_201.PyAbility_201.OnClickGamepadFaceRight
// 0x0020 (0x0020 - 0x0000)
struct PyAbility_201_OnClickGamepadFaceRight final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// PythonFunction PyAbility_201.PyUIController_201.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_201_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_201.PyUIController_201.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_201_OnTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_201.PyUIController_201.HandleAbilityBlock
// 0x0001 (0x0001 - 0x0000)
struct PyUIController_201_HandleAbilityBlock final
{
public:
	bool                                          IsBlocked;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_201.PyUIController_201.ListenAbilityActivateFailed
// 0x0001 (0x0001 - 0x0000)
struct PyUIController_201_ListenAbilityActivateFailed final
{
public:
	bool                                          IsListen;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_201.PyUIController_201.OnAbilityFailed
// 0x0070 (0x0070 - 0x0000)
struct PyUIController_201_OnAbilityFailed final
{
public:
	class UMarvelGameplayAbility*                 Ability_0;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Reason;                                            // 0x0008(0x0068)(ConstParm, Parm, OutParm, ReferenceParm)
};

}

