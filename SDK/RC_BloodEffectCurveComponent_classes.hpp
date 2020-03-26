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

// BlueprintGeneratedClass BloodEffectCurveComponent.BloodEffectCurveComponent_C
// 0x0008 (0x0188 - 0x0180)
class UBloodEffectCurveComponent_C : public UKSBloodSplatterComponent
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0180(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BloodEffectCurveComponent.BloodEffectCurveComponent_C");
		return ptr;
	}


	void UpdateScalarTrack(struct FName* TrackName, float* TrackValue);
	void ExecuteUbergraph_BloodEffectCurveComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
