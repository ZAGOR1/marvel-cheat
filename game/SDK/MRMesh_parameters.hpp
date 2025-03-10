﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: MRMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
// 0x0008 (0x0008 - 0x0000)
struct MockDataMeshTrackerComponent_ConnectMRMesh final
{
public:
	class UMRMeshComponent*                       InMRMeshPtr;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
// 0x0008 (0x0008 - 0x0000)
struct MockDataMeshTrackerComponent_DisconnectMRMesh final
{
public:
	class UMRMeshComponent*                       InMRMeshPtr;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
// 0x0001 (0x0001 - 0x0000)
struct MRMeshComponent_SetEnableMeshOcclusion final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MRMeshComponent.SetUseWireframe
// 0x0001 (0x0001 - 0x0000)
struct MRMeshComponent_SetUseWireframe final
{
public:
	bool                                          bUseWireframe;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MRMeshComponent.SetWireframeColor
// 0x0010 (0x0010 - 0x0000)
struct MRMeshComponent_SetWireframeColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MRMeshComponent.SetWireframeMaterial
// 0x0008 (0x0008 - 0x0000)
struct MRMeshComponent_SetWireframeMaterial final
{
public:
	class UMaterialInterface*                     InMaterial;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
// 0x0001 (0x0001 - 0x0000)
struct MRMeshComponent_GetEnableMeshOcclusion final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MRMeshComponent.GetUseWireframe
// 0x0001 (0x0001 - 0x0000)
struct MRMeshComponent_GetUseWireframe final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MRMeshComponent.GetWireframeColor
// 0x0010 (0x0010 - 0x0000)
struct MRMeshComponent_GetWireframeColor final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MRMeshComponent.IsConnected
// 0x0001 (0x0001 - 0x0000)
struct MRMeshComponent_IsConnected final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// 0x0008 (0x0008 - 0x0000)
struct MeshReconstructorBase_ConnectMRMesh final
{
public:
	class UMRMeshComponent*                       Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// 0x0001 (0x0001 - 0x0000)
struct MeshReconstructorBase_IsReconstructionPaused final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// 0x0001 (0x0001 - 0x0000)
struct MeshReconstructorBase_IsReconstructionStarted final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

