// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Lobby State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          In_Model_Viewer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::Set_Lobby_State(bool* In_Model_Viewer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Lobby State");

	UMasterWeapon_ABP_C_Set_Lobby_State_Params params;
	params.In_Model_Viewer = In_Model_Viewer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateSpentShellVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ShellIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          New_Visibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::UpdateSpentShellVisibility(int* ShellIndex, bool* New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateSpentShellVisibility");

	UMasterWeapon_ABP_C_UpdateSpentShellVisibility_Params params;
	params.ShellIndex = ShellIndex;
	params.New_Visibility = New_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateUnspentShellVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ShellIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          New_Visibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::UpdateUnspentShellVisibility(int* ShellIndex, bool* New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateUnspentShellVisibility");

	UMasterWeapon_ABP_C_UpdateUnspentShellVisibility_Params params;
	params.ShellIndex = ShellIndex;
	params.New_Visibility = New_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Revolver Hammer Strike
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator*               New_Revolver_Hammer_Strike     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::Set_Revolver_Hammer_Strike(struct FRotator* New_Revolver_Hammer_Strike)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Revolver Hammer Strike");

	UMasterWeapon_ABP_C_Set_Revolver_Hammer_Strike_Params params;
	params.New_Revolver_Hammer_Strike = New_Revolver_Hammer_Strike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Weapon State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     Owning_Weapon_Component        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EWeaponStateNew*               Old_State                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               New_State                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::Set_Weapon_State(class UKSWeaponComponent** Owning_Weapon_Component, EWeaponStateNew* Old_State, EWeaponStateNew* New_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Weapon State");

	UMasterWeapon_ABP_C_Set_Weapon_State_Params params;
	params.Owning_Weapon_Component = Owning_Weapon_Component;
	params.Old_State = Old_State;
	params.New_State = New_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Multi Stage Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          New_Is_Multi_Stage_Reload      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::Set_Multi_Stage_Reload(bool* New_Is_Multi_Stage_Reload)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Multi Stage Reload");

	UMasterWeapon_ABP_C_Set_Multi_Stage_Reload_Params params;
	params.New_Is_Multi_Stage_Reload = New_Is_Multi_Stage_Reload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Scope Scale Alpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         New_Alpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::Set_Scope_Scale_Alpha(float* New_Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Scope Scale Alpha");

	UMasterWeapon_ABP_C_Set_Scope_Scale_Alpha_Params params;
	params.New_Alpha = New_Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674
// (BlueprintEvent)

void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674");

	UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Hide Mag
// (BlueprintCallable, BlueprintEvent)

void UMasterWeapon_ABP_C::AnimNotify_Hide_Mag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Hide Mag");

	UMasterWeapon_ABP_C_AnimNotify_Hide_Mag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Unhide Mag
// (BlueprintCallable, BlueprintEvent)

void UMasterWeapon_ABP_C::AnimNotify_Unhide_Mag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Unhide Mag");

	UMasterWeapon_ABP_C_AnimNotify_Unhide_Mag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.ExecuteUbergraph_MasterWeapon_ABP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::ExecuteUbergraph_MasterWeapon_ABP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.ExecuteUbergraph_MasterWeapon_ABP");

	UMasterWeapon_ABP_C_ExecuteUbergraph_MasterWeapon_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
