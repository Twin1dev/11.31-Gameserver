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

// 0x60 (0x4C8 - 0x468)
// BlueprintGeneratedClass BP_Cozy_Discoverable.BP_Cozy_Discoverable_C
class ABP_Cozy_Discoverable_C : public AFortEventLevelNavigationActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           Mesh;                                              // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         SkelMesh;                                          // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSameMeshForHighlight;                           // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsInteractAllowed;                                 // 0x489(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_650B[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        InteractCooldown;                                  // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Interacted_CameraTag;                              // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Interacted_ActionTag;                              // 0x498(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            HightlightMaterial;                                // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	class UStaticMeshComponent*                  NewVar_0;                                          // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Cozy_Discoverable_C*>       OtherDiscoverablesToNotify;                        // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Cozy_Discoverable_C");
		return Clss;
	}

	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_2);
	void ReceiveBeginPlay();
	void Commit_OnSpecialInteraction();
	void ResetCooldown();
	void HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag);
	void NotifiedByDiscoverable(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag, bool bIsStart);
	void ExecuteUbergraph_BP_Cozy_Discoverable(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_Cozy_Discoverable_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& K2Node_CustomEvent_ActionTag, const struct FGameplayTag& K2Node_CustomEvent_CameraTag, bool K2Node_CustomEvent_bIsStart, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
