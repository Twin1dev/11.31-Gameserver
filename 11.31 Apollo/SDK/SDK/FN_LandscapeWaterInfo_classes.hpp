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

// 0x78 (0x290 - 0x218)
// BlueprintGeneratedClass LandscapeWaterInfo.LandscapeWaterInfo_C
class ALandscapeWaterInfo_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Game_Texture__Water_Velocity_and_Height;           // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            LS_Transform;                                      // 0x230(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FIntPoint                             LS_RT_Res;                                         // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Terrain_Velocity_and_Height_Texture;           // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              External_Water_MID_To_Update;                      // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Underwater_PostProcess_Material;                   // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Underwater_PP_MID;                                 // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Underwater_PostProcess_Material_Transitions;       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeWaterInfo_C");
		return Clss;
	}

	void Apply_PostProcess_MID_to_WaterBodies(class UMaterialInstanceDynamic* TempMID, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 Temp_int_Loop_Counter_Variable, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, bool CallFunc_IsValid_ReturnValue, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_1, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue_1, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables_1, TArray<class AWaterBody*>& CallFunc_GetAllActorsOfClass_OutActors, class AWaterBody* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, const struct FUnderwaterPostProcessSettings& K2Node_MakeStruct_UnderwaterPostProcessSettings, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FUnderwaterPostProcessSettings& K2Node_MakeStruct_UnderwaterPostProcessSettings_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
	void Update_Water_MID(class UTexture* Texture, bool CallFunc_IsValid_ReturnValue);
	void Set_Water_MPC_Values(const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1);
	void UserConstructionScript(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_GetScalarParameterValue_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LandscapeWaterInfo(int32 EntryPoint, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
