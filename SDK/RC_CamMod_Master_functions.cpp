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

// Function CamMod_Master.CamMod_Master_C.OnCamModFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UCamMod_Master_C::OnCamModFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.OnCamModFinished");

	UCamMod_Master_C_OnCamModFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_Master.CamMod_Master_C.PlayTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void UCamMod_Master_C::PlayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.PlayTimeline");

	UCamMod_Master_C_PlayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_Master.CamMod_Master_C.ShouldModifyCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCamMod_Master_C::ShouldModifyCamera(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.ShouldModifyCamera");

	UCamMod_Master_C_ShouldModifyCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function CamMod_Master.CamMod_Master_C.UpdateValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               InRotation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InFOV                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCamMod_Master_C::UpdateValues(struct FVector* InLocation, struct FRotator* InRotation, float* InFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.UpdateValues");

	UCamMod_Master_C_UpdateValues_Params params;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.InFOV = InFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_Master.CamMod_Master_C.GetKSCharacterData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AKSCharacter*            KSCharacter                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UKSCharacterMovementComponent* MovementComponent              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AKSCameraManager_C*      Camera_Manager                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCamMod_Master_C::GetKSCharacterData(bool* Success, class AKSCharacter** KSCharacter, class UKSCharacterMovementComponent** MovementComponent, class AKSCameraManager_C** Camera_Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.GetKSCharacterData");

	UCamMod_Master_C_GetKSCharacterData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (KSCharacter != nullptr)
		*KSCharacter = params.KSCharacter;
	if (MovementComponent != nullptr)
		*MovementComponent = params.MovementComponent;
	if (Camera_Manager != nullptr)
		*Camera_Manager = params.Camera_Manager;
}


// Function CamMod_Master.CamMod_Master_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ViewLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               ViewRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FOV                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewViewLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewViewRotation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NewFOV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCamMod_Master_C::BlueprintModifyCamera(float* DeltaTime, struct FVector* ViewLocation, struct FRotator* ViewRotation, float* FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.BlueprintModifyCamera");

	UCamMod_Master_C_BlueprintModifyCamera_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewLocation = ViewLocation;
	params.ViewRotation = ViewRotation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewViewLocation != nullptr)
		*NewViewLocation = params.NewViewLocation;
	if (NewViewRotation != nullptr)
		*NewViewRotation = params.NewViewRotation;
	if (NewFOV != nullptr)
		*NewFOV = params.NewFOV;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
