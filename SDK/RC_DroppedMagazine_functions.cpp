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

// Function DroppedMagazine.DroppedMagazine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADroppedMagazine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedMagazine.DroppedMagazine_C.ReceiveBeginPlay");

	ADroppedMagazine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedMagazine.DroppedMagazine_C.SetMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          NewSkelMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh**            NewStaticMesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroppedMagazine_C::SetMesh(class USkeletalMesh** NewSkelMesh, class UStaticMesh** NewStaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedMagazine.DroppedMagazine_C.SetMesh");

	ADroppedMagazine_C_SetMesh_Params params;
	params.NewSkelMesh = NewSkelMesh;
	params.NewStaticMesh = NewStaticMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedMagazine.DroppedMagazine_C.SetVelocity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroppedMagazine_C::SetVelocity(struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedMagazine.DroppedMagazine_C.SetVelocity");

	ADroppedMagazine_C_SetVelocity_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedMagazine.DroppedMagazine_C.ExecuteUbergraph_DroppedMagazine
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroppedMagazine_C::ExecuteUbergraph_DroppedMagazine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedMagazine.DroppedMagazine_C.ExecuteUbergraph_DroppedMagazine");

	ADroppedMagazine_C_ExecuteUbergraph_DroppedMagazine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
