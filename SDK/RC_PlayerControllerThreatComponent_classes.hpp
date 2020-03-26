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

// DynamicClass PlayerControllerThreatComponent.PlayerControllerThreatComponent_C
// 0x0000 (0x01E0 - 0x01E0)
class UPlayerControllerThreatComponent_C : public UConfigurableThreatComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass PlayerControllerThreatComponent.PlayerControllerThreatComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
