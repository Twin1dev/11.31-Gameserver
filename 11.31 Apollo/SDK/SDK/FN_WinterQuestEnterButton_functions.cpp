#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestEnterButton.WinterQuestEnterButton_C
// (None)

class UClass* UWinterQuestEnterButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestEnterButton_C");

	return Clss;
}


// WinterQuestEnterButton_C WinterQuestEnterButton.Default__WinterQuestEnterButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestEnterButton_C* UWinterQuestEnterButton_C::GetDefaultObj()
{
	static class UWinterQuestEnterButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestEnterButton_C*>(UWinterQuestEnterButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinterQuestEnterButton.WinterQuestEnterButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestEnterButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestEnterButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestEnterButton.WinterQuestEnterButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestEnterButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestEnterButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestEnterButton.WinterQuestEnterButton_C.ExecuteUbergraph_WinterQuestEnterButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestEnterButton_C::ExecuteUbergraph_WinterQuestEnterButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestEnterButton_C", "ExecuteUbergraph_WinterQuestEnterButton");

	Params::UWinterQuestEnterButton_C_ExecuteUbergraph_WinterQuestEnterButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


