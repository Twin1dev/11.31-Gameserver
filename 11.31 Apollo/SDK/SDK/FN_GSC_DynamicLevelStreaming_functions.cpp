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


// Function GSC_DynamicLevelStreaming.GSC_DynamicLevelStreaming_C.OnNavActorHovered
// (Event, Public, BlueprintEvent)
// Parameters:

void UGSC_DynamicLevelStreaming_C::OnNavActorHovered()
{
	static auto Func = Class->GetFunction("GSC_DynamicLevelStreaming_C", "OnNavActorHovered");

	Params::UGSC_DynamicLevelStreaming_C_OnNavActorHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GSC_DynamicLevelStreaming.GSC_DynamicLevelStreaming_C.OnNavActorSelected
// (Event, Public, BlueprintEvent)
// Parameters:

void UGSC_DynamicLevelStreaming_C::OnNavActorSelected()
{
	static auto Func = Class->GetFunction("GSC_DynamicLevelStreaming_C", "OnNavActorSelected");

	Params::UGSC_DynamicLevelStreaming_C_OnNavActorSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GSC_DynamicLevelStreaming.GSC_DynamicLevelStreaming_C.ExecuteUbergraph_GSC_DynamicLevelStreaming
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGSC_DynamicLevelStreaming_C::ExecuteUbergraph_GSC_DynamicLevelStreaming(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GSC_DynamicLevelStreaming_C", "ExecuteUbergraph_GSC_DynamicLevelStreaming");

	Params::UGSC_DynamicLevelStreaming_C_ExecuteUbergraph_GSC_DynamicLevelStreaming_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
