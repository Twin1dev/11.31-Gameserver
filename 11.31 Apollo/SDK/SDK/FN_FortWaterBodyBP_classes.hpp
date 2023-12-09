#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x928 - 0x8D0)
// BlueprintGeneratedClass FortWaterBodyBP.FortWaterBodyBP_C
class AFortWaterBodyBP_C : public AFortWaterBodyActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FWaveSpectrumSettings                 Wave_Spectrum_Settings;                            // 0x8D8(0x48)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FluidSim_FN_C*                     FluidSimBP;                                        // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFortWaterBodyBP_C* GetDefaultObj();

	void UserConstructionScript(float WaveCounter, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FWaterWaveParams& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Gerstner_Wave_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Gerstner_Wave_Controller_C* CallFunc_Array_Get_Item_1, TArray<struct FWaterWaveParams>& CallFunc_Generate_Wave_Spectrum_Waves, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void OnReceivedBulletImpact(struct FHitResult& Hit);
	void ExecuteUbergraph_FortWaterBodyBP(int32 EntryPoint, const struct FFluidForceImpulseTimedEffects& K2Node_MakeStruct_FluidForceImpulseTimedEffects, TArray<class ABP_Gerstner_Wave_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Gerstner_Wave_Controller_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FWaterWaveParams>& CallFunc_GetWaterWaves_WaterWaveParams, float CallFunc_GetWaterWaves_BigWaveDepth, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TArray<class ABP_FluidSim_FN_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, const struct FFluidForceImpulse& K2Node_MakeStruct_FluidForceImpulse, class ABP_FluidSim_FN_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1);
};

}


