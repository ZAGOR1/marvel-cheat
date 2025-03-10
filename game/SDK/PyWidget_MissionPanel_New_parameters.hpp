﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyWidget_MissionPanel_New

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_MissionPanel_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.UpdatePanelFocus
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_MissionPanel_UpdatePanelFocus final
{
public:
	bool                                          is_active;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.OnBtnRuleNavLeft
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_MissionPanel_OnBtnRuleNavLeft final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.OnBtnRuleNavRight
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_MissionPanel_OnBtnRuleNavRight final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.OnBtnRuleNavDown
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_MissionPanel_OnBtnRuleNavDown final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.OnListViewNavigationLeft
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_MissionPanel_OnListViewNavigationLeft final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

}

