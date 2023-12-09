#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FeatTimelineListEntry.FeatTimelineListEntry_C
// (None)

class UClass* UFeatTimelineListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeatTimelineListEntry_C");

	return Clss;
}


// FeatTimelineListEntry_C FeatTimelineListEntry.Default__FeatTimelineListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFeatTimelineListEntry_C* UFeatTimelineListEntry_C::GetDefaultObj()
{
	static class UFeatTimelineListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeatTimelineListEntry_C*>(UFeatTimelineListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FeatTimelineListEntry.FeatTimelineListEntry_C.BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFeatTimelineListEntry_C::BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FeatTimelineListEntry.FeatTimelineListEntry_C.BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFeatTimelineListEntry_C::BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnFeatInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumFeatsOnDay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IdxOnDay                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeatTimelineListEntry_C::OnFeatInfoSet(int32 NumFeatsOnDay, int32 IdxOnDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "OnFeatInfoSet");

	Params::UFeatTimelineListEntry_C_OnFeatInfoSet_Params Parms{};

	Parms.NumFeatsOnDay = NumFeatsOnDay;
	Parms.IdxOnDay = IdxOnDay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnTimespanInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumDays                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeatTimelineListEntry_C::OnTimespanInfoSet(int32 NumDays)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "OnTimespanInfoSet");

	Params::UFeatTimelineListEntry_C_OnTimespanInfoSet_Params Parms{};

	Parms.NumDays = NumDays;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatTimelineListEntry.FeatTimelineListEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeatTimelineListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "PreConstruct");

	Params::UFeatTimelineListEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnFeatCompletedThisSession
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeatTimelineListEntry_C::OnFeatCompletedThisSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "OnFeatCompletedThisSession");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FeatTimelineListEntry.FeatTimelineListEntry_C.WidgetAnimationEvt_OnShowCompleted_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UFeatTimelineListEntry_C::WidgetAnimationEvt_OnShowCompleted_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "WidgetAnimationEvt_OnShowCompleted_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnWaitingForCompletedTimer
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeatTimelineListEntry_C::OnWaitingForCompletedTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "OnWaitingForCompletedTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FeatTimelineListEntry.FeatTimelineListEntry_C.ExecuteUbergraph_FeatTimelineListEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumFeatsOnDay                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_IdxOnDay                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumDays                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeatTimelineListEntry_C::ExecuteUbergraph_FeatTimelineListEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 K2Node_Event_NumFeatsOnDay, int32 K2Node_Event_IdxOnDay, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 K2Node_Event_NumDays, bool K2Node_Event_IsDesignTime, float CallFunc_Multiply_IntFloat_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "ExecuteUbergraph_FeatTimelineListEntry");

	Params::UFeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_NumFeatsOnDay = K2Node_Event_NumFeatsOnDay;
	Parms.K2Node_Event_IdxOnDay = K2Node_Event_IdxOnDay;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.K2Node_Event_NumDays = K2Node_Event_NumDays;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


