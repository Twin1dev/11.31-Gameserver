#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18C (0x434 - 0x2A8)
// WidgetBlueprintGeneratedClass AthenaMarkerDetails.AthenaMarkerDetails_C
class UAthenaMarkerDetails_C : public UAthenaMarkerDetails
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHover;                                           // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      ActionText;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ActionTextContainer;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ContentBox;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DangerIcon;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       DetailSwitcher;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemIcon;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemName;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget;                                     // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LocationIcon;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Reboot;                                            // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Seperator;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_IndicatorIcon;                            // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortWorldMarkerData                  MyMarkerData;                                      // 0x320(0x108)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              LineMaterial;                                      // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ColorReduction;                                    // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaMarkerDetails_C* GetDefaultObj();

	void Show(bool Show);
	void SetDisplayText(class FText NewText, class FText CallFunc_TextToUpper_ReturnValue);
	void GetMarkedItemDetails(class FText* DisplayName, TSoftObjectPtr<class UTexture2D>* SmallPreviewImage, struct FLinearColor* RarityColor, const struct FMarkedActorDisplayInfo& CallFunc_GetDisplayInfoForMarkerData_ReturnValue);
	void OnLoaded_2801580E4D1C0BB88FD9D4B09B65ACAE(class UObject* Loaded);
	void TryHandleItemMarker();
	void FinishMarkedItemSetup();
	void SetupLocationMarker();
	void SetupEnemyMarker();
	void UpdateMarkerData(struct FFortWorldMarkerData& MarkerData);
	void PreConstruct(bool IsDesignTime);
	void UpdateMarkerAction(enum class EFortMarkerActions MarkerAction);
	void ExecuteUbergraph_AthenaMarkerDetails(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFortMarkerActions Temp_byte_Variable_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetMarkedItemDetails_DisplayName, TSoftObjectPtr<class UTexture2D> CallFunc_GetMarkedItemDetails_SmallPreviewImage, const struct FLinearColor& CallFunc_GetMarkedItemDetails_RarityColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetMarkedItemDetails_DisplayName_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetMarkedItemDetails_SmallPreviewImage_1, const struct FLinearColor& CallFunc_GetMarkedItemDetails_RarityColor_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class FText CallFunc_GetMarkedItemDetails_DisplayName_2, TSoftObjectPtr<class UTexture2D> CallFunc_GetMarkedItemDetails_SmallPreviewImage_2, const struct FLinearColor& CallFunc_GetMarkedItemDetails_RarityColor_2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_2, bool K2Node_DynamicCast_bSuccess_2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_2, const struct FFortWorldMarkerData& K2Node_Event_MarkerData, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, enum class EFortMarkerActions Temp_byte_Variable_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class FText CallFunc_GetMarkedItemDetails_DisplayName_3, TSoftObjectPtr<class UTexture2D> CallFunc_GetMarkedItemDetails_SmallPreviewImage_3, const struct FLinearColor& CallFunc_GetMarkedItemDetails_RarityColor_3, class FText CallFunc_GetMarkedItemDetails_DisplayName_4, TSoftObjectPtr<class UTexture2D> CallFunc_GetMarkedItemDetails_SmallPreviewImage_4, const struct FLinearColor& CallFunc_GetMarkedItemDetails_RarityColor_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, enum class EFortMarkerActions K2Node_Event_MarkerAction, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1, class UObject* Temp_object_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


