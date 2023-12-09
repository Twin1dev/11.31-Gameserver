#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass AthenaVehicleFuelWidget.AthenaVehicleFuelWidget_C
class UAthenaVehicleFuelWidget_C : public UFortAthenaVehicleFuelWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                FuelIcon;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortNumericTextBlock*                 Speed;                                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaVehicleFuelWidget_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void OnEnterVehicleWithFuel();
	void OnExitVehicleWithFuel();
	void OnUpdateFuelPercent(float FuelPercent);
	void OnUpdateSpeed(float NewSpeed);
	void ExecuteUbergraph_AthenaVehicleFuelWidget(int32 EntryPoint, float K2Node_Event_FuelPercent, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, float K2Node_Event_NewSpeed, class FText CallFunc_Conv_FloatToText_ReturnValue);
};

}


