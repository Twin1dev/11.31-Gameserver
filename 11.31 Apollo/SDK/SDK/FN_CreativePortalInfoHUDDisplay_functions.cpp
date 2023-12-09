#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C
// (None)

class UClass* UCreativePortalInfoHUDDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativePortalInfoHUDDisplay_C");

	return Clss;
}


// CreativePortalInfoHUDDisplay_C CreativePortalInfoHUDDisplay.Default__CreativePortalInfoHUDDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativePortalInfoHUDDisplay_C* UCreativePortalInfoHUDDisplay_C::GetDefaultObj()
{
	static class UCreativePortalInfoHUDDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativePortalInfoHUDDisplay_C*>(UCreativePortalInfoHUDDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C.SetupInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortKeybindForcedHoldStatusTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortKeybindForcedHoldStatusTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInteractContextInfo*    CallFunc_GetActiveContextInfo_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInteractContextInfo*    CallFunc_GetActiveContextInfo_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInteractContextInfo*    CallFunc_GetActiveContextInfo_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInteractContextInfo*    CallFunc_GetActiveContextInfo_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// enum class EFortKeybindForcedHoldStatusK2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePortalInfoHUDDisplay_C::SetupInteraction(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable_2, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue, bool Temp_bool_Variable_2, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue, enum class EFortKeybindForcedHoldStatus K2Node_Select_Default_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePortalInfoHUDDisplay_C", "SetupInteraction");

	Params::UCreativePortalInfoHUDDisplay_C_SetupInteraction_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_GetActiveContextInfo_ReturnValue = CallFunc_GetActiveContextInfo_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetActiveContextInfo_ReturnValue_1 = CallFunc_GetActiveContextInfo_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetActiveContextInfo_ReturnValue_2 = CallFunc_GetActiveContextInfo_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetActiveContextInfo_ReturnValue_3 = CallFunc_GetActiveContextInfo_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C.ShowBasicInteractionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInteractContextInfo*    CallFunc_GetActiveContextInfo_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativePortalInfoHUDDisplay_C::ShowBasicInteractionWidget(bool CallFunc_IsUsingTouch_ReturnValue, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePortalInfoHUDDisplay_C", "ShowBasicInteractionWidget");

	Params::UCreativePortalInfoHUDDisplay_C_ShowBasicInteractionWidget_Params Parms{};

	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.CallFunc_GetActiveContextInfo_ReturnValue = CallFunc_GetActiveContextInfo_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C.UpdateInteractionKeybind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUseActionName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePortalInfoHUDDisplay_C::UpdateInteractionKeybind(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetUseActionName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePortalInfoHUDDisplay_C", "UpdateInteractionKeybind");

	Params::UCreativePortalInfoHUDDisplay_C_UpdateInteractionKeybind_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetUseActionName_ReturnValue = CallFunc_GetUseActionName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C.UpdateWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionWidgetSurpressed_bIsSurpressed             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePortalInfoHUDDisplay_C::UpdateWidgetVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsInteractionWidgetSurpressed_bIsSurpressed, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePortalInfoHUDDisplay_C", "UpdateWidgetVisibility");

	Params::UCreativePortalInfoHUDDisplay_C_UpdateWidgetVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsInteractionWidgetSurpressed_bIsSurpressed = CallFunc_IsInteractionWidgetSurpressed_bIsSurpressed;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C.IsInteractionWidgetSurpressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsSurpressed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativePortalInfoHUDDisplay_C::IsInteractionWidgetSurpressed(bool* bIsSurpressed, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePortalInfoHUDDisplay_C", "IsInteractionWidgetSurpressed");

	Params::UCreativePortalInfoHUDDisplay_C_IsInteractionWidgetSurpressed_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsSurpressed != nullptr)
		*bIsSurpressed = Parms.bIsSurpressed;

}


// Function CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C.OnInteractChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo*    ContextInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePortalInfoHUDDisplay_C::OnInteractChanged(class UFortInteractContextInfo* ContextInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePortalInfoHUDDisplay_C", "OnInteractChanged");

	Params::UCreativePortalInfoHUDDisplay_C_OnInteractChanged_Params Parms{};

	Parms.ContextInfo = ContextInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativePortalInfoHUDDisplay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePortalInfoHUDDisplay_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativePortalInfoHUDDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePortalInfoHUDDisplay_C", "PreConstruct");

	Params::UCreativePortalInfoHUDDisplay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativePortalInfoHUDDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePortalInfoHUDDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativePortalInfoHUDDisplay.CreativePortalInfoHUDDisplay_C.ExecuteUbergraph_CreativePortalInfoHUDDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFortInteractContextInfo*    CallFunc_GetActiveContextInfo_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInteractContextInfo*    CallFunc_GetActiveContextInfo_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCreativePortalHUDDetails_C* K2Node_DynamicCast_AsCreative_Portal_HUDDetails                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UFortInteractContextInfo*    K2Node_CustomEvent_ContextInfo                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIslandPortalInteractionInterface_C>K2Node_DynamicCast_AsIsland_Portal_Interaction_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIslandPortalInteractionInterface_C>K2Node_DynamicCast_AsIsland_Portal_Interaction_Interface_1       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePortalInfoHUDDisplay_C::ExecuteUbergraph_CreativePortalInfoHUDDisplay(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue, class UFortInteractContextInfo* CallFunc_GetActiveContextInfo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCreativePortalHUDDetails_C* K2Node_DynamicCast_AsCreative_Portal_HUDDetails, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortInteractContextInfo* K2Node_CustomEvent_ContextInfo, TScriptInterface<class IIslandPortalInteractionInterface_C> K2Node_DynamicCast_AsIsland_Portal_Interaction_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, TScriptInterface<class IIslandPortalInteractionInterface_C> K2Node_DynamicCast_AsIsland_Portal_Interaction_Interface_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePortalInfoHUDDisplay_C", "ExecuteUbergraph_CreativePortalInfoHUDDisplay");

	Params::UCreativePortalInfoHUDDisplay_C_ExecuteUbergraph_CreativePortalInfoHUDDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetActiveContextInfo_ReturnValue = CallFunc_GetActiveContextInfo_ReturnValue;
	Parms.CallFunc_GetActiveContextInfo_ReturnValue_1 = CallFunc_GetActiveContextInfo_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCreative_Portal_HUDDetails = K2Node_DynamicCast_AsCreative_Portal_HUDDetails;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_ContextInfo = K2Node_CustomEvent_ContextInfo;
	Parms.K2Node_DynamicCast_AsIsland_Portal_Interaction_Interface = K2Node_DynamicCast_AsIsland_Portal_Interaction_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsIsland_Portal_Interaction_Interface_1 = K2Node_DynamicCast_AsIsland_Portal_Interaction_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


