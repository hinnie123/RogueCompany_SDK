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

// BlueprintGeneratedClass DroppedMagazine.DroppedMagazine_C
// 0x0020 (0x0350 - 0x0330)
class ADroppedMagazine_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        _StaticMesh;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      _SkeletalMesh;                                            // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Collision;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedMagazine.DroppedMagazine_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void SetMesh(class USkeletalMesh** NewSkelMesh, class UStaticMesh** NewStaticMesh);
	void SetVelocity(struct FVector* Velocity);
	void ExecuteUbergraph_DroppedMagazine(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
