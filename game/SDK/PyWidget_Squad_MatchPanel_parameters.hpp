﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyWidget_Squad_MatchPanel

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_MatchPanel.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Squad_MatchPanel_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_MatchPanel.OnReceiveInputKey
// 0x0028 (0x0028 - 0x0000)
struct PyWidget_Squad_MatchPanel_OnReceiveInputKey final
{
public:
	struct FKey                                   InKey;                                             // 0x0000(0x0020)(Parm, HasGetValueTypeHash)
	EInputEvent                                   EventType;                                         // 0x0020(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_MatchInfo_Card.MarvelSetVisibleImmediately
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Squad_MatchInfo_Card_MarvelSetVisibleImmediately final
{
public:
	bool                                          bTmpVisible;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_MatchInfo_Card.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Squad_MatchInfo_Card_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_MatchInfo_Card.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_Squad_MatchInfo_Card_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_ModeSelectionBtn.OnReceiveInputKey
// 0x0028 (0x0028 - 0x0000)
struct PyWidget_Squad_ModeSelectionBtn_OnReceiveInputKey final
{
public:
	struct FKey                                   InKey;                                             // 0x0000(0x0020)(Parm, HasGetValueTypeHash)
	EInputEvent                                   EventType;                                         // 0x0020(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_ModeSelectionBtn.OnSoftTextureLoad
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_Squad_ModeSelectionBtn_OnSoftTextureLoad final
{
public:
	class UObject*                                Texture;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_MatchInfo.MarvelSetVisibleImmediately
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Squad_MatchInfo_MarvelSetVisibleImmediately final
{
public:
	bool                                          bTmpVisible;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_MatchInfo.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Squad_MatchInfo_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_MatchInfo.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_Squad_MatchInfo_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_ConsoleCheckBox.SetIsHover
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_ConsoleCheckBox_SetIsHover final
{
public:
	bool                                          IsHover_0;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_ConsoleCheckBox.SetBtnIsPressed
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_ConsoleCheckBox_SetBtnIsPressed final
{
public:
	bool                                          IsBtnPressed_0;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_League_Team.MarvelSetVisibleImmediately
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Squad_League_Team_MarvelSetVisibleImmediately final
{
public:
	bool                                          bTmpVisible;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_Squad_MatchPanel.PyWidget_Squad_League_Team.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Squad_League_Team_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

