#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C
// (None)

class UClass* UEmergencyNoticeWidgetBR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmergencyNoticeWidgetBR_C");

	return Clss;
}


// EmergencyNoticeWidgetBR_C EmergencyNoticeWidgetBR.Default__EmergencyNoticeWidgetBR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmergencyNoticeWidgetBR_C* UEmergencyNoticeWidgetBR_C::GetDefaultObj()
{
	static class UEmergencyNoticeWidgetBR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmergencyNoticeWidgetBR_C*>(UEmergencyNoticeWidgetBR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.Show Notice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmergencyNoticeWidgetBR_C::Show_Notice(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "Show Notice");

	Params::UEmergencyNoticeWidgetBR_C_Show_Notice_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "ShowNotice");

	Params::UEmergencyNoticeWidgetBR_C_ShowNotice_Params Parms{};

	Parms.Title = Title;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.HideNotice
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEmergencyNoticeWidgetBR_C::HideNotice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "HideNotice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.ExecuteUbergraph_EmergencyNoticeWidgetBR
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Title                                               (ConstParm)
// class FText                        K2Node_Event_Body                                                (ConstParm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UEmergencyNoticeWidgetBR_C::ExecuteUbergraph_EmergencyNoticeWidgetBR(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Body, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "ExecuteUbergraph_EmergencyNoticeWidgetBR");

	Params::UEmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Title = K2Node_Event_Title;
	Parms.K2Node_Event_Body = K2Node_Event_Body;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


