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


// Function Subtitles.Subtitles_C.BndEvt__SubtitleDisplay_K2Node_ComponentBoundEvent_0_OnSubtitleChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        Subtitle                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void USubtitles_C::BndEvt__SubtitleDisplay_K2Node_ComponentBoundEvent_0_OnSubtitleChanged__DelegateSignature(class FText Subtitle)
{
	static auto Func = Class->GetFunction("Subtitles_C", "BndEvt__SubtitleDisplay_K2Node_ComponentBoundEvent_0_OnSubtitleChanged__DelegateSignature");

	Params::USubtitles_C_BndEvt__SubtitleDisplay_K2Node_ComponentBoundEvent_0_OnSubtitleChanged__DelegateSignature_Params Parms;

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
// class FText                        K2Node_ComponentBoundEvent_Subtitle                              ()
// bool                               CallFunc_HasSubtitles_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubtitles_C::ExecuteUbergraph_Subtitles(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText K2Node_ComponentBoundEvent_Subtitle, bool CallFunc_HasSubtitles_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Subtitles_C", "ExecuteUbergraph_Subtitles");

	Params::USubtitles_C_ExecuteUbergraph_Subtitles_Params Parms;

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

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
