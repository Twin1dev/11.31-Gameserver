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


// Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.OnInputSourceTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchmakingInputIndicator_C::OnInputSourceTypeChanged(enum class ECommonInputType InputType)
{
	static auto Func = Class->GetFunction("MatchmakingInputIndicator_C", "OnInputSourceTypeChanged");

	Params::UMatchmakingInputIndicator_C_OnInputSourceTypeChanged_Params Parms;

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.ExecuteUbergraph_MatchmakingInputIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_InputType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetInputTypeIcon_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMatchmakingInputIndicator_C::ExecuteUbergraph_MatchmakingInputIndicator(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType K2Node_Event_InputType, class UTexture2D* CallFunc_GetInputTypeIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MatchmakingInputIndicator_C", "ExecuteUbergraph_MatchmakingInputIndicator");

	Params::UMatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_Event_InputType = K2Node_Event_InputType;
	Parms.CallFunc_GetInputTypeIcon_ReturnValue = CallFunc_GetInputTypeIcon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
