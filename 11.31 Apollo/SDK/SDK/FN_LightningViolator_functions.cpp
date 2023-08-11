#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function LightningViolator.LightningViolator_C.TailPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTail                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHorizontalAlignment    HPosition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnTop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightningViolator_C::TailPosition(bool ShowTail, enum class EHorizontalAlignment HPosition, bool OnTop, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& K2Node_Select_Default, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue)
{
	static auto Func = Class->GetFunction("LightningViolator_C", "TailPosition");

	Params::ULightningViolator_C_TailPosition_Params Parms;

	Parms.ShowTail = ShowTail;
	Parms.HPosition = HPosition;
	Parms.OnTop = OnTop;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightningViolator.LightningViolator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightningViolator_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LightningViolator_C", "PreConstruct");

	Params::ULightningViolator_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightningViolator.LightningViolator_C.EventColorBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightningViolator_C::EventColorBG(const struct FLinearColor& NewColor)
{
	static auto Func = Class->GetFunction("LightningViolator_C", "EventColorBG");

	Params::ULightningViolator_C_EventColorBG_Params Parms;

	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightningViolator.LightningViolator_C.EventSetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ULightningViolator_C::EventSetText(class FText NewText)
{
	static auto Func = Class->GetFunction("LightningViolator_C", "EventSetText");

	Params::ULightningViolator_C_EventSetText_Params Parms;

	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightningViolator.LightningViolator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULightningViolator_C::Construct()
{
	static auto Func = Class->GetFunction("LightningViolator_C", "Construct");

	Params::ULightningViolator_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LightningViolator.LightningViolator_C.ExecuteUbergraph_LightningViolator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NewText                                       ()
// struct FLinearColor                K2Node_CustomEvent_NewColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightningViolator_C::ExecuteUbergraph_LightningViolator(int32 EntryPoint, class FText K2Node_CustomEvent_NewText, const struct FLinearColor& K2Node_CustomEvent_NewColor, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("LightningViolator_C", "ExecuteUbergraph_LightningViolator");

	Params::ULightningViolator_C_ExecuteUbergraph_LightningViolator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewText = K2Node_CustomEvent_NewText;
	Parms.K2Node_CustomEvent_NewColor = K2Node_CustomEvent_NewColor;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
