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

// WidgetBlueprintGeneratedClass DropdownList.DropdownList_C
// 0x0050 (0x0518 - 0x04C8)
class UDropdownList_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  DropdownScroll;                                           // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FText>                               Options;                                                  // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSelection;                                              // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UPUMG_Widget*>                        DropdownEntries;                                          // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DropdownList.DropdownList_C");
		return ptr;
	}


	bool NavigateBack();
	void InitializeWidget(class APUMG_HUD** HUD);
	void Selection(int* Index, struct FText* Text);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void InitializeWidgetNavigation();
	void HandleOnHover(class UWidget** Widget);
	void ExecuteUbergraph_DropdownList(int* EntryPoint);
	void OnCancel__DelegateSignature();
	void OnSelection__DelegateSignature(int* Index, struct FText* Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
