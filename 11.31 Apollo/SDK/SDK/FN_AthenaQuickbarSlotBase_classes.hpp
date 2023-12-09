#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x3E0 - 0x360)
// WidgetBlueprintGeneratedClass AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C
class UAthenaQuickbarSlotBase_C : public UFortQuickBarSlotBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      GrowAnimation;                                     // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selected;                                          // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              _SizeBox__Item;                                    // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemLocked;                                        // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGadgetFuelGauge_C*              JetpackFuelGauge;                                  // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindTopCombo1;                                  // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindTopCombo2;                                  // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       NativeModeSwitcher;                                // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      QuickBarSlotInvalidationBox;                       // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selection;                                         // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxBottomKeybind;                              // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EItemDisplayStyle                 ItemDisplayStyle;                                  // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemCooldownType>     CooldownTypesSupported;                            // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	float                                        AnimatedBoxScaleFactor;                            // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemCardSize                 MinimumCardSize;                                   // 0x3DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemCardSize                 MaximumCardSize;                                   // 0x3DD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldCollapseItemWidgetBorder;                    // 0x3DE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         UseNativeCell;                                     // 0x3DF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaQuickbarSlotBase_C* GetDefaultObj();

	void UpdateItemBoxSize_Native(enum class EFortItemType Item_Type_To_Show, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_GetSlotSizeForItem_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, enum class EFortItemType CallFunc_GetType_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2);
	void UpdateItemBoxSize_Slow(enum class EFortItemType Item_Type_To_Show, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EFortItemType CallFunc_GetType_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_ShouldUseNewItemCards_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class EFortItemType K2Node_Select_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, enum class EFortItemType K2Node_Select_Default_1, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1);
	void OnMaximizedStarted(enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue);
	void OnMinimizedFinished(enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue);
	void SetAnimatedBoxScaleFactor(float Value);
	void SwitchToNative(bool UseNative, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 K2Node_Select_Default);
	void InitializeInvalidation(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateItemBoxSize(enum class EFortItemType Item_Type_To_Show);
	void OnCooldownStopped(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess);
	void OnCooldownStarted(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess);
	void InitializeCooldowns(class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void MaximizeSlot(bool bShouldSkipAnimation);
	void MinimizeSlot(bool bShouldSkipAnimation);
	void SetSlotSelected(bool bSelected);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void WidgetAnimationEvt_GrowAnimation_K2Node_WidgetAnimationEvent_3();
	void WidgetAnimationEvt_GrowAnimation_K2Node_WidgetAnimationEvent_2();
	void OnRefreshItem();
	void ExecuteUbergraph_AthenaQuickbarSlotBase(int32 EntryPoint, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UTexture2D* Temp_object_Variable_5, bool K2Node_Event_bShouldSkipAnimation_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_bShouldSkipAnimation, class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bSelected, class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown_1, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UTexture2D* Temp_object_Variable_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class EItemDisplayStyle Temp_byte_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UTexture2D* K2Node_Select_Default_1, bool K2Node_Event_IsDesignTime, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue);
};

}


