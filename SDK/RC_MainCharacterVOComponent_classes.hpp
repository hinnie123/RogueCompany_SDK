#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C
// 0x0474 (0x05FC - 0x0188)
class UMainCharacterVOComponent_C : public UKSVOComponent
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FKSVoicelineEvent                           UnderFire;                                                // 0x0190(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           TakingDamage;                                             // 0x01B4(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AngleThresholdForShotFromBehind;                          // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSVoicelineEvent                           ShotFromBehind;                                           // 0x01DC(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           AbilityOnCooldown;                                        // 0x0200(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           PrimaryPickedUp;                                          // 0x0224(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           GadgetPickedUp;                                           // 0x0248(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           MeleePickedUp;                                            // 0x026C(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           MedPackPickedUp;                                          // 0x0290(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Revived;                                                  // 0x02B4(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           RevivedOther;                                             // 0x02D8(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           LastManStanding;                                          // 0x02FC(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           ZipLine;                                                  // 0x0320(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Upline;                                                   // 0x0344(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Landed;                                                   // 0x0368(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Mantle;                                                   // 0x038C(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Jumped;                                                   // 0x03B0(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           DodgeRoll;                                                // 0x03D4(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           GoTo;                                                     // 0x03F8(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           EnemyHere;                                                // 0x041C(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           GetObjective;                                             // 0x0440(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           ReviveMe;                                                 // 0x0464(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Victory;                                                  // 0x0488(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Skydive;                                                  // 0x04AC(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           LethalGadget;                                             // 0x04D0(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           UtilityGadget;                                            // 0x04F4(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           UtilityDeployable;                                        // 0x0518(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           LethalDeployable;                                         // 0x053C(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           InteractObjective;                                        // 0x0560(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           Select;                                                   // 0x0584(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           ShopPurchase;                                             // 0x05A8(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	class UKSShopRuleComponent*                        _ShopRuleComponent;                                       // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FKSVoicelineEvent                           Intro;                                                    // 0x05D8(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C");
		return ptr;
	}


	void EnemyBehind(class AActor** EnemyActor, bool* Behind);
	void BindToGameStateEvents(class AKSGameState** GameState);
	void OnLastManStanding(class AKSPlayerState** LastPlayer);
	void OnWinnerSet(int* TeamNumber);
	void OnRoundSetup(struct FRoundInitState* RoundInitState);
	void OnPhaseChange(struct FName* PhaseName);
	void BindToPingManagerEvents(class UKSPingManager** PingManager);
	void PingAdded(struct FPingInfo* PingInfo);
	void OnTakeDamage(class AActor** DamagedActor, float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnItemPickedUp(class AKSCharacter** Character, class AKSItemDrop** ItemDrop);
	void OnReviveCompleted(class AKSCharacter** Reviver, class AKSCharacter** Revivee);
	void BindToCharacterEvents(class AKSCharacter** Character);
	void OnInteractStart(class AActor** Target, float* Duration);
	void OnLanded(struct FVector* Velocity);
	void OnMantleChanged(bool* IsMantling);
	void OnDOdgeRollChanged(bool* IsDodgeRolling);
	void OnJumped();
	void OnCharacterFreeFallStarted();
	void OnWeaponInventoryChanged();
	void BuildWeaponStateChanged(class AKSWeapon** Weapon, EWeaponStateNew* OldState, EWeaponStateNew* NewState);
	void GadgetWeaponStateChanged(class AKSWeapon** Weapon, EWeaponStateNew* OldState, EWeaponStateNew* NewState);
	void ResetObjectiveVO();
	void OnStartReviveOther(class AKSCharacter** Reviver, class AKSCharacter** Revivee, float* ReviveTime, bool* bRemote);
	void ModFailedToActivate(class UKSModInst_Activated** AttemptedMod, EKSAbilityUsageFailureType* AbilityFailureType);
	void BindToPlayerStateEvents(class AKSPlayerState** PlayerState);
	void BindToActivatableModEvents(class UKSModInst_Activated** ActivatableMod);
	void BindToEvents();
	void BindToTeamStateEvents(class AKSTeamState** TeamState);
	void BindToPlayerControllerEvents(class AKSPlayerController** PlayerController);
	void OnJobChanged();
	void ShopItemChanged(struct FShopItem* ShopItem);
	void OnPlayerDownedChanged(class AKSPlayerState** PlayerState);
	void ExecuteUbergraph_MainCharacterVOComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
