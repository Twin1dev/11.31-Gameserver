#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DeimosRetailPrompt.DeimosRetailPrompt_C
// (None)

class UClass* UDeimosRetailPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeimosRetailPrompt_C");

	return Clss;
}


// DeimosRetailPrompt_C DeimosRetailPrompt.Default__DeimosRetailPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDeimosRetailPrompt_C* UDeimosRetailPrompt_C::GetDefaultObj()
{
	static class UDeimosRetailPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeimosRetailPrompt_C*>(UDeimosRetailPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DeimosRetailPrompt.DeimosRetailPrompt_C.OpenWidget
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDTagPromptData       PrompData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDeimosRetailPrompt_C::OpenWidget(struct FFortHUDTagPromptData& PrompData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeimosRetailPrompt_C", "OpenWidget");

	Params::UDeimosRetailPrompt_C_OpenWidget_Params Parms{};

	Parms.PrompData = PrompData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DeimosRetailPrompt.DeimosRetailPrompt_C.CloseWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDeimosRetailPrompt_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeimosRetailPrompt_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DeimosRetailPrompt.DeimosRetailPrompt_C.ExecuteUbergraph_DeimosRetailPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHUDTagPromptData       K2Node_Event_PrompData                                           (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeimosRetailPrompt_C::ExecuteUbergraph_DeimosRetailPrompt(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FFortHUDTagPromptData& K2Node_Event_PrompData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeimosRetailPrompt_C", "ExecuteUbergraph_DeimosRetailPrompt");

	Params::UDeimosRetailPrompt_C_ExecuteUbergraph_DeimosRetailPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_PrompData = K2Node_Event_PrompData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


