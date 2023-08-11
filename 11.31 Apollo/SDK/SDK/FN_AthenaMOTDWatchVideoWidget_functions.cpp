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


// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.BindVideoEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UAthenaMOTDWatchVideoWidget_C::BindVideoEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static auto Func = Class->GetFunction("AthenaMOTDWatchVideoWidget_C", "BindVideoEvents");

	Params::UAthenaMOTDWatchVideoWidget_C_BindVideoEvents_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.CloseWidgetNoURL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMOTDWatchVideoWidget_C::CloseWidgetNoURL()
{
	static auto Func = Class->GetFunction("AthenaMOTDWatchVideoWidget_C", "CloseWidgetNoURL");

	Params::UAthenaMOTDWatchVideoWidget_C_CloseWidgetNoURL_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.CloseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UAthenaMOTDWatchVideoWidget_C::CloseWidget(const class FString& URL, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static auto Func = Class->GetFunction("AthenaMOTDWatchVideoWidget_C", "CloseWidget");

	Params::UAthenaMOTDWatchVideoWidget_C_CloseWidget_Params Parms;

	Parms.URL = URL;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.OnPopulateNews
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAthenaNewsEntry            NewsEntry                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMOTDWatchVideoWidget_C::OnPopulateNews(struct FAthenaNewsEntry& NewsEntry)
{
	static auto Func = Class->GetFunction("AthenaMOTDWatchVideoWidget_C", "OnPopulateNews");

	Params::UAthenaMOTDWatchVideoWidget_C_OnPopulateNews_Params Parms;

	Parms.NewsEntry = NewsEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.ExecuteUbergraph_AthenaMOTDWatchVideoWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaNewsEntry            K2Node_Event_NewsEntry                                           (ConstParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActivatableMovieWidget_Monolithic_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadStreamingVideo_NoAutoPlay                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStreamMediaSource*      CallFunc_LoadStreamingVideo_MediaSource                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMOTDWatchVideoWidget_C::ExecuteUbergraph_AthenaMOTDWatchVideoWidget(int32 EntryPoint, const struct FAthenaNewsEntry& K2Node_Event_NewsEntry, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActivatableMovieWidget_Monolithic_C* CallFunc_Create_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, bool CallFunc_LoadStreamingVideo_NoAutoPlay, class UFortStreamMediaSource* CallFunc_LoadStreamingVideo_MediaSource)
{
	static auto Func = Class->GetFunction("AthenaMOTDWatchVideoWidget_C", "ExecuteUbergraph_AthenaMOTDWatchVideoWidget");

	Params::UAthenaMOTDWatchVideoWidget_C_ExecuteUbergraph_AthenaMOTDWatchVideoWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewsEntry = K2Node_Event_NewsEntry;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_LoadStreamingVideo_NoAutoPlay = CallFunc_LoadStreamingVideo_NoAutoPlay;
	Parms.CallFunc_LoadStreamingVideo_MediaSource = CallFunc_LoadStreamingVideo_MediaSource;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
