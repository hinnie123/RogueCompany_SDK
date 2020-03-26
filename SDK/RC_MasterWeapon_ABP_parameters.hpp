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

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Lobby State
struct UMasterWeapon_ABP_C_Set_Lobby_State_Params
{
	bool*                                              In_Model_Viewer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateSpentShellVisibility
struct UMasterWeapon_ABP_C_UpdateSpentShellVisibility_Params
{
	int*                                               ShellIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              New_Visibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateUnspentShellVisibility
struct UMasterWeapon_ABP_C_UpdateUnspentShellVisibility_Params
{
	int*                                               ShellIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              New_Visibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Revolver Hammer Strike
struct UMasterWeapon_ABP_C_Set_Revolver_Hammer_Strike_Params
{
	struct FRotator*                                   New_Revolver_Hammer_Strike;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Weapon State
struct UMasterWeapon_ABP_C_Set_Weapon_State_Params
{
	class UKSWeaponComponent**                         Owning_Weapon_Component;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EWeaponStateNew*                                   Old_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   New_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Multi Stage Reload
struct UMasterWeapon_ABP_C_Set_Multi_Stage_Reload_Params
{
	bool*                                              New_Is_Multi_Stage_Reload;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Scope Scale Alpha
struct UMasterWeapon_ABP_C_Set_Scope_Scale_Alpha_Params
{
	float*                                             New_Alpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674
struct UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Hide Mag
struct UMasterWeapon_ABP_C_AnimNotify_Hide_Mag_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Unhide Mag
struct UMasterWeapon_ABP_C_AnimNotify_Unhide_Mag_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.ExecuteUbergraph_MasterWeapon_ABP
struct UMasterWeapon_ABP_C_ExecuteUbergraph_MasterWeapon_ABP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
