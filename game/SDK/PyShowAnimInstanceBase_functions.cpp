﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: PyShowAnimInstanceBase

#include "Basic.hpp"

#include "PyShowAnimInstanceBase_classes.hpp"
#include "PyShowAnimInstanceBase_parameters.hpp"


namespace SDK
{

// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.BlueprintBeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyShowAnimInstanceBase::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "BlueprintBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.BlueprintUnintializeAnimation
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyShowAnimInstanceBase::BlueprintUnintializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "BlueprintUnintializeAnimation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.BlueprintPreUpdateAnimation
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyShowAnimInstanceBase::BlueprintPreUpdateAnimation(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "BlueprintPreUpdateAnimation");

	Params::PyShowAnimInstanceBase_BlueprintPreUpdateAnimation Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnPlayShowAnim
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsPlay                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyShowAnimInstanceBase::OnPlayShowAnim(bool IsPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnPlayShowAnim");

	Params::PyShowAnimInstanceBase_OnPlayShowAnim Parms{};

	Parms.IsPlay = IsPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnPlayToggleAnim
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsToggleHalf_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyShowAnimInstanceBase::OnPlayToggleAnim(bool IsToggleHalf_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnPlayToggleAnim");

	Params::PyShowAnimInstanceBase_OnPlayToggleAnim Parms{};

	Parms.IsToggleHalf_0 = IsToggleHalf_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnIsHalfChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsToggleHalf_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyShowAnimInstanceBase::OnIsHalfChanged(bool IsToggleHalf_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnIsHalfChanged");

	Params::PyShowAnimInstanceBase_OnIsHalfChanged Parms{};

	Parms.IsToggleHalf_0 = IsToggleHalf_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnReplayToggleAnim
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::OnReplayToggleAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnReplayToggleAnim");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnJumpStandIdle
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::OnJumpStandIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnJumpStandIdle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnJumpHalfIdle
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::OnJumpHalfIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnJumpHalfIdle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnPlayTurnAnim
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::OnPlayTurnAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnPlayTurnAnim");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnPlayEmoteAnim
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ItemId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyShowAnimInstanceBase::OnPlayEmoteAnim(const class FString& ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnPlayEmoteAnim");

	Params::PyShowAnimInstanceBase_OnPlayEmoteAnim Parms{};

	Parms.ItemId = std::move(ItemId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnPlayMVPAnim
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::OnPlayMVPAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnPlayMVPAnim");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnPlayLikeAnim
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::OnPlayLikeAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnPlayLikeAnim");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnPlayHeroGallerAnim
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::OnPlayHeroGallerAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnPlayHeroGallerAnim");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnPlayHeroGaller_CardPose
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsPlayCardPose_0                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyShowAnimInstanceBase::OnPlayHeroGaller_CardPose(bool IsPlayCardPose_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnPlayHeroGaller_CardPose");

	Params::PyShowAnimInstanceBase_OnPlayHeroGaller_CardPose Parms{};

	Parms.IsPlayCardPose_0 = IsPlayCardPose_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnPlayHeroGaller_HoverStand
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsPlayHoverStand_0                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyShowAnimInstanceBase::OnPlayHeroGaller_HoverStand(bool IsPlayHoverStand_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnPlayHeroGaller_HoverStand");

	Params::PyShowAnimInstanceBase_OnPlayHeroGaller_HoverStand Parms{};

	Parms.IsPlayHoverStand_0 = IsPlayHoverStand_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.ResetAllAnim
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::ResetAllAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "ResetAllAnim");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.ResetPersonality
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::ResetPersonality()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "ResetPersonality");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.ResetHeroGallery
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::ResetHeroGallery()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "ResetHeroGallery");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_StandIdle_Begin
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_StandIdle_Begin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_StandIdle_Begin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_StandIdle_End
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_StandIdle_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_StandIdle_End");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_HalfIdle_Begin
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_HalfIdle_Begin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_HalfIdle_Begin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_HalfIdle_End
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_HalfIdle_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_HalfIdle_End");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_ToggleHalf_Begin
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_ToggleHalf_Begin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_ToggleHalf_Begin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_ToggleHalf_End
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_ToggleHalf_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_ToggleHalf_End");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_ToggleStand_Begin
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_ToggleStand_Begin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_ToggleStand_Begin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_ToggleStand_End
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_ToggleStand_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_ToggleStand_End");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_Personality_Begin
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_Personality_Begin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_Personality_Begin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_Personality_End
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_Personality_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_Personality_End");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_Turn_Begin
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_Turn_Begin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_Turn_Begin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_Turn_Play
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_Turn_Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_Turn_Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_Like_Play
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_Like_Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_Like_Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_LikeIdle_Play
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_LikeIdle_Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_LikeIdle_Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_Like_End
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_Like_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_Like_End");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_MVP_Play
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_MVP_Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_MVP_Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_MVP_End
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_MVP_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_MVP_End");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_Emote_Play
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_Emote_Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_Emote_Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_Emote_End
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_Emote_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_Emote_End");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_HeroGallery_IdleBegin
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_HeroGallery_IdleBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_HeroGallery_IdleBegin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_HeroGallery_IdleEnd
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_HeroGallery_IdleEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_HeroGallery_IdleEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_HeroGallery_CardPose
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_HeroGallery_CardPose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_HeroGallery_CardPose");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_HeroGallery_HoverIdle
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_HeroGallery_HoverIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_HeroGallery_HoverIdle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_HeroGallery_HoverStand
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_HeroGallery_HoverStand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_HeroGallery_HoverStand");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_HeroGallery_Half1IdleStandEnd
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_HeroGallery_Half1IdleStandEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_HeroGallery_Half1IdleStandEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.GetLSHoverStandIsPlaying
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyShowAnimInstanceBase::GetLSHoverStandIsPlaying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "GetLSHoverStandIsPlaying");

	Params::PyShowAnimInstanceBase_GetLSHoverStandIsPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnShowActorCameraGaze
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                                    TurnCameraGaze_0                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CameraLocation_0                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OpenBlendTime                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CloseBlendTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyShowAnimInstanceBase::OnShowActorCameraGaze(bool TurnCameraGaze_0, const struct FVector& CameraLocation_0, float OpenBlendTime, float CloseBlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnShowActorCameraGaze");

	Params::PyShowAnimInstanceBase_OnShowActorCameraGaze Parms{};

	Parms.TurnCameraGaze_0 = TurnCameraGaze_0;
	Parms.CameraLocation_0 = std::move(CameraLocation_0);
	Parms.OpenBlendTime = OpenBlendTime;
	Parms.CloseBlendTime = CloseBlendTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_AnimVoice_Begin
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_AnimVoice_Begin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_AnimVoice_Begin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.AnimNotify_AnimVoice_End
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::AnimNotify_AnimVoice_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "AnimNotify_AnimVoice_End");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnPlayVoiceAnim
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnimSequence*                    VoiceAnim_0                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyShowAnimInstanceBase::OnPlayVoiceAnim(class UAnimSequence* VoiceAnim_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnPlayVoiceAnim");

	Params::PyShowAnimInstanceBase_OnPlayVoiceAnim Parms{};

	Parms.VoiceAnim_0 = VoiceAnim_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyShowAnimInstanceBase.PyShowAnimInstanceBase.OnStopVoiceAnim
// (Native, Public, BlueprintCallable)

void UPyShowAnimInstanceBase::OnStopVoiceAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyShowAnimInstanceBase", "OnStopVoiceAnim");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

