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

// Function KSCameraManager.KSCameraManager_C.GetMantleHeightFromKSChar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NoMantleCamera                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKSCameraManager_C::GetMantleHeightFromKSChar(bool* NoMantleCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.GetMantleHeightFromKSChar");

	AKSCameraManager_C_GetMantleHeightFromKSChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NoMantleCamera != nullptr)
		*NoMantleCamera = params.NoMantleCamera;
}


// Function KSCameraManager.KSCameraManager_C.NotifyCamModFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Modifier_Class                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKSCameraManager_C::NotifyCamModFinished(class UClass** Modifier_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.NotifyCamModFinished");

	AKSCameraManager_C_NotifyCamModFinished_Params params;
	params.Modifier_Class = Modifier_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.UpdateCamModValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Modifier_Class                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                In_Location                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                In_Rotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         In_FOV                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKSCameraManager_C::UpdateCamModValues(class UClass** Modifier_Class, struct FVector* In_Location, struct FVector* In_Rotation, float* In_FOV, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.UpdateCamModValues");

	AKSCameraManager_C_UpdateCamModValues_Params params;
	params.Modifier_Class = Modifier_Class;
	params.In_Location = In_Location;
	params.In_Rotation = In_Rotation;
	params.In_FOV = In_FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function KSCameraManager.KSCameraManager_C.JumpStart__FinishedFunc
// (BlueprintEvent)

void AKSCameraManager_C::JumpStart__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.JumpStart__FinishedFunc");

	AKSCameraManager_C_JumpStart__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.JumpStart__UpdateFunc
// (BlueprintEvent)

void AKSCameraManager_C::JumpStart__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.JumpStart__UpdateFunc");

	AKSCameraManager_C_JumpStart__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.JumpLanding__FinishedFunc
// (BlueprintEvent)

void AKSCameraManager_C::JumpLanding__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.JumpLanding__FinishedFunc");

	AKSCameraManager_C_JumpLanding__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.JumpLanding__UpdateFunc
// (BlueprintEvent)

void AKSCameraManager_C::JumpLanding__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.JumpLanding__UpdateFunc");

	AKSCameraManager_C_JumpLanding__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Tall__FinishedFunc
// (BlueprintEvent)

void AKSCameraManager_C::Mantle_Tall__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Mantle_Tall__FinishedFunc");

	AKSCameraManager_C_Mantle_Tall__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Tall__UpdateFunc
// (BlueprintEvent)

void AKSCameraManager_C::Mantle_Tall__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Mantle_Tall__UpdateFunc");

	AKSCameraManager_C_Mantle_Tall__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Medium__FinishedFunc
// (BlueprintEvent)

void AKSCameraManager_C::Mantle_Medium__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Mantle_Medium__FinishedFunc");

	AKSCameraManager_C_Mantle_Medium__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Medium__UpdateFunc
// (BlueprintEvent)

void AKSCameraManager_C::Mantle_Medium__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Mantle_Medium__UpdateFunc");

	AKSCameraManager_C_Mantle_Medium__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Short__FinishedFunc
// (BlueprintEvent)

void AKSCameraManager_C::Mantle_Short__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Mantle_Short__FinishedFunc");

	AKSCameraManager_C_Mantle_Short__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Short__UpdateFunc
// (BlueprintEvent)

void AKSCameraManager_C::Mantle_Short__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Mantle_Short__UpdateFunc");

	AKSCameraManager_C_Mantle_Short__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Vault_Tall__FinishedFunc
// (BlueprintEvent)

void AKSCameraManager_C::Vault_Tall__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Vault_Tall__FinishedFunc");

	AKSCameraManager_C_Vault_Tall__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Vault_Tall__UpdateFunc
// (BlueprintEvent)

void AKSCameraManager_C::Vault_Tall__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Vault_Tall__UpdateFunc");

	AKSCameraManager_C_Vault_Tall__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Vault_Medium__FinishedFunc
// (BlueprintEvent)

void AKSCameraManager_C::Vault_Medium__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Vault_Medium__FinishedFunc");

	AKSCameraManager_C_Vault_Medium__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Vault_Medium__UpdateFunc
// (BlueprintEvent)

void AKSCameraManager_C::Vault_Medium__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Vault_Medium__UpdateFunc");

	AKSCameraManager_C_Vault_Medium__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Vault_Short__FinishedFunc
// (BlueprintEvent)

void AKSCameraManager_C::Vault_Short__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Vault_Short__FinishedFunc");

	AKSCameraManager_C_Vault_Short__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Vault_Short__UpdateFunc
// (BlueprintEvent)

void AKSCameraManager_C::Vault_Short__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Vault_Short__UpdateFunc");

	AKSCameraManager_C_Vault_Short__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__FinishedFunc
// (BlueprintEvent)

void AKSCameraManager_C::Vault_Medium_Running__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__FinishedFunc");

	AKSCameraManager_C_Vault_Medium_Running__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__UpdateFunc
// (BlueprintEvent)

void AKSCameraManager_C::Vault_Medium_Running__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__UpdateFunc");

	AKSCameraManager_C_Vault_Medium_Running__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Play Jump Start
// (BlueprintCallable, BlueprintEvent)

void AKSCameraManager_C::Play_Jump_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Play Jump Start");

	AKSCameraManager_C_Play_Jump_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.PlayJumpLanding
// (BlueprintCallable, BlueprintEvent)

void AKSCameraManager_C::PlayJumpLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.PlayJumpLanding");

	AKSCameraManager_C_PlayJumpLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.Play Mantle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Mantle_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKSCameraManager_C::Play_Mantle(int* Mantle_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.Play Mantle");

	AKSCameraManager_C_Play_Mantle_Params params;
	params.Mantle_Index = Mantle_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KSCameraManager.KSCameraManager_C.ExecuteUbergraph_KSCameraManager
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKSCameraManager_C::ExecuteUbergraph_KSCameraManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KSCameraManager.KSCameraManager_C.ExecuteUbergraph_KSCameraManager");

	AKSCameraManager_C_ExecuteUbergraph_KSCameraManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
