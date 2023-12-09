#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x281 - 0x230)
// WidgetBlueprintGeneratedClass AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C
class UAthenaTeamMemberDBNOState_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                CustomMaterialTimer;                               // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             CustomWidgetContainer;                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DBNOIndicator;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageTimer;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 IndicatorSwitcher;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ESlateVisibility                  Visibility_When_Not_DBNO;                          // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7025[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReviveTimeMax;                                     // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReviving;                                        // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDBNO;                                            // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7026[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnVisualsRefreshed;                                // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bUsingCustomWidget;                                // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaTeamMemberDBNOState_C* GetDefaultObj();

	void RefreshVisuals(bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_3, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UImage* K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3);
	void Set_Reviving(bool Is_Reviving, float ReviveTime, bool Temp_bool_Variable, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, class UImage* K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void Set_DBNO(bool Is_DBNO, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void Construct();
	void ExecuteUbergraph_AthenaTeamMemberDBNOState(int32 EntryPoint, bool Temp_bool_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UMaterialInterface* CallFunc_GetCustomDBNOReviveMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_GetCustomDBNOWidgetClass_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UMaterialInterface* CallFunc_GetBrushResourceAsMaterial_ReturnValue, class UMaterialInterface* K2Node_Select_Default);
	void OnVisualsRefreshed__DelegateSignature(bool IsDBNO);
};

}


