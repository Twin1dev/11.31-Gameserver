#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C
// (None)

class UClass* UPopupCenterMessageModalPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PopupCenterMessageModalPanel_C");

	return Clss;
}


// PopupCenterMessageModalPanel_C PopupCenterMessageModalPanel.Default__PopupCenterMessageModalPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPopupCenterMessageModalPanel_C* UPopupCenterMessageModalPanel_C::GetDefaultObj()
{
	static class UPopupCenterMessageModalPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPopupCenterMessageModalPanel_C*>(UPopupCenterMessageModalPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.LeaveZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupCenterMessageModalPanel_C::LeaveZone(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupCenterMessageModalPanel_C", "LeaveZone");

	Params::UPopupCenterMessageModalPanel_C_LeaveZone_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECenterPopupMessageStateEnumNewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CurrentMessage                                                   (Edit, BlueprintVisible)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopupCenterMessageModalPanel_C::UpdateState(enum class ECenterPopupMessageStateEnum NewState, class FText CurrentMessage, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupCenterMessageModalPanel_C", "UpdateState");

	Params::UPopupCenterMessageModalPanel_C_UpdateState_Params Parms{};

	Parms.NewState = NewState;
	Parms.CurrentMessage = CurrentMessage;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


