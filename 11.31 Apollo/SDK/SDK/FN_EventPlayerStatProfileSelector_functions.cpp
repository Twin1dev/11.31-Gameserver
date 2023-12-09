#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C
// (None)

class UClass* UEventPlayerStatProfileSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventPlayerStatProfileSelector_C");

	return Clss;
}


// EventPlayerStatProfileSelector_C EventPlayerStatProfileSelector.Default__EventPlayerStatProfileSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventPlayerStatProfileSelector_C* UEventPlayerStatProfileSelector_C::GetDefaultObj()
{
	static class UEventPlayerStatProfileSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventPlayerStatProfileSelector_C*>(UEventPlayerStatProfileSelector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPlayerStatProfileSelector_C::BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventPlayerStatProfileSelector_C", "BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UEventPlayerStatProfileSelector_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventPlayerStatProfileSelector_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventPlayerStatProfileSelector_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.ExecuteUbergraph_EventPlayerStatProfileSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPlayerStatProfileSelector_C::ExecuteUbergraph_EventPlayerStatProfileSelector(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventPlayerStatProfileSelector_C", "ExecuteUbergraph_EventPlayerStatProfileSelector");

	Params::UEventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


