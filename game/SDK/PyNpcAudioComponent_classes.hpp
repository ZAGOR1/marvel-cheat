﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyNpcAudioComponent

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyNpcAudioComponent.PyNpcAudioComponent
// 0x0000 (0x0148 - 0x0148)
class UPyNpcAudioComponent : public UNPCAudioComponent
{
public:
	bool TryPostNpcVoice(int32 VoiceID, class AActor* ToCharacter);
	bool StopNpcVoice(int32 FadeoutMS);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyNpcAudioComponent">();
	}
	static class UPyNpcAudioComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyNpcAudioComponent>();
	}
};

}

