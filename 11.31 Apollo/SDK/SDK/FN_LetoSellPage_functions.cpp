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


// Function LetoSellPage.LetoSellPage_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULetoSellPage_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("LetoSellPage_C", "BP_OnActivated");

	Params::ULetoSellPage_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LetoSellPage.LetoSellPage_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULetoSellPage_C::BP_OnDeactivated()
{
	static auto Func = Class->GetFunction("LetoSellPage_C", "BP_OnDeactivated");

	Params::ULetoSellPage_C_BP_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LetoSellPage.LetoSellPage_C.ExecuteUbergraph_LetoSellPage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULetoSellPage_C::ExecuteUbergraph_LetoSellPage(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("LetoSellPage_C", "ExecuteUbergraph_LetoSellPage");

	Params::ULetoSellPage_C_ExecuteUbergraph_LetoSellPage_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
