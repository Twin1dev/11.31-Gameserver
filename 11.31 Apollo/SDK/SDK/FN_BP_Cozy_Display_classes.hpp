#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x288 - 0x218)
// BlueprintGeneratedClass BP_Cozy_Display.BP_Cozy_Display_C
class ABP_Cozy_Display_C : public AActor
{
public:
	class UParticleSystemComponent*              UnlockSparkle;                                     // 0x218(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX;                                                // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           Mesh;                                              // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         SkelMesh;                                          // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ParticleSystem;                                    // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FParticleSysParam>             Parameters;                                        // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         Disable_Sparkle;                                   // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ManualBounds;                                      // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66C0[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               MaxBounds;                                         // 0x26C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MinBounds;                                         // 0x278(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnRate;                                         // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Cozy_Display_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin_1, const struct FVector& CallFunc_GetComponentBounds_BoxExtent_1, float CallFunc_GetComponentBounds_SphereRadius_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_SelectVector_ReturnValue_2, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_SelectVector_ReturnValue_3, const struct FVector& CallFunc_SelectVector_ReturnValue_4, const struct FVector& CallFunc_SelectVector_ReturnValue_5, const struct FVector& CallFunc_SelectVector_ReturnValue_6, const struct FVector& CallFunc_SelectVector_ReturnValue_7, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, const struct FTransform& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_7, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
