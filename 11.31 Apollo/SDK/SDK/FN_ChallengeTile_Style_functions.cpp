#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeTile_Style.ChallengeTile_Style_C
// (None)

class UClass* UChallengeTile_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeTile_Style_C");

	return Clss;
}


// ChallengeTile_Style_C ChallengeTile_Style.Default__ChallengeTile_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeTile_Style_C* UChallengeTile_Style_C::GetDefaultObj()
{
	static class UChallengeTile_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeTile_Style_C*>(UChallengeTile_Style_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengeTile_Style.ChallengeTile_Style_C.SetDynamicColors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      StyleDynamicMaterialTarget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortChallengeSetStyle      FortChallengeSetStyle                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeTile_Style_C::SetDynamicColors(class UImage* StyleDynamicMaterialTarget, struct FFortChallengeSetStyle& FortChallengeSetStyle, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeTile_Style_C", "SetDynamicColors");

	Params::UChallengeTile_Style_C_SetDynamicColors_Params Parms{};

	Parms.StyleDynamicMaterialTarget = StyleDynamicMaterialTarget;
	Parms.FortChallengeSetStyle = FortChallengeSetStyle;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeTile_Style.ChallengeTile_Style_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeTile_Style_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeTile_Style_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeTile_Style.ChallengeTile_Style_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeTile_Style_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeTile_Style_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeTile_Style.ChallengeTile_Style_C.OnChallengeSetEstablished
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle      DisplayStyle                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsComplete                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsLocked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeTile_Style_C::OnChallengeSetEstablished(struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete, bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeTile_Style_C", "OnChallengeSetEstablished");

	Params::UChallengeTile_Style_C_OnChallengeSetEstablished_Params Parms{};

	Parms.DisplayStyle = DisplayStyle;
	Parms.bIsComplete = bIsComplete;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeTile_Style.ChallengeTile_Style_C.ExecuteUbergraph_ChallengeTile_Style
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortChallengeSetStyle      K2Node_Event_DisplayStyle                                        (ConstParm)
// bool                               K2Node_Event_bIsComplete                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsLocked                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeTile_Style_C::ExecuteUbergraph_ChallengeTile_Style(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FFortChallengeSetStyle& K2Node_Event_DisplayStyle, bool K2Node_Event_bIsComplete, bool K2Node_Event_bIsLocked, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeTile_Style_C", "ExecuteUbergraph_ChallengeTile_Style");

	Params::UChallengeTile_Style_C_ExecuteUbergraph_ChallengeTile_Style_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_DisplayStyle = K2Node_Event_DisplayStyle;
	Parms.K2Node_Event_bIsComplete = K2Node_Event_bIsComplete;
	Parms.K2Node_Event_bIsLocked = K2Node_Event_bIsLocked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


