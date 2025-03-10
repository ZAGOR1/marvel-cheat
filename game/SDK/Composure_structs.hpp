﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: Composure

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// Enum Composure.ESceneCameraLinkType
// NumValues: 0x0004
enum class ESceneCameraLinkType : uint32
{
	Inherited                                = 0,
	Override                                 = 1,
	Unused                                   = 2,
	ESceneCameraLinkType_MAX                 = 3,
};

// Enum Composure.EInheritedSourceType
// NumValues: 0x0003
enum class EInheritedSourceType : uint32
{
	Inherited                                = 0,
	Override                                 = 1,
	EInheritedSourceType_MAX                 = 2,
};

// Enum Composure.ETargetUsageFlags
// NumValues: 0x0008
enum class ETargetUsageFlags : uint8
{
	USAGE_None                               = 0,
	USAGE_Input                              = 1,
	USAGE_Transform                          = 2,
	USAGE_Output                             = 4,
	USAGE_Persistent                         = 32,
	USAGE_Intermediate0                      = 8,
	USAGE_Intermediate1                      = 16,
	USAGE_MAX                                = 33,
};

// Enum Composure.ECompPassConstructionType
// NumValues: 0x0005
enum class ECompPassConstructionType : uint8
{
	Unknown                                  = 0,
	EditorConstructed                        = 1,
	BlueprintConstructed                     = 2,
	CodeConstructed                          = 3,
	ECompPassConstructionType_MAX            = 4,
};

// Enum Composure.EExrCompressionOptions
// NumValues: 0x0003
enum class EExrCompressionOptions : uint8
{
	Compressed                               = 0,
	Uncompressed                             = 1,
	EExrCompressionOptions_MAX               = 2,
};

// Enum Composure.EParamType
// NumValues: 0x0006
enum class EParamType : uint8
{
	UnknownParamType                         = 0,
	ScalarParam                              = 1,
	VectorParam                              = 2,
	TextureParam                             = 3,
	MediaTextureParam                        = 4,
	EParamType_MAX                           = 5,
};

// ScriptStruct Composure.CompositingParamPayload
// 0x00F0 (0x00F0 - 0x0000)
struct FCompositingParamPayload
{
public:
	TMap<class FName, float>                      ScalarParamOverrides;                              // 0x0000(0x0050)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FLinearColor>        VectorParamOverrides;                              // 0x0050(0x0050)(NativeAccessSpecifierPublic)
	TMap<class FName, class UTexture*>            TextureParamOverrides;                             // 0x00A0(0x0050)(UObjectWrapper, NativeAccessSpecifierPublic)
};

// ScriptStruct Composure.NamedCompMaterialParam
// 0x000C (0x000C - 0x0000)
struct FNamedCompMaterialParam final
{
public:
	class FName                                   ParamName;                                         // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Composure.CompositingMaterial
// 0x00B8 (0x01A8 - 0x00F0)
struct FCompositingMaterial final : public FCompositingParamPayload
{
public:
	class UMaterialInterface*                     Material;                                          // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>                ParamPassMappings;                                 // 0x00F8(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, struct FNamedCompMaterialParam> RequiredMaterialParams;                            // 0x0148(0x0050)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                         Pad_198[0x8];                                      // 0x0198(0x0008)(Fixing Size After Last Property [ Chaos Dumper ])
	class UMaterialInstanceDynamic*               CachedMID;                                         // 0x01A0(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Composure.ComposurePostMoveSettings
// 0x0028 (0x0028 - 0x0000)
struct FComposurePostMoveSettings final
{
public:
	struct FVector2D                              Pivot;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Translation;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAngle;                                     // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Composure.ComposureUVMapSettings
// 0x0120 (0x0120 - 0x0000)
struct FComposureUVMapSettings final
{
public:
	struct FMatrix                                PreUVDisplacementMatrix;                           // 0x0000(0x0080)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                                PostUVDisplacementMatrix;                          // 0x0080(0x0080)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                              DisplacementDecodeParameters;                      // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                               DisplacementTexture;                               // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseDisplacementBlueAndAlphaChannels : 1;          // 0x0118(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// ScriptStruct Composure.MovieSceneComposureExportPass
// 0x001C (0x001C - 0x0000)
struct FMovieSceneComposureExportPass final
{
public:
	class FName                                   TransformPassName;                                 // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRenamePass;                                       // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	class FName                                   ExportedAs;                                        // 0x0010(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Composure.MovieSceneComposureExportSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FMovieSceneComposureExportSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneComposureExportPass         Pass;                                              // 0x0020(0x001C)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

// ScriptStruct Composure.MovieSceneComposurePostMoveSettingsSectionTemplate
// 0x0668 (0x06A8 - 0x0040)
struct FMovieSceneComposurePostMoveSettingsSectionTemplate final : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneFloatChannel                Pivot[0x2];                                        // 0x0040(0x0110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                Translation[0x2];                                  // 0x0260(0x0110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                RotationAngle;                                     // 0x0480(0x0110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                Scale;                                             // 0x0590(0x0110)(NativeAccessSpecifierPrivate)
	EMovieSceneBlendType                          BlendType;                                         // 0x06A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_6A1[0x7];                                      // 0x06A1(0x0007)(Fixing Struct Size After Last Property [ Chaos Dumper ])
};

}

