﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: AudioLinkEngine

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AudioLinkEngine.AudioLinkBlueprintInterface
// 0x0000 (0x0030 - 0x0030)
class IAudioLinkBlueprintInterface final : public IInterface
{
public:
	void PlayLink(float StartTime);
	void SetLinkSound(class USoundBase* NewSound);
	void StopLink();

	bool IsLinkPlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioLinkBlueprintInterface">();
	}
	static class IAudioLinkBlueprintInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAudioLinkBlueprintInterface>();
	}
};

}

