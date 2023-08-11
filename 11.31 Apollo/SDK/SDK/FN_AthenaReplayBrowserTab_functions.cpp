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


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ShowLoadingThrobber
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserTab_C::ShowLoadingThrobber()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "ShowLoadingThrobber");

	Params::UAthenaReplayBrowserTab_C_ShowLoadingThrobber_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasAction                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserTab_C::OnActionStateChanged(bool bHasAction)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnActionStateChanged");

	Params::UAthenaReplayBrowserTab_C_OnActionStateChanged_Params Parms;

	Parms.bHasAction = bHasAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserTab_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "BP_OnActivated");

	Params::UAthenaReplayBrowserTab_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ExecuteUbergraph_AthenaReplayBrowserTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHasAction                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserTab_C::ExecuteUbergraph_AthenaReplayBrowserTab(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, bool K2Node_Event_bHasAction, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "ExecuteUbergraph_AthenaReplayBrowserTab");

	Params::UAthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Event_bHasAction = K2Node_Event_bHasAction;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
