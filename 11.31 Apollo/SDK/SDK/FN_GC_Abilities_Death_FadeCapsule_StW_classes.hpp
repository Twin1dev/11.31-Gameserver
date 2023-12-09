#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x480 - 0x450)
// BlueprintGeneratedClass GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
class AGC_Abilities_Death_FadeCapsule_StW_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1; // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1; // 0x45C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6224[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CapsuleFadeTL;                                     // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Starting_Min_Capsule_Shadow_Vis;                   // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6225[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USkeletalMeshComponent*>        SkeletalMesh;                                      // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class AGC_Abilities_Death_FadeCapsule_StW_C* GetDefaultObj();

	void SkeletalMeshSetup(class AFortPlayerPawn* FortPawn, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, class USkeletalMeshComponent* Temp_object_Variable, class USkeletalMeshComponent* Temp_object_Variable_1, class USkeletalMeshComponent* Temp_object_Variable_2, class USkeletalMeshComponent* Temp_object_Variable_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class USkeletalMeshComponent* Temp_object_Variable_4, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, class USkeletalMeshComponent* Temp_object_Variable_5, int32 CallFunc_Array_Add_ReturnValue_5);
	void CapsuleFadeTL__FinishedFunc();
	void CapsuleFadeTL__UpdateFunc();
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_Lerp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
};

}


