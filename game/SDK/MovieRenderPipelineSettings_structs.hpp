﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: MovieRenderPipelineSettings

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct MovieRenderPipelineSettings.MoviePipelineConsoleVariableEntry
// 0x0018 (0x0018 - 0x0000)
struct FMoviePipelineConsoleVariableEntry final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsEnabled;                                        // 0x0014(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

}

