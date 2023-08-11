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


// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanelView_UserLists_C::BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("SocialPanelView_UserLists_C", "BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");

	Params::USocialPanelView_UserLists_C_BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params Parms;

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnSetVoiceChannelButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USocialPanelView_UserLists_C::OnSetVoiceChannelButtonText(class FText& ButtonText)
{
	static auto Func = Class->GetFunction("SocialPanelView_UserLists_C", "OnSetVoiceChannelButtonText");

	Params::USocialPanelView_UserLists_C_OnSetVoiceChannelButtonText_Params Parms;

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USocialPanelView_UserLists_C::Construct()
{
	static auto Func = Class->GetFunction("SocialPanelView_UserLists_C", "Construct");

	Params::USocialPanelView_UserLists_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USocialPanelView_UserLists_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("SocialPanelView_UserLists_C", "PreConstruct");

	Params::USocialPanelView_UserLists_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.ExecuteUbergraph_SocialPanelView_UserLists
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ButtonText                                          (ConstParm)
// class ULeavePlatformPartyButton_C* K2Node_DynamicCast_AsLeave_Platform_Party_Button                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanelView_UserLists_C::ExecuteUbergraph_SocialPanelView_UserLists(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Event_ButtonText, class ULeavePlatformPartyButton_C* K2Node_DynamicCast_AsLeave_Platform_Party_Button, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("SocialPanelView_UserLists_C", "ExecuteUbergraph_SocialPanelView_UserLists");

	Params::USocialPanelView_UserLists_C_ExecuteUbergraph_SocialPanelView_UserLists_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_ButtonText = K2Node_Event_ButtonText;
	Parms.K2Node_DynamicCast_AsLeave_Platform_Party_Button = K2Node_DynamicCast_AsLeave_Platform_Party_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
