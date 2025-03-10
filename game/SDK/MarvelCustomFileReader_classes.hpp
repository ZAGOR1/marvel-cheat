﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: MarvelCustomFileReader

#include "Basic.hpp"

#include "MarvelCustomFileReader_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MarvelCustomFileReader.MarvelCustomFileReadingSettings
// 0x0010 (0x0040 - 0x0030)
class UMarvelCustomFileReadingSettings final : public UObject
{
public:
	TArray<struct FMarvelFilePathRedirctor>       PackageRedirects;                                  // 0x0030(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MarvelCustomFileReadingSettings">();
	}
	static class UMarvelCustomFileReadingSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMarvelCustomFileReadingSettings>();
	}
};

}

