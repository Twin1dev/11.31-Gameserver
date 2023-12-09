#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x310 - 0x2A8)
// WidgetBlueprintGeneratedClass AthenaLowFuelWarning.AthenaLowFuelWarning_C
class UAthenaLowFuelWarning_C : public UAthenaGenericWarning_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  LowFuelMessage;                                    // 0x2B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInterface*                    LowFuelMaterial;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LowFuelPercent;                                    // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OutOfFuelMessage;                                  // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInterface*                    OutOfFuelMaterial;                                 // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaVehicle*                    MyVehicle;                                         // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortVehicleInterface> MyVehicleInterface;                                // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaLowFuelWarning_C* GetDefaultObj();

	void UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void OnEnterVehicleDriver_Bind();
	void OnEnterVehiclePassenger_Bind();
	void OnExitVehicle_Bind();
	void OnFuelAboveThreshold_Bind();
	void OnFuelBelowThreshold_Bind();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnOutOfFuel_Bind();
	void OnNotOutOfFuel_Bind();
	void ExecuteUbergraph_AthenaLowFuelWarning(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDrivingVehicle_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AActor* CallFunc_GetVehicleActorPtr_ReturnValue, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsFuelBelowThreshold_ReturnValue, bool CallFunc_IsOutOfFuel_ReturnValue);
};

}


