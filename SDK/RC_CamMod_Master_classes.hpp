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

// BlueprintGeneratedClass CamMod_Master.CamMod_Master_C
// 0x0020 (0x0068 - 0x0048)
class UCamMod_Master_C : public UCameraModifier
{
public:
	bool                                               bIsActive;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector                                     AddViewLocation;                                          // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AddViewRotation;                                          // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddFOV;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamMod_Master.CamMod_Master_C");
		return ptr;
	}


	void OnCamModFinished();
	void PlayTimeline();
	void ShouldModifyCamera(bool* bSuccess);
	void UpdateValues(struct FVector* InLocation, struct FRotator* InRotation, float* InFOV);
	void GetKSCharacterData(bool* Success, class AKSCharacter** KSCharacter, class UKSCharacterMovementComponent** MovementComponent, class AKSCameraManager_C** Camera_Manager);
	void BlueprintModifyCamera(float* DeltaTime, struct FVector* ViewLocation, struct FRotator* ViewRotation, float* FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
