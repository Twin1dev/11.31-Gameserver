#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x801 - 0x7C0)
// BlueprintGeneratedClass Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C
class AFortnite_CozyLodge_ExtCamera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            SavedTransform;                                    // 0x7D0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                         Active;                                            // 0x800(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AFortnite_CozyLodge_ExtCamera_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void Reset_Location();
	void ManualActivate();
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	void K2_OnEndViewTarget(class APlayerController* PC);
	void ExecuteUbergraph_Fortnite_CozyLodge_ExtCamera(int32 EntryPoint, class APlayerController* K2Node_Event_PC, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* K2Node_Event_PC_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

}


