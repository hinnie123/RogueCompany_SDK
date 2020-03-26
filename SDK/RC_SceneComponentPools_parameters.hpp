#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished
struct UParticleSystemPoolComponentBase_OnPSCFinished_Params
{
	class UParticleSystemComponent**                   InPSC;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.PoolableDecalComponent.ForceReturnToPool
struct UPoolableDecalComponent_ForceReturnToPool_Params
{
};

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached
struct USceneComponentPoolStatics_SpawnEmitterAttached_Params
{
	class UParticleSystem**                            EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation
struct USceneComponentPoolStatics_SpawnEmitterAtLocation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem**                            EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached
struct USceneComponentPoolStatics_SpawnDecalAttached_Params
{
	class UMaterialInterface**                         DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DecalSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             LifeSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPoolableDecalComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation
struct USceneComponentPoolStatics_SpawnDecalAtLocation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DecalSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             LifeSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPoolableDecalComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters
struct USceneComponentPoolStatics_ReleaseSpawnedEmitters_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals
struct USceneComponentPoolStatics_ReleaseSpawnedDecals_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
