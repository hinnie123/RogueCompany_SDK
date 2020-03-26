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

// BlueprintGeneratedClass GamePlayerControllerNoHUD.GamePlayerControllerNoHUD_C
// 0x0018 (0x0C00 - 0x0BE8)
class AGamePlayerControllerNoHUD_C : public AKSPlayerController
{
public:
	class UPlayerControllerThreatComponent_C*          _PlayerControllerThreatComponent;                         // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                ControllerAkComponent;                                    // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDefaultEnvironmentListener_C*               _DefaultEnvironmentListener;                              // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GamePlayerControllerNoHUD.GamePlayerControllerNoHUD_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
