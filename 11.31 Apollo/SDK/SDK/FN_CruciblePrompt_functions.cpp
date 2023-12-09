#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CruciblePrompt.CruciblePrompt_C
// (None)

class UClass* UCruciblePrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CruciblePrompt_C");

	return Clss;
}


// CruciblePrompt_C CruciblePrompt.Default__CruciblePrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCruciblePrompt_C* UCruciblePrompt_C::GetDefaultObj()
{
	static class UCruciblePrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCruciblePrompt_C*>(UCruciblePrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CruciblePrompt.CruciblePrompt_C.OpenWidget
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDTagPromptData       PrompData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCruciblePrompt_C::OpenWidget(struct FFortHUDTagPromptData& PrompData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CruciblePrompt_C", "OpenWidget");

	Params::UCruciblePrompt_C_OpenWidget_Params Parms{};

	Parms.PrompData = PrompData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CruciblePrompt.CruciblePrompt_C.CloseWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCruciblePrompt_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CruciblePrompt_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CruciblePrompt.CruciblePrompt_C.ExecuteUbergraph_CruciblePrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHUDTagPromptData       K2Node_Event_PrompData                                           (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UCruciblePrompt_C::ExecuteUbergraph_CruciblePrompt(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFortHUDTagPromptData& K2Node_Event_PrompData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CruciblePrompt_C", "ExecuteUbergraph_CruciblePrompt");

	Params::UCruciblePrompt_C_ExecuteUbergraph_CruciblePrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_PrompData = K2Node_Event_PrompData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


