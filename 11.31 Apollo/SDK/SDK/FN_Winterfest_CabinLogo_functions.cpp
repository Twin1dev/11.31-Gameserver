#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Winterfest_CabinLogo.Winterfest_CabinLogo_C
// (None)

class UClass* UWinterfest_CabinLogo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Winterfest_CabinLogo_C");

	return Clss;
}


// Winterfest_CabinLogo_C Winterfest_CabinLogo.Default__Winterfest_CabinLogo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterfest_CabinLogo_C* UWinterfest_CabinLogo_C::GetDefaultObj()
{
	static class UWinterfest_CabinLogo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterfest_CabinLogo_C*>(UWinterfest_CabinLogo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Winterfest_CabinLogo.Winterfest_CabinLogo_C.LogoIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterfest_CabinLogo_C::LogoIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Winterfest_CabinLogo_C", "LogoIntro");

	Params::UWinterfest_CabinLogo_C_LogoIntro_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Winterfest_CabinLogo.Winterfest_CabinLogo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterfest_CabinLogo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Winterfest_CabinLogo_C", "PreConstruct");

	Params::UWinterfest_CabinLogo_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Winterfest_CabinLogo.Winterfest_CabinLogo_C.ExecuteUbergraph_Winterfest_CabinLogo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterfest_CabinLogo_C::ExecuteUbergraph_Winterfest_CabinLogo(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Winterfest_CabinLogo_C", "ExecuteUbergraph_Winterfest_CabinLogo");

	Params::UWinterfest_CabinLogo_C_ExecuteUbergraph_Winterfest_CabinLogo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


