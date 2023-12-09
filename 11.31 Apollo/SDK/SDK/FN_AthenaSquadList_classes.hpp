#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2E0 - 0x2C0)
// WidgetBlueprintGeneratedClass AthenaSquadList.AthenaSquadList_C
class UAthenaSquadList_C : public UAthenaSquadListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VertBox;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                            Sound_SquadMemberDisconnected;                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_LastSquadMemberDisconnected;                 // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaSquadList_C* GetDefaultObj();

	void Add_Extentsion_Widget(class UUserWidget* New_Widget, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void HandleSquadMemberDisconnected(class AFortPlayerStateAthena* Player);
	void ExecuteUbergraph_AthenaSquadList(int32 EntryPoint, class AFortPlayerStateAthena* K2Node_Event_Player, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_GetSquadConnectedCount_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, bool Temp_bool_Variable, class USoundBase* K2Node_Select_Default);
};

}


