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


// Function AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChatWidgetModalWrapper_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaChatWidgetModalWrapper_C", "PreConstruct");

	Params::UAthenaChatWidgetModalWrapper_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaChatWidgetModalWrapper_C::OnInitialized()
{
	static auto Func = Class->GetFunction("AthenaChatWidgetModalWrapper_C", "OnInitialized");

	Params::UAthenaChatWidgetModalWrapper_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C.ExecuteUbergraph_AthenaChatWidgetModalWrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChatContainer_C*            K2Node_DynamicCast_AsChat_Container                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChatWidgetModalWrapper_C::ExecuteUbergraph_AthenaChatWidgetModalWrapper(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UChatContainer_C* K2Node_DynamicCast_AsChat_Container, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaChatWidgetModalWrapper_C", "ExecuteUbergraph_AthenaChatWidgetModalWrapper");

	Params::UAthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsChat_Container = K2Node_DynamicCast_AsChat_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
