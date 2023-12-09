#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x2F4 - 0x2E0)
// WidgetBlueprintGeneratedClass VehicleInfoIndicator.VehicleInfoIndicator_C
class UVehicleInfoIndicator_C : public UFortVehicleInfoIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonHealthBar_C*                    CommonHealthBar;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        MaxHealth;                                         // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVehicleInfoIndicator_C* GetDefaultObj();

	void OnVehicleHealthChanged();
	void OnPlayerVehicleStateChanged_Event(class AFortPlayerPawn* PlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);
	void OnInitialized();
	void OnVehicleChanged();
	void ExecuteUbergraph_VehicleInfoIndicator(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealth_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_CustomEvent_PlayerPawn, class AActor* K2Node_CustomEvent_NewVehicle, class AActor* K2Node_CustomEvent_OldVehicle, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ShowVehicleHealthBarOnPlayerHUD_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_ShowVehicleHealthBarOnPlayerHUD_ReturnValue_1, float CallFunc_GetHealth_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_GetMaxHealth_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float Temp_float_Variable, bool Temp_bool_Variable, class APawn* CallFunc_GetControlledPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_4, float K2Node_Select_Default, class AActor* CallFunc_GetVehicleActor_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface_4, bool K2Node_DynamicCast_bSuccess_5, class AActor* CallFunc_GetVehicleActorPtr_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1);
};

}


