﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: MinorProtection

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction MinorProtection.UISettingEntryMinorProtectionHandler.BP_GetCurrentValue
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryMinorProtectionHandler_BP_GetCurrentValue final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      O;                                                 // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction MinorProtection.UISettingEntryMinorProtectionHandler.BP_OnChanged
// 0x0160 (0x0160 - 0x0000)
struct UISettingEntryMinorProtectionHandler_BP_OnChanged final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};

// PythonFunction MinorProtection.UISettingEntryMinorProtectionHandler.BP_OnBtnClicked
// 0x0160 (0x0160 - 0x0000)
struct UISettingEntryMinorProtectionHandler_BP_OnBtnClicked final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};

// PythonFunction MinorProtection.UISettingEntryMinorProtectionHandler.BP_OnApply
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryMinorProtectionHandler_BP_OnApply final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction MinorProtection.UISettingEntryMinorProtectionSubHandler.BP_GetCurrentValue
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryMinorProtectionSubHandler_BP_GetCurrentValue final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      O;                                                 // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction MinorProtection.UISettingEntryMinorProtectionSubHandler.BP_OnChanged
// 0x0160 (0x0160 - 0x0000)
struct UISettingEntryMinorProtectionSubHandler_BP_OnChanged final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};

// PythonFunction MinorProtection.UISettingEntrySafeguardWebsiteHandler.BP_OnBtnClicked
// 0x0160 (0x0160 - 0x0000)
struct UISettingEntrySafeguardWebsiteHandler_BP_OnBtnClicked final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};

}

