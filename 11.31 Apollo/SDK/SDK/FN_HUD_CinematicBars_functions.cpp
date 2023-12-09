#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_CinematicBars.HUD_CinematicBars_C
// (None)

class UClass* UHUD_CinematicBars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_CinematicBars_C");

	return Clss;
}


// HUD_CinematicBars_C HUD_CinematicBars.Default__HUD_CinematicBars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_CinematicBars_C* UHUD_CinematicBars_C::GetDefaultObj()
{
	static class UHUD_CinematicBars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_CinematicBars_C*>(UHUD_CinematicBars_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_CinematicBars.HUD_CinematicBars_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_CinematicBars_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CinematicBars_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CinematicBars.HUD_CinematicBars_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_CinematicBars_C::EventIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CinematicBars_C", "EventIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CinematicBars.HUD_CinematicBars_C.EventToggleBlur
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_CinematicBars_C::EventToggleBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CinematicBars_C", "EventToggleBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_CinematicBars.HUD_CinematicBars_C.ExecuteUbergraph_HUD_CinematicBars
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_CinematicBars_C::ExecuteUbergraph_HUD_CinematicBars(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_CinematicBars_C", "ExecuteUbergraph_HUD_CinematicBars");

	Params::UHUD_CinematicBars_C_ExecuteUbergraph_HUD_CinematicBars_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


