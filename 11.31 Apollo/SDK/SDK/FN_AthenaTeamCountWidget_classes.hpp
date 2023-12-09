#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2E0 - 0x2B0)
// WidgetBlueprintGeneratedClass AthenaTeamCountWidget.AthenaTeamCountWidget_C
class UAthenaTeamCountWidget_C : public UAthenaTeamAliveCountBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonTextBlock_3;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_6;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TeamContainer;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TeamInfoBox;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaTeamCountWidget_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void SetTeamSlotData(int32 TeamIdx, struct FAthenaTeamCountSlotData& TeamSlotData);
	void ExecuteUbergraph_AthenaTeamCountWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaTeamCountSlot_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 K2Node_Event_TeamIdx, const struct FAthenaTeamCountSlotData& K2Node_Event_TeamSlotData, const struct FAthenaTeamCountSlotData& K2Node_MakeStruct_AthenaTeamCountSlotData, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UAthenaTeamCountSlot_C* K2Node_DynamicCast_AsAthena_Team_Count_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FAthenaTeamCountSlotData& K2Node_MakeStruct_AthenaTeamCountSlotData_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable_1, class UAthenaTeamCountSlot_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2);
};

}


