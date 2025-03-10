﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: WwiseFileHandler

#include "Basic.hpp"

#include "WwiseObjectUtils_structs.hpp"


namespace SDK::Params
{

// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById
// 0x0018 (0x0018 - 0x0000)
struct WwiseExternalSourceStatics_SetExternalSourceMediaById final
{
public:
	class FString                                 ExternalSourceName;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MediaId;                                           // 0x0010(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName
// 0x0020 (0x0020 - 0x0000)
struct WwiseExternalSourceStatics_SetExternalSourceMediaByName final
{
public:
	class FString                                 ExternalSourceName;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MediaName;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds
// 0x0008 (0x0008 - 0x0000)
struct WwiseExternalSourceStatics_SetExternalSourceMediaWithIds final
{
public:
	struct FAkUniqueID                            ExternalSourceCookie;                              // 0x0000(0x0004)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         MediaId;                                           // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

