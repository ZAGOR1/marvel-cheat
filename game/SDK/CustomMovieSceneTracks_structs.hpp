﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: CustomMovieSceneTracks

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "MovieSceneTracks_structs.hpp"


namespace SDK
{

// Enum CustomMovieSceneTracks.EDecalKey
// NumValues: 0x0004
enum class EDecalKey : uint8
{
	Deactivate                               = 0,
	FadeIn                                   = 1,
	FadeOut                                  = 2,
	EDecalKey_MAX                            = 3,
};

// ScriptStruct CustomMovieSceneTracks.MovieSceneCablePropertyTemplate
// 0x0528 (0x0548 - 0x0020)
struct FMovieSceneCablePropertyTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneBoolChannel                 AttachStartKeys;                                   // 0x0020(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneBoolChannel                 AttachEndKeys;                                     // 0x0120(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                CableLengthKeys;                                   // 0x0220(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel              NumSegmentsKeys;                                   // 0x0330(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                GravityScaleKeys;                                  // 0x0430(0x0110)(NativeAccessSpecifierPublic)
	uint8                                         Pad_540[0x8];                                      // 0x0540(0x0008)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// ScriptStruct CustomMovieSceneTracks.MovieSceneDecalChannel
// 0x0000 (0x0108 - 0x0108)
struct FMovieSceneDecalChannel final : public FMovieSceneByteChannel
{
};

// ScriptStruct CustomMovieSceneTracks.MovieSceneDecalFadeSectionTemplate
// 0x0898 (0x08B8 - 0x0020)
struct FMovieSceneDecalFadeSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneDecalChannel                DecalKeys;                                         // 0x0020(0x0108)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                FadeInStartDelayKeys;                              // 0x0128(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                FadeInDurationKeys;                                // 0x0238(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                FadeStartDelayKeys;                                // 0x0348(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                FadeDurationKeys;                                  // 0x0458(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneDoubleChannel               DecalSize[0x3];                                    // 0x0568(0x0118)(NativeAccessSpecifierPublic)
	uint8                                         Pad_8B0[0x8];                                      // 0x08B0(0x0008)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// ScriptStruct CustomMovieSceneTracks.MovieSceneOverlayMaterialTemplate
// 0x0118 (0x0138 - 0x0020)
struct FMovieSceneOverlayMaterialTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneStringChannel               WorkOnlyArrayNamesKeys;                            // 0x0020(0x0110)(NativeAccessSpecifierPublic)
	uint8                                         Pad_130[0x8];                                      // 0x0130(0x0008)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// ScriptStruct CustomMovieSceneTracks.MovieSceneSkinnedMeshTemplate
// 0x0518 (0x0538 - 0x0020)
struct FMovieSceneSkinnedMeshTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneIntegerChannel              SectionShownKeys;                                  // 0x0020(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel              LODIndexKeys;                                      // 0x0120(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneBoolChannel                 DisableMorphTargetKeys;                            // 0x0220(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneBoolChannel                 DisablePostProcessBlueprintKeys;                   // 0x0320(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneStringChannel               HiddenBoneNamesKeys;                               // 0x0420(0x0110)(NativeAccessSpecifierPublic)
	uint8                                         Pad_530[0x8];                                      // 0x0530(0x0008)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// ScriptStruct CustomMovieSceneTracks.MovieSceneSpringArmSectionTemplate
// 0x0698 (0x06B8 - 0x0020)
struct FMovieSceneSpringArmSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneDoubleChannel               RelativeLocation[0x3];                             // 0x0020(0x0118)(NativeAccessSpecifierPublic)
	struct FMovieSceneDoubleChannel               RelativeRotation[0x3];                             // 0x0368(0x0118)(NativeAccessSpecifierPublic)
	uint8                                         Pad_6B0[0x8];                                      // 0x06B0(0x0008)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// ScriptStruct CustomMovieSceneTracks.MovieSceneTAAEnableTemplate
// 0x0100 (0x0120 - 0x0020)
struct FMovieSceneTAAEnableTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneBoolChannel                 BoolChannel;                                       // 0x0020(0x0100)(NativeAccessSpecifierPrivate)
};

}

