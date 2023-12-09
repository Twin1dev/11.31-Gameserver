#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortTutorial_LobbyPopup_2.FortTutorial_LobbyPopup_2_C
// (None)

class UClass* UFortTutorial_LobbyPopup_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortTutorial_LobbyPopup_2_C");

	return Clss;
}


// FortTutorial_LobbyPopup_2_C FortTutorial_LobbyPopup_2.Default__FortTutorial_LobbyPopup_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortTutorial_LobbyPopup_2_C* UFortTutorial_LobbyPopup_2_C::GetDefaultObj()
{
	static class UFortTutorial_LobbyPopup_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortTutorial_LobbyPopup_2_C*>(UFortTutorial_LobbyPopup_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FortTutorial_LobbyPopup_2.FortTutorial_LobbyPopup_2_C.BndEvt__Skip_Button_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTutorial_LobbyPopup_2_C::BndEvt__Skip_Button_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTutorial_LobbyPopup_2_C", "BndEvt__Skip_Button_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UFortTutorial_LobbyPopup_2_C_BndEvt__Skip_Button_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortTutorial_LobbyPopup_2.FortTutorial_LobbyPopup_2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortTutorial_LobbyPopup_2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTutorial_LobbyPopup_2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortTutorial_LobbyPopup_2.FortTutorial_LobbyPopup_2_C.BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTutorial_LobbyPopup_2_C::BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTutorial_LobbyPopup_2_C", "BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UFortTutorial_LobbyPopup_2_C_BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortTutorial_LobbyPopup_2.FortTutorial_LobbyPopup_2_C.BndEvt__Close_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTutorial_LobbyPopup_2_C::BndEvt__Close_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTutorial_LobbyPopup_2_C", "BndEvt__Close_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UFortTutorial_LobbyPopup_2_C_BndEvt__Close_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortTutorial_LobbyPopup_2.FortTutorial_LobbyPopup_2_C.ExecuteUbergraph_FortTutorial_LobbyPopup_2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTutorial_LobbyPopup_2_C::ExecuteUbergraph_FortTutorial_LobbyPopup_2(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTutorial_LobbyPopup_2_C", "ExecuteUbergraph_FortTutorial_LobbyPopup_2");

	Params::UFortTutorial_LobbyPopup_2_C_ExecuteUbergraph_FortTutorial_LobbyPopup_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


