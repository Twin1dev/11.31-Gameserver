#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x4F1 - 0x4A8)
// WidgetBlueprintGeneratedClass PostGameScreenArray.PostGameScreenArray_C
class UPostGameScreenArray_C : public UAthenaPostGameScreenArray
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton_EmoteMenu_C*                   Button_EmoteMenu;                                  // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton_PushToTalk_C*                  Button_PushToTalk;                                 // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHamburgerButton_C*                    HamburgerButton;                                   // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_CinematicBars_C*                  HUD_CinematicBars;                                 // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_PostMatchContent;                         // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_CinematicBars_UserSpecified;              // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_PlacementOverlay_UserSpecified;           // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_UserSpecified;                            // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsCinematicLayout;                                 // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPostGameScreenArray_C* GetDefaultObj();

	void BP_OnActivated();
	void BP_OnDeactivated();
	void EventXPLayout(class FName Placement);
	void Construct();
	void EventToggleBlur();
	void OnHUDScaleChanged(float HUDScale);
	void OnCinematicBarStateChanged(enum class ECinematicBarState NewState);
	void ExecuteUbergraph_PostGameScreenArray(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_Placement, bool CallFunc_EqualEqual_NameName_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_2, class UFortHUDContext* CallFunc_GetContext_ReturnValue_2, float K2Node_Event_HUDScale, enum class ECinematicBarState K2Node_Event_NewState, bool K2Node_SwitchEnum_CmpSuccess, class UFortHUDContext* CallFunc_GetContext_ReturnValue_3);
};

}


