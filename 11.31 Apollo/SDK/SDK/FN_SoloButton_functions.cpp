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


// Function SoloButton.SoloButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void USoloButton_C::SetText(class FText Text)
{
	static auto Func = Class->GetFunction("SoloButton_C", "SetText");

	Params::USoloButton_C_SetText_Params Parms;

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoloButton.SoloButton_C.HandleSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void USoloButton_C::HandleSize(bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_Select_Default, int32 K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static auto Func = Class->GetFunction("SoloButton_C", "HandleSize");

	Params::USoloButton_C_HandleSize_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoloButton.SoloButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USoloButton_C::Construct()
{
	static auto Func = Class->GetFunction("SoloButton_C", "Construct");

	Params::USoloButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SoloButton.SoloButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USoloButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("SoloButton_C", "PreConstruct");

	Params::USoloButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoloButton.SoloButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USoloButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("SoloButton_C", "BP_OnHovered");

	Params::USoloButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SoloButton.SoloButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USoloButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("SoloButton_C", "BP_OnUnhovered");

	Params::USoloButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SoloButton.SoloButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void USoloButton_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("SoloButton_C", "BP_OnClicked");

	Params::USoloButton_C_BP_OnClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SoloButton.SoloButton_C.ExecuteUbergraph_SoloButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USoloButton_C::ExecuteUbergraph_SoloButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("SoloButton_C", "ExecuteUbergraph_SoloButton");

	Params::USoloButton_C_ExecuteUbergraph_SoloButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
