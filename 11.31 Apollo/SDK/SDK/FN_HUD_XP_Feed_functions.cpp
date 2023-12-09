#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_XP_Feed.HUD_XP_Feed_C
// (None)

class UClass* UHUD_XP_Feed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_XP_Feed_C");

	return Clss;
}


// HUD_XP_Feed_C HUD_XP_Feed.Default__HUD_XP_Feed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_XP_Feed_C* UHUD_XP_Feed_C::GetDefaultObj()
{
	static class UHUD_XP_Feed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_XP_Feed_C*>(UHUD_XP_Feed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_XP_Feed.HUD_XP_Feed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_XP_Feed_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Feed_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_XP_Feed.HUD_XP_Feed_C.EventXPLayout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Placement                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_XP_Feed_C::EventXPLayout(class FName Placement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Feed_C", "EventXPLayout");

	Params::UHUD_XP_Feed_C_EventXPLayout_Params Parms{};

	Parms.Placement = Placement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_XP_Feed.HUD_XP_Feed_C.UpdateRestXP
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              RestXpRemaining                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_XP_Feed_C::UpdateRestXP(int32 RestXpRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Feed_C", "UpdateRestXP");

	Params::UHUD_XP_Feed_C_UpdateRestXP_Params Parms{};

	Parms.RestXpRemaining = RestXpRemaining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_XP_Feed.HUD_XP_Feed_C.ExecuteUbergraph_HUD_XP_Feed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Placement                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_Event_RestXpRemaining                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_XP_Feed_C::ExecuteUbergraph_HUD_XP_Feed(int32 EntryPoint, class FName K2Node_CustomEvent_Placement, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Event_RestXpRemaining, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Feed_C", "ExecuteUbergraph_HUD_XP_Feed");

	Params::UHUD_XP_Feed_C_ExecuteUbergraph_HUD_XP_Feed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Placement = K2Node_CustomEvent_Placement;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_RestXpRemaining = K2Node_Event_RestXpRemaining;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


