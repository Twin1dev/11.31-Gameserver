#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x349 - 0x2F0)
// WidgetBlueprintGeneratedClass CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C
class UCreativePortalInfoHUDDisplay_C : public UFortPortalHUDDetails
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeInBackplate;                                   // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCreativePortalHUDDetails_C*           CreativePortalHUDDetails;                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Backplate;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            InteractText;                                      // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget;                                     // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VertBox_Content;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortInteractContextInfo*              CurrentInteraction;                                // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ValidInteraction;                                  // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CurReceivedActor;                                  // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReadyToShow;                                       // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCreativePortalInfoHUDDisplay_C* GetDefaultObj();

	void SetupInteraction(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable_2, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue, bool Temp_bool_Variable_2, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue, enum class EFortKeybindForcedHoldStatus K2Node_Select_Default_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2);
	void ShowBasicInteractionWidget(bool CallFunc_IsUsingTouch_ReturnValue, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateInteractionKeybind(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetUseActionName_ReturnValue);
	void UpdateWidgetVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsInteractionWidgetSurpressed_bIsSurpressed, enum class ESlateVisibility K2Node_Select_Default);
	void IsInteractionWidgetSurpressed(bool* bIsSurpressed, bool CallFunc_IsValid_ReturnValue);
	void OnInteractChanged(class UFortInteractContextInfo* ContextInfo);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_CreativePortalInfoHUDDisplay(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCreativePortalHUDDetails_C* K2Node_DynamicCast_AsCreative_Portal_HUDDetails, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortInteractContextInfo* K2Node_CustomEvent_ContextInfo, TScriptInterface<class IIslandPortalInteractionInterface_C> K2Node_DynamicCast_AsIsland_Portal_Interaction_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, TScriptInterface<class IIslandPortalInteractionInterface_C> K2Node_DynamicCast_AsIsland_Portal_Interaction_Interface_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
};

}


