#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContextTutorialIndicator.ContextTutorialIndicator_C
// (None)

class UClass* UContextTutorialIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextTutorialIndicator_C");

	return Clss;
}


// ContextTutorialIndicator_C ContextTutorialIndicator.Default__ContextTutorialIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContextTutorialIndicator_C* UContextTutorialIndicator_C::GetDefaultObj()
{
	static class UContextTutorialIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextTutorialIndicator_C*>(UContextTutorialIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UContextTutorialIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.ExecuteUbergraph_ContextTutorialIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContextTutorialIndicator_C::ExecuteUbergraph_ContextTutorialIndicator(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "ExecuteUbergraph_ContextTutorialIndicator");

	Params::UContextTutorialIndicator_C_ExecuteUbergraph_ContextTutorialIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


