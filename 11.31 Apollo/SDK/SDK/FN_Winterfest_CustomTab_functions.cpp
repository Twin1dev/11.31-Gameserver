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


// Function Winterfest_CustomTab.Winterfest_CustomTab_C.PlayHoverAnimBackward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterfest_CustomTab_C::PlayHoverAnimBackward(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("Winterfest_CustomTab_C", "PlayHoverAnimBackward");

	Params::UWinterfest_CustomTab_C_PlayHoverAnimBackward_Params Parms;

	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Winterfest_CustomTab.Winterfest_CustomTab_C.PlayHoverAnimForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterfest_CustomTab_C::PlayHoverAnimForward(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("Winterfest_CustomTab_C", "PlayHoverAnimForward");

	Params::UWinterfest_CustomTab_C_PlayHoverAnimForward_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Winterfest_CustomTab.Winterfest_CustomTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWinterfest_CustomTab_C::Construct()
{
	static auto Func = Class->GetFunction("Winterfest_CustomTab_C", "Construct");

	Params::UWinterfest_CustomTab_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Winterfest_CustomTab.Winterfest_CustomTab_C.ExecuteUbergraph_Winterfest_CustomTab
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterfest_CustomTab_C::ExecuteUbergraph_Winterfest_CustomTab(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("Winterfest_CustomTab_C", "ExecuteUbergraph_Winterfest_CustomTab");

	Params::UWinterfest_CustomTab_C_ExecuteUbergraph_Winterfest_CustomTab_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
