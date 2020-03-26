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

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.EnemyBehind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 EnemyActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Behind                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::EnemyBehind(class AActor** EnemyActor, bool* Behind)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.EnemyBehind");

	UMainCharacterVOComponent_C_EnemyBehind_Params params;
	params.EnemyActor = EnemyActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Behind != nullptr)
		*Behind = params.Behind;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToGameStateEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AKSGameState**           GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::BindToGameStateEvents(class AKSGameState** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToGameStateEvents");

	UMainCharacterVOComponent_C_BindToGameStateEvents_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLastManStanding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         LastPlayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnLastManStanding(class AKSPlayerState** LastPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLastManStanding");

	UMainCharacterVOComponent_C_OnLastManStanding_Params params;
	params.LastPlayer = LastPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWinnerSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TeamNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnWinnerSet(int* TeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWinnerSet");

	UMainCharacterVOComponent_C_OnWinnerSet_Params params;
	params.TeamNumber = TeamNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnRoundSetup
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainCharacterVOComponent_C::OnRoundSetup(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnRoundSetup");

	UMainCharacterVOComponent_C_OnRoundSetup_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPhaseChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  PhaseName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnPhaseChange(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPhaseChange");

	UMainCharacterVOComponent_C_OnPhaseChange_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPingManagerEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSPingManager**         PingManager                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainCharacterVOComponent_C::BindToPingManagerEvents(class UKSPingManager** PingManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPingManagerEvents");

	UMainCharacterVOComponent_C_BindToPingManagerEvents_Params params;
	params.PingManager = PingManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAdded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPingInfo*              PingInfo                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainCharacterVOComponent_C::PingAdded(struct FPingInfo* PingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAdded");

	UMainCharacterVOComponent_C_PingAdded_Params params;
	params.PingInfo = PingInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnTakeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnTakeDamage(class AActor** DamagedActor, float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnTakeDamage");

	UMainCharacterVOComponent_C_OnTakeDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnItemPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSItemDrop**            ItemDrop                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnItemPickedUp(class AKSCharacter** Character, class AKSItemDrop** ItemDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnItemPickedUp");

	UMainCharacterVOComponent_C_OnItemPickedUp_Params params;
	params.Character = Character;
	params.ItemDrop = ItemDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnReviveCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           Reviver                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacter**           Revivee                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnReviveCompleted(class AKSCharacter** Reviver, class AKSCharacter** Revivee)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnReviveCompleted");

	UMainCharacterVOComponent_C_OnReviveCompleted_Params params;
	params.Reviver = Reviver;
	params.Revivee = Revivee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToCharacterEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AKSCharacter**           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::BindToCharacterEvents(class AKSCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToCharacterEvents");

	UMainCharacterVOComponent_C_BindToCharacterEvents_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnInteractStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnInteractStart(class AActor** Target, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnInteractStart");

	UMainCharacterVOComponent_C_OnInteractStart_Params params;
	params.Target = Target;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnLanded(struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLanded");

	UMainCharacterVOComponent_C_OnLanded_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnMantleChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMantling                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnMantleChanged(bool* IsMantling)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnMantleChanged");

	UMainCharacterVOComponent_C_OnMantleChanged_Params params;
	params.IsMantling = IsMantling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDOdgeRollChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDodgeRolling                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnDOdgeRollChanged(bool* IsDodgeRolling)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDOdgeRollChanged");

	UMainCharacterVOComponent_C_OnDOdgeRollChanged_Params params;
	params.IsDodgeRolling = IsDodgeRolling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJumped
// (BlueprintCallable, BlueprintEvent)

void UMainCharacterVOComponent_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJumped");

	UMainCharacterVOComponent_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnCharacterFreeFallStarted
// (BlueprintCallable, BlueprintEvent)

void UMainCharacterVOComponent_C::OnCharacterFreeFallStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnCharacterFreeFallStarted");

	UMainCharacterVOComponent_C_OnCharacterFreeFallStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWeaponInventoryChanged
// (BlueprintCallable, BlueprintEvent)

void UMainCharacterVOComponent_C::OnWeaponInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWeaponInventoryChanged");

	UMainCharacterVOComponent_C_OnWeaponInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BuildWeaponStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSWeapon**              Weapon                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::BuildWeaponStateChanged(class AKSWeapon** Weapon, EWeaponStateNew* OldState, EWeaponStateNew* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BuildWeaponStateChanged");

	UMainCharacterVOComponent_C_BuildWeaponStateChanged_Params params;
	params.Weapon = Weapon;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.GadgetWeaponStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSWeapon**              Weapon                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::GadgetWeaponStateChanged(class AKSWeapon** Weapon, EWeaponStateNew* OldState, EWeaponStateNew* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.GadgetWeaponStateChanged");

	UMainCharacterVOComponent_C_GadgetWeaponStateChanged_Params params;
	params.Weapon = Weapon;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ResetObjectiveVO
// (BlueprintCallable, BlueprintEvent)

void UMainCharacterVOComponent_C::ResetObjectiveVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ResetObjectiveVO");

	UMainCharacterVOComponent_C_ResetObjectiveVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnStartReviveOther
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           Reviver                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacter**           Revivee                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ReviveTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRemote                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnStartReviveOther(class AKSCharacter** Reviver, class AKSCharacter** Revivee, float* ReviveTime, bool* bRemote)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnStartReviveOther");

	UMainCharacterVOComponent_C_OnStartReviveOther_Params params;
	params.Reviver = Reviver;
	params.Revivee = Revivee;
	params.ReviveTime = ReviveTime;
	params.bRemote = bRemote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModFailedToActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSModInst_Activated**   AttemptedMod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EKSAbilityUsageFailureType*    AbilityFailureType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::ModFailedToActivate(class UKSModInst_Activated** AttemptedMod, EKSAbilityUsageFailureType* AbilityFailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModFailedToActivate");

	UMainCharacterVOComponent_C_ModFailedToActivate_Params params;
	params.AttemptedMod = AttemptedMod;
	params.AbilityFailureType = AbilityFailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerStateEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::BindToPlayerStateEvents(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerStateEvents");

	UMainCharacterVOComponent_C_BindToPlayerStateEvents_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToActivatableModEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSModInst_Activated**   ActivatableMod                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainCharacterVOComponent_C::BindToActivatableModEvents(class UKSModInst_Activated** ActivatableMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToActivatableModEvents");

	UMainCharacterVOComponent_C_BindToActivatableModEvents_Params params;
	params.ActivatableMod = ActivatableMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToEvents
// (Event, Protected, BlueprintEvent)

void UMainCharacterVOComponent_C::BindToEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToEvents");

	UMainCharacterVOComponent_C_BindToEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToTeamStateEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AKSTeamState**           TeamState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::BindToTeamStateEvents(class AKSTeamState** TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToTeamStateEvents");

	UMainCharacterVOComponent_C_BindToTeamStateEvents_Params params;
	params.TeamState = TeamState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerControllerEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AKSPlayerController**    PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::BindToPlayerControllerEvents(class AKSPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerControllerEvents");

	UMainCharacterVOComponent_C_BindToPlayerControllerEvents_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJobChanged
// (BlueprintCallable, BlueprintEvent)

void UMainCharacterVOComponent_C::OnJobChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJobChanged");

	UMainCharacterVOComponent_C_OnJobChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ShopItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShopItem*              ShopItem                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainCharacterVOComponent_C::ShopItemChanged(struct FShopItem* ShopItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ShopItemChanged");

	UMainCharacterVOComponent_C_ShopItemChanged_Params params;
	params.ShopItem = ShopItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPlayerDownedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::OnPlayerDownedChanged(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPlayerDownedChanged");

	UMainCharacterVOComponent_C_OnPlayerDownedChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ExecuteUbergraph_MainCharacterVOComponent
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterVOComponent_C::ExecuteUbergraph_MainCharacterVOComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ExecuteUbergraph_MainCharacterVOComponent");

	UMainCharacterVOComponent_C_ExecuteUbergraph_MainCharacterVOComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
