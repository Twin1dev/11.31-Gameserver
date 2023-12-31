#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMOTDLandingWidget.AthenaMOTDLandingWidget_C
// (None)

class UClass* UAthenaMOTDLandingWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMOTDLandingWidget_C");

	return Clss;
}


// AthenaMOTDLandingWidget_C AthenaMOTDLandingWidget.Default__AthenaMOTDLandingWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMOTDLandingWidget_C* UAthenaMOTDLandingWidget_C::GetDefaultObj()
{
	static class UAthenaMOTDLandingWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMOTDLandingWidget_C*>(UAthenaMOTDLandingWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMOTDLandingWidget.AthenaMOTDLandingWidget_C.SetTextIfValidOrDefault
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        DefaultText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UAthenaMOTDLandingWidget_C::SetTextIfValidOrDefault(class UCommonButton* Button, const class FString& String, class FText DefaultText, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDLandingWidget_C", "SetTextIfValidOrDefault");

	Params::UAthenaMOTDLandingWidget_C_SetTextIfValidOrDefault_Params Parms{};

	Parms.Button = Button;
	Parms.String = String;
	Parms.DefaultText = DefaultText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDLandingWidget.AthenaMOTDLandingWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMOTDLandingWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDLandingWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMOTDLandingWidget.AthenaMOTDLandingWidget_C.OnPopulateNews
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAthenaNewsEntry            NewsEntry                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMOTDLandingWidget_C::OnPopulateNews(struct FAthenaNewsEntry& NewsEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDLandingWidget_C", "OnPopulateNews");

	Params::UAthenaMOTDLandingWidget_C_OnPopulateNews_Params Parms{};

	Parms.NewsEntry = NewsEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDLandingWidget.AthenaMOTDLandingWidget_C.ExecuteUbergraph_AthenaMOTDLandingWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaNewsEntry            K2Node_Event_NewsEntry                                           (ConstParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMOTDLandingWidget_C::ExecuteUbergraph_AthenaMOTDLandingWidget(int32 EntryPoint, const struct FAthenaNewsEntry& K2Node_Event_NewsEntry, bool K2Node_SwitchEnum_CmpSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDLandingWidget_C", "ExecuteUbergraph_AthenaMOTDLandingWidget");

	Params::UAthenaMOTDLandingWidget_C_ExecuteUbergraph_AthenaMOTDLandingWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewsEntry = K2Node_Event_NewsEntry;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button_1 = K2Node_DynamicCast_AsIcon_Text_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button_2 = K2Node_DynamicCast_AsIcon_Text_Button_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


