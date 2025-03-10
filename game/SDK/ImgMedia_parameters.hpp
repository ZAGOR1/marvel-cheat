﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: ImgMedia

#include "Basic.hpp"


namespace SDK::Params
{

// Function ImgMedia.ImgMediaSource.AddGlobalCamera
// 0x0008 (0x0008 - 0x0000)
struct ImgMediaSource_AddGlobalCamera final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.AddTargetObject
// 0x0008 (0x0008 - 0x0000)
struct ImgMediaSource_AddTargetObject final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
// 0x0008 (0x0008 - 0x0000)
struct ImgMediaSource_RemoveGlobalCamera final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.RemoveTargetObject
// 0x0008 (0x0008 - 0x0000)
struct ImgMediaSource_RemoveTargetObject final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.SetMipLevelDistance
// 0x0004 (0x0004 - 0x0000)
struct ImgMediaSource_SetMipLevelDistance final
{
public:
	float                                         Distance;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.SetSequencePath
// 0x0010 (0x0010 - 0x0000)
struct ImgMediaSource_SetSequencePath final
{
public:
	class FString                                 Path;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.SetTokenizedSequencePath
// 0x0010 (0x0010 - 0x0000)
struct ImgMediaSource_SetTokenizedSequencePath final
{
public:
	class FString                                 Path;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.GetProxies
// 0x0010 (0x0010 - 0x0000)
struct ImgMediaSource_GetProxies final
{
public:
	TArray<class FString>                         OutProxies;                                        // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.GetSequencePath
// 0x0010 (0x0010 - 0x0000)
struct ImgMediaSource_GetSequencePath final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

