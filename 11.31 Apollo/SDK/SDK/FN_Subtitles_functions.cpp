#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Subtitles.Subtitles_C
// (None)

class UClass* USubtitles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Subtitles_C");

	return Clss;
}


// Subtitles_C Subtitles.Default__Subtitles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubtitles_C* USubtitles_C::GetDefaultObj()
{
	static class USubtitles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitles_C*>(USubtitles_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Subtitles.Subtitles_C.BndEvt__SubtitleDisplay_K2Node_ComponentBoundEvent_0_OnSubtitleChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        Subtitle                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void USubtitles_C::BndEvt__SubtitleDisplay_K2Node_ComponentBoundEvent_0_OnSubtitleChanged__DelegateSignature(class FText Subtitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Subtitles_C", "BndEvt__SubtitleDisplay_K2Node_ComponentBoundEvent_0_OnSubtitleChanged__DelegateSignature");

	Params::USubtitles_C_BndEvt__SubtitleDisplay_K2Node_ComponentBoundEvent_0_OnSubtitleChanged__DelegateSignature_Params Parms{};

	Parms.Subtitle = Subtitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Subtitle                              (None)
// bool                               CallFunc_HasSubtitles_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubtitles_C::ExecuteUbergraph_Subtitles(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText K2Node_ComponentBoundEvent_Subtitle, bool CallFunc_HasSubtitles_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Subtitles_C", "ExecuteUbergraph_Subtitles");

	Params::USubtitles_C_ExecuteUbergraph_Subtitles_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Subtitle = K2Node_ComponentBoundEvent_Subtitle;
	Parms.CallFunc_HasSubtitles_ReturnValue = CallFunc_HasSubtitles_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


