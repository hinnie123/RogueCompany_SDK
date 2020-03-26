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

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetTableRowNameForHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHitResult*             Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName*                  RowNamePrefix                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetTableRowNameForHit(struct FHitResult* Hit, struct FName* RowNamePrefix, struct FName* RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetTableRowNameForHit");

	UMaster_WeaponComponent_C_GetTableRowNameForHit_Params params;
	params.Hit = Hit;
	params.RowNamePrefix = RowNamePrefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RowName != nullptr)
		*RowName = params.RowName;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Lunge Montage
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Player_3P_Lunge_Montage(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Lunge Montage");

	UMaster_WeaponComponent_C_Get_Player_3P_Lunge_Montage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Reload Playrate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage**           Anim_Montage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scaled_Playrate                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Scaled_Reload_Playrate(class UAnimMontage** Anim_Montage, float* Scaled_Playrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Reload Playrate");

	UMaster_WeaponComponent_C_Get_Scaled_Reload_Playrate_Params params;
	params.Anim_Montage = Anim_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scaled_Playrate != nullptr)
		*Scaled_Playrate = params.Scaled_Playrate;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Post Reload Playrate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage**           Anim_Montage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scaled_Playrate                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Scaled_Post_Reload_Playrate(class UAnimMontage** Anim_Montage, float* Scaled_Playrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Post Reload Playrate");

	UMaster_WeaponComponent_C_Get_Scaled_Post_Reload_Playrate_Params params;
	params.Anim_Montage = Anim_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scaled_Playrate != nullptr)
		*Scaled_Playrate = params.Scaled_Playrate;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Post Reload Weapon Section Time
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage**           Anim_Montage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Post_Reload_Position           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Post_Reload_Weapon_Section_Time(class UAnimMontage** Anim_Montage, float* Post_Reload_Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Post Reload Weapon Section Time");

	UMaster_WeaponComponent_C_Get_Post_Reload_Weapon_Section_Time_Params params;
	params.Anim_Montage = Anim_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Post_Reload_Position != nullptr)
		*Post_Reload_Position = params.Post_Reload_Position;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.End Reload Weapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Abort_Reload_Animation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::End_Reload_Weapon(bool* Abort_Reload_Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.End Reload Weapon");

	UMaster_WeaponComponent_C_End_Reload_Weapon_Params params;
	params.Abort_Reload_Animation = Abort_Reload_Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Multistage Reload Playrate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage**           Anim_Montage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scaled_Playrate                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Scaled_Multistage_Reload_Playrate(class UAnimMontage** Anim_Montage, float* Scaled_Playrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Multistage Reload Playrate");

	UMaster_WeaponComponent_C_Get_Scaled_Multistage_Reload_Playrate_Params params;
	params.Anim_Montage = Anim_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scaled_Playrate != nullptr)
		*Scaled_Playrate = params.Scaled_Playrate;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Multistage Reload Time
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Reload_Montage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Quick_Reload_Montage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Selected_Montage               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Is_QuickReload                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Calculate_Multistage_Reload_Time(class UAnimMontage** Reload_Montage, class UAnimMontage** Quick_Reload_Montage, float* PlayRate, class UAnimMontage** Selected_Montage, bool* Is_QuickReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Multistage Reload Time");

	UMaster_WeaponComponent_C_Calculate_Multistage_Reload_Time_Params params;
	params.Reload_Montage = Reload_Montage;
	params.Quick_Reload_Montage = Quick_Reload_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayRate != nullptr)
		*PlayRate = params.PlayRate;
	if (Selected_Montage != nullptr)
		*Selected_Montage = params.Selected_Montage;
	if (Is_QuickReload != nullptr)
		*Is_QuickReload = params.Is_QuickReload;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Cooldown Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Reload_Cooldown_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Cooldown Weapon");

	UMaster_WeaponComponent_C_Reload_Cooldown_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldPlayFireAnim1P
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Play_1P_Fire                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ShouldPlayFireAnim1P(bool* Play_1P_Fire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldPlayFireAnim1P");

	UMaster_WeaponComponent_C_ShouldPlayFireAnim1P_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Play_1P_Fire != nullptr)
		*Play_1P_Fire = params.Play_1P_Fire;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Laser Sight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnableSkeletalMeshComponent** MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMaster_WeaponComponent_C::Fixup_Laser_Sight(class USkinnableSkeletalMeshComponent** MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Laser Sight");

	UMaster_WeaponComponent_C_Fixup_Laser_Sight_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 1P Fire Montage
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Player_1P_Fire_Montage(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 1P Fire Montage");

	UMaster_WeaponComponent_C_Get_Player_1P_Fire_Montage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload MultiStage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Play_Rate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Selected_Montage               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Reload_MultiStage(float* Play_Rate, class UAnimMontage** Selected_Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload MultiStage");

	UMaster_WeaponComponent_C_Play_Reload_MultiStage_Params params;
	params.Play_Rate = Play_Rate;
	params.Selected_Montage = Selected_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Base
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Play_Rate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Selected_Montage               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Reload_Base(float* Play_Rate, class UAnimMontage** Selected_Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Base");

	UMaster_WeaponComponent_C_Play_Reload_Base_Params params;
	params.Play_Rate = Play_Rate;
	params.Selected_Montage = Selected_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Weapon Reload animation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Is_Quick_Reload                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Weapon_Reload_animation(float* PlayRate, bool* Is_Quick_Reload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Weapon Reload animation");

	UMaster_WeaponComponent_C_Play_Weapon_Reload_animation_Params params;
	params.PlayRate = PlayRate;
	params.Is_Quick_Reload = Is_Quick_Reload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Logic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Reload_Montage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           QuickReload_Montage            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Is_Multi_Stage_Reload_         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Reload_Logic(class UAnimMontage** Reload_Montage, class UAnimMontage** QuickReload_Montage, bool* Is_Multi_Stage_Reload_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Logic");

	UMaster_WeaponComponent_C_Play_Reload_Logic_Params params;
	params.Reload_Montage = Reload_Montage;
	params.QuickReload_Montage = QuickReload_Montage;
	params.Is_Multi_Stage_Reload_ = Is_Multi_Stage_Reload_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Post Reload
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Play_Post_Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Post Reload");

	UMaster_WeaponComponent_C_Play_Post_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.AudioOnCooldown
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::AudioOnCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.AudioOnCooldown");

	UMaster_WeaponComponent_C_AudioOnCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Reload Time
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Reload_Montage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Quick_Reload_Montage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Selected_Montage               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Is_QuickReload                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Calculate_Reload_Time(class UAnimMontage** Reload_Montage, class UAnimMontage** Quick_Reload_Montage, float* PlayRate, class UAnimMontage** Selected_Montage, bool* Is_QuickReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Reload Time");

	UMaster_WeaponComponent_C_Calculate_Reload_Time_Params params;
	params.Reload_Montage = Reload_Montage;
	params.Quick_Reload_Montage = Quick_Reload_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayRate != nullptr)
		*PlayRate = params.PlayRate;
	if (Selected_Montage != nullptr)
		*Selected_Montage = params.Selected_Montage;
	if (Is_QuickReload != nullptr)
		*Is_QuickReload = params.Is_QuickReload;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracers Simple
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      Hits                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                Trace_End                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Spawn_Tracers_Simple(struct FVector* Trace_End, TArray<struct FHitResult>* Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracers Simple");

	UMaster_WeaponComponent_C_Spawn_Tracers_Simple_Params params;
	params.Trace_End = Trace_End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Filter Cosmetic Hit Results
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      Trace_Hit_Results              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>      Filtered_Hit_Results           (Parm, OutParm, ZeroConstructor)

void UMaster_WeaponComponent_C::Filter_Cosmetic_Hit_Results(TArray<struct FHitResult>* Trace_Hit_Results, TArray<struct FHitResult>* Filtered_Hit_Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Filter Cosmetic Hit Results");

	UMaster_WeaponComponent_C_Filter_Cosmetic_Hit_Results_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Trace_Hit_Results != nullptr)
		*Trace_Hit_Results = params.Trace_Hit_Results;
	if (Filtered_Hit_Results != nullptr)
		*Filtered_Hit_Results = params.Filtered_Hit_Results;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnDecals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      Hits                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMaster_WeaponComponent_C::SpawnDecals(TArray<struct FHitResult>* Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnDecals");

	UMaster_WeaponComponent_C_SpawnDecals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnSpangs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      Hits                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMaster_WeaponComponent_C::SpawnSpangs(TArray<struct FHitResult>* Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnSpangs");

	UMaster_WeaponComponent_C_SpawnSpangs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Camera Shakes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          LocalOnly                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Primary_Shake                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 HiFreq_Shake                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Fire_Camera_Shakes(bool* LocalOnly, class UClass** Primary_Shake, class UClass** HiFreq_Shake)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Camera Shakes");

	UMaster_WeaponComponent_C_Play_Fire_Camera_Shakes_Params params;
	params.LocalOnly = LocalOnly;
	params.Primary_Shake = Primary_Shake;
	params.HiFreq_Shake = HiFreq_Shake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Montage Jump To Section
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMaster_WeaponComponent_C::Fire_Montage_Jump_To_Section(struct FString* Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Montage Jump To Section");

	UMaster_WeaponComponent_C_Fire_Montage_Jump_To_Section_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.TryDisableCameraModifier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Camera_Modifier                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Player_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::TryDisableCameraModifier(class UClass** Camera_Modifier, int* Player_Index, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.TryDisableCameraModifier");

	UMaster_WeaponComponent_C_TryDisableCameraModifier_Params params;
	params.Camera_Modifier = Camera_Modifier;
	params.Player_Index = Player_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.EnableOrAddCameraModifier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Modifier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraModifier*         Modifier_Object                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::EnableOrAddCameraModifier(class UClass** Modifier, int* PlayerIndex, class UCameraModifier** Modifier_Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.EnableOrAddCameraModifier");

	UMaster_WeaponComponent_C_EnableOrAddCameraModifier_Params params;
	params.Modifier = Modifier;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Modifier_Object != nullptr)
		*Modifier_Object = params.Modifier_Object;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Pre Fire Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Pre_Fire_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Pre Fire Weapon");

	UMaster_WeaponComponent_C_Pre_Fire_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Tail Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAkCallbackType*               Callback_Type                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkCallbackInfo**        Callback_Info                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Fire_Tail_Sound(EAkCallbackType* Callback_Type, class UAkCallbackInfo** Callback_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Tail Sound");

	UMaster_WeaponComponent_C_Play_Fire_Tail_Sound_Params params;
	params.Callback_Type = Callback_Type;
	params.Callback_Info = Callback_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayInvalidFireSound
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::PlayInvalidFireSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayInvalidFireSound");

	UMaster_WeaponComponent_C_PlayInvalidFireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.CanUseCombatState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ECombatState*                  TestState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMaster_WeaponComponent_C::CanUseCombatState(ECombatState* TestState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.CanUseCombatState");

	UMaster_WeaponComponent_C_CanUseCombatState_Params params;
	params.TestState = TestState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Muzzle Flash Emitter and Offset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Set_Muzzle_Flash_Emitter_and_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Set Muzzle Flash Emitter and Offset");

	UMaster_WeaponComponent_C_Set_Muzzle_Flash_Emitter_and_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnTracers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      Hits                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FFullFireRepData> AimData                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMaster_WeaponComponent_C::SpawnTracers(TArray<struct FHitResult>* Hits, TArray<struct FFullFireRepData>* AimData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnTracers");

	UMaster_WeaponComponent_C_SpawnTracers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
	if (AimData != nullptr)
		*AimData = params.AimData;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SyncComputeCosmeticHits
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFullFireRepData*       FireData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FHitResult>      Hits                           (Parm, OutParm, ZeroConstructor)

void UMaster_WeaponComponent_C::SyncComputeCosmeticHits(struct FFullFireRepData* FireData, TArray<struct FHitResult>* Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SyncComputeCosmeticHits");

	UMaster_WeaponComponent_C_SyncComputeCosmeticHits_Params params;
	params.FireData = FireData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.On Character Anim Initialized
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::On_Character_Anim_Initialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.On Character Anim Initialized");

	UMaster_WeaponComponent_C_On_Character_Anim_Initialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Anim Init Callback
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Setup_Character_Anim_Init_Callback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Anim Init Callback");

	UMaster_WeaponComponent_C_Setup_Character_Anim_Init_Callback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Revolver Hammer Strike
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator*               New_Hammer_Strike_Rotator      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Set_Revolver_Hammer_Strike(struct FRotator* New_Hammer_Strike_Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Set Revolver Hammer Strike");

	UMaster_WeaponComponent_C_Set_Revolver_Hammer_Strike_Params params;
	params.New_Hammer_Strike_Rotator = New_Hammer_Strike_Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Scope Scale Alpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         New_Alpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Set_Scope_Scale_Alpha(float* New_Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Set Scope Scale Alpha");

	UMaster_WeaponComponent_C_Set_Scope_Scale_Alpha_Params params;
	params.New_Alpha = New_Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMuzzleSocketName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMaster_WeaponComponent_C::GetMuzzleSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetMuzzleSocketName");

	UMaster_WeaponComponent_C_GetMuzzleSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetScopeSocketName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMaster_WeaponComponent_C::GetScopeSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetScopeSocketName");

	UMaster_WeaponComponent_C_GetScopeSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldBroadcastWeaponStateChange
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FKSWeaponDataUpdateContainer* OldState                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKSWeaponDataUpdateContainer* NewState                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bReliable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMaster_WeaponComponent_C::ShouldBroadcastWeaponStateChange(struct FKSWeaponDataUpdateContainer* OldState, struct FKSWeaponDataUpdateContainer* NewState, bool* bReliable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldBroadcastWeaponStateChange");

	UMaster_WeaponComponent_C_ShouldBroadcastWeaponStateChange_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReliable != nullptr)
		*bReliable = params.bReliable;

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.CreateWeaponSkeletalMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponSkeletalMeshComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSWeaponSkeletalMeshComponent* UMaster_WeaponComponent_C::CreateWeaponSkeletalMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.CreateWeaponSkeletalMeshComponent");

	UMaster_WeaponComponent_C_CreateWeaponSkeletalMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init On Weapon Mesh
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnableSkeletalMeshComponent** SkelComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimInstance**          AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Anim_Init_On_Weapon_Mesh(class USkinnableSkeletalMeshComponent** SkelComp, class UAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init On Weapon Mesh");

	UMaster_WeaponComponent_C_Anim_Init_On_Weapon_Mesh_Params params;
	params.SkelComp = SkelComp;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Fire Montage
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Player_3P_Fire_Montage(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Fire Montage");

	UMaster_WeaponComponent_C_Get_Player_3P_Fire_Montage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Ancillary Mesh Scale Set
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Ancillary_Mesh_Scale_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Ancillary Mesh Scale Set");

	UMaster_WeaponComponent_C_Ancillary_Mesh_Scale_Set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Casing Sound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Play_Casing_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Casing Sound");

	UMaster_WeaponComponent_C_Play_Casing_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Post Fire Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Post_Fire_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Post Fire Weapon");

	UMaster_WeaponComponent_C_Post_Fire_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::DropMagInternal(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagInternal");

	UMaster_WeaponComponent_C_DropMagInternal_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.IsDropMeshValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMaster_WeaponComponent_C::IsDropMeshValid(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.IsDropMeshValid");

	UMaster_WeaponComponent_C_IsDropMeshValid_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SetupMultiMagArrays
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::SetupMultiMagArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SetupMultiMagArrays");

	UMaster_WeaponComponent_C_SetupMultiMagArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropVelocity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldVelocity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetDropVelocity(int* Index, struct FVector* WorldVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropVelocity");

	UMaster_WeaponComponent_C_GetDropVelocity_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldVelocity != nullptr)
		*WorldVelocity = params.WorldVelocity;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkelMesh                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             StaticMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetDropMesh(int* Index, class USkeletalMesh** SkelMesh, class UStaticMesh** StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropMesh");

	UMaster_WeaponComponent_C_GetDropMesh_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkelMesh != nullptr)
		*SkelMesh = params.SkelMesh;
	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WorldRotation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetMagDropBoneRotation(int* Index, struct FRotator* WorldRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneRotation");

	UMaster_WeaponComponent_C_GetMagDropBoneRotation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldRotation != nullptr)
		*WorldRotation = params.WorldRotation;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateMagDropBoneVelocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::UpdateMagDropBoneVelocity(float* DeltaTime, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateMagDropBoneVelocity");

	UMaster_WeaponComponent_C_UpdateMagDropBoneVelocity_Params params;
	params.DeltaTime = DeltaTime;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetMagDropBoneLocation(int* Index, struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneLocation");

	UMaster_WeaponComponent_C_GetMagDropBoneLocation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayFireSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAimData*               InputPin                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMaster_WeaponComponent_C::PlayFireSound(struct FAimData* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayFireSound");

	UMaster_WeaponComponent_C_PlayFireSound_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayBulletNearMissSound
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                In_Trace_Start                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                In_Trace_End                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      Hits                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMaster_WeaponComponent_C::PlayBulletNearMissSound(struct FVector* In_Trace_Start, struct FVector* In_Trace_End, TArray<struct FHitResult>* Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayBulletNearMissSound");

	UMaster_WeaponComponent_C_PlayBulletNearMissSound_Params params;
	params.In_Trace_Start = In_Trace_Start;
	params.In_Trace_End = In_Trace_End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.BuildupWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::BuildupWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.BuildupWeapon");

	UMaster_WeaponComponent_C_BuildupWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.IdleWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::IdleWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.IdleWeapon");

	UMaster_WeaponComponent_C_IdleWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.DetermineMagSize
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::DetermineMagSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.DetermineMagSize");

	UMaster_WeaponComponent_C_DetermineMagSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 3p Fire Section
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   _3p_Fire_Section               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Character_3p_Fire_Section(struct FName* _3p_Fire_Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 3p Fire Section");

	UMaster_WeaponComponent_C_Get_Character_3p_Fire_Section_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_3p_Fire_Section != nullptr)
		*_3p_Fire_Section = params._3p_Fire_Section;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Attach Point
// (Protected, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Fixup_Attach_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Attach Point");

	UMaster_WeaponComponent_C_Fixup_Attach_Point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetPercentRemainingAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetPercentRemainingAmmo(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetPercentRemainingAmmo");

	UMaster_WeaponComponent_C_GetPercentRemainingAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayEmptyFireAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::PlayEmptyFireAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayEmptyFireAudio");

	UMaster_WeaponComponent_C_PlayEmptyFireAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Bullet Impact SFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Bullet_Impact_SFX(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Bullet Impact SFX");

	UMaster_WeaponComponent_C_Play_Bullet_Impact_SFX_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Spangs and Decals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFullFireRepData*       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      Hits                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FFullFireRepData        Out_Data                       (Parm, OutParm)

void UMaster_WeaponComponent_C::Spawn_Spangs_and_Decals(struct FFullFireRepData* Data, TArray<struct FHitResult>* Hits, struct FFullFireRepData* Out_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Spangs and Decals");

	UMaster_WeaponComponent_C_Spawn_Spangs_and_Decals_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
	if (Out_Data != nullptr)
		*Out_Data = params.Out_Data;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 1p Fire Section
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   _1p_Fire_Section               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Character_1p_Fire_Section(struct FName* _1p_Fire_Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 1p Fire Section");

	UMaster_WeaponComponent_C_Get_Character_1p_Fire_Section_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_1p_Fire_Section != nullptr)
		*_1p_Fire_Section = params._1p_Fire_Section;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Tracer Start Point
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Start_Point                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Tracer_Start_Point(struct FVector* Start_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Tracer Start Point");

	UMaster_WeaponComponent_C_Get_Tracer_Start_Point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start_Point != nullptr)
		*Start_Point = params.Start_Point;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Prepare Next Tracer Spawn
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Prepare_Next_Tracer_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Prepare Next Tracer Spawn");

	UMaster_WeaponComponent_C_Prepare_Next_Tracer_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Can Spawn Tracer Now
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Can_Spawn__Tracer              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Can_Spawn_Tracer_Now(bool* Can_Spawn__Tracer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Can Spawn Tracer Now");

	UMaster_WeaponComponent_C_Can_Spawn_Tracer_Now_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Spawn__Tracer != nullptr)
		*Can_Spawn__Tracer = params.Can_Spawn__Tracer;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                EndPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Spawn_Tracer(struct FVector* EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracer");

	UMaster_WeaponComponent_C_Spawn_Tracer_Params params;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Expected Aim Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAimData                AimData                        (Parm, OutParm)

void UMaster_WeaponComponent_C::Get_Expected_Aim_Data(struct FAimData* AimData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Expected Aim Data");

	UMaster_WeaponComponent_C_Get_Expected_Aim_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimData != nullptr)
		*AimData = params.AimData;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Decal Material
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHitResult*             Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitDecalInfo           Decal_Info                     (Parm, OutParm)

void UMaster_WeaponComponent_C::Get_Decal_Material(struct FHitResult* Hit, struct FHitDecalInfo* Decal_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Decal Material");

	UMaster_WeaponComponent_C_Get_Decal_Material_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal_Info != nullptr)
		*Decal_Info = params.Decal_Info;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Spang Particle System
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHitResult*             Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UParticleSystem*         Spang_To_Use                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PlayOnHitCharacter             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Spang_Particle_System(struct FHitResult* Hit, class UParticleSystem** Spang_To_Use, bool* PlayOnHitCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Spang Particle System");

	UMaster_WeaponComponent_C_Get_Spang_Particle_System_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spang_To_Use != nullptr)
		*Spang_To_Use = params.Spang_To_Use;
	if (PlayOnHitCharacter != nullptr)
		*PlayOnHitCharacter = params.PlayOnHitCharacter;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Apply Spang From Hit Result
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMaster_WeaponComponent_C::Apply_Spang_From_Hit_Result(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Apply Spang From Hit Result");

	UMaster_WeaponComponent_C_Apply_Spang_From_Hit_Result_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character Anim Instance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UKSCharacterAnimInst*    Anim_Inst                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Character_Anim_Instance(class UKSCharacterAnimInst** Anim_Inst)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character Anim Instance");

	UMaster_WeaponComponent_C_Get_Character_Anim_Instance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim_Inst != nullptr)
		*Anim_Inst = params.Anim_Inst;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Active Socket
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Attach_Weapon_To_Active_Socket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Active Socket");

	UMaster_WeaponComponent_C_Attach_Weapon_To_Active_Socket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon Holster Socket
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Attach_Weapon_Holster_Socket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon Holster Socket");

	UMaster_WeaponComponent_C_Attach_Weapon_Holster_Socket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Reload_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Weapon");

	UMaster_WeaponComponent_C_Reload_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Retrieve Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Retrieve_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Retrieve Weapon");

	UMaster_WeaponComponent_C_Retrieve_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Weapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFullFireRepData*       Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          PlayNoChainFireMontage         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Fire_Weapon(struct FFullFireRepData* Data, bool* PlayNoChainFireMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Weapon");

	UMaster_WeaponComponent_C_Fire_Weapon_Params params;
	params.Data = Data;
	params.PlayNoChainFireMontage = PlayNoChainFireMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Holster Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Holster_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Holster Weapon");

	UMaster_WeaponComponent_C_Holster_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.AsyncComputeCosmeticHitsAndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFullFireRepData*       Fire_Data                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UMaster_WeaponComponent_C::AsyncComputeCosmeticHitsAndPlay(struct FFullFireRepData* Fire_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.AsyncComputeCosmeticHitsAndPlay");

	UMaster_WeaponComponent_C_AsyncComputeCosmeticHitsAndPlay_Params params;
	params.Fire_Data = Fire_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.On Comestic Trace Complete
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bBlockingHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>*     OutHits                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                end                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMaster_WeaponComponent_C::On_Comestic_Trace_Complete(bool* bBlockingHit, TArray<struct FHitResult>* OutHits, struct FVector* start, struct FVector* end)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.On Comestic Trace Complete");

	UMaster_WeaponComponent_C_On_Comestic_Trace_Complete_Params params;
	params.bBlockingHit = bBlockingHit;
	params.OutHits = OutHits;
	params.start = start;
	params.end = end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Spangs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      Hits                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMaster_WeaponComponent_C::Delay_Spawn_Spangs(TArray<struct FHitResult>* Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Spangs");

	UMaster_WeaponComponent_C_Delay_Spawn_Spangs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Tracers
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>*     Hits                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                Trace_End                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Delay_Spawn_Tracers(TArray<struct FHitResult>* Hits, struct FVector* Trace_End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Tracers");

	UMaster_WeaponComponent_C_Delay_Spawn_Tracers_Params params;
	params.Hits = Hits;
	params.Trace_End = Trace_End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Decals
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>*     Hits                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                end                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Delay_Spawn_Decals(TArray<struct FHitResult>* Hits, struct FVector* start, struct FVector* end)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Decals");

	UMaster_WeaponComponent_C_Delay_Spawn_Decals_Params params;
	params.Hits = Hits;
	params.start = start;
	params.end = end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.On Cosmetic Trace Complete Internal
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Blocking_Hit                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      Out_Hits                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                end                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Allow_Spangs                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Allow_Tracers                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Allow_Decals                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::On_Cosmetic_Trace_Complete_Internal(bool* Blocking_Hit, struct FVector* start, struct FVector* end, bool* Allow_Spangs, bool* Allow_Tracers, bool* Allow_Decals, TArray<struct FHitResult>* Out_Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.On Cosmetic Trace Complete Internal");

	UMaster_WeaponComponent_C_On_Cosmetic_Trace_Complete_Internal_Params params;
	params.Blocking_Hit = Blocking_Hit;
	params.start = start;
	params.end = end;
	params.Allow_Spangs = Allow_Spangs;
	params.Allow_Tracers = Allow_Tracers;
	params.Allow_Decals = Allow_Decals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Hits != nullptr)
		*Out_Hits = params.Out_Hits;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Spangs Delay
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bBlockingHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>*     OutHits                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                end                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMaster_WeaponComponent_C::After_Spawn_Spangs_Delay(bool* bBlockingHit, TArray<struct FHitResult>* OutHits, struct FVector* start, struct FVector* end)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Spangs Delay");

	UMaster_WeaponComponent_C_After_Spawn_Spangs_Delay_Params params;
	params.bBlockingHit = bBlockingHit;
	params.OutHits = OutHits;
	params.start = start;
	params.end = end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Tracers Delay
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bBlockingHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>*     OutHits                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                end                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMaster_WeaponComponent_C::After_Spawn_Tracers_Delay(bool* bBlockingHit, TArray<struct FHitResult>* OutHits, struct FVector* start, struct FVector* end)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Tracers Delay");

	UMaster_WeaponComponent_C_After_Spawn_Tracers_Delay_Params params;
	params.bBlockingHit = bBlockingHit;
	params.OutHits = OutHits;
	params.start = start;
	params.end = end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Decals Delay
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bBlockingHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>*     OutHits                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                end                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMaster_WeaponComponent_C::After_Spawn_Decals_Delay(bool* bBlockingHit, TArray<struct FHitResult>* OutHits, struct FVector* start, struct FVector* end)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Decals Delay");

	UMaster_WeaponComponent_C_After_Spawn_Decals_Delay_Params params;
	params.bBlockingHit = bBlockingHit;
	params.OutHits = OutHits;
	params.start = start;
	params.end = end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ApplyDecalFromHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMaster_WeaponComponent_C::ApplyDecalFromHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ApplyDecalFromHit");

	UMaster_WeaponComponent_C_ApplyDecalFromHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.HandleWeaponFiringClientEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFullFireRepData*       Data                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UMaster_WeaponComponent_C::HandleWeaponFiringClientEffects(struct FFullFireRepData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.HandleWeaponFiringClientEffects");

	UMaster_WeaponComponent_C_HandleWeaponFiringClientEffects_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reset Variables at Start of Firing Instance
// (BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Reset_Variables_at_Start_of_Firing_Instance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reset Variables at Start of Firing Instance");

	UMaster_WeaponComponent_C_Reset_Variables_at_Start_of_Firing_Instance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveTick");

	UMaster_WeaponComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnWeaponStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EWeaponStateNew*               OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnWeaponStateChanged(EWeaponStateNew* OldState, EWeaponStateNew* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnWeaponStateChanged");

	UMaster_WeaponComponent_C_OnWeaponStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnInitialize
// (Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::OnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnInitialize");

	UMaster_WeaponComponent_C_OnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnFireWeaponFull
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFullFireRepData*       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMaster_WeaponComponent_C::OnFireWeaponFull(struct FFullFireRepData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnFireWeaponFull");

	UMaster_WeaponComponent_C_OnFireWeaponFull_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.StartAimDownSights
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::StartAimDownSights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.StartAimDownSights");

	UMaster_WeaponComponent_C_StartAimDownSights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.StopAimDownSights
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::StopAimDownSights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.StopAimDownSights");

	UMaster_WeaponComponent_C_StopAimDownSights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnEmptyFire
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::OnEmptyFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnEmptyFire");

	UMaster_WeaponComponent_C_OnEmptyFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPersistentCosmeticsUpdate
// (Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::BlueprintPersistentCosmeticsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPersistentCosmeticsUpdate");

	UMaster_WeaponComponent_C_BlueprintPersistentCosmeticsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnUnsetAsActivePrimaryWeapon
// (Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::OnUnsetAsActivePrimaryWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnUnsetAsActivePrimaryWeapon");

	UMaster_WeaponComponent_C_OnUnsetAsActivePrimaryWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetAsActivePrimaryWeapon
// (Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::OnSetAsActivePrimaryWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetAsActivePrimaryWeapon");

	UMaster_WeaponComponent_C_OnSetAsActivePrimaryWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPrepareKillCamPlayback
// (Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::BlueprintPrepareKillCamPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPrepareKillCamPlayback");

	UMaster_WeaponComponent_C_BlueprintPrepareKillCamPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Force ADS Scope
// (BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Force_ADS_Scope()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Force ADS Scope");

	UMaster_WeaponComponent_C_Force_ADS_Scope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.CheckKillCamScope
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  ViewPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::CheckKillCamScope(class APawn** ViewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.CheckKillCamScope");

	UMaster_WeaponComponent_C_CheckKillCamScope_Params params;
	params.ViewPawn = ViewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Update Combat State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECombatState*                  NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Update_Combat_State(ECombatState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Update Combat State");

	UMaster_WeaponComponent_C_Update_Combat_State_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnInvalidFire
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::OnInvalidFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnInvalidFire");

	UMaster_WeaponComponent_C_OnInvalidFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.AimDownSightsCheckpoint
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMaster_WeaponComponent_C::AimDownSightsCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.AimDownSightsCheckpoint");

	UMaster_WeaponComponent_C_AimDownSightsCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.CancelReloadCosmetic
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::CancelReloadCosmetic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.CancelReloadCosmetic");

	UMaster_WeaponComponent_C_CancelReloadCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.StartAimOverShoulder
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::StartAimOverShoulder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.StartAimOverShoulder");

	UMaster_WeaponComponent_C_StartAimOverShoulder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.StopAimOverShoulder
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UMaster_WeaponComponent_C::StopAimOverShoulder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.StopAimOverShoulder");

	UMaster_WeaponComponent_C_StopAimOverShoulder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Force Exit ADS Pose
// (BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::Force_Exit_ADS_Pose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Force Exit ADS Pose");

	UMaster_WeaponComponent_C_Force_Exit_ADS_Pose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnActiveMaterialsApplied
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkinnableSkeletalMeshComponent** SkinnableSkelComp              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMaster_WeaponComponent_C::OnActiveMaterialsApplied(class USkinnableSkeletalMeshComponent** SkinnableSkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnActiveMaterialsApplied");

	UMaster_WeaponComponent_C_OnActiveMaterialsApplied_Params params;
	params.SkinnableSkelComp = SkinnableSkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.NotifyStopFireReceived
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMaster_WeaponComponent_C::NotifyStopFireReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.NotifyStopFireReceived");

	UMaster_WeaponComponent_C_NotifyStopFireReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::ForceRetrieveWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveWeapon");

	UMaster_WeaponComponent_C_ForceRetrieveWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceHolsterWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::ForceHolsterWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ForceHolsterWeapon");

	UMaster_WeaponComponent_C_ForceHolsterWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagazine
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMaster_WeaponComponent_C::DropMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagazine");

	UMaster_WeaponComponent_C_DropMagazine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UMaster_WeaponComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveBeginPlay");

	UMaster_WeaponComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveEndPlay");

	UMaster_WeaponComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnKilled_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase**       KillerCharacter                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnKilled_Event_1(class AKSCharacterBase** KillerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnKilled_Event_1");

	UMaster_WeaponComponent_C_OnKilled_Event_1_Params params;
	params.KillerCharacter = KillerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnPossessedBy_Event_1(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy_Event_1");

	UMaster_WeaponComponent_C_OnPossessedBy_Event_1_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent");

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetLobbyState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Lobby_State                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnSetLobbyState__DelegateSignature(bool* Lobby_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetLobbyState__DelegateSignature");

	UMaster_WeaponComponent_C_OnSetLobbyState__DelegateSignature_Params params;
	params.Lobby_State = Lobby_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetRevolverHammerStrike__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator*               New_Hammer_Strike_Rotator      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnSetRevolverHammerStrike__DelegateSignature(struct FRotator* New_Hammer_Strike_Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetRevolverHammerStrike__DelegateSignature");

	UMaster_WeaponComponent_C_OnSetRevolverHammerStrike__DelegateSignature_Params params;
	params.New_Hammer_Strike_Rotator = New_Hammer_Strike_Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetScopeScaleAlpha__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         New_Alpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnSetScopeScaleAlpha__DelegateSignature(float* New_Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetScopeScaleAlpha__DelegateSignature");

	UMaster_WeaponComponent_C_OnSetScopeScaleAlpha__DelegateSignature_Params params;
	params.New_Alpha = New_Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
