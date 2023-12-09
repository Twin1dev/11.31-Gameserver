#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C
// (None)

class UClass* UAthenaMOTDWatchVideoWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMOTDWatchVideoWidget_C");

	return Clss;
}


// AthenaMOTDWatchVideoWidget_C AthenaMOTDWatchVideoWidget.Default__AthenaMOTDWatchVideoWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMOTDWatchVideoWidget_C* UAthenaMOTDWatchVideoWidget_C::GetDefaultObj()
{
	static class UAthenaMOTDWatchVideoWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMOTDWatchVideoWidget_C*>(UAthenaMOTDWatchVideoWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.BindVideoEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UAthenaMOTDWatchVideoWidget_C::BindVideoEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDWatchVideoWidget_C", "BindVideoEvents");

	Params::UAthenaMOTDWatchVideoWidget_C_BindVideoEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.CloseWidgetNoURL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMOTDWatchVideoWidget_C::CloseWidgetNoURL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDWatchVideoWidget_C", "CloseWidgetNoURL");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.CloseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UAthenaMOTDWatchVideoWidget_C::CloseWidget(const class FString& URL, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDWatchVideoWidget_C", "CloseWidget");

	Params::UAthenaMOTDWatchVideoWidget_C_CloseWidget_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDWatchVideoWidget_C", "OnPopulateNews");

	Params::UAthenaMOTDWatchVideoWidget_C_OnPopulateNews_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDWatchVideoWidget_C", "ExecuteUbergraph_AthenaMOTDWatchVideoWidget");

	Params::UAthenaMOTDWatchVideoWidget_C_ExecuteUbergraph_AthenaMOTDWatchVideoWidget_Params Parms{};

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


