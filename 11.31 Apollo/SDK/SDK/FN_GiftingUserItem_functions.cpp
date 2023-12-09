#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GiftingUserItem.GiftingUserItem_C
// (None)

class UClass* UGiftingUserItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GiftingUserItem_C");

	return Clss;
}


// GiftingUserItem_C GiftingUserItem.Default__GiftingUserItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGiftingUserItem_C* UGiftingUserItem_C::GetDefaultObj()
{
	static class UGiftingUserItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGiftingUserItem_C*>(UGiftingUserItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftingUserItem.GiftingUserItem_C.SetSelectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ESelectionState         NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAnimateOnSelect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingUserItem_C::SetSelectionState(enum class ESelectionState NewState, bool bAnimateOnSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftingUserItem_C", "SetSelectionState");

	Params::UGiftingUserItem_C_SetSelectionState_Params Parms{};

	Parms.NewState = NewState;
	Parms.bAnimateOnSelect = bAnimateOnSelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUserItem.GiftingUserItem_C.UpdateMessageText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewMessage                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGiftingUserItem_C::UpdateMessageText(class FText& NewMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftingUserItem_C", "UpdateMessageText");

	Params::UGiftingUserItem_C_UpdateMessageText_Params Parms{};

	Parms.NewMessage = NewMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUserItem.GiftingUserItem_C.ExecuteUbergraph_GiftingUserItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESelectionState         K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAnimateOnSelect                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_NewMessage                                          (ConstParm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingUserItem_C::ExecuteUbergraph_GiftingUserItem(int32 EntryPoint, enum class ESelectionState K2Node_Event_NewState, bool K2Node_Event_bAnimateOnSelect, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Event_NewMessage, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftingUserItem_C", "ExecuteUbergraph_GiftingUserItem");

	Params::UGiftingUserItem_C_ExecuteUbergraph_GiftingUserItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.K2Node_Event_bAnimateOnSelect = K2Node_Event_bAnimateOnSelect;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_NewMessage = K2Node_Event_NewMessage;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


