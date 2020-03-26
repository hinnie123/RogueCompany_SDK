#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CamMod_Master.CamMod_Master_C.OnCamModFinished
struct UCamMod_Master_C_OnCamModFinished_Params
{
};

// Function CamMod_Master.CamMod_Master_C.PlayTimeline
struct UCamMod_Master_C_PlayTimeline_Params
{
};

// Function CamMod_Master.CamMod_Master_C.ShouldModifyCamera
struct UCamMod_Master_C_ShouldModifyCamera_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CamMod_Master.CamMod_Master_C.UpdateValues
struct UCamMod_Master_C_UpdateValues_Params
{
	struct FVector*                                    InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   InRotation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InFOV;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CamMod_Master.CamMod_Master_C.GetKSCharacterData
struct UCamMod_Master_C_GetKSCharacterData_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter*                                KSCharacter;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UKSCharacterMovementComponent*               MovementComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AKSCameraManager_C*                          Camera_Manager;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CamMod_Master.CamMod_Master_C.BlueprintModifyCamera
struct UCamMod_Master_C_BlueprintModifyCamera_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ViewLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   ViewRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FOV;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewViewLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewViewRotation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NewFOV;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
