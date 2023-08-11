#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ItemNotification.ItemNotification_C.HandleFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemNotification_C::HandleFade(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemNotification_C", "HandleFade");

	Params::UItemNotification_C_HandleFade_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemNotification.ItemNotification_C.HandleIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemNotification_C::HandleIntro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemNotification_C", "HandleIntro");

	Params::UItemNotification_C_HandleIntro_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemNotification.ItemNotification_C.HandleInitialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemNotification_C::HandleInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemNotification_C", "HandleInitialState");

	Params::UItemNotification_C_HandleInitialState_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemNotification.ItemNotification_C.OnNextItemDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemNotification_C::OnNextItemDisplay()
{
	static auto Func = Class->GetFunction("ItemNotification_C", "OnNextItemDisplay");

	Params::UItemNotification_C_OnNextItemDisplay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemNotification.ItemNotification_C.OnCloseScreen
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemNotification_C::OnCloseScreen()
{
	static auto Func = Class->GetFunction("ItemNotification_C", "OnCloseScreen");

	Params::UItemNotification_C_OnCloseScreen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemNotification.ItemNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemNotification_C::Construct()
{
	static auto Func = Class->GetFunction("ItemNotification_C", "Construct");

	Params::UItemNotification_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemNotification.ItemNotification_C.OnSetButtonText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCloseWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemNotification_C::OnSetButtonText(bool bCanCloseWidget)
{
	static auto Func = Class->GetFunction("ItemNotification_C", "OnSetButtonText");

	Params::UItemNotification_C_OnSetButtonText_Params Parms;

	Parms.bCanCloseWidget = bCanCloseWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemNotification.ItemNotification_C.ExecuteUbergraph_ItemNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoloButton_C*               K2Node_DynamicCast_AsSolo_Button                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCanCloseWidget                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemNotification_C::ExecuteUbergraph_ItemNotification(int32 EntryPoint, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, bool K2Node_Event_bCanCloseWidget)
{
	static auto Func = Class->GetFunction("ItemNotification_C", "ExecuteUbergraph_ItemNotification");

	Params::UItemNotification_C_ExecuteUbergraph_ItemNotification_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsSolo_Button = K2Node_DynamicCast_AsSolo_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.K2Node_Event_bCanCloseWidget = K2Node_Event_bCanCloseWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
