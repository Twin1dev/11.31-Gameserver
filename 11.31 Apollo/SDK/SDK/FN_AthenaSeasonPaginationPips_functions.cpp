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


// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonPaginationPips_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSeasonPaginationPips_C", "Construct");

	Params::UAthenaSeasonPaginationPips_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPaginationPips_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("AthenaSeasonPaginationPips_C", "Tick");

	Params::UAthenaSeasonPaginationPips_C_Tick_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonPaginationPips_C::Select()
{
	static auto Func = Class->GetFunction("AthenaSeasonPaginationPips_C", "Select");

	Params::UAthenaSeasonPaginationPips_C_Select_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Deselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonPaginationPips_C::Deselect()
{
	static auto Func = Class->GetFunction("AthenaSeasonPaginationPips_C", "Deselect");

	Params::UAthenaSeasonPaginationPips_C_Deselect_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.ExecuteUbergraph_AthenaSeasonPaginationPips
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPaginationPips_C::ExecuteUbergraph_AthenaSeasonPaginationPips(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static auto Func = Class->GetFunction("AthenaSeasonPaginationPips_C", "ExecuteUbergraph_AthenaSeasonPaginationPips");

	Params::UAthenaSeasonPaginationPips_C_ExecuteUbergraph_AthenaSeasonPaginationPips_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
