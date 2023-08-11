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

// 0x30 (0x260 - 0x230)
// BlueprintGeneratedClass Frontend_CozyLodge_Ext.Frontend_CozyLodge_Ext_C
class AFrontend_CozyLodge_Ext_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FFrontendEventCamera>          SceneCameras;                                      // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_CozyLodge_GenericSelectable_C*     BP_CozyLodge_GenericSelectable_2_ExecuteUbergraph_Frontend_CozyLodge_Ext_RefProperty; // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_ExtCamera_C*       Fortnite_CozyLodge_Camera_Exterior_FarView_ExecuteUbergraph_Frontend_CozyLodge_Ext_RefProperty; // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_ExtCamera_C*       Fortnite_CozyLodge_Camera_Exterior_CloseUp_ExecuteUbergraph_Frontend_CozyLodge_Ext_RefProperty; // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Frontend_CozyLodge_Ext_C");
		return Clss;
	}

	void SetUpCameraPairing(class AFortCameraBase* Camera, const struct FGameplayTag& Tag, const struct FFrontendEventCamera& K2Node_MakeStruct_FrontendEventCamera, int32 CallFunc_Array_Add_ReturnValue);
	void ReceiveBeginPlay();
	void FillOutSceneCameraArray();
	void RegisterSceneCameras();
	void ExecuteUbergraph_Frontend_CozyLodge_Ext(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, const struct FFrontendEventCamera& CallFunc_Array_Get_Item, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
