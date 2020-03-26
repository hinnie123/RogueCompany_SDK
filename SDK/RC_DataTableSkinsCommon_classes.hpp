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

// Class DataTableSkinsCommon.DynamicSkinTable
// 0x0160 (0x0188 - 0x0028)
class UDynamicSkinTable : public UObject
{
public:
	TArray<struct FDataTableInfo>                      ActiveDataTables;                                         // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<struct FDataTableInfo>                      InactiveDataTables;                                       // 0x0038(0x0010) (ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnFinishedAllPendingLoadsDel;                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x118];                                     // 0x0058(0x0118) MISSED OFFSET
	TScriptInterface<class USkinTagAssetInterface>     _SkinTagAsset;                                            // 0x0170(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0180(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.DynamicSkinTable");
		return ptr;
	}


	void RemoveDataTables(TArray<class UDataTable*>* InTables);
	void RemoveDataTable(class UDataTable** InTable);
	bool IsTablePendingAssetLoad();
	class UTexture* GetTexture(struct FName* RowName, int* Priority);
	class UStaticMesh* GetStaticMesh(struct FName* RowName, int* Priority);
	class USkeletalMesh* GetSkeletalMesh(struct FName* RowName, int* Priority);
	class USelectiveAkAudioEvent* GetSelectiveAudioEvent(struct FName* RowName, int* Priority);
	class UPoseAsset* GetPoseAsset(struct FName* RowName, int* Priority);
	class UPhysicsAsset* GetPhysicsAsset(struct FName* RowName, int* Priority);
	class UParticleSystem* GetParticleSystem(struct FName* RowName, int* Priority);
	struct FName GetNameField(struct FName* RowName, int* Priority);
	class UMaterialInterface* GetMaterialInterface(struct FName* RowName, int* Priority);
	struct FLinearColor GetLinearColor(struct FName* RowName, int* Priority);
	int GetInt(struct FName* RowName, int* Priority);
	float GetFloat(struct FName* RowName, int* Priority);
	class UClass* GetClass(struct FName* RowName, int* Priority);
	bool GetBool(struct FName* RowName, int* Priority);
	class UAkAudioEvent* GetAudioEvent(struct FName* RowName, int* Priority);
	class UAnimSequence* GetAnimSequence(struct FName* RowName, int* Priority);
	class UAnimMontage* GetAnimMontage(struct FName* RowName, int* Priority);
	class UBlendSpace* GetAnimBlendSpace(struct FName* RowName, int* Priority);
	class UAnimationAsset* GetAnimationAsset(struct FName* RowName, int* Priority);
	class UAimOffsetBlendSpace* GetAnimAimOffset(struct FName* RowName, int* Priority);
	void GetAllKeywords();
	void AddDataTableWithQuery(class UDataTable** InTable, int* InPriority, struct FGameplayTagQuery* InQuery);
	void AddDataTables(TArray<struct FDataTableInfo>* InTableInfos);
	void AddDataTable(class UDataTable** InTable, int* InPriority);
};


// Class DataTableSkinsCommon.MultiSkinObject
// 0x0140 (0x0168 - 0x0028)
class UMultiSkinObject : public UObject
{
public:
	TArray<TWeakObjectPtr<class UMultiSkinObject>>     ParentSkinnedObjects;                                     // 0x0028(0x0010) (ZeroConstructor)
	TArray<TWeakObjectPtr<class UMultiSkinObject>>     ChildSkinnedObjects;                                      // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty DataTableSkinsCommon.MultiSkinObject.SubscribedKeywords
	bool                                               bSubscribeToAllKeywords;                                  // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0099(0x001F) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishedAllPendingLoadsDel;                             // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<int, struct FDynamicSkinTableMapEntry>        DynamicSkinTables;                                        // 0x00C8(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FCachedRowsEntry>        _CachedRows;                                              // 0x0118(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.MultiSkinObject");
		return ptr;
	}


	void UnsubscribeToKeywords(TArray<struct FName>* InKeywords);
	void UnsubscribeToKeyword(struct FName* InKeyword);
	void UnsubscribeToAllKeywords();
	void SubscribeToKeywords(TArray<struct FName>* InKeywords);
	void SubscribeToKeyword(struct FName* InKeyword);
	void SubscribeToAllKeywords();
	void RemoveParent(class UMultiSkinObject** InParent);
	class UTexture* GetTexture(struct FName* RowName, int* Priority);
	class UStaticMesh* GetStaticMesh(struct FName* RowName, int* Priority);
	class USkeletalMesh* GetSkeletalMesh(struct FName* RowName, int* Priority);
	class USelectiveAkAudioEvent* GetSelectiveAudioEvent(struct FName* RowName, int* Priority);
	class UPoseAsset* GetPoseAsset(struct FName* RowName, int* Priority);
	class UPhysicsAsset* GetPhysicsAsset(struct FName* RowName, int* Priority);
	class UParticleSystem* GetParticleSystem(struct FName* RowName, int* Priority);
	struct FName GetNameField(struct FName* RowName, int* Priority);
	class UMaterialInterface* GetMaterialInterface(struct FName* RowName, int* Priority);
	struct FLinearColor GetLinearColor(struct FName* RowName, int* Priority);
	int GetInt(struct FName* RowName, int* Priority);
	float GetFloat(struct FName* RowName, int* Priority);
	class UClass* GetClass(struct FName* RowName, int* Priority);
	bool GetBool(struct FName* RowName, int* Priority);
	class UAkAudioEvent* GetAudioEvent(struct FName* RowName, int* Priority);
	class UAnimSequence* GetAnimSequence(struct FName* RowName, int* Priority);
	class UAnimMontage* GetAnimMontage(struct FName* RowName, int* Priority);
	class UBlendSpace* GetAnimBlendSpace(struct FName* RowName, int* Priority);
	class UAimOffsetBlendSpace* GetAnimAimOffset(struct FName* RowName, int* Priority);
	void GetAllSkinKeywords();
	void AddParent(class UMultiSkinObject** InParent);
};


// Class DataTableSkinsCommon.SkinnableSkeletalMeshComponent
// 0x00B0 (0x0D40 - 0x0C90)
class USkinnableSkeletalMeshComponent : public USkeletalMeshComponentBudgeted
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0C90(0x0008) MISSED OFFSET
	class USkeletalMesh*                               FailSafeSkeletalMesh;                                     // 0x0C98(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PhysicsAssetKeyword;                                      // 0x0CA0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               FailSafePhysicsAsset;                                     // 0x0CA8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimInstanceClassKeyword;                                 // 0x0CB0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FailSafeAnimClass;                                        // 0x0CB8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      LastSkinnedAnimClass;                                     // 0x0CC0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceAnimationUpdateOnSkinUpdate;                        // 0x0CC8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0CC9(0x0007) MISSED OFFSET
	class UMultiSkinObject*                            _SkinObject;                                              // 0x0CD0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAnimInitializedOnSkinnableMeshDel;                      // 0x0CD8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0CE8(0x0030) MISSED OFFSET
	bool                                               bAllowMaterialSkinning;                                   // 0x0D18(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0D19(0x0007) MISSED OFFSET
	TArray<struct FString>                             MaterialSkinningPrefixes;                                 // 0x0D20(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0D30(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinnableSkeletalMeshComponent");
		return ptr;
	}


	void SetSkeletalMeshKeyword(struct FName* InKeyword, class USkeletalMesh** InFailSafeSkeletalMesh);
	void SetPhysicsAssetKeyword(struct FName* InKeyword, class UPhysicsAsset** InFailSafePhysicsAsset);
	int SetPersistentVectorParameterOnAllMaterials(struct FName* ParameterName, struct FLinearColor* ParameterValue);
	int SetPersistentVectorParameter(int* MaterialSlot, struct FName* ParameterName, struct FLinearColor* ParameterValue);
	int SetPersistentTextureParameterOnAllMaterials(struct FName* ParameterName, class UTexture** ParameterValue);
	int SetPersistentTextureParameter(int* MaterialSlot, struct FName* ParameterName, class UTexture** ParameterValue);
	int SetPersistentScalarParameterOnAllMaterials(struct FName* ParameterName, float* ParameterValue);
	int SetPersistentScalarParameter(int* MaterialSlot, struct FName* ParameterName, float* ParameterValue);
	void SetAnimClassKeyword(struct FName* InKeyword, class UClass** InFailSafeAnimClass);
	void RemovePersistentMaterialParameter(int* ParameterId);
	class UMultiSkinObject* GetSkinObject();
	void ForwardAnimInitialized();
};


// Class DataTableSkinsCommon.SkinnableMergedMeshComponent
// 0x0030 (0x0D70 - 0x0D40)
class USkinnableMergedMeshComponent : public USkinnableSkeletalMeshComponent
{
public:
	TArray<struct FName>                               CompositeSkeletalMeshKeywords;                            // 0x0D40(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0D50(0x0010) UNKNOWN PROPERTY: ArrayProperty DataTableSkinsCommon.SkinnableMergedMeshComponent.SkeletalMeshParts
	unsigned char                                      UnknownData01[0x10];                                      // 0x0D60(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinnableMergedMeshComponent");
		return ptr;
	}


	void SetSkeletalMeshKeywords(TArray<struct FName>* InKeywords, class USkeletalMesh** InFailSafeSkeletalMesh);
	void RemoveSkeletalMeshKeyword(struct FName* InKeyword);
	void AddSkeletalMeshKeyword(struct FName* InKeyword);
};


// Class DataTableSkinsCommon.SkinObjectManagerComponent
// 0x00A0 (0x0198 - 0x00F8)
class USkinObjectManagerComponent : public UActorComponent
{
public:
	TMap<struct FName, class UMultiSkinObject*>        SkinObjects;                                              // 0x00F8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0148(0x0050) UNKNOWN PROPERTY: SetProperty DataTableSkinsCommon.SkinObjectManagerComponent.SkinObjectsSet

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinObjectManagerComponent");
		return ptr;
	}

};


// Class DataTableSkinsCommon.SkinTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class USkinTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinTagAssetInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
