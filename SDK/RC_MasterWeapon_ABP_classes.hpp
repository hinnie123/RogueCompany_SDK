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

// AnimBlueprintGeneratedClass MasterWeapon_ABP.MasterWeapon_ABP_C
// 0x18B4 (0x1BE4 - 0x0330)
class UMasterWeapon_ABP_C : public UKSWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_89DFBFF9494FADF8C0FA10A5AA987989;// 0x0338(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F1B5C8344FDA0B72D3D198A4EBE4FE4D;// 0x0440(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A;// 0x04F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3;// 0x0520(0x0028)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6793BED64C8B12B2E2C7CAB4401DEB4C;// 0x0548(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_BBD780FF46C92AD7473CFFA44B04C0EB;// 0x0560(0x0150)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674;// 0x06B0(0x00A0)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_8BC1FDD740597DCBD990E4AC9AA1C0DF;// 0x0750(0x0150)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C3211AC14DD1933173945996ECEB1F67;// 0x08A0(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_7B0AFA7D4FE12AD846D46F98AD123CE6;// 0x08B8(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_696B788542BE0ECF8B7BF197F10EE7C2;// 0x0A08(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F94F26174C8CFF43749CD1A65827DD00;// 0x0A28(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_EBAE8D5D4A6541E5CF05E4AB3EABC9A7;// 0x0A40(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CEC8BAA24486CCE8523D558EF1C23E96;// 0x0B90(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5D7862CC4ED635A837A82E8C3A614D0E;// 0x0BB0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_434374F142A2C850B8EAD1BFD532990F;      // 0x0C60(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_91E6832F41B31F36B237D494C6961889;// 0x0CA8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0A1A314240F7319FEDA29383F7733B2F;// 0x0DB0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7370CF02410A4024ADA681A615E25BDE;// 0x0EB8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E7FDA8AE4E34E6DA616E5490E3559F82;// 0x0ED8(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_Root_B6002DB34AB5741DB9A74EA2DA9CFC95;      // 0x0FE0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7F5287D64A27234615995A9023CB6CCC;// 0x1000(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8A5FE8734D66FFC6FB10FFABDD0E9337;// 0x1108(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4A4392874F72B1248FAB0E9D63FDF4F3;// 0x1210(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F8570D884610CCEAFAB23C80FDD22344;// 0x12B0(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_99DAB8AB498C5364122A1492E542BF17;// 0x12D0(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7973873B409D6ACFF106C39F5D4F4B04;// 0x1388(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EFBD00024F3476753F35AD9D17CD56D9;// 0x13A8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A13AC96F42D942636709FDAD5B4B6862;// 0x13D0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B3032D7E4D2ADC529FFA0085EAF17B02;// 0x13F0(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_8526D6E449602E19D5729397AF84D59D;// 0x1418(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_746639DD43AE60E472E7D4A699576F8E;// 0x1568(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_53B9312D4347A19ED9B65A8A628FB566;// 0x1588(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B7DBF10F48E70D3111C6B0B37899D4BC;// 0x1638(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_63A98B6F4B9BD206800D58875DACCFD0;// 0x16D8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1C12C1C444BB425A4C02008AD5CF3D81;// 0x17E0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2948D682427D0937B5670EBEE08629DE;// 0x18E8(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C7362FA04FDCF676271B5688F096693A;// 0x19F0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_244BE81F4021DDAF17E34C9F9AC8909F;// 0x1A18(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6BA5C44E4CEEEDFA5486B1BE39735C50;// 0x1A38(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D778AC904DD9C3FA7ED292B2E0AF570B;// 0x1AD8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EF96D5F54C9B7AE12AF6CA8EAF66BDF5;// 0x1AF8(0x0028)
	float                                              HideMagazineAlpha;                                        // 0x1B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1B24(0x0004) MISSED OFFSET
	class UAnimSequence*                               Weapon_ABP_Idle;                                          // 0x1B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_ABP_Holster;                                       // 0x1B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Shell_Housing_Spin;                                       // 0x1B38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Missing_Shell_Count;                                      // 0x1B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Shell_Loading;                                            // 0x1B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1B49(0x0003) MISSED OFFSET
	struct FRotator                                    Target_Shell_Housing_Spin;                                // 0x1B4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShellE_Hidden;                                            // 0x1B58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1B59(0x0003) MISSED OFFSET
	int                                                Revolver_Index;                                           // 0x1B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Directional_Amount;                                  // 0x1B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scope_Scale_Alpha;                                        // 0x1B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Revolver;                                              // 0x1B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Multi_Stage_Reload;                                    // 0x1B69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x1B6A(0x0002) MISSED OFFSET
	float                                              Multi_Stage_Reload_Alpha;                                 // 0x1B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Holstered;                                             // 0x1B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1B71(0x0003) MISSED OFFSET
	struct FRotator                                    Revolver_Hammer_Strike;                                   // 0x1B74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Prevent_Scope_Scaling_Override;                           // 0x1B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1B81(0x0003) MISSED OFFSET
	float                                              Alt_Scope_Scale_Alpha;                                    // 0x1B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaA;                                       // 0x1B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaB;                                       // 0x1B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaC;                                       // 0x1B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaD;                                       // 0x1B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaE;                                       // 0x1B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaF;                                       // 0x1B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaA;                                         // 0x1BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaB;                                         // 0x1BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaC;                                         // 0x1BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaD;                                         // 0x1BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaE;                                         // 0x1BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaF;                                         // 0x1BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_in_Lobby_Viewer_;                                      // 0x1BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1BB9(0x0003) MISSED OFFSET
	float                                              Is_Stock_Folded;                                          // 0x1BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Stock_Rotation_Target;                                    // 0x1BC0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Stock_Alt_Rotation_Target;                                // 0x1BCC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ADS_ScopeLocationModifier;                                // 0x1BD8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MasterWeapon_ABP.MasterWeapon_ABP_C");
		return ptr;
	}


	void Set_Lobby_State(bool* In_Model_Viewer);
	void UpdateSpentShellVisibility(int* ShellIndex, bool* New_Visibility);
	void UpdateUnspentShellVisibility(int* ShellIndex, bool* New_Visibility);
	void Set_Revolver_Hammer_Strike(struct FRotator* New_Revolver_Hammer_Strike);
	void Set_Weapon_State(class UKSWeaponComponent** Owning_Weapon_Component, EWeaponStateNew* Old_State, EWeaponStateNew* New_State);
	void Set_Multi_Stage_Reload(bool* New_Is_Multi_Stage_Reload);
	void Set_Scope_Scale_Alpha(float* New_Alpha);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674();
	void AnimNotify_Hide_Mag();
	void AnimNotify_Unhide_Mag();
	void ExecuteUbergraph_MasterWeapon_ABP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
