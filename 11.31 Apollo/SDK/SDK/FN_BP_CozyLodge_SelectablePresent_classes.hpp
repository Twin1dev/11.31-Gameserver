#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x548 - 0x4E8)
// BlueprintGeneratedClass BP_CozyLodge_SelectablePresent.BP_CozyLodge_SelectablePresent_C
class ABP_CozyLodge_SelectablePresent_C : public AFortNavigationActor_EventGraphItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DebugOpenState;                                    // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_632F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRandomStream                         NewVar_0;                                          // 0x4F4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_6330[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Debugmesh;                                         // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableRandom;                                     // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6331[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           OpenedMesh;                                        // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Present;                                       // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Open;                                          // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            HightlightMaterial;                                // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                         FixOpenedMesh;                                     // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6332[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            ShakeSound;                                        // 0x540(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CozyLodge_SelectablePresent_C* GetDefaultObj();

	void UserConstructionScript(const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, int32 Temp_int_Variable, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, int32 Temp_int_Variable_1, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, bool Temp_bool_Variable, const struct FTransform& Temp_struct_Variable_10, int32 Temp_int_Variable_2, const struct FLinearColor& Temp_struct_Variable_11, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FLinearColor& Temp_struct_Variable_12, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, const struct FLinearColor& Temp_struct_Variable_15, const struct FLinearColor& Temp_struct_Variable_16, const struct FLinearColor& Temp_struct_Variable_17, const struct FLinearColor& Temp_struct_Variable_18, const struct FLinearColor& Temp_struct_Variable_19, int32 Temp_int_Array_Index_Variable, class UMaterialInterface* CallFunc_Array_Get_Item, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_RoundFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, int32 Temp_int_Variable_3, class UPrimitiveComponent* K2Node_Select_Default_3, const struct FLinearColor& K2Node_Select_Default_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue);
	void ReceiveBeginPlay();
	void UpdateDisplayMeshToOpened();
	void ExecuteUbergraph_BP_CozyLodge_SelectablePresent(int32 EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


