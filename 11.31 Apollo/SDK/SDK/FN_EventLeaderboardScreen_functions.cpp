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


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventWindowId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      TournamentSeriesId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::Init(const class FString& EventWindowId, const class FString& TournamentSeriesId)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "Init");

	Params::UEventLeaderboardScreen_C_Init_Params Parms;

	Parms.EventWindowId = EventWindowId;
	Parms.TournamentSeriesId = TournamentSeriesId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  TournamentDisplayInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardScreen_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventColorize");

	Params::UEventLeaderboardScreen_C_EventColorize_Params Parms;

	Parms.TournamentDisplayInfo = TournamentDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::EventIntro()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventIntro");

	Params::UEventLeaderboardScreen_C_EventIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData*EntryData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::OnLeaderboardEntrySelected(class UFortEventLeaderboardEntryData* EntryData)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "OnLeaderboardEntrySelected");

	Params::UEventLeaderboardScreen_C_OnLeaderboardEntrySelected_Params Parms;

	Parms.EntryData = EntryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequestComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              EntryCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::OnLeaderboardPageRequestComplete(int32 EntryCount)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "OnLeaderboardPageRequestComplete");

	Params::UEventLeaderboardScreen_C_OnLeaderboardPageRequestComplete_Params Parms;

	Parms.EntryCount = EntryCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequested
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::OnLeaderboardPageRequested()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "OnLeaderboardPageRequested");

	Params::UEventLeaderboardScreen_C_OnLeaderboardPageRequested_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__ListView_LeaderboardEntries_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::BndEvt__ListView_LeaderboardEntries_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__ListView_LeaderboardEntries_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature");

	Params::UEventLeaderboardScreen_C_BndEvt__ListView_LeaderboardEntries_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Event Leaderboard Screen On Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::Event_Leaderboard_Screen_On_Activated()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "Event Leaderboard Screen On Activated");

	Params::UEventLeaderboardScreen_C_Event_Leaderboard_Screen_On_Activated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::Construct()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "Construct");

	Params::UEventLeaderboardScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ShowMyStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::ShowMyStats(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "ShowMyStats");

	Params::UEventLeaderboardScreen_C_ShowMyStats_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardScreen_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_TournamentDisplayInfo                         ()
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortEventLeaderboardEntryData*K2Node_Event_EntryData                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_EntryCount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortEventLeaderboardEntryData*K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortEventLeaderboardEntryData*CallFunc_GetMyLeaderboardEntry_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::ExecuteUbergraph_EventLeaderboardScreen(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortEventLeaderboardEntryData* K2Node_Event_EntryData, int32 K2Node_Event_EntryCount, bool CallFunc_Greater_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, class UFortEventLeaderboardEntryData* K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, class UWidget* K2Node_Select_Default, class UCommonButton* K2Node_CustomEvent_Button, class UFortEventLeaderboardEntryData* CallFunc_GetMyLeaderboardEntry_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "ExecuteUbergraph_EventLeaderboardScreen");

	Params::UEventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_CustomEvent_TournamentDisplayInfo = K2Node_CustomEvent_TournamentDisplayInfo;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_EntryData = K2Node_Event_EntryData;
	Parms.K2Node_Event_EntryCount = K2Node_Event_EntryCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data = K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetMyLeaderboardEntry_ReturnValue = CallFunc_GetMyLeaderboardEntry_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventViewLiveGames__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::EventViewLiveGames__DelegateSignature()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventViewLiveGames__DelegateSignature");

	Params::UEventLeaderboardScreen_C_EventViewLiveGames__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::EventCloseButton__DelegateSignature()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventCloseButton__DelegateSignature");

	Params::UEventLeaderboardScreen_C_EventCloseButton__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
