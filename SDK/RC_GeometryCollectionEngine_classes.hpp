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

// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x01F0 (0x0520 - 0x0330)
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*                _GeometryCollectionComponent;                             // 0x0330(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGeometryCollectionDebugDrawComponent*       _GeometryCollectionDebugDrawComponent;                    // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0340(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionActor");
		return ptr;
	}


	bool RaycastSingle(struct FVector* start, struct FVector* end, struct FHitResult* OutHit);
};


// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0028 (0x0050 - 0x0028)
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack                     RecordedData;                                             // 0x0028(0x0010)
	class UGeometryCollection*                         SupportedCollection;                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompatibleCollectionState;                                // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionCache");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x0110 (0x06F0 - 0x05E0)
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	class UGeometryCollection*                         RestCollection;                                           // 0x05E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGeometryCollection*                         DynamicCollection;                                        // 0x05E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AFieldSystemActor*                           _FieldSystem;                                             // 0x05F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Simulating;                                               // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EObjectTypeEnum                                    _ObjectType;                                              // 0x05F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableClustering;                                         // 0x05FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05FB(0x0001) MISSED OFFSET
	int                                                MaxClusterLevel;                                          // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      DamageThreshold;                                          // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ECollisionTypeEnum                                 _CollisionType;                                           // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EImplicitTypeEnum                                  _ImplicitType;                                            // 0x0611(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0612(0x0002) MISSED OFFSET
	int                                                MinLevelSetResolution;                                    // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSetResolution;                                    // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MassAsDensity;                                            // 0x061C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x061D(0x0003) MISSED OFFSET
	float                                              Mass;                                                     // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumMassClamp;                                         // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionParticlesFraction;                               // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bouncyness;                                               // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearSleepingThreshold;                                  // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSleepingThreshold;                                 // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInitialVelocityTypeEnum                           _InitialVelocityType;                                     // 0x063C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x0640(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x064C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGeomComponentCacheParameters               _CacheParameters;                                         // 0x0658(0x0038) (Edit)
	class UBoxComponent*                               DummyBoxComponent;                                        // 0x0690(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0698(0x0020) MISSED OFFSET
	int                                                InteriorMaterialID;                                       // 0x06B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoneSelectedMaterialID;                                   // 0x06BC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x30];                                      // 0x06C0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionComponent");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x0020 (0x0350 - 0x0330)
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	float                                              PointThickness;                                           // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0334(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTextShadow;                                              // 0x0338(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	float                                              TextScale;                                                // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalScale;                                              // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransformScale;                                           // 0x0344(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrowScale;                                               // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0090 (0x0670 - 0x05E0)
class UGeometryCollectionDebugDrawComponent : public UMeshComponent
{
public:
	class AGeometryCollectionRenderLevelSetActor*      _GeometryCollectionRenderLevelSet;                        // 0x05E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawLevelSet;                                       // 0x05E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRenderLevelSetAtOrigin;                                  // 0x05E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05EA(0x0002) MISSED OFFSET
	int                                                LevelSetIndex;                                            // 0x05EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawTransform;                                      // 0x05F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawTransformIndex;                                 // 0x05F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawBoundingBox;                                    // 0x05F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x05F3(0x0001) MISSED OFFSET
	struct FLinearColor                                GeometryColor;                                            // 0x05F4(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawProximity;                                      // 0x0604(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawBreakingFace;                                   // 0x0605(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawBreakingRegionData;                             // 0x0606(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0607(0x0001) MISSED OFFSET
	struct FLinearColor                                BreakingColor;                                            // 0x0608(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawFace;                                           // 0x0618(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawFaceIndex;                                      // 0x0619(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawFaceNormal;                                     // 0x061A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawSingleFace;                                     // 0x061B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SingleFaceIdx;                                            // 0x061C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FaceColor;                                                // 0x0620(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawVertex;                                         // 0x0630(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawVertexIndex;                                    // 0x0631(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawVertexNormal;                                   // 0x0632(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0633(0x0001) MISSED OFFSET
	struct FLinearColor                                VertexColor;                                              // 0x0634(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2C];                                      // 0x0644(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollection
// 0x0050 (0x0078 - 0x0028)
class UGeometryCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0030(0x0010) (ZeroConstructor)
	struct FGuid                                       PersistentGuid;                                           // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateGuid;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                InteriorMaterialIndex;                                    // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoneSelectedMaterialIndex;                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollection");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x00A0 (0x03D0 - 0x0330)
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                      // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   RayMarchMaterial;                                         // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceTolerance;                                         // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Isovalue;                                                 // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RenderVolumeBoundingBox;                                  // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x86];                                      // 0x034A(0x0086) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
		return ptr;
	}

};


// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0x0040 (0x0138 - 0x00F8)
class UStaticMeshSimulationComponent : public UActorComponent
{
public:
	bool                                               Simulating;                                               // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EObjectTypeEnum                                    _ObjectType;                                              // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	float                                              Mass;                                                     // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECollisionTypeEnum                                 _CollisionType;                                           // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInitialVelocityTypeEnum                           _InitialVelocityType;                                     // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x0104(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x0110(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageThreshold;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bouncyness;                                               // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AChaosSolverActor*                           _ChaosSolverActor;                                        // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.StaticMeshSimulationComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
