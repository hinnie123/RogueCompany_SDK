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

// Function KSCameraManager.KSCameraManager_C.GetMantleHeightFromKSChar
struct AKSCameraManager_C_GetMantleHeightFromKSChar_Params
{
	bool                                               NoMantleCamera;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KSCameraManager.KSCameraManager_C.NotifyCamModFinished
struct AKSCameraManager_C_NotifyCamModFinished_Params
{
	class UClass**                                     Modifier_Class;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KSCameraManager.KSCameraManager_C.UpdateCamModValues
struct AKSCameraManager_C_UpdateCamModValues_Params
{
	class UClass**                                     Modifier_Class;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    In_Location;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    In_Rotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             In_FOV;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KSCameraManager.KSCameraManager_C.JumpStart__FinishedFunc
struct AKSCameraManager_C_JumpStart__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.JumpStart__UpdateFunc
struct AKSCameraManager_C_JumpStart__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.JumpLanding__FinishedFunc
struct AKSCameraManager_C_JumpLanding__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.JumpLanding__UpdateFunc
struct AKSCameraManager_C_JumpLanding__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Tall__FinishedFunc
struct AKSCameraManager_C_Mantle_Tall__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Tall__UpdateFunc
struct AKSCameraManager_C_Mantle_Tall__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Medium__FinishedFunc
struct AKSCameraManager_C_Mantle_Medium__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Medium__UpdateFunc
struct AKSCameraManager_C_Mantle_Medium__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Short__FinishedFunc
struct AKSCameraManager_C_Mantle_Short__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Short__UpdateFunc
struct AKSCameraManager_C_Mantle_Short__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Tall__FinishedFunc
struct AKSCameraManager_C_Vault_Tall__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Tall__UpdateFunc
struct AKSCameraManager_C_Vault_Tall__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Medium__FinishedFunc
struct AKSCameraManager_C_Vault_Medium__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Medium__UpdateFunc
struct AKSCameraManager_C_Vault_Medium__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Short__FinishedFunc
struct AKSCameraManager_C_Vault_Short__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Short__UpdateFunc
struct AKSCameraManager_C_Vault_Short__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__FinishedFunc
struct AKSCameraManager_C_Vault_Medium_Running__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__UpdateFunc
struct AKSCameraManager_C_Vault_Medium_Running__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Play Jump Start
struct AKSCameraManager_C_Play_Jump_Start_Params
{
};

// Function KSCameraManager.KSCameraManager_C.PlayJumpLanding
struct AKSCameraManager_C_PlayJumpLanding_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Play Mantle
struct AKSCameraManager_C_Play_Mantle_Params
{
	int*                                               Mantle_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KSCameraManager.KSCameraManager_C.ExecuteUbergraph_KSCameraManager
struct AKSCameraManager_C_ExecuteUbergraph_KSCameraManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
