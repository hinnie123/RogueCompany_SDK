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

// BlueprintGeneratedClass KSCameraManager.KSCameraManager_C
// 0x0170 (0x2800 - 0x2690)
class AKSCameraManager_C : public AKSPlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x2690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     Vault_Medium_Running_Rotation_19357AD44276670DB6B495B6695BBF6C;// 0x2698(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vault_Medium_Running_Location_19357AD44276670DB6B495B6695BBF6C;// 0x26A4(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Vault_Medium_Running_FOV_19357AD44276670DB6B495B6695BBF6C;// 0x26B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Vault_Medium_Running__Direction_19357AD44276670DB6B495B6695BBF6C;// 0x26B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x26B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Vault_Medium_Running;                                     // 0x26B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Vault_Short_Rotation_F73D9F61446F5474502BD8BF3252D762;    // 0x26C0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vault_Short_Location_F73D9F61446F5474502BD8BF3252D762;    // 0x26CC(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Vault_Short_FOV_F73D9F61446F5474502BD8BF3252D762;         // 0x26D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Vault_Short__Direction_F73D9F61446F5474502BD8BF3252D762;  // 0x26DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x26DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Vault_Short;                                              // 0x26E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Vault_Medium_Rotation_973BB77943BEA34D1A27C0A9070CFD1F;   // 0x26E8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vault_Medium_Location_973BB77943BEA34D1A27C0A9070CFD1F;   // 0x26F4(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Vault_Medium_FOV_973BB77943BEA34D1A27C0A9070CFD1F;        // 0x2700(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Vault_Medium__Direction_973BB77943BEA34D1A27C0A9070CFD1F; // 0x2704(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2705(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Vault_Medium;                                             // 0x2708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Vault_Tall_Rotation_7F94194A49D4BE17D3B299B0FF993F6D;     // 0x2710(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vault_Tall_Location_7F94194A49D4BE17D3B299B0FF993F6D;     // 0x271C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Vault_Tall_FOV_7F94194A49D4BE17D3B299B0FF993F6D;          // 0x2728(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Vault_Tall__Direction_7F94194A49D4BE17D3B299B0FF993F6D;   // 0x272C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x272D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Vault_Tall;                                               // 0x2730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Mantle_Short_Rotation_CF02379640077BEA8312A4A97CABFFE5;   // 0x2738(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Mantle_Short_Location_CF02379640077BEA8312A4A97CABFFE5;   // 0x2744(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mantle_Short_FOV_CF02379640077BEA8312A4A97CABFFE5;        // 0x2750(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Mantle_Short__Direction_CF02379640077BEA8312A4A97CABFFE5; // 0x2754(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2755(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Mantle_Short;                                             // 0x2758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Mantle_Medium_Rotation_BD9A8E7641CB9B707C1CE6BA8842B569;  // 0x2760(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Mantle_Medium_Location_BD9A8E7641CB9B707C1CE6BA8842B569;  // 0x276C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mantle_Medium_FOV_BD9A8E7641CB9B707C1CE6BA8842B569;       // 0x2778(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Mantle_Medium__Direction_BD9A8E7641CB9B707C1CE6BA8842B569;// 0x277C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x277D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Mantle_Medium;                                            // 0x2780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Mantle_Tall_Rotation_745F8D394D1BA4D0F0F12C9F36C8F1F2;    // 0x2788(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Mantle_Tall_Location_745F8D394D1BA4D0F0F12C9F36C8F1F2;    // 0x2794(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mantle_Tall_FOV_745F8D394D1BA4D0F0F12C9F36C8F1F2;         // 0x27A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Mantle_Tall__Direction_745F8D394D1BA4D0F0F12C9F36C8F1F2;  // 0x27A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x27A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Mantle_Tall;                                              // 0x27A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     JumpLanding_Rotation_F0A9B6BE484D0B52D2A1D2A14592B75A;    // 0x27B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpLanding_Location_F0A9B6BE484D0B52D2A1D2A14592B75A;    // 0x27BC(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              JumpLanding_FOV_F0A9B6BE484D0B52D2A1D2A14592B75A;         // 0x27C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    JumpLanding__Direction_F0A9B6BE484D0B52D2A1D2A14592B75A;  // 0x27CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x27CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          JumpLanding;                                              // 0x27D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     JumpStart_Rotation_626F506A47DB820B20B53DBAEA84159F;      // 0x27D8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpStart_Location_626F506A47DB820B20B53DBAEA84159F;      // 0x27E4(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              JumpStart_FOV_626F506A47DB820B20B53DBAEA84159F;           // 0x27F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    JumpStart__Direction_626F506A47DB820B20B53DBAEA84159F;    // 0x27F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x27F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          JumpStart;                                                // 0x27F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KSCameraManager.KSCameraManager_C");
		return ptr;
	}


	void GetMantleHeightFromKSChar(bool* NoMantleCamera);
	void NotifyCamModFinished(class UClass** Modifier_Class);
	void UpdateCamModValues(class UClass** Modifier_Class, struct FVector* In_Location, struct FVector* In_Rotation, float* In_FOV, bool* Success);
	void JumpStart__FinishedFunc();
	void JumpStart__UpdateFunc();
	void JumpLanding__FinishedFunc();
	void JumpLanding__UpdateFunc();
	void Mantle_Tall__FinishedFunc();
	void Mantle_Tall__UpdateFunc();
	void Mantle_Medium__FinishedFunc();
	void Mantle_Medium__UpdateFunc();
	void Mantle_Short__FinishedFunc();
	void Mantle_Short__UpdateFunc();
	void Vault_Tall__FinishedFunc();
	void Vault_Tall__UpdateFunc();
	void Vault_Medium__FinishedFunc();
	void Vault_Medium__UpdateFunc();
	void Vault_Short__FinishedFunc();
	void Vault_Short__UpdateFunc();
	void Vault_Medium_Running__FinishedFunc();
	void Vault_Medium_Running__UpdateFunc();
	void Play_Jump_Start();
	void PlayJumpLanding();
	void Play_Mantle(int* Mantle_Index);
	void ExecuteUbergraph_KSCameraManager(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
