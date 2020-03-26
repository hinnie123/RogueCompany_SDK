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

// BlueprintGeneratedClass EnemySpottedTestBeacon.EnemySpottedTestBeacon_C
// 0x0010 (0x0350 - 0x0340)
class AEnemySpottedTestBeacon_C : public AKSPingBeaconBase
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EnemySpottedTestBeacon.EnemySpottedTestBeacon_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_EnemySpottedTestBeacon(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
