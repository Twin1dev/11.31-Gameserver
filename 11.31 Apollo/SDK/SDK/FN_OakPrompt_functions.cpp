#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OakPrompt.OakPrompt_C
// (None)

class UClass* UOakPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OakPrompt_C");

	return Clss;
}


// OakPrompt_C OakPrompt.Default__OakPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOakPrompt_C* UOakPrompt_C::GetDefaultObj()
{
	static class UOakPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOakPrompt_C*>(UOakPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OakPrompt.OakPrompt_C.OpenWidget
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDTagPromptData       PrompData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOakPrompt_C::OpenWidget(struct FFortHUDTagPromptData& PrompData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakPrompt_C", "OpenWidget");

	Params::UOakPrompt_C_OpenWidget_Params Parms{};

	Parms.PrompData = PrompData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakPrompt.OakPrompt_C.CloseWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOakPrompt_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakPrompt_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OakPrompt.OakPrompt_C.ExecuteUbergraph_OakPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHUDTagPromptData       K2Node_Event_PrompData                                           (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UOakPrompt_C::ExecuteUbergraph_OakPrompt(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFortHUDTagPromptData& K2Node_Event_PrompData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakPrompt_C", "ExecuteUbergraph_OakPrompt");

	Params::UOakPrompt_C_ExecuteUbergraph_OakPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_PrompData = K2Node_Event_PrompData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


