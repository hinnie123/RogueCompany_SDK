// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished
// (Native, Protected)
// Parameters:
// class UParticleSystemComponent** InPSC                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParticleSystemPoolComponentBase::OnPSCFinished(class UParticleSystemComponent** InPSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished");

	UParticleSystemPoolComponentBase_OnPSCFinished_Params params;
	params.InPSC = InPSC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.PoolableDecalComponent.ForceReturnToPool
// (Final, Native, Public, BlueprintCallable)

void UPoolableDecalComponent::ForceReturnToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.PoolableDecalComponent.ForceReturnToPool");

	UPoolableDecalComponent_ForceReturnToPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UParticleSystem**        EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* USceneComponentPoolStatics::STATIC_SpawnEmitterAttached(class UParticleSystem** EmitterTemplate, class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale, TEnumAsByte<EAttachLocation>* LocationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached");

	USceneComponentPoolStatics_SpawnEmitterAttached_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.LocationType = LocationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem**        EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* USceneComponentPoolStatics::STATIC_SpawnEmitterAtLocation(class UObject** WorldContextObject, class UParticleSystem** EmitterTemplate, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation");

	USceneComponentPoolStatics_SpawnEmitterAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     DecalMaterial                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DecalSize                      (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         LifeSpan                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPoolableDecalComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPoolableDecalComponent* USceneComponentPoolStatics::STATIC_SpawnDecalAttached(class UMaterialInterface** DecalMaterial, struct FVector* DecalSize, class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, TEnumAsByte<EAttachLocation>* LocationType, float* LifeSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached");

	USceneComponentPoolStatics_SpawnDecalAttached_Params params;
	params.DecalMaterial = DecalMaterial;
	params.DecalSize = DecalSize;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.LifeSpan = LifeSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     DecalMaterial                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DecalSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         LifeSpan                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPoolableDecalComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPoolableDecalComponent* USceneComponentPoolStatics::STATIC_SpawnDecalAtLocation(class UObject** WorldContextObject, class UMaterialInterface** DecalMaterial, struct FVector* DecalSize, struct FVector* Location, struct FRotator* Rotation, float* LifeSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation");

	USceneComponentPoolStatics_SpawnDecalAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DecalMaterial = DecalMaterial;
	params.DecalSize = DecalSize;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LifeSpan = LifeSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USceneComponentPoolStatics::STATIC_ReleaseSpawnedEmitters(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters");

	USceneComponentPoolStatics_ReleaseSpawnedEmitters_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USceneComponentPoolStatics::STATIC_ReleaseSpawnedDecals(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals");

	USceneComponentPoolStatics_ReleaseSpawnedDecals_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
