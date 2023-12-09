#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SocialBanModal.SocialBanModal_C
// (None)

class UClass* USocialBanModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialBanModal_C");

	return Clss;
}


// SocialBanModal_C SocialBanModal.Default__SocialBanModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USocialBanModal_C* USocialBanModal_C::GetDefaultObj()
{
	static class USocialBanModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialBanModal_C*>(USocialBanModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialBanModal.SocialBanModal_C.OnDisplayModeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsBanned                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USocialBanModal_C::OnDisplayModeSet(bool bIsBanned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialBanModal_C", "OnDisplayModeSet");

	Params::USocialBanModal_C_OnDisplayModeSet_Params Parms{};

	Parms.bIsBanned = bIsBanned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialBanModal.SocialBanModal_C.ExecuteUbergraph_SocialBanModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsBanned                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void USocialBanModal_C::ExecuteUbergraph_SocialBanModal(int32 EntryPoint, bool Temp_bool_Variable, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool K2Node_Event_bIsBanned, int32 K2Node_Select_Default, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialBanModal_C", "ExecuteUbergraph_SocialBanModal");

	Params::USocialBanModal_C_ExecuteUbergraph_SocialBanModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Event_bIsBanned = K2Node_Event_bIsBanned;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button_1 = K2Node_DynamicCast_AsIcon_Text_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialBanModal.SocialBanModal_C.OnCloseSucceeded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USocialBanModal_C::OnCloseSucceeded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialBanModal_C", "OnCloseSucceeded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


