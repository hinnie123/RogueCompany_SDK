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

// Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTables
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UDataTable*>*     InTables                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDynamicSkinTable::RemoveDataTables(TArray<class UDataTable*>* InTables)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTables");

	UDynamicSkinTable_RemoveDataTables_Params params;
	params.InTables = InTables;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable**             InTable                        (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicSkinTable::RemoveDataTable(class UDataTable** InTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTable");

	UDynamicSkinTable_RemoveDataTable_Params params;
	params.InTable = InTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.DynamicSkinTable.IsTablePendingAssetLoad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDynamicSkinTable::IsTablePendingAssetLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.IsTablePendingAssetLoad");

	UDynamicSkinTable_IsTablePendingAssetLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetTexture
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UDynamicSkinTable::GetTexture(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetTexture");

	UDynamicSkinTable_GetTexture_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetStaticMesh
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* UDynamicSkinTable::GetStaticMesh(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetStaticMesh");

	UDynamicSkinTable_GetStaticMesh_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetSkeletalMesh
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UDynamicSkinTable::GetSkeletalMesh(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetSkeletalMesh");

	UDynamicSkinTable_GetSkeletalMesh_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetSelectiveAudioEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USelectiveAkAudioEvent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USelectiveAkAudioEvent* UDynamicSkinTable::GetSelectiveAudioEvent(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetSelectiveAudioEvent");

	UDynamicSkinTable_GetSelectiveAudioEvent_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetPoseAsset
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPoseAsset*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPoseAsset* UDynamicSkinTable::GetPoseAsset(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetPoseAsset");

	UDynamicSkinTable_GetPoseAsset_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetPhysicsAsset
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPhysicsAsset*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhysicsAsset* UDynamicSkinTable::GetPhysicsAsset(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetPhysicsAsset");

	UDynamicSkinTable_GetPhysicsAsset_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetParticleSystem
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UDynamicSkinTable::GetParticleSystem(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetParticleSystem");

	UDynamicSkinTable_GetParticleSystem_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetNameField
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UDynamicSkinTable::GetNameField(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetNameField");

	UDynamicSkinTable_GetNameField_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetMaterialInterface
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UDynamicSkinTable::GetMaterialInterface(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetMaterialInterface");

	UDynamicSkinTable_GetMaterialInterface_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetLinearColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UDynamicSkinTable::GetLinearColor(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetLinearColor");

	UDynamicSkinTable_GetLinearColor_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetInt
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDynamicSkinTable::GetInt(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetInt");

	UDynamicSkinTable_GetInt_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDynamicSkinTable::GetFloat(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetFloat");

	UDynamicSkinTable_GetFloat_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UDynamicSkinTable::GetClass(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetClass");

	UDynamicSkinTable_GetClass_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetBool
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDynamicSkinTable::GetBool(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetBool");

	UDynamicSkinTable_GetBool_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAudioEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAkAudioEvent* UDynamicSkinTable::GetAudioEvent(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAudioEvent");

	UDynamicSkinTable_GetAudioEvent_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimSequence
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* UDynamicSkinTable::GetAnimSequence(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAnimSequence");

	UDynamicSkinTable_GetAnimSequence_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimMontage
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UDynamicSkinTable::GetAnimMontage(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAnimMontage");

	UDynamicSkinTable_GetAnimMontage_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimBlendSpace
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBlendSpace*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlendSpace* UDynamicSkinTable::GetAnimBlendSpace(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAnimBlendSpace");

	UDynamicSkinTable_GetAnimBlendSpace_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimationAsset
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UDynamicSkinTable::GetAnimationAsset(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAnimationAsset");

	UDynamicSkinTable_GetAnimationAsset_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimAimOffset
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAimOffsetBlendSpace*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAimOffsetBlendSpace* UDynamicSkinTable::GetAnimAimOffset(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAnimAimOffset");

	UDynamicSkinTable_GetAnimAimOffset_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAllKeywords
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UDynamicSkinTable::GetAllKeywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAllKeywords");

	UDynamicSkinTable_GetAllKeywords_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.DynamicSkinTable.AddDataTableWithQuery
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDataTable**             InTable                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InPriority                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagQuery*      InQuery                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDynamicSkinTable::AddDataTableWithQuery(class UDataTable** InTable, int* InPriority, struct FGameplayTagQuery* InQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.AddDataTableWithQuery");

	UDynamicSkinTable_AddDataTableWithQuery_Params params;
	params.InTable = InTable;
	params.InPriority = InPriority;
	params.InQuery = InQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.DynamicSkinTable.AddDataTables
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FDataTableInfo>* InTableInfos                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDynamicSkinTable::AddDataTables(TArray<struct FDataTableInfo>* InTableInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.AddDataTables");

	UDynamicSkinTable_AddDataTables_Params params;
	params.InTableInfos = InTableInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.DynamicSkinTable.AddDataTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable**             InTable                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InPriority                     (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicSkinTable::AddDataTable(class UDataTable** InTable, int* InPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.AddDataTable");

	UDynamicSkinTable_AddDataTable_Params params;
	params.InTable = InTable;
	params.InPriority = InPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeywords
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>*          InKeywords                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiSkinObject::UnsubscribeToKeywords(TArray<struct FName>* InKeywords)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeywords");

	UMultiSkinObject_UnsubscribeToKeywords_Params params;
	params.InKeywords = InKeywords;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeyword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InKeyword                      (Parm, ZeroConstructor, IsPlainOldData)

void UMultiSkinObject::UnsubscribeToKeyword(struct FName* InKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeyword");

	UMultiSkinObject_UnsubscribeToKeyword_Params params;
	params.InKeyword = InKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToAllKeywords
// (Final, Native, Public, BlueprintCallable)

void UMultiSkinObject::UnsubscribeToAllKeywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToAllKeywords");

	UMultiSkinObject_UnsubscribeToAllKeywords_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeywords
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>*          InKeywords                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiSkinObject::SubscribeToKeywords(TArray<struct FName>* InKeywords)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeywords");

	UMultiSkinObject_SubscribeToKeywords_Params params;
	params.InKeywords = InKeywords;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeyword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InKeyword                      (Parm, ZeroConstructor, IsPlainOldData)

void UMultiSkinObject::SubscribeToKeyword(struct FName* InKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeyword");

	UMultiSkinObject_SubscribeToKeyword_Params params;
	params.InKeyword = InKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.MultiSkinObject.SubscribeToAllKeywords
// (Final, Native, Public, BlueprintCallable)

void UMultiSkinObject::SubscribeToAllKeywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.SubscribeToAllKeywords");

	UMultiSkinObject_SubscribeToAllKeywords_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.MultiSkinObject.RemoveParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMultiSkinObject**       InParent                       (Parm, ZeroConstructor, IsPlainOldData)

void UMultiSkinObject::RemoveParent(class UMultiSkinObject** InParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.RemoveParent");

	UMultiSkinObject_RemoveParent_Params params;
	params.InParent = InParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetTexture
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UMultiSkinObject::GetTexture(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetTexture");

	UMultiSkinObject_GetTexture_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetStaticMesh
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* UMultiSkinObject::GetStaticMesh(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetStaticMesh");

	UMultiSkinObject_GetStaticMesh_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetSkeletalMesh
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UMultiSkinObject::GetSkeletalMesh(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetSkeletalMesh");

	UMultiSkinObject_GetSkeletalMesh_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetSelectiveAudioEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USelectiveAkAudioEvent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USelectiveAkAudioEvent* UMultiSkinObject::GetSelectiveAudioEvent(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetSelectiveAudioEvent");

	UMultiSkinObject_GetSelectiveAudioEvent_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetPoseAsset
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPoseAsset*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPoseAsset* UMultiSkinObject::GetPoseAsset(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetPoseAsset");

	UMultiSkinObject_GetPoseAsset_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetPhysicsAsset
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPhysicsAsset*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhysicsAsset* UMultiSkinObject::GetPhysicsAsset(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetPhysicsAsset");

	UMultiSkinObject_GetPhysicsAsset_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetParticleSystem
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UMultiSkinObject::GetParticleSystem(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetParticleSystem");

	UMultiSkinObject_GetParticleSystem_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetNameField
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMultiSkinObject::GetNameField(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetNameField");

	UMultiSkinObject_GetNameField_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetMaterialInterface
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UMultiSkinObject::GetMaterialInterface(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetMaterialInterface");

	UMultiSkinObject_GetMaterialInterface_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetLinearColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UMultiSkinObject::GetLinearColor(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetLinearColor");

	UMultiSkinObject_GetLinearColor_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetInt
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMultiSkinObject::GetInt(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetInt");

	UMultiSkinObject_GetInt_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMultiSkinObject::GetFloat(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetFloat");

	UMultiSkinObject_GetFloat_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMultiSkinObject::GetClass(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetClass");

	UMultiSkinObject_GetClass_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetBool
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMultiSkinObject::GetBool(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetBool");

	UMultiSkinObject_GetBool_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAudioEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAkAudioEvent* UMultiSkinObject::GetAudioEvent(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAudioEvent");

	UMultiSkinObject_GetAudioEvent_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAnimSequence
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* UMultiSkinObject::GetAnimSequence(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAnimSequence");

	UMultiSkinObject_GetAnimSequence_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAnimMontage
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UMultiSkinObject::GetAnimMontage(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAnimMontage");

	UMultiSkinObject_GetAnimMontage_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAnimBlendSpace
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBlendSpace*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlendSpace* UMultiSkinObject::GetAnimBlendSpace(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAnimBlendSpace");

	UMultiSkinObject_GetAnimBlendSpace_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAnimAimOffset
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAimOffsetBlendSpace*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAimOffsetBlendSpace* UMultiSkinObject::GetAnimAimOffset(struct FName* RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAnimAimOffset");

	UMultiSkinObject_GetAnimAimOffset_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAllSkinKeywords
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UMultiSkinObject::GetAllSkinKeywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAllSkinKeywords");

	UMultiSkinObject_GetAllSkinKeywords_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.MultiSkinObject.AddParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMultiSkinObject**       InParent                       (Parm, ZeroConstructor, IsPlainOldData)

void UMultiSkinObject::AddParent(class UMultiSkinObject** InParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.AddParent");

	UMultiSkinObject_AddParent_Params params;
	params.InParent = InParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetSkeletalMeshKeyword
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InKeyword                      (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          InFailSafeSkeletalMesh         (Parm, ZeroConstructor, IsPlainOldData)

void USkinnableSkeletalMeshComponent::SetSkeletalMeshKeyword(struct FName* InKeyword, class USkeletalMesh** InFailSafeSkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetSkeletalMeshKeyword");

	USkinnableSkeletalMeshComponent_SetSkeletalMeshKeyword_Params params;
	params.InKeyword = InKeyword;
	params.InFailSafeSkeletalMesh = InFailSafeSkeletalMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPhysicsAssetKeyword
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InKeyword                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicsAsset**          InFailSafePhysicsAsset         (Parm, ZeroConstructor, IsPlainOldData)

void USkinnableSkeletalMeshComponent::SetPhysicsAssetKeyword(struct FName* InKeyword, class UPhysicsAsset** InFailSafePhysicsAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPhysicsAssetKeyword");

	USkinnableSkeletalMeshComponent_SetPhysicsAssetKeyword_Params params;
	params.InKeyword = InKeyword;
	params.InFailSafePhysicsAsset = InFailSafePhysicsAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameterOnAllMaterials
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParameterValue                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USkinnableSkeletalMeshComponent::SetPersistentVectorParameterOnAllMaterials(struct FName* ParameterName, struct FLinearColor* ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameterOnAllMaterials");

	USkinnableSkeletalMeshComponent_SetPersistentVectorParameterOnAllMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameter
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           MaterialSlot                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParameterValue                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USkinnableSkeletalMeshComponent::SetPersistentVectorParameter(int* MaterialSlot, struct FName* ParameterName, struct FLinearColor* ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameter");

	USkinnableSkeletalMeshComponent_SetPersistentVectorParameter_Params params;
	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameterOnAllMaterials
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               ParameterValue                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USkinnableSkeletalMeshComponent::SetPersistentTextureParameterOnAllMaterials(struct FName* ParameterName, class UTexture** ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameterOnAllMaterials");

	USkinnableSkeletalMeshComponent_SetPersistentTextureParameterOnAllMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameter
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           MaterialSlot                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               ParameterValue                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USkinnableSkeletalMeshComponent::SetPersistentTextureParameter(int* MaterialSlot, struct FName* ParameterName, class UTexture** ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameter");

	USkinnableSkeletalMeshComponent_SetPersistentTextureParameter_Params params;
	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameterOnAllMaterials
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ParameterValue                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USkinnableSkeletalMeshComponent::SetPersistentScalarParameterOnAllMaterials(struct FName* ParameterName, float* ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameterOnAllMaterials");

	USkinnableSkeletalMeshComponent_SetPersistentScalarParameterOnAllMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameter
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           MaterialSlot                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ParameterValue                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USkinnableSkeletalMeshComponent::SetPersistentScalarParameter(int* MaterialSlot, struct FName* ParameterName, float* ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameter");

	USkinnableSkeletalMeshComponent_SetPersistentScalarParameter_Params params;
	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetAnimClassKeyword
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InKeyword                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InFailSafeAnimClass            (Parm, ZeroConstructor, IsPlainOldData)

void USkinnableSkeletalMeshComponent::SetAnimClassKeyword(struct FName* InKeyword, class UClass** InFailSafeAnimClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetAnimClassKeyword");

	USkinnableSkeletalMeshComponent_SetAnimClassKeyword_Params params;
	params.InKeyword = InKeyword;
	params.InFailSafeAnimClass = InFailSafeAnimClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.RemovePersistentMaterialParameter
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           ParameterId                    (Parm, ZeroConstructor, IsPlainOldData)

void USkinnableSkeletalMeshComponent::RemovePersistentMaterialParameter(int* ParameterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.RemovePersistentMaterialParameter");

	USkinnableSkeletalMeshComponent_RemovePersistentMaterialParameter_Params params;
	params.ParameterId = ParameterId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.GetSkinObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMultiSkinObject*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMultiSkinObject* USkinnableSkeletalMeshComponent::GetSkinObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.GetSkinObject");

	USkinnableSkeletalMeshComponent_GetSkinObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.ForwardAnimInitialized
// (Final, Native, Private)

void USkinnableSkeletalMeshComponent::ForwardAnimInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.ForwardAnimInitialized");

	USkinnableSkeletalMeshComponent_ForwardAnimInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.SkinnableMergedMeshComponent.SetSkeletalMeshKeywords
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>*          InKeywords                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMesh**          InFailSafeSkeletalMesh         (Parm, ZeroConstructor, IsPlainOldData)

void USkinnableMergedMeshComponent::SetSkeletalMeshKeywords(TArray<struct FName>* InKeywords, class USkeletalMesh** InFailSafeSkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableMergedMeshComponent.SetSkeletalMeshKeywords");

	USkinnableMergedMeshComponent_SetSkeletalMeshKeywords_Params params;
	params.InKeywords = InKeywords;
	params.InFailSafeSkeletalMesh = InFailSafeSkeletalMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.SkinnableMergedMeshComponent.RemoveSkeletalMeshKeyword
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InKeyword                      (Parm, ZeroConstructor, IsPlainOldData)

void USkinnableMergedMeshComponent::RemoveSkeletalMeshKeyword(struct FName* InKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableMergedMeshComponent.RemoveSkeletalMeshKeyword");

	USkinnableMergedMeshComponent_RemoveSkeletalMeshKeyword_Params params;
	params.InKeyword = InKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DataTableSkinsCommon.SkinnableMergedMeshComponent.AddSkeletalMeshKeyword
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InKeyword                      (Parm, ZeroConstructor, IsPlainOldData)

void USkinnableMergedMeshComponent::AddSkeletalMeshKeyword(struct FName* InKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableMergedMeshComponent.AddSkeletalMeshKeyword");

	USkinnableMergedMeshComponent_AddSkeletalMeshKeyword_Params params;
	params.InKeyword = InKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
