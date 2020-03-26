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

// Class SceneComponentPools.BasePoolComponent
// 0x0020 (0x0118 - 0x00F8)
class UBasePoolComponent : public UActorComponent
{
public:
	int                                                MaxPoolSize;                                              // 0x00F8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                StartingPoolSize;                                         // 0x00FC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ComponentClassName;                                       // 0x0100(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	EPoolOverflowHandling                              OverflowType;                                             // 0x0110(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.BasePoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.DecalPoolComponent
// 0x0078 (0x0190 - 0x0118)
class UDecalPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	class UClass*                                      PooledDecalComponentClass;                                // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UPoolableDecalComponent*>             UnusedComponentsArray;                                    // 0x0128(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0138(0x0050) UNKNOWN PROPERTY: SetProperty SceneComponentPools.DecalPoolComponent.UsedComponentsSet
	class UPoolableDecalComponent*                     PeekedDecalComponent;                                     // 0x0188(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.DecalPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.ParticleSystemPoolComponentBase
// 0x0080 (0x0198 - 0x0118)
class UParticleSystemPoolComponentBase : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	class UClass*                                      PooledParticleSystemComponentClass;                       // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            UnusedComponentsArray;                                    // 0x0128(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0138(0x0050) UNKNOWN PROPERTY: SetProperty SceneComponentPools.ParticleSystemPoolComponentBase.UsedComponentsSet
	class UParticleSystemComponent*                    PeekedParticleSystemComponent;                            // 0x0188(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bClearTemplateWhenReturnedToPool;                         // 0x0190(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0191(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.ParticleSystemPoolComponentBase");
		return ptr;
	}


	void OnPSCFinished(class UParticleSystemComponent** InPSC);
};


// Class SceneComponentPools.ParticleSystemPoolComponent
// 0x0000 (0x0198 - 0x0198)
class UParticleSystemPoolComponent : public UParticleSystemPoolComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.ParticleSystemPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.PoolableDecalComponent
// 0x0030 (0x02E0 - 0x02B0)
class UPoolableDecalComponent : public UDecalComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02B0(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDecalReturnedToPoolDelegate;                            // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bInUse;                                                   // 0x02D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.PoolableDecalComponent");
		return ptr;
	}


	void ForceReturnToPool();
};


// Class SceneComponentPools.SceneComponentPoolStatics
// 0x0000 (0x0028 - 0x0028)
class USceneComponentPoolStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.SceneComponentPoolStatics");
		return ptr;
	}


	class UParticleSystemComponent* STATIC_SpawnEmitterAttached(class UParticleSystem** EmitterTemplate, class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale, TEnumAsByte<EAttachLocation>* LocationType);
	class UParticleSystemComponent* STATIC_SpawnEmitterAtLocation(class UObject** WorldContextObject, class UParticleSystem** EmitterTemplate, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);
	class UPoolableDecalComponent* STATIC_SpawnDecalAttached(class UMaterialInterface** DecalMaterial, struct FVector* DecalSize, class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, TEnumAsByte<EAttachLocation>* LocationType, float* LifeSpan);
	class UPoolableDecalComponent* STATIC_SpawnDecalAtLocation(class UObject** WorldContextObject, class UMaterialInterface** DecalMaterial, struct FVector* DecalSize, struct FVector* Location, struct FRotator* Rotation, float* LifeSpan);
	void STATIC_ReleaseSpawnedEmitters(class UObject** WorldContextObject);
	void STATIC_ReleaseSpawnedDecals(class UObject** WorldContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
