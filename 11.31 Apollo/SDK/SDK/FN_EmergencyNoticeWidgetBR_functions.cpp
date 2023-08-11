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


// Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.Show Notice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmergencyNoticeWidgetBR_C::Show_Notice(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "Show Notice");

	Params::UEmergencyNoticeWidgetBR_C_Show_Notice_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.ShowNotice
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Body                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEmergencyNoticeWidgetBR_C::ShowNotice(class FText& Title, class FText& Body)
{
	static auto Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "ShowNotice");

	Params::UEmergencyNoticeWidgetBR_C_ShowNotice_Params Parms;

	Parms.Title = Title;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.HideNotice
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEmergencyNoticeWidgetBR_C::HideNotice()
{
	static auto Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "HideNotice");

	Params::UEmergencyNoticeWidgetBR_C_HideNotice_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.ExecuteUbergraph_EmergencyNoticeWidgetBR
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Title                                               (ConstParm)
// class FText                        K2Node_Event_Body                                                (ConstParm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UEmergencyNoticeWidgetBR_C::ExecuteUbergraph_EmergencyNoticeWidgetBR(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Body, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "ExecuteUbergraph_EmergencyNoticeWidgetBR");

	Params::UEmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Title = K2Node_Event_Title;
	Parms.K2Node_Event_Body = K2Node_Event_Body;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
