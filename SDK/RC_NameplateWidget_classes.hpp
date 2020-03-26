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

// DynamicClass NameplateWidget.NameplateWidget_C
// 0x01E8 (0x0418 - 0x0230)
class UNameplateWidget_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	class UWidgetAnimation*                            DeathBreak;                                               // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            DamagePulse;                                              // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      BarBackground;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      DeathBreakImage;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    HealthMeterGroup;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInvalidationBox*                            InvalidationBox_1;                                        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      MeterFill;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      MeterLine;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      MeterLineGlow;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    MeterSize;                                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      OverhealFill;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  PlayerName;                                               // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      ResidualMaterial;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Vis_IsHovered;                                            // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	class APlayerState*                                Nameplate_PlayerState;                                    // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKSCharacter*                                Nameplate_Character;                                      // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Killcam_Enabled;                                          // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	struct FName                                       HoverState;                                               // 0x02BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResidualFadeAlpha;                                        // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResidualFadeDelayTime;                                    // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageLerpEndpoints;                                      // 0x02CC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResidualFadeTime;                                         // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Manual_Tick_Delta_Time;                                   // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResidualFadeDelayTimer;                                   // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageLerpAlpha;                                          // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResidualFadePower;                                        // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageLerpPower;                                          // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageLerpTime;                                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x02F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	class APlayerState*                                K2Node_Event_PlayerState;                                 // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_Event_Character;                                   // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacterBase*                            K2Node_CustomEvent_Character;                             // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsEnabled;                             // 0x0310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	class AKSPlayerState*                              K2Node_CustomEvent_PlayerState1;                          // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_CustomEvent_PlayerState;                           // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable;                                      // 0x0328(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_PercentValue1;                         // 0x032C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_PercentValue;                          // 0x0330(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0334(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	float                                              K2Node_CustomEvent_Fade_Alpha;                            // 0x0344(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x0348(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x0358(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x035C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X1;                                // 0x0360(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y1;                                // 0x0364(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X2;                                // 0x0368(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y2;                                // 0x036C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X3;                                // 0x0370(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y3;                                // 0x0374(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X4;                                // 0x0378(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y4;                                // 0x037C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable1;                                     // 0x0380(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable2;                                     // 0x0384(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X5;                                // 0x0388(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y5;                                // 0x038C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable3;                                     // 0x0390(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable;                                       // 0x0394(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Should_Show_Enemy_Nameplate_ShouldShow;          // 0x0395(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0396(0x0002) MISSED OFFSET
	float                                              K2Node_Select_Default;                                    // 0x0398(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate1;                    // 0x039C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UKSLocalPlayer*                              K2Node_DynamicCast_AsKSLocal_Player;                      // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x03B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable1;                                      // 0x03B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x03BA(0x0002) MISSED OFFSET
	float                                              K2Node_Select1_Default;                                   // 0x03BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable4;                                     // 0x03C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x03C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	float                                              Temp_float_Variable5;                                     // 0x03C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable2;                                      // 0x03CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x03D0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	float                                              K2Node_Select2_Default;                                   // 0x03E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State;                      // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess1;                             // 0x03F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x03F4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x0404(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate4;                    // 0x0408(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass NameplateWidget.NameplateWidget_C");
		return ptr;
	}


	void View_SetResidualPercent(float* bpp__PercentValue__pf);
	void View_SetResidualFade(float* bpp__FadexAlpha__pfT);
	void View_SetHealthPercent(float* bpp__PercentValue__pf);
	void Should_Show_Enemy_Nameplate(bool* bpp__ShouldShow__pf);
	void Player_Is_Blinded(bool* bpp__IsxBlind__pfT);
	void OnUnhovered();
	void OnPossession(class APlayerState** bpp__PlayerState__pf, class AKSCharacter** bpp__Character__pf);
	void OnPlayerDownedChanged_Event(class AKSPlayerState** bpp__PlayerState__pf);
	void OnKillCamEnabled(bool* bpp__IsEnabled__pf);
	void OnHovered();
	void OnDead(class AKSPlayerState** bpp__PlayerState__pf);
	void Manual_Tick();
	void ExecuteUbergraph_NameplateWidget_4(int* bpp__EntryPoint__pf);
	void Deferred_Player_State_Open();
	void Construct();
	void CharacterHealthChange(class AKSCharacterBase** bpp__Character__pf__const);
	void OnPlayerEliminated__DelegateSignature(class AKSPlayerState** bpp__PlayerState__pf);
	void OnPlayerDownedChanged__DelegateSignature(class AKSPlayerState** bpp__PlayerState__pf);
	void OnKillCamEnabled__DelegateSignature(bool* bpp__bEnabled__pf);
	void OnHealthChanged__DelegateSignature(class AKSCharacterBase** bpp__Character__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
