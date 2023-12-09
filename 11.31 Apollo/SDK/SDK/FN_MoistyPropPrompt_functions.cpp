#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MoistyPropPrompt.MoistyPropPrompt_C
// (None)

class UClass* UMoistyPropPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoistyPropPrompt_C");

	return Clss;
}


// MoistyPropPrompt_C MoistyPropPrompt.Default__MoistyPropPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMoistyPropPrompt_C* UMoistyPropPrompt_C::GetDefaultObj()
{
	static class UMoistyPropPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoistyPropPrompt_C*>(UMoistyPropPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MoistyPropPrompt.MoistyPropPrompt_C.OpenWidget
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDTagPromptData       PrompData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMoistyPropPrompt_C::OpenWidget(struct FFortHUDTagPromptData& PrompData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoistyPropPrompt_C", "OpenWidget");

	Params::UMoistyPropPrompt_C_OpenWidget_Params Parms{};

	Parms.PrompData = PrompData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoistyPropPrompt.MoistyPropPrompt_C.CloseWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoistyPropPrompt_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoistyPropPrompt_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoistyPropPrompt.MoistyPropPrompt_C.ExecuteUbergraph_MoistyPropPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHUDTagPromptData       K2Node_Event_PrompData                                           (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UMoistyPropPrompt_C::ExecuteUbergraph_MoistyPropPrompt(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFortHUDTagPromptData& K2Node_Event_PrompData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoistyPropPrompt_C", "ExecuteUbergraph_MoistyPropPrompt");

	Params::UMoistyPropPrompt_C_ExecuteUbergraph_MoistyPropPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_PrompData = K2Node_Event_PrompData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


