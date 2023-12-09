#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreativeAffiliatePanel.CreativeAffiliatePanel_C
// (None)

class UClass* UCreativeAffiliatePanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeAffiliatePanel_C");

	return Clss;
}


// CreativeAffiliatePanel_C CreativeAffiliatePanel.Default__CreativeAffiliatePanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativeAffiliatePanel_C* UCreativeAffiliatePanel_C::GetDefaultObj()
{
	static class UCreativeAffiliatePanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeAffiliatePanel_C*>(UCreativeAffiliatePanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.SetAffiliateName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        AffiliateName                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeAffiliatePanel_C::SetAffiliateName(class FText AffiliateName, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "SetAffiliateName");

	Params::UCreativeAffiliatePanel_C_SetAffiliateName_Params Parms{};

	Parms.AffiliateName = AffiliateName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeAffiliatePanel_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCreativeAffiliatePanel_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.ButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeAffiliatePanel_C::ButtonClicked(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "ButtonClicked");

	Params::UCreativeAffiliatePanel_C_ButtonClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.PopupClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeAffiliatePanel_C::PopupClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "PopupClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCreativeAffiliatePanel_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InitObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeAffiliatePanel_C::InitFromObject(class UObject* InitObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "InitFromObject");

	Params::UCreativeAffiliatePanel_C_InitFromObject_Params Parms{};

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.On Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeAffiliatePanel_C::On_Success()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "On Success");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.ExecuteUbergraph_CreativeAffiliatePanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_Event_InitObject                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeAffiliatePanel_C::ExecuteUbergraph_CreativeAffiliatePanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_CustomEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_Event_InitObject, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "ExecuteUbergraph_CreativeAffiliatePanel");

	Params::UCreativeAffiliatePanel_C_ExecuteUbergraph_CreativeAffiliatePanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_InitObject = K2Node_Event_InitObject;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.OnSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeAffiliatePanel_C::OnSuccess__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "OnSuccess__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeAffiliatePanel.CreativeAffiliatePanel_C.OnPanelClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeAffiliatePanel_C::OnPanelClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAffiliatePanel_C", "OnPanelClose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


