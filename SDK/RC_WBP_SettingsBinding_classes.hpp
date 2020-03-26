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

// WidgetBlueprintGeneratedClass WBP_SettingsBinding.WBP_SettingsBinding_C
// 0x00A8 (0x05B8 - 0x0510)
class UWBP_SettingsBinding_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InputKeySelector_C*                     WBP_InputKeySelector_Gamepad;                             // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_InputKeySelector_C*                     WBP_InputKeySelector_Primary;                             // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_InputKeySelector_C*                     WBP_InputKeySelector_Secondary;                           // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FInputChord                                 CachedPrimaryBinding;                                     // 0x0530(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FInputChord                                 CachedSecondaryBinding;                                   // 0x0550(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FInputChord                                 CachedGamepadBinding;                                     // 0x0570(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bCachedGamepadEnabled;                                    // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCachedPrimaryEnabled;                                    // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCachedSecondaryEnabled;                                  // 0x0592(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0593(0x0001) MISSED OFFSET
	float                                              TimeToWaitForCombo;                                       // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        Pending_Gamepad_Key;                                      // 0x0598(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                Combo_Key_Timer_Handle;                                   // 0x05B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsBinding.WBP_SettingsBinding_C");
		return ptr;
	}


	void Set_Desired_Gamepad_Combo(struct FKey* Gamepad_Key, struct FKey* Combo_Key, bool* Dirtied);
	void Get_Dirty_Combo_Key(struct FKey* Key);
	void OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* Input_State);
	bool CanGamepadNavigate();
	void DisableUnbindableKeybinds(class UKSSettingsInfo_Binding** Binding_Settings_Info);
	bool NavigateBack();
	void Set_Desired_Gamepad_Key(struct FKey* Key, bool* Dirtied);
	void Set_Desired_Secondary_Key(struct FKey* Key, bool* Dirtied);
	void Set_Desired_Primary_Key(struct FKey* Key, bool* Dirtied);
	void Get_Dirty_Gamepad_Key(struct FKey* Key);
	void Get_Dirty_Secondary_Key(struct FKey* Key);
	void Get_Dirty_Primary_Key(struct FKey* Key);
	void SetKeysForBindingDisplays();
	void SetKeyForGamepadBindingDisplay();
	void SetKeyForSecondaryBindingDisplay();
	void SetKeyForPrimaryBindingDisplay();
	void OnWidgetSettingsInfoSet();
	void On_Key_Binding_Changed(bool* Changed_Externally);
	void GamepadHover();
	void GamepadUnhover();
	void InitializeWidgetNavigation();
	void BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(struct FInputChord* Selected_Key);
	void BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature(struct FInputChord* Selected_Key);
	void BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature(struct FInputChord* Selected_Key);
	void BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature();
	void FocusGroupNavigateDownFailure(int* FocusGroup);
	void FocusGroupNavigateUpFailure(int* FocusGroup);
	void InitializeWidget(class APUMG_HUD** HUD);
	void StopCapturingCombo();
	void StartCapturingCombo();
	void Combo_Succeed(struct FInputChord* Combo_Key);
	void Combo_Failed();
	void OnInputAttached(bool* bGamepadAttached, bool* bMouseAttached);
	void ExecuteUbergraph_WBP_SettingsBinding(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
