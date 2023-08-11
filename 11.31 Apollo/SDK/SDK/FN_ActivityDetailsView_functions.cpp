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


// Function ActivityDetailsView.ActivityDetailsView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityDetailsView_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ActivityDetailsView_C", "PreConstruct");

	Params::UActivityDetailsView_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityDetailsView.ActivityDetailsView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActivityDetailsView_C::Construct()
{
	static auto Func = Class->GetFunction("ActivityDetailsView_C", "Construct");

	Params::UActivityDetailsView_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityDetailsView.ActivityDetailsView_C.ExecuteUbergraph_ActivityDetailsView
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityDetailsView_C::ExecuteUbergraph_ActivityDetailsView(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("ActivityDetailsView_C", "ExecuteUbergraph_ActivityDetailsView");

	Params::UActivityDetailsView_C_ExecuteUbergraph_ActivityDetailsView_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
