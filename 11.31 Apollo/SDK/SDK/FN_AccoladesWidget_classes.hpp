#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x3B1 - 0x318)
// WidgetBlueprintGeneratedClass AccoladesWidget.AccoladesWidget_C
class UAccoladesWidget_C : public UAthenaAccoladesWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      XPScreenLayout;                                    // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro_upgrade;                                     // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Outro;                                             // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAccoladeImageWidget_C*                AccoladeImageWidget;                               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Glow;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_IconGlow;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Shadow;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_TitleBG;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayMinusAccoladeBG;                            // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               Text_Amount;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Description;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Source;                                       // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Title;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_IconType;                           // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          WaitForCloseTimer;                                 // 0x3A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortAccoladeItemDefinition*           ActiveAccolade;                                    // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsXPLayout;                                        // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAccoladesWidget_C* GetDefaultObj();

	void OnLoaded_42C1E3304A6E5CBB7635A59CA611DCD6(class UObject* Loaded);
	void OnLoaded_24BD5DAE46F596BC70B7E59F0D6B65D6(class UObject* Loaded);
	void OpenWidget(class UFortAccoladeItemDefinition* AccoladeDef, int32& XpValue, class FText& DisplayName);
	void CloseWidget();
	void Construct();
	void SetAccoladeVisuals(class UFortAccoladeItemDefinition* ItemDef);
	void WaitForClose();
	void DoClose_();
	void FinishedLoadingTextures();
	void OnStompedByOtherWidget();
	void EventXPLayout(class FName Placement);
	void EventAdded();
	void ExecuteUbergraph_AccoladesWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortAccoladeType Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable_3, float Temp_float_Variable_4, bool Temp_bool_Variable_1, float Temp_float_Variable_5, float Temp_float_Variable_6, enum class EFortAccoladeType Temp_byte_Variable_1, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, class UObject* K2Node_CustomEvent_Loaded_1, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UFortAccoladeItemDefinition* K2Node_Event_AccoladeDef, int32 K2Node_Event_XpValue, class FText K2Node_Event_DisplayName, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue, class UFortAccoladeItemDefinition* K2Node_CustomEvent_ItemDef, enum class ESlateVisibility Temp_byte_Variable_4, TSoftObjectPtr<class UTexture2D> CallFunc_GetPreviousAccoladeLargePreviewImage_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, enum class EFortAccoladeType Temp_byte_Variable_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class USoundCue* CallFunc_GetAwardedSound_ReturnValue, float CallFunc_GetAccoladeLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, enum class EFortAccoladeType CallFunc_GetAccoladeType_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, float K2Node_Select_Default_2, float K2Node_Select_Default_3, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, class UWidgetAnimation* K2Node_Select_Default_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, class FName K2Node_CustomEvent_Placement, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, enum class EFortAccoladeType Temp_byte_Variable_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32 K2Node_Select_Default_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_HasMoreXPEvents_ReturnValue, float K2Node_Select_Default_6, float K2Node_Select_Default_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}


