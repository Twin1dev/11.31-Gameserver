#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x270 - 0x258)
// WidgetBlueprintGeneratedClass BadNetworkIndicator.BadNetworkIndicator_C
class UBadNetworkIndicator_C : public UBadNetworkIndicator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                NetworkIssueIndicator;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBadNetworkIndicator_C* GetDefaultObj();

	void Construct();
	void UpdateDisplay();
	void ExecuteUbergraph_BadNetworkIndicator(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, bool Temp_bool_Variable_4, float Temp_float_Variable_6, float Temp_float_Variable_7, bool Temp_bool_Variable_5, float Temp_float_Variable_8, float Temp_float_Variable_9, float Temp_float_Variable_10, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_HasBadPing_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, bool CallFunc_HasBadPacketLoss_ReturnValue, float K2Node_Select_Default, bool CallFunc_HasSeverePacketLoss_ReturnValue, float Temp_float_Variable_11, float K2Node_Select_Default_1, float K2Node_Select_Default_2, bool CallFunc_HasSeverePing_ReturnValue, float K2Node_Select_Default_3, float K2Node_Select_Default_4, float K2Node_Select_Default_5);
};

}


