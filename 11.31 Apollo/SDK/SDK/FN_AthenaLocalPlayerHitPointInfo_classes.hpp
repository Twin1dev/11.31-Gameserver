#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x2DC - 0x2A8)
// WidgetBlueprintGeneratedClass AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C
class UAthenaLocalPlayerHitPointInfo_C : public UAthenaPlayerHitPointInfo
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaHitPointBar_CNStorm2_C*         AthenaHitPointBar_CNStorm2;                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaHitPointBar_C*                  HitPointBarHealth;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaHitPointBar_C*                  HitPointBarShield;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaHitPointBar_C*                  HitPointBarVehicleHealth;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Use_Large_Format;                                  // 0x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VehicleHealthBarWidthOverride;                     // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VehicleHealthBarHeightOverride;                    // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaLocalPlayerHitPointInfo_C* GetDefaultObj();

	void OnCreativeModeEnabledChanged(bool bIsEnabled, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_1, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnCreativeQuickbarEquippedChanged(bool bIsEquipped);
	void PreConstruct(bool IsDesignTime);
	void HandleExitVehicle();
	void HandleEnterVehicle();
	void Construct();
	void ExecuteUbergraph_AthenaLocalPlayerHitPointInfo(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCreativeHUDLContext* CallFunc_GetContext_ReturnValue, class UCreativeHUDLContext* CallFunc_GetContext_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_ShowVehicleHealthBarOnPlayerHUD_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


