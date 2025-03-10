﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: ClothingSystemRuntimeNv

#include "Basic.hpp"

#include "ClothingSystemRuntimeNv_structs.hpp"
#include "ClothingSystemRuntimeInterface_classes.hpp"
#include "ClothingSystemRuntimeCommon_structs.hpp"
#include "ClothingSystemRuntimeCommon_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class ClothingSystemRuntimeNv.ClothConfigNv
// 0x0118 (0x0148 - 0x0030)
class UClothConfigNv final : public UClothConfigCommon
{
public:
	EClothingWindMethodNv                         ClothingWindMethod;                                // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FClothConstraintSetupNv                VerticalConstraint;                                // 0x0034(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv                HorizontalConstraint;                              // 0x0044(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv                BendConstraint;                                    // 0x0054(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv                ShearConstraint;                                   // 0x0064(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         SelfCollisionRadius;                               // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionStiffness;                            // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionCullScale;                            // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                              Damping;                                           // 0x0080(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Friction;                                          // 0x008C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindDragCoefficient;                               // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindLiftCoefficient;                               // 0x0094(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                              LinearDrag;                                        // 0x0098(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                              AngularDrag;                                       // 0x00A4(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                              LinearInertiaScale;                                // 0x00B0(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                              AngularInertiaScale;                               // 0x00BC(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                              CentrifugalInertiaScale;                           // 0x00C8(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SolverFrequency;                                   // 0x00D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StiffnessFrequency;                                // 0x00D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GravityScale;                                      // 0x00DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                              GravityOverride;                                   // 0x00E0(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGravityOverride;                               // 0x00EC(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Chaos Dumper ])
	float                                         TetherStiffness;                                   // 0x00F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TetherLimit;                                       // 0x00F4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionThickness;                                // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimDriveSpringStiffness;                          // 0x00FC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimDriveDamperStiffness;                          // 0x0100(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseOfflineFabricCooked;                           // 0x0104(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EClothingWindMethod_Legacy                    WindMethod;                                        // 0x0105(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_106[0x2];                                      // 0x0106(0x0002)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FClothConstraintSetup_Legacy           VerticalConstraintConfig;                          // 0x0108(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           HorizontalConstraintConfig;                        // 0x0118(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           BendConstraintConfig;                              // 0x0128(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           ShearConstraintConfig;                             // 0x0138(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothConfigNv">();
	}
	static class UClothConfigNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothConfigNv>();
	}
};

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// 0x0000 (0x0030 - 0x0030)
class UClothingSimulationFactoryNv final : public UClothingSimulationFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationFactoryNv">();
	}
	static class UClothingSimulationFactoryNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationFactoryNv>();
	}
};

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// 0x0010 (0x00A8 - 0x0098)
class UClothingSimulationInteractorNv final : public UClothingSimulationInteractor
{
public:
	uint8                                         Pad_98[0x10];                                      // 0x0098(0x0010)(Fixing Struct Size After Last Property [ Chaos Dumper ])

public:
	void SetAnimDriveDamperStiffness(float InStiffness);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationInteractorNv">();
	}
	static class UClothingSimulationInteractorNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationInteractorNv>();
	}
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// 0x0040 (0x0128 - 0x00E8)
class UClothPhysicalMeshDataNv_Legacy final : public UClothPhysicalMeshDataBase_Legacy
{
public:
	TArray<float>                                 MaxDistances;                                      // 0x00E8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 BackstopDistances;                                 // 0x00F8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 BackstopRadiuses;                                  // 0x0108(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 AnimDriveMultipliers;                              // 0x0118(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothPhysicalMeshDataNv_Legacy">();
	}
	static class UClothPhysicalMeshDataNv_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothPhysicalMeshDataNv_Legacy>();
	}
};

}

