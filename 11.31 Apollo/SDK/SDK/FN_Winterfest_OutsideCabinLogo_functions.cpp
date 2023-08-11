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


// Function Winterfest_OutsideCabinLogo.Winterfest_OutsideCabinLogo_C.LogoOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterfest_OutsideCabinLogo_C::LogoOutro(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("Winterfest_OutsideCabinLogo_C", "LogoOutro");

	Params::UWinterfest_OutsideCabinLogo_C_LogoOutro_Params Parms;

	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Winterfest_OutsideCabinLogo.Winterfest_OutsideCabinLogo_C.LogoIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterfest_OutsideCabinLogo_C::LogoIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("Winterfest_OutsideCabinLogo_C", "LogoIntro");

	Params::UWinterfest_OutsideCabinLogo_C_LogoIntro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Winterfest_OutsideCabinLogo.Winterfest_OutsideCabinLogo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterfest_OutsideCabinLogo_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Winterfest_OutsideCabinLogo_C", "PreConstruct");

	Params::UWinterfest_OutsideCabinLogo_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Winterfest_OutsideCabinLogo.Winterfest_OutsideCabinLogo_C.ExecuteUbergraph_Winterfest_OutsideCabinLogo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterfest_OutsideCabinLogo_C::ExecuteUbergraph_Winterfest_OutsideCabinLogo(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("Winterfest_OutsideCabinLogo_C", "ExecuteUbergraph_Winterfest_OutsideCabinLogo");

	Params::UWinterfest_OutsideCabinLogo_C_ExecuteUbergraph_Winterfest_OutsideCabinLogo_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
