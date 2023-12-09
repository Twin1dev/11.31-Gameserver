#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StarlightPrompt.StarlightPrompt_C
// (None)

class UClass* UStarlightPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StarlightPrompt_C");

	return Clss;
}


// StarlightPrompt_C StarlightPrompt.Default__StarlightPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStarlightPrompt_C* UStarlightPrompt_C::GetDefaultObj()
{
	static class UStarlightPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStarlightPrompt_C*>(UStarlightPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StarlightPrompt.StarlightPrompt_C.OpenWidget
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDTagPromptData       PrompData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStarlightPrompt_C::OpenWidget(struct FFortHUDTagPromptData& PrompData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StarlightPrompt_C", "OpenWidget");

	Params::UStarlightPrompt_C_OpenWidget_Params Parms{};

	Parms.PrompData = PrompData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StarlightPrompt.StarlightPrompt_C.CloseWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStarlightPrompt_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StarlightPrompt_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StarlightPrompt.StarlightPrompt_C.ExecuteUbergraph_StarlightPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHUDTagPromptData       K2Node_Event_PrompData                                           (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UStarlightPrompt_C::ExecuteUbergraph_StarlightPrompt(int32 EntryPoint, const struct FFortHUDTagPromptData& K2Node_Event_PrompData, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StarlightPrompt_C", "ExecuteUbergraph_StarlightPrompt");

	Params::UStarlightPrompt_C_ExecuteUbergraph_StarlightPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PrompData = K2Node_Event_PrompData;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


