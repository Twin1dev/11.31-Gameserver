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


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        New_Text                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeavePlatformPartyButton_C::SetText(class FText New_Text)
{
	static auto Func = Class->GetFunction("LeavePlatformPartyButton_C", "SetText");

	Params::ULeavePlatformPartyButton_C_SetText_Params Parms;

	Parms.New_Text = New_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULeavePlatformPartyButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("LeavePlatformPartyButton_C", "BP_OnHovered");

	Params::ULeavePlatformPartyButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULeavePlatformPartyButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("LeavePlatformPartyButton_C", "BP_OnUnhovered");

	Params::ULeavePlatformPartyButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeavePlatformPartyButton_C::ExecuteUbergraph_LeavePlatformPartyButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("LeavePlatformPartyButton_C", "ExecuteUbergraph_LeavePlatformPartyButton");

	Params::ULeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
