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


// Function SocialPanel.SocialPanel_C.Play Panel Animation Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void USocialPanel_C::Play_Panel_Animation_Sound(bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("SocialPanel_C", "Play Panel Animation Sound");

	Params::USocialPanel_C_Play_Panel_Animation_Sound_Params Parms;

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USocialPanel_C::ClosePanelAfterAnimation()
{
	static auto Func = Class->GetFunction("SocialPanel_C", "ClosePanelAfterAnimation");

	Params::USocialPanel_C_ClosePanelAfterAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnySlideOutMenuOpen_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply USocialPanel_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsActivated_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAnySlideOutMenuOpen_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("SocialPanel_C", "OnMouseButtonDown_0");

	Params::USocialPanel_C_OnMouseButtonDown_0_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsAnySlideOutMenuOpen_ReturnValue = CallFunc_IsAnySlideOutMenuOpen_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanel_C::BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SocialPanel_C", "BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::USocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.ClosePanel
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_C::ClosePanel()
{
	static auto Func = Class->GetFunction("SocialPanel_C", "ClosePanel");

	Params::USocialPanel_C_ClosePanel_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.HandleOutroEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USocialPanel_C::HandleOutroEnded()
{
	static auto Func = Class->GetFunction("SocialPanel_C", "HandleOutroEnded");

	Params::USocialPanel_C_HandleOutroEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.OnBeginOutro
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("SocialPanel_C", "OnBeginOutro");

	Params::USocialPanel_C_OnBeginOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.OnBeginIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("SocialPanel_C", "OnBeginIntro");

	Params::USocialPanel_C_OnBeginIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.HandleIntroEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USocialPanel_C::HandleIntroEnded()
{
	static auto Func = Class->GetFunction("SocialPanel_C", "HandleIntroEnded");

	Params::USocialPanel_C_HandleIntroEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnySlideOutMenuOpen_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void USocialPanel_C::ExecuteUbergraph_SocialPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsAnySlideOutMenuOpen_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static auto Func = Class->GetFunction("SocialPanel_C", "ExecuteUbergraph_SocialPanel");

	Params::USocialPanel_C_ExecuteUbergraph_SocialPanel_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsAnySlideOutMenuOpen_ReturnValue = CallFunc_IsAnySlideOutMenuOpen_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
