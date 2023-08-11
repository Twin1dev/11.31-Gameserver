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


// Function TeamMemberManage.TeamMemberManage_C.BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberManage_C::BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TeamMemberManage_C", "BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UTeamMemberManage_C_BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberManage.TeamMemberManage_C.OnParticipationChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsParticipating                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamMemberManage_C::OnParticipationChanged(bool bIsParticipating)
{
	static auto Func = Class->GetFunction("TeamMemberManage_C", "OnParticipationChanged");

	Params::UTeamMemberManage_C_OnParticipationChanged_Params Parms;

	Parms.bIsParticipating = bIsParticipating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberManage.TeamMemberManage_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTeamMemberManage_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("TeamMemberManage_C", "BP_OnActivated");

	Params::UTeamMemberManage_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberManage.TeamMemberManage_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        IconId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ColorId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberManage_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId)
{
	static auto Func = Class->GetFunction("TeamMemberManage_C", "BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature");

	Params::UTeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature_Params Parms;

	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberManage.TeamMemberManage_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTeamMemberManage_C::BP_OnDeactivated()
{
	static auto Func = Class->GetFunction("TeamMemberManage_C", "BP_OnDeactivated");

	Params::UTeamMemberManage_C_BP_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberManage.TeamMemberManage_C.BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberManage_C::BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("TeamMemberManage_C", "BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature");

	Params::UTeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature_Params Parms;

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberManage.TeamMemberManage_C.OpenBannerEditor
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTeamMemberManage_C::OpenBannerEditor()
{
	static auto Func = Class->GetFunction("TeamMemberManage_C", "OpenBannerEditor");

	Params::UTeamMemberManage_C_OpenBannerEditor_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberManage.TeamMemberManage_C.ExecuteUbergraph_TeamMemberManage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsParticipating                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_IconId                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_ColorId                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamMemberManage_C::ExecuteUbergraph_TeamMemberManage(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bIsParticipating, class FText K2Node_Select_Default, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class FName K2Node_ComponentBoundEvent_IconId, class FName K2Node_ComponentBoundEvent_ColorId, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("TeamMemberManage_C", "ExecuteUbergraph_TeamMemberManage");

	Params::UTeamMemberManage_C_ExecuteUbergraph_TeamMemberManage_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_bIsParticipating = K2Node_Event_bIsParticipating;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_IconId = K2Node_ComponentBoundEvent_IconId;
	Parms.K2Node_ComponentBoundEvent_ColorId = K2Node_ComponentBoundEvent_ColorId;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
