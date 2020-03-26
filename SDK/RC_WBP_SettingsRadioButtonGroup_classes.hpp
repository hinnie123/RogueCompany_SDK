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

// WidgetBlueprintGeneratedClass WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C
// 0x0028 (0x0538 - 0x0510)
class UWBP_SettingsRadioButtonGroup_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              RadioButtonBox;                                           // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      Settings_Radio_Button;                                    // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UWBP_SettingsRadio_C*>                Radio_Buttons;                                            // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C");
		return ptr;
	}


	bool NavigateBack();
	void Set_Selection_To_Index(int* Index);
	void Get_Dirty_Index(int* Index);
	void Set_Desired_Index(int* Index, bool* Success);
	void OnWidgetSettingsInfoSet();
	void On_Radio_Button_Clicked(class UWBP_SettingsRadio_C** Radio_Button);
	void On_Setting_Value_Changed(bool* bChangedExternally);
	void GamepadHover();
	void InitializeWidgetNavigation();
	void FocusGroupNavigateDownFailure(int* FocusGroup);
	void FocusGroupNavigateUpFailure(int* FocusGroup);
	void ExecuteUbergraph_WBP_SettingsRadioButtonGroup(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
