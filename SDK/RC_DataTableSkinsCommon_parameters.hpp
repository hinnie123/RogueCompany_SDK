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

// Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTables
struct UDynamicSkinTable_RemoveDataTables_Params
{
	TArray<class UDataTable*>*                         InTables;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTable
struct UDynamicSkinTable_RemoveDataTable_Params
{
	class UDataTable**                                 InTable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.IsTablePendingAssetLoad
struct UDynamicSkinTable_IsTablePendingAssetLoad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetTexture
struct UDynamicSkinTable_GetTexture_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetStaticMesh
struct UDynamicSkinTable_GetStaticMesh_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetSkeletalMesh
struct UDynamicSkinTable_GetSkeletalMesh_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetSelectiveAudioEvent
struct UDynamicSkinTable_GetSelectiveAudioEvent_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USelectiveAkAudioEvent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetPoseAsset
struct UDynamicSkinTable_GetPoseAsset_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPoseAsset*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetPhysicsAsset
struct UDynamicSkinTable_GetPhysicsAsset_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetParticleSystem
struct UDynamicSkinTable_GetParticleSystem_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetNameField
struct UDynamicSkinTable_GetNameField_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetMaterialInterface
struct UDynamicSkinTable_GetMaterialInterface_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetLinearColor
struct UDynamicSkinTable_GetLinearColor_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetInt
struct UDynamicSkinTable_GetInt_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetFloat
struct UDynamicSkinTable_GetFloat_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetClass
struct UDynamicSkinTable_GetClass_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetBool
struct UDynamicSkinTable_GetBool_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetAudioEvent
struct UDynamicSkinTable_GetAudioEvent_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimSequence
struct UDynamicSkinTable_GetAnimSequence_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimMontage
struct UDynamicSkinTable_GetAnimMontage_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimBlendSpace
struct UDynamicSkinTable_GetAnimBlendSpace_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimationAsset
struct UDynamicSkinTable_GetAnimationAsset_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimAimOffset
struct UDynamicSkinTable_GetAnimAimOffset_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.DynamicSkinTable.GetAllKeywords
struct UDynamicSkinTable_GetAllKeywords_Params
{
};

// Function DataTableSkinsCommon.DynamicSkinTable.AddDataTableWithQuery
struct UDynamicSkinTable_AddDataTableWithQuery_Params
{
	class UDataTable**                                 InTable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InPriority;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery*                          InQuery;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DataTableSkinsCommon.DynamicSkinTable.AddDataTables
struct UDynamicSkinTable_AddDataTables_Params
{
	TArray<struct FDataTableInfo>*                     InTableInfos;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DataTableSkinsCommon.DynamicSkinTable.AddDataTable
struct UDynamicSkinTable_AddDataTable_Params
{
	class UDataTable**                                 InTable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InPriority;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeywords
struct UMultiSkinObject_UnsubscribeToKeywords_Params
{
	TArray<struct FName>*                              InKeywords;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeyword
struct UMultiSkinObject_UnsubscribeToKeyword_Params
{
	struct FName*                                      InKeyword;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToAllKeywords
struct UMultiSkinObject_UnsubscribeToAllKeywords_Params
{
};

// Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeywords
struct UMultiSkinObject_SubscribeToKeywords_Params
{
	TArray<struct FName>*                              InKeywords;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeyword
struct UMultiSkinObject_SubscribeToKeyword_Params
{
	struct FName*                                      InKeyword;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.SubscribeToAllKeywords
struct UMultiSkinObject_SubscribeToAllKeywords_Params
{
};

// Function DataTableSkinsCommon.MultiSkinObject.RemoveParent
struct UMultiSkinObject_RemoveParent_Params
{
	class UMultiSkinObject**                           InParent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetTexture
struct UMultiSkinObject_GetTexture_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetStaticMesh
struct UMultiSkinObject_GetStaticMesh_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetSkeletalMesh
struct UMultiSkinObject_GetSkeletalMesh_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetSelectiveAudioEvent
struct UMultiSkinObject_GetSelectiveAudioEvent_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USelectiveAkAudioEvent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetPoseAsset
struct UMultiSkinObject_GetPoseAsset_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPoseAsset*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetPhysicsAsset
struct UMultiSkinObject_GetPhysicsAsset_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetParticleSystem
struct UMultiSkinObject_GetParticleSystem_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetNameField
struct UMultiSkinObject_GetNameField_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetMaterialInterface
struct UMultiSkinObject_GetMaterialInterface_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetLinearColor
struct UMultiSkinObject_GetLinearColor_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetInt
struct UMultiSkinObject_GetInt_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetFloat
struct UMultiSkinObject_GetFloat_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetClass
struct UMultiSkinObject_GetClass_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetBool
struct UMultiSkinObject_GetBool_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetAudioEvent
struct UMultiSkinObject_GetAudioEvent_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetAnimSequence
struct UMultiSkinObject_GetAnimSequence_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetAnimMontage
struct UMultiSkinObject_GetAnimMontage_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetAnimBlendSpace
struct UMultiSkinObject_GetAnimBlendSpace_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetAnimAimOffset
struct UMultiSkinObject_GetAnimAimOffset_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.MultiSkinObject.GetAllSkinKeywords
struct UMultiSkinObject_GetAllSkinKeywords_Params
{
};

// Function DataTableSkinsCommon.MultiSkinObject.AddParent
struct UMultiSkinObject_AddParent_Params
{
	class UMultiSkinObject**                           InParent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetSkeletalMeshKeyword
struct USkinnableSkeletalMeshComponent_SetSkeletalMeshKeyword_Params
{
	struct FName*                                      InKeyword;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              InFailSafeSkeletalMesh;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPhysicsAssetKeyword
struct USkinnableSkeletalMeshComponent_SetPhysicsAssetKeyword_Params
{
	struct FName*                                      InKeyword;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset**                              InFailSafePhysicsAsset;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameterOnAllMaterials
struct USkinnableSkeletalMeshComponent_SetPersistentVectorParameterOnAllMaterials_Params
{
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               ParameterValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameter
struct USkinnableSkeletalMeshComponent_SetPersistentVectorParameter_Params
{
	int*                                               MaterialSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               ParameterValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameterOnAllMaterials
struct USkinnableSkeletalMeshComponent_SetPersistentTextureParameterOnAllMaterials_Params
{
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   ParameterValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameter
struct USkinnableSkeletalMeshComponent_SetPersistentTextureParameter_Params
{
	int*                                               MaterialSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   ParameterValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameterOnAllMaterials
struct USkinnableSkeletalMeshComponent_SetPersistentScalarParameterOnAllMaterials_Params
{
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ParameterValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameter
struct USkinnableSkeletalMeshComponent_SetPersistentScalarParameter_Params
{
	int*                                               MaterialSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ParameterValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetAnimClassKeyword
struct USkinnableSkeletalMeshComponent_SetAnimClassKeyword_Params
{
	struct FName*                                      InKeyword;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InFailSafeAnimClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.RemovePersistentMaterialParameter
struct USkinnableSkeletalMeshComponent_RemovePersistentMaterialParameter_Params
{
	int*                                               ParameterId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.GetSkinObject
struct USkinnableSkeletalMeshComponent_GetSkinObject_Params
{
	class UMultiSkinObject*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.ForwardAnimInitialized
struct USkinnableSkeletalMeshComponent_ForwardAnimInitialized_Params
{
};

// Function DataTableSkinsCommon.SkinnableMergedMeshComponent.SetSkeletalMeshKeywords
struct USkinnableMergedMeshComponent_SetSkeletalMeshKeywords_Params
{
	TArray<struct FName>*                              InKeywords;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMesh**                              InFailSafeSkeletalMesh;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableMergedMeshComponent.RemoveSkeletalMeshKeyword
struct USkinnableMergedMeshComponent_RemoveSkeletalMeshKeyword_Params
{
	struct FName*                                      InKeyword;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DataTableSkinsCommon.SkinnableMergedMeshComponent.AddSkeletalMeshKeyword
struct USkinnableMergedMeshComponent_AddSkeletalMeshKeyword_Params
{
	struct FName*                                      InKeyword;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
