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

// 0x100 (0x538 - 0x438)
// BlueprintGeneratedClass BP_FluidSim_FN.BP_FluidSim_FN_C
class ABP_FluidSim_FN_C : public ABP_FluidSim_01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFluidForceDynamic                    BoatForceSettings;                                 // 0x440(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FFluidForceDynamic                    PlayerForceSettings;                               // 0x4B0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         NearPawns;                                         // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_542A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AFortPawn*>                     RelevantFortPawns;                                 // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FluidSim_FN_C");
		return Clss;
	}

	void GetFortnitePawnForces(TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData> PreviousDynamicForces, const TArray<class AFortPawn*>& RelevantPawns, int32 LastCheckedIndex, const TArray<class AFortPawn*>& NearbyPawns, int32 CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class AFortPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, const struct FFluidForceDynamicPerInstanceData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsInWater_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshComponent_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, const struct FFluidForceDynamicPerInstanceData& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class AFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition, float CallFunc_GetWaterSurfaceInfo_WaterDepth, int32 CallFunc_GetWaterSurfaceInfo_WaterBodyIdx, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterVelocity, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_2, const struct FFluidForceDynamicPerInstanceData& K2Node_SetFieldsInStruct_StructOut, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APawn* CallFunc_GetLocalPawn_Pawn, class AFortPawn* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_3, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, int32 CallFunc_GetPawnLOD_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<class AFortPawn*>& CallFunc_GetFortPawnsInRange_OutFortPawns);
	void GetLocalPawn(class APawn** Pawn, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue);
	void GetPlayerPawnForces();
	void ExecuteUbergraph_BP_FluidSim_FN(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
