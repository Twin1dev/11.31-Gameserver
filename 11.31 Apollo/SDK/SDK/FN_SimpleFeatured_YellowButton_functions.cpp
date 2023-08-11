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


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void USimpleFeatured_YellowButton_C::SetText(class FText NewText)
{
	static auto Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "SetText");

	Params::USimpleFeatured_YellowButton_C_SetText_Params Parms;

	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.ChangeSecondaryText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleFeatured_YellowButton_C::ChangeSecondaryText(class FText& InValue, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "ChangeSecondaryText");

	Params::USimpleFeatured_YellowButton_C_ChangeSecondaryText_Params Parms;

	Parms.InValue = InValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.HandleSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void USimpleFeatured_YellowButton_C::HandleSize(bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_Select_Default, int32 K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static auto Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "HandleSize");

	Params::USimpleFeatured_YellowButton_C_HandleSize_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USimpleFeatured_YellowButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "PreConstruct");

	Params::USimpleFeatured_YellowButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USimpleFeatured_YellowButton_C::Construct()
{
	static auto Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "Construct");

	Params::USimpleFeatured_YellowButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USimpleFeatured_YellowButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "BP_OnHovered");

	Params::USimpleFeatured_YellowButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USimpleFeatured_YellowButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "BP_OnUnhovered");

	Params::USimpleFeatured_YellowButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void USimpleFeatured_YellowButton_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "BP_OnClicked");

	Params::USimpleFeatured_YellowButton_C_BP_OnClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.ExecuteUbergraph_SimpleFeatured_YellowButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleFeatured_YellowButton_C::ExecuteUbergraph_SimpleFeatured_YellowButton(int32 EntryPoint, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "ExecuteUbergraph_SimpleFeatured_YellowButton");

	Params::USimpleFeatured_YellowButton_C_ExecuteUbergraph_SimpleFeatured_YellowButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
