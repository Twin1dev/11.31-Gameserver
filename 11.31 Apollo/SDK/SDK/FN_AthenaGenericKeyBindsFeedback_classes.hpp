#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x2DA - 0x2C4)
// WidgetBlueprintGeneratedClass AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C
class UAthenaGenericKeyBindsFeedback_C : public UAthenaHUDSituationalFeedback_C
{
public:
	uint8                                        Pad_6B39[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         InGhostMode;                                       // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B3A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FreeIndex;                                         // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InBalloonMode;                                     // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InDBNOCarryMode;                                   // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaGenericKeyBindsFeedback_C* GetDefaultObj();

	void RefreshDBNOCarryModeKeys(class FText DropPlayer, class FText ThrowPlayer, enum class ECommonInputType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FName K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_1, class FName Temp_name_Variable_4, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, class FName Temp_name_Variable_5, class UAthenaHUDFeedbackLine_C* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FName Temp_name_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName Temp_name_Variable_7, enum class ECommonInputType Temp_byte_Variable_1, class FName K2Node_Select_Default_1, class UAthenaHUDFeedbackLine_C* CallFunc_Array_Get_Item_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	void RefreshEquippedWeaponModeKeys(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ClientIsDriver_ReturnValue, int32 CallFunc_FindSeatIndex_ReturnValue, bool CallFunc_CanShootFromSeat_ReturnValue, bool CallFunc_SeatIsTurret_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UAthenaHUDFeedbackLine_C* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_1, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TArray<struct FWeaponHudData>& CallFunc_GetHudKeyActionData_ReturnValue, const struct FWeaponHudData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FName K2Node_Select_Default);
	void RefreshBalloonModeKeys(class FText ReleaseBalloon, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FName Temp_name_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable_3, enum class ECommonInputType Temp_byte_Variable, class FName K2Node_Select_Default, class UAthenaHUDFeedbackLine_C* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void RefreshGhostModeKeys(bool InVehicle, class FText Exit__Hold_, class FText Phase, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UAthenaHUDFeedbackLine_C* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UAthenaHUDFeedbackLine_C* CallFunc_Array_Get_Item_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	void GetKeybindInputType(enum class ECommonInputType* InputType, class UAthenaHUDFeedbackLine_C* CallFunc_Array_Get_Item, class UAthenaHUDFeedbackLine_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
	void HandleOnGhostModeChanged(class AFortPlayerControllerGameplay* Player_Controller, bool bEnteredGhostMode);
	void HandleOnEnterExitVehicle();
	void ShowOrHideFeedback();
	void OnKeybindsChanged_Bind();
	void HandleOnBalloonModeChanged(bool bEnteredBalloonMode);
	void HandleOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnWeaponHudKeyActionUpdated_Bind(class AFortWeapon* Weapon);
	void HandleOnDBNOCarryChanged(bool IsCarrying);
	void Construct();
	void ExecuteUbergraph_AthenaGenericKeyBindsFeedback(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerGameplay* K2Node_CustomEvent_Player_Controller, bool K2Node_CustomEvent_bEnteredGhostMode, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_BooleanOR_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_2, bool K2Node_CustomEvent_bEnteredBalloonMode, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AFortWeapon* K2Node_CustomEvent_Weapon, bool K2Node_CustomEvent_IsCarrying);
};

}


