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

// 0x3EC (0x71C - 0x330)
// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Chest;                                             // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FootstepsOrGlider;                                 // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Gunshot;                                           // 0x33A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Vehicle;                                           // 0x33B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Generic;                                           // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Long_Range;                        // 0x340(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Chest_Falloff;                                     // 0x3C8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Footsteps_Falloff;                                 // 0x450(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Mid_Range;                         // 0x4D8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Melee;                             // 0x560(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        OppositeFacingGunshotStrength;                     // 0x5E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FacingGunshotExponentNear;                         // 0x5EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForwardFacingGunshotStrength;                      // 0x5F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FacingGunshotExponentFar;                          // 0x5F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceDivisor;                                   // 0x5F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRuntimeFloatCurve                    Glider_Falloff;                                    // 0x600(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Plane_Falloff;                                     // 0x688(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               DefaultIconLocation;                               // 0x710(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_SoundIndicator_01_C");
		return Clss;
	}

	void CalculateFiringAngle(float* DotResult, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Lerp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_1);
	struct FRuntimeFloatCurve GetWeaponCurve(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FRuntimeFloatCurve& K2Node_Select_Default, const struct FRuntimeFloatCurve& K2Node_Select_Default_1);
	void UpdateEmitterStates(float CallFunc_CalculateFiringAngle_DotResult);
	void OnEffectActivated();
	void ReceiveBeginPlay();
	void OnEffectDeactivated();
	void ExecuteUbergraph_B_SoundIndicator_01(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, const struct FRuntimeFloatCurve& CallFunc_GetWeaponCurve_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
