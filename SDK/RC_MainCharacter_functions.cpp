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

// Function MainCharacter.MainCharacter_C.Zipline Pulley Unhide
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Zipline_Pulley_Unhide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Zipline Pulley Unhide");

	AMainCharacter_C_Zipline_Pulley_Unhide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Zipline Pulley Hide
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Zipline_Pulley_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Zipline Pulley Hide");

	AMainCharacter_C_Zipline_Pulley_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.WasLastHitHeadshot
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bpp__bHeadshot__pf             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::WasLastHitHeadshot(bool* bpp__bHeadshot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.WasLastHitHeadshot");

	AMainCharacter_C_WasLastHitHeadshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__bHeadshot__pf != nullptr)
		*bpp__bHeadshot__pf = params.bpp__bHeadshot__pf;
}


// Function MainCharacter.MainCharacter_C.VO_Player_Revived
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::VO_Player_Revived()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.VO_Player_Revived");

	AMainCharacter_C_VO_Player_Revived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.VO_Player_Death
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::VO_Player_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.VO_Player_Death");

	AMainCharacter_C_VO_Player_Death_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.VerifyLastHitDamageType
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass**                 bpp__DamageType__pf            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__IsRelatedToThisType__pf   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::VerifyLastHitDamageType(class UClass** bpp__DamageType__pf, bool* bpp__IsRelatedToThisType__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.VerifyLastHitDamageType");

	AMainCharacter_C_VerifyLastHitDamageType_Params params;
	params.bpp__DamageType__pf = bpp__DamageType__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__IsRelatedToThisType__pf != nullptr)
		*bpp__IsRelatedToThisType__pf = params.bpp__IsRelatedToThisType__pf;
}


// Function MainCharacter.MainCharacter_C.VerifyLastHitBone
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  bpp__ParentBoneName__pf        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__IsRelatedToThisBone__pf   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::VerifyLastHitBone(struct FName* bpp__ParentBoneName__pf, bool* bpp__IsRelatedToThisBone__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.VerifyLastHitBone");

	AMainCharacter_C_VerifyLastHitBone_Params params;
	params.bpp__ParentBoneName__pf = bpp__ParentBoneName__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__IsRelatedToThisBone__pf != nullptr)
		*bpp__IsRelatedToThisBone__pf = params.bpp__IsRelatedToThisBone__pf;
}


// Function MainCharacter.MainCharacter_C.UserConstructionScript
// (Native, Event, Public, BlueprintCallable)

void AMainCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UserConstructionScript");

	AMainCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Update Action Camera
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                bpp__CameraxRotation__pfT      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__UsesxRotation__pfT        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                bpp__CameraxOffset__pfT        (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::Update_Action_Camera(struct FVector* bpp__CameraxRotation__pfT, bool* bpp__UsesxRotation__pfT, struct FVector* bpp__CameraxOffset__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Update Action Camera");

	AMainCharacter_C_Update_Action_Camera_Params params;
	params.bpp__CameraxRotation__pfT = bpp__CameraxRotation__pfT;
	params.bpp__UsesxRotation__pfT = bpp__UsesxRotation__pfT;
	params.bpp__CameraxOffset__pfT = bpp__CameraxOffset__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.UpdateRagdollOnGround
// (Net, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__IsGrounded__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::UpdateRagdollOnGround(bool* bpp__IsGrounded__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdateRagdollOnGround");

	AMainCharacter_C_UpdateRagdollOnGround_Params params;
	params.bpp__IsGrounded__pf = bpp__IsGrounded__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.UpdateRagdollMeshLocation
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::UpdateRagdollMeshLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdateRagdollMeshLocation");

	AMainCharacter_C_UpdateRagdollMeshLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.UpdateRagdoll
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__DeltaSeconds__pf          (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::UpdateRagdoll(float* bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdateRagdoll");

	AMainCharacter_C_UpdateRagdoll_Params params;
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.UpdatePlayerState
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState**           bpp__Player__pf                (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::UpdatePlayerState(class APlayerState** bpp__Player__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdatePlayerState");

	AMainCharacter_C_UpdatePlayerState_Params params;
	params.bpp__Player__pf = bpp__Player__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.UpdateHealthPP
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::UpdateHealthPP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdateHealthPP");

	AMainCharacter_C_UpdateHealthPP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.UpdateDebugHealthVisibility
// (Native, Event, Public, BlueprintCallable)

void AMainCharacter_C::UpdateDebugHealthVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdateDebugHealthVisibility");

	AMainCharacter_C_UpdateDebugHealthVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.UnHide Zipline Pulley
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::UnHide_Zipline_Pulley()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UnHide Zipline Pulley");

	AMainCharacter_C_UnHide_Zipline_Pulley_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.UnHide Upline Device
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::UnHide_Upline_Device()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UnHide Upline Device");

	AMainCharacter_C_UnHide_Upline_Device_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics_Server
// (Net, Native, Event, Public, NetServer, BlueprintCallable)

void AMainCharacter_C::TurnOffCapsulePhysics_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics_Server");

	AMainCharacter_C_TurnOffCapsulePhysics_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics
// (Net, Native, Event, NetMulticast, Public, BlueprintCallable)

void AMainCharacter_C::TurnOffCapsulePhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics");

	AMainCharacter_C_TurnOffCapsulePhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Transition To Main Camera
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Transition_To_Main_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Transition To Main Camera");

	AMainCharacter_C_Transition_To_Main_Camera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Transition To ADS Camera
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Transition_To_ADS_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Transition To ADS Camera");

	AMainCharacter_C_Transition_To_ADS_Camera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.SwitchToSnapshotPose
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::SwitchToSnapshotPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SwitchToSnapshotPose");

	AMainCharacter_C_SwitchToSnapshotPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Start Viewed Down Hit
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Start_Viewed_Down_Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Start Viewed Down Hit");

	AMainCharacter_C_Start_Viewed_Down_Hit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.StartImmunity__UpdateFunc
// (Native, Public)

void AMainCharacter_C::StartImmunity__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.StartImmunity__UpdateFunc");

	AMainCharacter_C_StartImmunity__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.StartImmunity__FinishedFunc
// (Native, Public)

void AMainCharacter_C::StartImmunity__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.StartImmunity__FinishedFunc");

	AMainCharacter_C_StartImmunity__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.StartHacking
// (Native, Event, Public, BlueprintCallable)

void AMainCharacter_C::StartHacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.StartHacking");

	AMainCharacter_C_StartHacking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.SprintFOVTimeline__UpdateFunc
// (Native, Public)

void AMainCharacter_C::SprintFOVTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SprintFOVTimeline__UpdateFunc");

	AMainCharacter_C_SprintFOVTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.SprintFOVTimeline__FinishedFunc
// (Native, Public)

void AMainCharacter_C::SprintFOVTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SprintFOVTimeline__FinishedFunc");

	AMainCharacter_C_SprintFOVTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ShowDebugLocation
// (Native, Event, Public)
// Parameters:
// bool*                          bpp__bVisible__pf              (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ShowDebugLocation(bool* bpp__bVisible__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ShowDebugLocation");

	AMainCharacter_C_ShowDebugLocation_Params params;
	params.bpp__bVisible__pf = bpp__bVisible__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ShouldLastHitLaunchIntoRagdoll
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bpp__bShouldRagdoll__pf        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ShouldLastHitLaunchIntoRagdoll(bool* bpp__bShouldRagdoll__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ShouldLastHitLaunchIntoRagdoll");

	AMainCharacter_C_ShouldLastHitLaunchIntoRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__bShouldRagdoll__pf != nullptr)
		*bpp__bShouldRagdoll__pf = params.bpp__bShouldRagdoll__pf;
}


// Function MainCharacter.MainCharacter_C.Set Health SFX RTPC
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Set_Health_SFX_RTPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Set Health SFX RTPC");

	AMainCharacter_C_Set_Health_SFX_RTPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Setup Debug Info Widget
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Setup_Debug_Info_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Setup Debug Info Widget");

	AMainCharacter_C_Setup_Debug_Info_Widget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.SetPostProcessHealthValue
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__Health__pf                (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::SetPostProcessHealthValue(float* bpp__Health__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SetPostProcessHealthValue");

	AMainCharacter_C_SetPostProcessHealthValue_Params params;
	params.bpp__Health__pf = bpp__Health__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.SetHitTargetArmorLevelRTPC
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 bpp__HitxTarget__pfT           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 bpp__RTPCxActor__pfT           (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::SetHitTargetArmorLevelRTPC(class AActor** bpp__HitxTarget__pfT, class AActor** bpp__RTPCxActor__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SetHitTargetArmorLevelRTPC");

	AMainCharacter_C_SetHitTargetArmorLevelRTPC_Params params;
	params.bpp__HitxTarget__pfT = bpp__HitxTarget__pfT;
	params.bpp__RTPCxActor__pfT = bpp__RTPCxActor__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.RestoreNormalCamera
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::RestoreNormalCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.RestoreNormalCamera");

	AMainCharacter_C_RestoreNormalCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ReevaluateDebugWidgetAttachment
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::ReevaluateDebugWidgetAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ReevaluateDebugWidgetAttachment");

	AMainCharacter_C_ReevaluateDebugWidgetAttachment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ReceiveTick
// (Native, Event, Public)
// Parameters:
// float*                         bpp__DeltaSeconds__pf          (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ReceiveTick(float* bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ReceiveTick");

	AMainCharacter_C_ReceiveTick_Params params;
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ReceiveBeginPlay
// (Native, Event, Public)

void AMainCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ReceiveBeginPlay");

	AMainCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Play Viewed Sonar Hit
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FDamageEffect*          bpp__Effect__pf                (Parm)

void AMainCharacter_C::Play_Viewed_Sonar_Hit(struct FDamageEffect* bpp__Effect__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Viewed Sonar Hit");

	AMainCharacter_C_Play_Viewed_Sonar_Hit_Params params;
	params.bpp__Effect__pf = bpp__Effect__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Play Viewed EMP Hit
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FDamageEffect*          bpp__Effect__pf                (Parm)

void AMainCharacter_C::Play_Viewed_EMP_Hit(struct FDamageEffect* bpp__Effect__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Viewed EMP Hit");

	AMainCharacter_C_Play_Viewed_EMP_Hit_Params params;
	params.bpp__Effect__pf = bpp__Effect__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Play Viewed Blood Hit
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FDamageEffect*          bpp__Effect__pf                (Parm)

void AMainCharacter_C::Play_Viewed_Blood_Hit(struct FDamageEffect* bpp__Effect__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Viewed Blood Hit");

	AMainCharacter_C_Play_Viewed_Blood_Hit_Params params;
	params.bpp__Effect__pf = bpp__Effect__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Play Martial Artist Target Front
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Play_Martial_Artist_Target_Front()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Martial Artist Target Front");

	AMainCharacter_C_Play_Martial_Artist_Target_Front_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Play Martial Artist Target Back
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Play_Martial_Artist_Target_Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Martial Artist Target Back");

	AMainCharacter_C_Play_Martial_Artist_Target_Back_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Front
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Play_Martial_Artist_Instigator_Front()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Front");

	AMainCharacter_C_Play_Martial_Artist_Instigator_Front_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Back
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Play_Martial_Artist_Instigator_Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Back");

	AMainCharacter_C_Play_Martial_Artist_Instigator_Back_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.PlayViewFlashBangHit
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FDamageEffect*          bpp__Effect__pf                (Parm)

void AMainCharacter_C::PlayViewFlashBangHit(struct FDamageEffect* bpp__Effect__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayViewFlashBangHit");

	AMainCharacter_C_PlayViewFlashBangHit_Params params;
	params.bpp__Effect__pf = bpp__Effect__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.PlayHitFromRadialDamage
// (BlueprintCosmetic, Native, Event, Public, HasOutParms)
// Parameters:
// struct FDamageEffect*          bpp__Effect__pf__const         (ConstParm, Parm, OutParm, ReferenceParm)

void AMainCharacter_C::PlayHitFromRadialDamage(struct FDamageEffect* bpp__Effect__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayHitFromRadialDamage");

	AMainCharacter_C_PlayHitFromRadialDamage_Params params;
	params.bpp__Effect__pf__const = bpp__Effect__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.PlayHitFromPointDamage
// (BlueprintCosmetic, Native, Event, Public, HasOutParms)
// Parameters:
// struct FDamageEffect*          bpp__Effect__pf__const         (ConstParm, Parm, OutParm, ReferenceParm)

void AMainCharacter_C::PlayHitFromPointDamage(struct FDamageEffect* bpp__Effect__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayHitFromPointDamage");

	AMainCharacter_C_PlayHitFromPointDamage_Params params;
	params.bpp__Effect__pf__const = bpp__Effect__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.PlayerRevived
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSPlayerState**         bpp__Revivee__pf               (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         bpp__Reviver__pf               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__ExpBonus__pf              (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::PlayerRevived(class AKSPlayerState** bpp__Revivee__pf, class AKSPlayerState** bpp__Reviver__pf, int* bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayerRevived");

	AMainCharacter_C_PlayerRevived_Params params;
	params.bpp__Revivee__pf = bpp__Revivee__pf;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.PlayerDown
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FCombatEventInfo*       bpp__EventInfo__pf             (Parm)
// int*                           bpp__ExpBonus__pf              (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::PlayerDown(struct FCombatEventInfo* bpp__EventInfo__pf, int* bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayerDown");

	AMainCharacter_C_PlayerDown_Params params;
	params.bpp__EventInfo__pf = bpp__EventInfo__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.PlayerDeath
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FCombatEventInfo*       bpp__EventInfo__pf             (Parm)

void AMainCharacter_C::PlayerDeath(struct FCombatEventInfo* bpp__EventInfo__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayerDeath");

	AMainCharacter_C_PlayerDeath_Params params;
	params.bpp__EventInfo__pf = bpp__EventInfo__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.PlayEnemyHitSFX
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 bpp__DamagexType__pfT          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 bpp__Target__pf                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 bpp__InxDamagexTarget__pfTT    (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::PlayEnemyHitSFX(class UClass** bpp__DamagexType__pfT, class AActor** bpp__Target__pf, class AActor** bpp__InxDamagexTarget__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayEnemyHitSFX");

	AMainCharacter_C_PlayEnemyHitSFX_Params params;
	params.bpp__DamagexType__pfT = bpp__DamagexType__pfT;
	params.bpp__Target__pf = bpp__Target__pf;
	params.bpp__InxDamagexTarget__pfTT = bpp__InxDamagexTarget__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.PlayActionCameraSequence
// (Native, Event, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__SequenceName__pf          (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::PlayActionCameraSequence(struct FName* bpp__SequenceName__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayActionCameraSequence");

	AMainCharacter_C_PlayActionCameraSequence_Params params;
	params.bpp__SequenceName__pf = bpp__SequenceName__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnZiplineChangeForFov
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__IsZiplining__pf           (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnZiplineChangeForFov(bool* bpp__IsZiplining__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnZiplineChangeForFov");

	AMainCharacter_C_OnZiplineChangeForFov_Params params;
	params.bpp__IsZiplining__pf = bpp__IsZiplining__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.On Shoulder Swap Changed Event
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSCharacter**           bpp__Character__pf             (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::On_Shoulder_Swap_Changed_Event(class AKSCharacter** bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.On Shoulder Swap Changed Event");

	AMainCharacter_C_On_Shoulder_Swap_Changed_Event_Params params;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnUnhovered
// (Native, Event, Public)
// Parameters:
// float*                         bpp__ExtraTime__pf             (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnUnhovered(float* bpp__ExtraTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnUnhovered");

	AMainCharacter_C_OnUnhovered_Params params;
	params.bpp__ExtraTime__pf = bpp__ExtraTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnStartSkydive
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::OnStartSkydive()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnStartSkydive");

	AMainCharacter_C_OnStartSkydive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnSprintChangedCallback
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__IsSprinting__pf           (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnSprintChangedCallback(bool* bpp__IsSprinting__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnSprintChangedCallback");

	AMainCharacter_C_OnSprintChangedCallback_Params params;
	params.bpp__IsSprinting__pf = bpp__IsSprinting__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnReviveStart
// (Native, Event, Public)
// Parameters:
// class AKSCharacter**           bpp__Reviver__pf               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__ReviveTime__pf            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__Remote__pf                (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnReviveStart(class AKSCharacter** bpp__Reviver__pf, float* bpp__ReviveTime__pf, bool* bpp__Remote__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnReviveStart");

	AMainCharacter_C_OnReviveStart_Params params;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ReviveTime__pf = bpp__ReviveTime__pf;
	params.bpp__Remote__pf = bpp__Remote__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnReviveInterrupt
// (Native, Event, Public)
// Parameters:
// class AKSCharacter**           bpp__Reviver__pf               (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnReviveInterrupt(class AKSCharacter** bpp__Reviver__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnReviveInterrupt");

	AMainCharacter_C_OnReviveInterrupt_Params params;
	params.bpp__Reviver__pf = bpp__Reviver__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnReviveComplete
// (Native, Event, Public)
// Parameters:
// class AKSCharacter**           bpp__Reviver__pf               (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnReviveComplete(class AKSCharacter** bpp__Reviver__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnReviveComplete");

	AMainCharacter_C_OnReviveComplete_Params params;
	params.bpp__Reviver__pf = bpp__Reviver__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnPowerSlideChangedCallback
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__IsPowerSliding__pf        (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnPowerSlideChangedCallback(bool* bpp__IsPowerSliding__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnPowerSlideChangedCallback");

	AMainCharacter_C_OnPowerSlideChangedCallback_Params params;
	params.bpp__IsPowerSliding__pf = bpp__IsPowerSliding__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnLanded
// (Native, Event, Public, HasOutParms)
// Parameters:
// struct FHitResult*             bpp__Hit__pf__const            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMainCharacter_C::OnLanded(struct FHitResult* bpp__Hit__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnLanded");

	AMainCharacter_C_OnLanded_Params params;
	params.bpp__Hit__pf__const = bpp__Hit__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnImmuneStart
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable)

void AMainCharacter_C::OnImmuneStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnImmuneStart");

	AMainCharacter_C_OnImmuneStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnImmuneEnd
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable)

void AMainCharacter_C::OnImmuneEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnImmuneEnd");

	AMainCharacter_C_OnImmuneEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnHovered
// (Native, Event, Public)

void AMainCharacter_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnHovered");

	AMainCharacter_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnHealthChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSCharacterBase**       bpp__Character__pf__const      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnHealthChanged(class AKSCharacterBase** bpp__Character__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnHealthChanged");

	AMainCharacter_C_OnHealthChanged_Params params;
	params.bpp__Character__pf__const = bpp__Character__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnFieldOfViewModChange
// (Native, Event, Public, BlueprintCallable)

void AMainCharacter_C::OnFieldOfViewModChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnFieldOfViewModChange");

	AMainCharacter_C_OnFieldOfViewModChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnEndZiplineRagdoll
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::OnEndZiplineRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnEndZiplineRagdoll");

	AMainCharacter_C_OnEndZiplineRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnEndSkydive
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::OnEndSkydive()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnEndSkydive");

	AMainCharacter_C_OnEndSkydive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnEndPowerSlide
// (Native, Event, Public)
// Parameters:
// EKSPowerSlideEndReason*        bpp__EndReason__pf             (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnEndPowerSlide(EKSPowerSlideEndReason* bpp__EndReason__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnEndPowerSlide");

	AMainCharacter_C_OnEndPowerSlide_Params params;
	params.bpp__EndReason__pf = bpp__EndReason__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnEndOutOfBounds
// (Native, Event, Public)

void AMainCharacter_C::OnEndOutOfBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnEndOutOfBounds");

	AMainCharacter_C_OnEndOutOfBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnDodgeRollChangedEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__IsDodgeRolling__pf        (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnDodgeRollChangedEvent(bool* bpp__IsDodgeRolling__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnDodgeRollChangedEvent");

	AMainCharacter_C_OnDodgeRollChangedEvent_Params params;
	params.bpp__IsDodgeRolling__pf = bpp__IsDodgeRolling__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnBeginZiplineRagdoll
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::OnBeginZiplineRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnBeginZiplineRagdoll");

	AMainCharacter_C_OnBeginZiplineRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnBeginPowerSlide
// (Native, Event, Public)

void AMainCharacter_C::OnBeginPowerSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnBeginPowerSlide");

	AMainCharacter_C_OnBeginPowerSlide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.OnBeginOutOfBounds
// (Native, Event, Public)

void AMainCharacter_C::OnBeginOutOfBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnBeginOutOfBounds");

	AMainCharacter_C_OnBeginOutOfBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__UpdateFunc
// (Native, Public)

void AMainCharacter_C::NoseDiveFOVTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__UpdateFunc");

	AMainCharacter_C_NoseDiveFOVTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__FinishedFunc
// (Native, Public)

void AMainCharacter_C::NoseDiveFOVTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__FinishedFunc");

	AMainCharacter_C_NoseDiveFOVTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.NoseDiveCameraTransition
// (Native, Event, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__bEnterNoseDive__pf        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__AnimLength__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::NoseDiveCameraTransition(bool* bpp__bEnterNoseDive__pf, float* bpp__AnimLength__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.NoseDiveCameraTransition");

	AMainCharacter_C_NoseDiveCameraTransition_Params params;
	params.bpp__bEnterNoseDive__pf = bpp__bEnterNoseDive__pf;
	params.bpp__AnimLength__pf = bpp__AnimLength__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.MinFlashBang__UpdateFunc
// (Native, Public)

void AMainCharacter_C::MinFlashBang__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.MinFlashBang__UpdateFunc");

	AMainCharacter_C_MinFlashBang__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.MinFlashBang__FinishedFunc
// (Native, Public)

void AMainCharacter_C::MinFlashBang__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.MinFlashBang__FinishedFunc");

	AMainCharacter_C_MinFlashBang__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.MaxFlashBang__UpdateFunc
// (Native, Public)

void AMainCharacter_C::MaxFlashBang__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.MaxFlashBang__UpdateFunc");

	AMainCharacter_C_MaxFlashBang__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.MaxFlashBang__FinishedFunc
// (Native, Public)

void AMainCharacter_C::MaxFlashBang__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.MaxFlashBang__FinishedFunc");

	AMainCharacter_C_MaxFlashBang__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Martial Artist Target Front__UpdateFunc
// (Native, Public)

void AMainCharacter_C::Martial_Artist_Target_Front__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Target Front__UpdateFunc");

	AMainCharacter_C_Martial_Artist_Target_Front__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Martial Artist Target Front__FinishedFunc
// (Native, Public)

void AMainCharacter_C::Martial_Artist_Target_Front__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Target Front__FinishedFunc");

	AMainCharacter_C_Martial_Artist_Target_Front__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Martial Artist Target Back__UpdateFunc
// (Native, Public)

void AMainCharacter_C::Martial_Artist_Target_Back__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Target Back__UpdateFunc");

	AMainCharacter_C_Martial_Artist_Target_Back__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Martial Artist Target Back__FinishedFunc
// (Native, Public)

void AMainCharacter_C::Martial_Artist_Target_Back__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Target Back__FinishedFunc");

	AMainCharacter_C_Martial_Artist_Target_Back__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__UpdateFunc
// (Native, Public)

void AMainCharacter_C::Martial_Artist_Instigator_Front__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__UpdateFunc");

	AMainCharacter_C_Martial_Artist_Instigator_Front__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__FinishedFunc
// (Native, Public)

void AMainCharacter_C::Martial_Artist_Instigator_Front__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__FinishedFunc");

	AMainCharacter_C_Martial_Artist_Instigator_Front__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__UpdateFunc
// (Native, Public)

void AMainCharacter_C::Martial_Artist_Instigator_Back__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__UpdateFunc");

	AMainCharacter_C_Martial_Artist_Instigator_Back__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__FinishedFunc
// (Native, Public)

void AMainCharacter_C::Martial_Artist_Instigator_Back__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__FinishedFunc");

	AMainCharacter_C_Martial_Artist_Instigator_Back__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.LandingRollEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__IsDodgeRolling__pf        (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::LandingRollEvent(bool* bpp__IsDodgeRolling__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.LandingRollEvent");

	AMainCharacter_C_LandingRollEvent_Params params;
	params.bpp__IsDodgeRolling__pf = bpp__IsDodgeRolling__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.KeepActionCameraAboveWater
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector*                bpp__InBoomPosition__pf        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bpp__OutBoomPosition__pf       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::KeepActionCameraAboveWater(struct FVector* bpp__InBoomPosition__pf, struct FVector* bpp__OutBoomPosition__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.KeepActionCameraAboveWater");

	AMainCharacter_C_KeepActionCameraAboveWater_Params params;
	params.bpp__InBoomPosition__pf = bpp__InBoomPosition__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__OutBoomPosition__pf != nullptr)
		*bpp__OutBoomPosition__pf = params.bpp__OutBoomPosition__pf;
}


// Function MainCharacter.MainCharacter_C.K2_OnStartCrouch
// (Native, Event, Public)
// Parameters:
// float*                         bpp__HalfHeightAdjust__pf      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__ScaledHalfHeightAdjust__pf (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::K2_OnStartCrouch(float* bpp__HalfHeightAdjust__pf, float* bpp__ScaledHalfHeightAdjust__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.K2_OnStartCrouch");

	AMainCharacter_C_K2_OnStartCrouch_Params params;
	params.bpp__HalfHeightAdjust__pf = bpp__HalfHeightAdjust__pf;
	params.bpp__ScaledHalfHeightAdjust__pf = bpp__ScaledHalfHeightAdjust__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.K2_OnMovementModeChanged
// (Native, Event, Public)
// Parameters:
// TEnumAsByte<EMovementMode>*    bpp__PrevMovementMode__pf      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    bpp__NewMovementMode__pf       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 bpp__PrevCustomMode__pf        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 bpp__NewCustomMode__pf         (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* bpp__PrevMovementMode__pf, TEnumAsByte<EMovementMode>* bpp__NewMovementMode__pf, unsigned char* bpp__PrevCustomMode__pf, unsigned char* bpp__NewCustomMode__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.K2_OnMovementModeChanged");

	AMainCharacter_C_K2_OnMovementModeChanged_Params params;
	params.bpp__PrevMovementMode__pf = bpp__PrevMovementMode__pf;
	params.bpp__NewMovementMode__pf = bpp__NewMovementMode__pf;
	params.bpp__PrevCustomMode__pf = bpp__PrevCustomMode__pf;
	params.bpp__NewCustomMode__pf = bpp__NewCustomMode__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.K2_OnEndViewTarget
// (Native, Event, Public)
// Parameters:
// class APlayerController**      bpp__PC__pf                    (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::K2_OnEndViewTarget(class APlayerController** bpp__PC__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.K2_OnEndViewTarget");

	AMainCharacter_C_K2_OnEndViewTarget_Params params;
	params.bpp__PC__pf = bpp__PC__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.K2_OnEndCrouch
// (Native, Event, Public)
// Parameters:
// float*                         bpp__HalfHeightAdjust__pf      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__ScaledHalfHeightAdjust__pf (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::K2_OnEndCrouch(float* bpp__HalfHeightAdjust__pf, float* bpp__ScaledHalfHeightAdjust__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.K2_OnEndCrouch");

	AMainCharacter_C_K2_OnEndCrouch_Params params;
	params.bpp__HalfHeightAdjust__pf = bpp__HalfHeightAdjust__pf;
	params.bpp__ScaledHalfHeightAdjust__pf = bpp__ScaledHalfHeightAdjust__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.K2_OnBecomeViewTarget
// (Native, Event, Public)
// Parameters:
// class APlayerController**      bpp__PC__pf                    (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::K2_OnBecomeViewTarget(class APlayerController** bpp__PC__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.K2_OnBecomeViewTarget");

	AMainCharacter_C_K2_OnBecomeViewTarget_Params params;
	params.bpp__PC__pf = bpp__PC__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_1
// (Native, Public)
// Parameters:
// struct FKey*                   bpp__Key__pf                   (Parm)

void AMainCharacter_C::InpActEvt_T_K2Node_InputKeyEvent_1(struct FKey* bpp__Key__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_1");

	AMainCharacter_C_InpActEvt_T_K2Node_InputKeyEvent_1_Params params;
	params.bpp__Key__pf = bpp__Key__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.InitRagdollOnDeath
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::InitRagdollOnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.InitRagdollOnDeath");

	AMainCharacter_C_InitRagdollOnDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.InitializeHealthPP
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::InitializeHealthPP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.InitializeHealthPP");

	AMainCharacter_C_InitializeHealthPP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Hide Zipline Pulley
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Hide_Zipline_Pulley()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Hide Zipline Pulley");

	AMainCharacter_C_Hide_Zipline_Pulley_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Hide Upline Device
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Hide_Upline_Device()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Hide Upline Device");

	AMainCharacter_C_Hide_Upline_Device_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Handle Downed Ragdoll
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Handle_Downed_Ragdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Handle Downed Ragdoll");

	AMainCharacter_C_Handle_Downed_Ragdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.HalfFlashBang__UpdateFunc
// (Native, Public)

void AMainCharacter_C::HalfFlashBang__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.HalfFlashBang__UpdateFunc");

	AMainCharacter_C_HalfFlashBang__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.HalfFlashBang__FinishedFunc
// (Native, Public)

void AMainCharacter_C::HalfFlashBang__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.HalfFlashBang__FinishedFunc");

	AMainCharacter_C_HalfFlashBang__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Get ADS Camera By Tag
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  bpp__Tag__pf                   (Parm, ZeroConstructor, IsPlainOldData)
// class UCameraComponent*        bpp__CameraxComponent__pfT     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMainCharacter_C::Get_ADS_Camera_By_Tag(struct FName* bpp__Tag__pf, class UCameraComponent** bpp__CameraxComponent__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Get ADS Camera By Tag");

	AMainCharacter_C_Get_ADS_Camera_By_Tag_Params params;
	params.bpp__Tag__pf = bpp__Tag__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__CameraxComponent__pfT != nullptr)
		*bpp__CameraxComponent__pfT = params.bpp__CameraxComponent__pfT;
}


// Function MainCharacter.MainCharacter_C.Get ADS Bend Target Camera Component
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCameraComponent*        bpp__CameraxComponent__pfT     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMainCharacter_C::Get_ADS_Bend_Target_Camera_Component(class UCameraComponent** bpp__CameraxComponent__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Get ADS Bend Target Camera Component");

	AMainCharacter_C_Get_ADS_Bend_Target_Camera_Component_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__CameraxComponent__pfT != nullptr)
		*bpp__CameraxComponent__pfT = params.bpp__CameraxComponent__pfT;
}


// Function MainCharacter.MainCharacter_C.GetTargetFov
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          bpp__TargetFov__pf             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::GetTargetFov(float* bpp__TargetFov__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetTargetFov");

	AMainCharacter_C_GetTargetFov_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__TargetFov__pf != nullptr)
		*bpp__TargetFov__pf = params.bpp__TargetFov__pf;
}


// Function MainCharacter.MainCharacter_C.GetTargetArmorLevel
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 bpp__HitxTarget__pfT           (Parm, ZeroConstructor, IsPlainOldData)
// int                            bpp__ArmorxLevel__pfT          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::GetTargetArmorLevel(class AActor** bpp__HitxTarget__pfT, int* bpp__ArmorxLevel__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetTargetArmorLevel");

	AMainCharacter_C_GetTargetArmorLevel_Params params;
	params.bpp__HitxTarget__pfT = bpp__HitxTarget__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ArmorxLevel__pfT != nullptr)
		*bpp__ArmorxLevel__pfT = params.bpp__ArmorxLevel__pfT;
}


// Function MainCharacter.MainCharacter_C.GetRagdollFacingDirection
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bpp__IsUp__pf                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::GetRagdollFacingDirection(bool* bpp__IsUp__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetRagdollFacingDirection");

	AMainCharacter_C_GetRagdollFacingDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__IsUp__pf != nullptr)
		*bpp__IsUp__pf = params.bpp__IsUp__pf;
}


// Function MainCharacter.MainCharacter_C.GetLastHitDistance
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          bpp__OutDistance__pf           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::GetLastHitDistance(float* bpp__OutDistance__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetLastHitDistance");

	AMainCharacter_C_GetLastHitDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__OutDistance__pf != nullptr)
		*bpp__OutDistance__pf = params.bpp__OutDistance__pf;
}


// Function MainCharacter.MainCharacter_C.GetFlashBangEffectDurationFromDistance
// (Native, Event, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__Distance__pf              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMainCharacter_C::GetFlashBangEffectDurationFromDistance(float* bpp__Distance__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetFlashBangEffectDurationFromDistance");

	AMainCharacter_C_GetFlashBangEffectDurationFromDistance_Params params;
	params.bpp__Distance__pf = bpp__Distance__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainCharacter.MainCharacter_C.GetDownedTransitionMontage
// (Native, Event, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimMontage*            bpp__OutAnimMontage__pf        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::GetDownedTransitionMontage(class UAnimMontage** bpp__OutAnimMontage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetDownedTransitionMontage");

	AMainCharacter_C_GetDownedTransitionMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__OutAnimMontage__pf != nullptr)
		*bpp__OutAnimMontage__pf = params.bpp__OutAnimMontage__pf;
}


// Function MainCharacter.MainCharacter_C.GetDeathTransitionAnimation
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimSequence*           bpp__OutAnimSequence__pf       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::GetDeathTransitionAnimation(class UAnimSequence** bpp__OutAnimSequence__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetDeathTransitionAnimation");

	AMainCharacter_C_GetDeathTransitionAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__OutAnimSequence__pf != nullptr)
		*bpp__OutAnimSequence__pf = params.bpp__OutAnimSequence__pf;
}


// Function MainCharacter.MainCharacter_C.FreeFall Camera Burst
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::FreeFall_Camera_Burst()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.FreeFall Camera Burst");

	AMainCharacter_C_FreeFall_Camera_Burst_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Finish Action Camera Update
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Finish_Action_Camera_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Finish Action Camera Update");

	AMainCharacter_C_Finish_Action_Camera_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.FinishHacking
// (Native, Event, Public, BlueprintCallable)

void AMainCharacter_C::FinishHacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.FinishHacking");

	AMainCharacter_C_FinishHacking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ExitDownedRagdoll
// (Net, Native, Event, NetMulticast, Public, BlueprintCallable)

void AMainCharacter_C::ExitDownedRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExitDownedRagdoll");

	AMainCharacter_C_ExitDownedRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_5
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_5(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_5");

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_5_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_4
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_4(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_4");

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_4_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_23
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_23(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_23");

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_23_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_18
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_18(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_18");

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_18_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_17
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_17(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_17");

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_17_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_117
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_117(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_117");

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_117_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_116
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_116(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_116");

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_116_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_12
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_12(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_12");

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_12_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.EventSetupCamerasForSpectator
// (Native, Event, Public)
// Parameters:
// bool*                          bpp__Enabled__pf               (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::EventSetupCamerasForSpectator(bool* bpp__Enabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EventSetupCamerasForSpectator");

	AMainCharacter_C_EventSetupCamerasForSpectator_Params params;
	params.bpp__Enabled__pf = bpp__Enabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__UpdateFunc
// (Native, Public)

void AMainCharacter_C::EnterFreeFallFOVTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__UpdateFunc");

	AMainCharacter_C_EnterFreeFallFOVTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__FinishedFunc
// (Native, Public)

void AMainCharacter_C::EnterFreeFallFOVTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__FinishedFunc");

	AMainCharacter_C_EnterFreeFallFOVTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.EnterDownedRagdoll
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::EnterDownedRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EnterDownedRagdoll");

	AMainCharacter_C_EnterDownedRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.End Down PP
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::End_Down_PP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.End Down PP");

	AMainCharacter_C_End_Down_PP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.EndImmunity__UpdateFunc
// (Native, Public)

void AMainCharacter_C::EndImmunity__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EndImmunity__UpdateFunc");

	AMainCharacter_C_EndImmunity__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.EndImmunity__FinishedFunc
// (Native, Public)

void AMainCharacter_C::EndImmunity__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EndImmunity__FinishedFunc");

	AMainCharacter_C_EndImmunity__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.DoSetOnFire
// (Native, Event, Public)

void AMainCharacter_C::DoSetOnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DoSetOnFire");

	AMainCharacter_C_DoSetOnFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.DoExtinguishFire
// (Native, Event, Public)

void AMainCharacter_C::DoExtinguishFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DoExtinguishFire");

	AMainCharacter_C_DoExtinguishFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.DoBindZiplineEvents
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::DoBindZiplineEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DoBindZiplineEvents");

	AMainCharacter_C_DoBindZiplineEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.DoBindSprintEvents
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::DoBindSprintEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DoBindSprintEvents");

	AMainCharacter_C_DoBindSprintEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.DoBindDodgeRollEvents
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::DoBindDodgeRollEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DoBindDodgeRollEvents");

	AMainCharacter_C_DoBindDodgeRollEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.DetermineKnockbackFacing
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                bpp__HitDirection__pf          (Parm, ZeroConstructor, IsPlainOldData)
// EHitEnum*                      bpp__SideHit__pf               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                bpp__ActorRotation__pf         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::DetermineKnockbackFacing(struct FVector* bpp__HitDirection__pf, EHitEnum* bpp__SideHit__pf, struct FRotator* bpp__ActorRotation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DetermineKnockbackFacing");

	AMainCharacter_C_DetermineKnockbackFacing_Params params;
	params.bpp__HitDirection__pf = bpp__HitDirection__pf;
	params.bpp__SideHit__pf = bpp__SideHit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ActorRotation__pf != nullptr)
		*bpp__ActorRotation__pf = params.bpp__ActorRotation__pf;
}


// Function MainCharacter.MainCharacter_C.DetachSkydiveParticle
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::DetachSkydiveParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DetachSkydiveParticle");

	AMainCharacter_C_DetachSkydiveParticle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.DestructibleSpeedGateOverlappedEvent
// (Native, Event, Public, HasDefaults)
// Parameters:
// struct FVector*                bpp__BreakingLocation__pf      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                bpp__BreakingDirection__pf     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                bpp__BreakingNormal__pf        (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::DestructibleSpeedGateOverlappedEvent(struct FVector* bpp__BreakingLocation__pf, struct FVector* bpp__BreakingDirection__pf, struct FVector* bpp__BreakingNormal__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DestructibleSpeedGateOverlappedEvent");

	AMainCharacter_C_DestructibleSpeedGateOverlappedEvent_Params params;
	params.bpp__BreakingLocation__pf = bpp__BreakingLocation__pf;
	params.bpp__BreakingDirection__pf = bpp__BreakingDirection__pf;
	params.bpp__BreakingNormal__pf = bpp__BreakingNormal__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.CheckFlashBangOnViewTargetChange
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::CheckFlashBangOnViewTargetChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.CheckFlashBangOnViewTargetChange");

	AMainCharacter_C_CheckFlashBangOnViewTargetChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__UpdateFunc
// (Native, Public)

void AMainCharacter_C::Camera_Boom_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Camera Boom Timeline__UpdateFunc");

	AMainCharacter_C_Camera_Boom_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To Main Camera__EventFunc
// (Native, Public)

void AMainCharacter_C::Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To Main Camera__EventFunc");

	AMainCharacter_C_Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To ADS Camera__EventFunc
// (Native, Public)

void AMainCharacter_C::Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To ADS Camera__EventFunc");

	AMainCharacter_C_Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__FinishedFunc
// (Native, Public)

void AMainCharacter_C::Camera_Boom_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Camera Boom Timeline__FinishedFunc");

	AMainCharacter_C_Camera_Boom_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.CameraDodgeRoll__UpdateFunc
// (Native, Public)

void AMainCharacter_C::CameraDodgeRoll__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.CameraDodgeRoll__UpdateFunc");

	AMainCharacter_C_CameraDodgeRoll__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.CameraDodgeRoll__FinishedFunc
// (Native, Public)

void AMainCharacter_C::CameraDodgeRoll__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.CameraDodgeRoll__FinishedFunc");

	AMainCharacter_C_CameraDodgeRoll__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.CacheRagdollPelvisLocation
// (Net, Native, Event, Public, NetServer, BlueprintCallable)

void AMainCharacter_C::CacheRagdollPelvisLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.CacheRagdollPelvisLocation");

	AMainCharacter_C_CacheRagdollPelvisLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.BlueprintOnStopSwimming
// (Native, Event, Public)

void AMainCharacter_C::BlueprintOnStopSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.BlueprintOnStopSwimming");

	AMainCharacter_C_BlueprintOnStopSwimming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.BlueprintOnStartSwimming
// (Native, Event, Public)

void AMainCharacter_C::BlueprintOnStartSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.BlueprintOnStartSwimming");

	AMainCharacter_C_BlueprintOnStartSwimming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.BlueprintHandleDeath
// (Native, Event, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMainCharacter_C::BlueprintHandleDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.BlueprintHandleDeath");

	AMainCharacter_C_BlueprintHandleDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainCharacter.MainCharacter_C.Audio_Init
// (Native, Public, BlueprintCallable)

void AMainCharacter_C::Audio_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Audio_Init");

	AMainCharacter_C_Audio_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacter.MainCharacter_C.ApplyLastHitImpulse
// (Native, Event, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__UpdateTargetRotation__pf  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__AffectCapsule__pf         (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::ApplyLastHitImpulse(bool* bpp__UpdateTargetRotation__pf, bool* bpp__AffectCapsule__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ApplyLastHitImpulse");

	AMainCharacter_C_ApplyLastHitImpulse_Params params;
	params.bpp__UpdateTargetRotation__pf = bpp__UpdateTargetRotation__pf;
	params.bpp__AffectCapsule__pf = bpp__AffectCapsule__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.PlayerReviveDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSPlayerState**         bpp__Revivee__pf               (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         bpp__Reviver__pf               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__ExpBonus__pf              (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::PlayerReviveDelegate__DelegateSignature(class AKSPlayerState** bpp__Revivee__pf, class AKSPlayerState** bpp__Reviver__pf, int* bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.PlayerReviveDelegate__DelegateSignature");

	AMainCharacter_C_PlayerReviveDelegate__DelegateSignature_Params params;
	params.bpp__Revivee__pf = bpp__Revivee__pf;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.PlayerDownInfo__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FCombatEventInfo*       bpp__EventInfo__pf             (Parm)
// int*                           bpp__ExpBonus__pf              (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::PlayerDownInfo__DelegateSignature(struct FCombatEventInfo* bpp__EventInfo__pf, int* bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.PlayerDownInfo__DelegateSignature");

	AMainCharacter_C_PlayerDownInfo__DelegateSignature_Params params;
	params.bpp__EventInfo__pf = bpp__EventInfo__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.PlayerDeathInfo__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FCombatEventInfo*       bpp__EventInfo__pf             (Parm)

void AMainCharacter_C::PlayerDeathInfo__DelegateSignature(struct FCombatEventInfo* bpp__EventInfo__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.PlayerDeathInfo__DelegateSignature");

	AMainCharacter_C_PlayerDeathInfo__DelegateSignature_Params params;
	params.bpp__EventInfo__pf = bpp__EventInfo__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.OnSprintChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool*                          bpp__IsSprinting__pf           (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnSprintChanged__DelegateSignature(bool* bpp__IsSprinting__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnSprintChanged__DelegateSignature");

	AMainCharacter_C_OnSprintChanged__DelegateSignature_Params params;
	params.bpp__IsSprinting__pf = bpp__IsSprinting__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.OnShoulderSwapChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSCharacter**           bpp__Character__pf             (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnShoulderSwapChanged__DelegateSignature(class AKSCharacter** bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnShoulderSwapChanged__DelegateSignature");

	AMainCharacter_C_OnShoulderSwapChanged__DelegateSignature_Params params;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.OnPowerSlideChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool*                          bpp__IsPowerSliding__pf        (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnPowerSlideChanged__DelegateSignature(bool* bpp__IsPowerSliding__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnPowerSlideChanged__DelegateSignature");

	AMainCharacter_C_OnPowerSlideChanged__DelegateSignature_Params params;
	params.bpp__IsPowerSliding__pf = bpp__IsPowerSliding__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.OnPlayerStateChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class APlayerState**           bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnPlayerStateChanged__DelegateSignature(class APlayerState** bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnPlayerStateChanged__DelegateSignature");

	AMainCharacter_C_OnPlayerStateChanged__DelegateSignature_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.OnHealthChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSCharacterBase**       bpp__Character__pf             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnHealthChanged__DelegateSignature(class AKSCharacterBase** bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnHealthChanged__DelegateSignature");

	AMainCharacter_C_OnHealthChanged__DelegateSignature_Params params;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.OnGoDown__DelegateSignature
// (Public, Delegate)

void AMainCharacter_C::OnGoDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnGoDown__DelegateSignature");

	AMainCharacter_C_OnGoDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.OnEndZipline__DelegateSignature
// (Public, Delegate)

void AMainCharacter_C::OnEndZipline__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnEndZipline__DelegateSignature");

	AMainCharacter_C_OnEndZipline__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.OnDodgeRollChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool*                          bpp__IsDodgeRolling__pf        (Parm, ZeroConstructor, IsPlainOldData)

void AMainCharacter_C::OnDodgeRollChanged__DelegateSignature(bool* bpp__IsDodgeRolling__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnDodgeRollChanged__DelegateSignature");

	AMainCharacter_C_OnDodgeRollChanged__DelegateSignature_Params params;
	params.bpp__IsDodgeRolling__pf = bpp__IsDodgeRolling__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MainCharacter.MainCharacter_C.OnBeginZipline__DelegateSignature
// (Public, Delegate)

void AMainCharacter_C::OnBeginZipline__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnBeginZipline__DelegateSignature");

	AMainCharacter_C_OnBeginZipline__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
