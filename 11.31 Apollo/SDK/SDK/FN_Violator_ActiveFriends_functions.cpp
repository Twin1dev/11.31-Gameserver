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


// Function Violator_ActiveFriends.Violator_ActiveFriends_C.CallOut Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UViolator_ActiveFriends_C::CallOut_Hide(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("Violator_ActiveFriends_C", "CallOut Hide");

	Params::UViolator_ActiveFriends_C_CallOut_Hide_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Violator_ActiveFriends.Violator_ActiveFriends_C.CallOut Surface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UViolator_ActiveFriends_C::CallOut_Surface(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("Violator_ActiveFriends_C", "CallOut Surface");

	Params::UViolator_ActiveFriends_C_CallOut_Surface_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Violator_ActiveFriends.Violator_ActiveFriends_C.UpdateData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UViolator_ActiveFriends_C::UpdateData()
{
	static auto Func = Class->GetFunction("Violator_ActiveFriends_C", "UpdateData");

	Params::UViolator_ActiveFriends_C_UpdateData_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Violator_ActiveFriends.Violator_ActiveFriends_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UViolator_ActiveFriends_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Violator_ActiveFriends_C", "PreConstruct");

	Params::UViolator_ActiveFriends_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Violator_ActiveFriends.Violator_ActiveFriends_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UViolator_ActiveFriends_C::Construct()
{
	static auto Func = Class->GetFunction("Violator_ActiveFriends_C", "Construct");

	Params::UViolator_ActiveFriends_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Violator_ActiveFriends.Violator_ActiveFriends_C.ExecuteUbergraph_Violator_ActiveFriends
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UViolator_ActiveFriends_C::ExecuteUbergraph_Violator_ActiveFriends(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("Violator_ActiveFriends_C", "ExecuteUbergraph_Violator_ActiveFriends");

	Params::UViolator_ActiveFriends_C_ExecuteUbergraph_Violator_ActiveFriends_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
