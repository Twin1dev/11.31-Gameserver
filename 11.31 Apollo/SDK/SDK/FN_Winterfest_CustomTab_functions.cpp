#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Winterfest_CustomTab.Winterfest_CustomTab_C
// (None)

class UClass* UWinterfest_CustomTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Winterfest_CustomTab_C");

	return Clss;
}


// Winterfest_CustomTab_C Winterfest_CustomTab.Default__Winterfest_CustomTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterfest_CustomTab_C* UWinterfest_CustomTab_C::GetDefaultObj()
{
	static class UWinterfest_CustomTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterfest_CustomTab_C*>(UWinterfest_CustomTab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Winterfest_CustomTab.Winterfest_CustomTab_C.PlayHoverAnimBackward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterfest_CustomTab_C::PlayHoverAnimBackward(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Winterfest_CustomTab_C", "PlayHoverAnimBackward");

	Params::UWinterfest_CustomTab_C_PlayHoverAnimBackward_Params Parms{};

	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Winterfest_CustomTab.Winterfest_CustomTab_C.PlayHoverAnimForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterfest_CustomTab_C::PlayHoverAnimForward(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Winterfest_CustomTab_C", "PlayHoverAnimForward");

	Params::UWinterfest_CustomTab_C_PlayHoverAnimForward_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Winterfest_CustomTab.Winterfest_CustomTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWinterfest_CustomTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Winterfest_CustomTab_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Winterfest_CustomTab.Winterfest_CustomTab_C.ExecuteUbergraph_Winterfest_CustomTab
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterfest_CustomTab_C::ExecuteUbergraph_Winterfest_CustomTab(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Winterfest_CustomTab_C", "ExecuteUbergraph_Winterfest_CustomTab");

	Params::UWinterfest_CustomTab_C_ExecuteUbergraph_Winterfest_CustomTab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


