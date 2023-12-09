#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaStormSurgeWidget.AthenaStormSurgeWidget_C
// (None)

class UClass* UAthenaStormSurgeWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaStormSurgeWidget_C");

	return Clss;
}


// AthenaStormSurgeWidget_C AthenaStormSurgeWidget.Default__AthenaStormSurgeWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaStormSurgeWidget_C* UAthenaStormSurgeWidget_C::GetDefaultObj()
{
	static class UAthenaStormSurgeWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaStormSurgeWidget_C*>(UAthenaStormSurgeWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaStormSurgeWidget.AthenaStormSurgeWidget_C.Anim_BelowDMGClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStormSurgeWidget_C::Anim_BelowDMGClose(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeWidget_C", "Anim_BelowDMGClose");

	Params::UAthenaStormSurgeWidget_C_Anim_BelowDMGClose_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgeWidget.AthenaStormSurgeWidget_C.Anim_BelowDMGOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStormSurgeWidget_C::Anim_BelowDMGOpen(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeWidget_C", "Anim_BelowDMGOpen");

	Params::UAthenaStormSurgeWidget_C_Anim_BelowDMGOpen_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgeWidget.AthenaStormSurgeWidget_C.Anim_AboveDMGClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStormSurgeWidget_C::Anim_AboveDMGClose(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeWidget_C", "Anim_AboveDMGClose");

	Params::UAthenaStormSurgeWidget_C_Anim_AboveDMGClose_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgeWidget.AthenaStormSurgeWidget_C.Anim_AboveDMGOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStormSurgeWidget_C::Anim_AboveDMGOpen(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeWidget_C", "Anim_AboveDMGOpen");

	Params::UAthenaStormSurgeWidget_C_Anim_AboveDMGOpen_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgeWidget.AthenaStormSurgeWidget_C.Anim_Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStormSurgeWidget_C::Anim_Load(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeWidget_C", "Anim_Load");

	Params::UAthenaStormSurgeWidget_C_Anim_Load_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgeWidget.AthenaStormSurgeWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStormSurgeWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeWidget_C", "PreConstruct");

	Params::UAthenaStormSurgeWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgeWidget.AthenaStormSurgeWidget_C.OnStartDisplaying
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaStormSurgeWidget_C::OnStartDisplaying(class FText& TitleText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeWidget_C", "OnStartDisplaying");

	Params::UAthenaStormSurgeWidget_C_OnStartDisplaying_Params Parms{};

	Parms.TitleText = TitleText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgeWidget.AthenaStormSurgeWidget_C.OnStopDisplaying
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaStormSurgeWidget_C::OnStopDisplaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeWidget_C", "OnStopDisplaying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaStormSurgeWidget.AthenaStormSurgeWidget_C.OnUpdateThresholdDisplay
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ThresholdText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EStormSurgeThresholdTypeThresholdType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStormSurgeWidget_C::OnUpdateThresholdDisplay(class FText& ThresholdText, enum class EStormSurgeThresholdType ThresholdType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeWidget_C", "OnUpdateThresholdDisplay");

	Params::UAthenaStormSurgeWidget_C_OnUpdateThresholdDisplay_Params Parms{};

	Parms.ThresholdText = ThresholdText;
	Parms.ThresholdType = ThresholdType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgeWidget.AthenaStormSurgeWidget_C.ExecuteUbergraph_AthenaStormSurgeWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_TitleText                                           (ConstParm)
// class FText                        K2Node_Event_ThresholdText                                       (ConstParm)
// enum class EStormSurgeThresholdTypeK2Node_Event_ThresholdType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBorderSlot*                 CallFunc_SlotAsBorderSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStormSurgeWidget_C::ExecuteUbergraph_AthenaStormSurgeWidget(int32 EntryPoint, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, bool K2Node_Event_IsDesignTime, const struct FMargin& K2Node_MakeStruct_Margin_1, class FText K2Node_Event_TitleText, class FText K2Node_Event_ThresholdText, enum class EStormSurgeThresholdType K2Node_Event_ThresholdType, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeWidget_C", "ExecuteUbergraph_AthenaStormSurgeWidget");

	Params::UAthenaStormSurgeWidget_C_ExecuteUbergraph_AthenaStormSurgeWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_Event_TitleText = K2Node_Event_TitleText;
	Parms.K2Node_Event_ThresholdText = K2Node_Event_ThresholdText;
	Parms.K2Node_Event_ThresholdType = K2Node_Event_ThresholdType;
	Parms.CallFunc_SlotAsBorderSlot_ReturnValue = CallFunc_SlotAsBorderSlot_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1 = CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


