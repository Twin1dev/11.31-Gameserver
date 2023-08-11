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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AthenaFunctionLibrary.AthenaFunctionLibrary_C
class UAthenaFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaFunctionLibrary_C");
		return Clss;
	}

	bool RowToBool(struct FScalableFloat& Input, float Level, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_GetValueAtLevel_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool K2Node_Select_Default);
	void AllOnSameTeam(class AActor* Actor, TArray<class AActor*>& ActorArray, class UObject* __WorldContext, bool* Result, bool _Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CreateEnvironmentalKnockbackExplosion(const struct FVector& ExplosionSourcePoint, float ExplosionRadius, float Intensity, float MinKnockbackAngle, bool Reverse, class AActor* SpecificActor, class UObject* __WorldContext, bool _Reverse, const struct FVector& VecToCurrentActor, float _MinKnockbackAngle, float _Intensity, class AActor* _CurrentActorBeingLaunched, float _Radius, const struct FVector& _SourcePoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& Temp_object_Variable, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_SelectVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_VSize_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_ProjectVectorOnToPlane_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_SelectVector_ReturnValue_3, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
