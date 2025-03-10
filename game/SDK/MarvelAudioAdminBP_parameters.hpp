﻿#pragma once

/*
* SDK generated by Chaos Dumper (Based off Dumper-7)
*

*/

// Package: MarvelAudioAdminBP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MarvelAudioAdminBP.MarvelAudioAdminBP_C.ExecuteUbergraph_MarvelAudioAdminBP
// 0x0128 (0x0128 - 0x0000)
struct MarvelAudioAdminBP_C_ExecuteUbergraph_MarvelAudioAdminBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Value_1;                        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Value;                          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Chaos Dumper ])
	class UAkComponent*                           K2Node_CustomEvent_AkComponent_1;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_CustomEvent_Event_1;                        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_EventName_1;                    // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class UAkComponent* AkComponent, class UAkAudioEvent* Event, const class FString& EventName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAkComponent* AkComponent, class UAkAudioEvent* Event, const class FString& EventName)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Value)>                   K2Node_CreateDelegate_OutputDelegate_2;            // 0x0058(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	class UAudioGlobalSubSystem*                  CallFunc_GetAudioGlobalSystem_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioGlobalSubSystem*                  CallFunc_GetAudioGlobalSystem_ReturnValue_1;       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           K2Node_CustomEvent_AkComponent;                    // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_CustomEvent_Event;                          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_EventName;                      // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool Value)>                   K2Node_CreateDelegate_OutputDelegate_3;            // 0x00A0(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	TArray<TSoftObjectPtr<class UWC_AudioEmitterBP_C>> CallFunc_Map_Values_Values;                        // 0x00C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TSoftObjectPtr<class UWC_AudioEmitterBP_C>    CallFunc_Array_Get_Item;                           // 0x00D0(0x0030)(InstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UWC_AudioEmitterBP_C*                   K2Node_DynamicCast_AsWC_Audio_Emitter_BP;          // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MarvelAudioAdminBP.MarvelAudioAdminBP_C.FindOrAddAudioInfoWidgetCom
// 0x01A0 (0x01A0 - 0x0000)
struct MarvelAudioAdminBP_C_FindOrAddAudioInfoWidgetCom final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Chaos Dumper ])
	struct FTransform                             CustomRelativeTransform;                           // 0x0010(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCustomTf;                                         // 0x0070(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UActorComponent*                        ReturnValue;                                       // 0x0078(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             TmpTF;                                             // 0x0080(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UActorComponent*                        CallFunc_FindOrAddWidgetCom_ReturnValue;           // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UCapsuleComponent*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_102[0x2];                                      // 0x0102(0x0002)(Fixing Size After Last Property [ Chaos Dumper ])
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0130(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MarvelAudioAdminBP.MarvelAudioAdminBP_C.OnEventPosted_ShowEmitter
// 0x0020 (0x0020 - 0x0000)
struct MarvelAudioAdminBP_C_OnEventPosted_ShowEmitter final
{
public:
	class UAkComponent*                           AkComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Event;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 EventName;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function MarvelAudioAdminBP.MarvelAudioAdminBP_C.OnEventPosted_ShowMontage
// 0x0020 (0x0020 - 0x0000)
struct MarvelAudioAdminBP_C_OnEventPosted_ShowMontage final
{
public:
	class UAkComponent*                           AkComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Event;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 EventName;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function MarvelAudioAdminBP.MarvelAudioAdminBP_C.OnShowEmitterChanged
// 0x0001 (0x0001 - 0x0000)
struct MarvelAudioAdminBP_C_OnShowEmitterChanged final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MarvelAudioAdminBP.MarvelAudioAdminBP_C.OnShowMontageChanged
// 0x0001 (0x0001 - 0x0000)
struct MarvelAudioAdminBP_C_OnShowMontageChanged final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MarvelAudioAdminBP.MarvelAudioAdminBP_C.ShowAudioEmitter
// 0x0168 (0x0168 - 0x0000)
struct MarvelAudioAdminBP_C_ShowAudioEmitter final
{
public:
	class UAkComponent*                           AkComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEvent;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 EventName;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWC_AudioEmitterBP_C*                   TmpWCEmitter;                                      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Chaos Dumper ])
	TSoftObjectPtr<class UAkComponent>            CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0038(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkComponent>            CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1; // 0x0068(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UWC_AudioEmitterBP_C*                   CallFunc_AddComponentByClass_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue;                    // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_AudioEmitter_C*                    K2Node_DynamicCast_AsWBP_Audio_Emitter;            // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	TSoftObjectPtr<class UWC_AudioEmitterBP_C>    CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2; // 0x00C8(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	TSoftObjectPtr<class UWC_AudioEmitterBP_C>    CallFunc_Map_Find_Value;                           // 0x0100(0x0030)(InstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWC_AudioEmitterBP_C*                   K2Node_DynamicCast_AsWC_Audio_Emitter_BP;          // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWC_AudioEmitterBP_C*                   K2Node_DynamicCast_AsWC_Audio_Emitter_BP_1;        // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MarvelAudioAdminBP.MarvelAudioAdminBP_C.ShowMontageName
// 0x0130 (0x0130 - 0x0000)
struct MarvelAudioAdminBP_C_ShowMontageName final
{
public:
	class UAkComponent*                           AkComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkComponent>            CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0008(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue;                    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkComponent>            CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1; // 0x0040(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	class UWBP_MontageName_C*                     K2Node_DynamicCast_AsWBP_Montage_Name;             // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Chaos Dumper ])
	class UWC_AnimEmitterBP_C*                    CallFunc_AddComponentByClass_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentMontageName_ReturnValue;        // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWC_AnimEmitterBP_C>     CallFunc_Map_Find_Value;                           // 0x00A8(0x0030)(InstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Chaos Dumper ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWC_AnimEmitterBP_C*                    K2Node_DynamicCast_AsWC_Anim_Emitter_BP;           // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Chaos Dumper ])
	TSoftObjectPtr<class UWC_AnimEmitterBP_C>     CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2; // 0x00F8(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

