#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LiveStreamHUDElement.LiveStreamHUDElement_C
// (None)

class UClass* ULiveStreamHUDElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveStreamHUDElement_C");

	return Clss;
}


// LiveStreamHUDElement_C LiveStreamHUDElement.Default__LiveStreamHUDElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiveStreamHUDElement_C* ULiveStreamHUDElement_C::GetDefaultObj()
{
	static class ULiveStreamHUDElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveStreamHUDElement_C*>(ULiveStreamHUDElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveStreamHUDElement.LiveStreamHUDElement_C.OnComplete_74112BA8413888C7EAD38CA589F3B588
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULiveStreamHUDElement_C::OnComplete_74112BA8413888C7EAD38CA589F3B588(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamHUDElement_C", "OnComplete_74112BA8413888C7EAD38CA589F3B588");

	Params::ULiveStreamHUDElement_C_OnComplete_74112BA8413888C7EAD38CA589F3B588_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LiveStreamHUDElement.LiveStreamHUDElement_C.InitializeVideoPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULiveStreamHUDElement_C::InitializeVideoPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamHUDElement_C", "InitializeVideoPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveStreamHUDElement.LiveStreamHUDElement_C.VideoPlayerReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULiveStreamHUDElement_C::VideoPlayerReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamHUDElement_C", "VideoPlayerReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveStreamHUDElement.LiveStreamHUDElement_C.CreateVideoPlayer
// (Event, Public, BlueprintEvent)
// Parameters:

void ULiveStreamHUDElement_C::CreateVideoPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamHUDElement_C", "CreateVideoPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveStreamHUDElement.LiveStreamHUDElement_C.DestroyVideoPlayer
// (Event, Public, BlueprintEvent)
// Parameters:

void ULiveStreamHUDElement_C::DestroyVideoPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamHUDElement_C", "DestroyVideoPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveStreamHUDElement.LiveStreamHUDElement_C.ExecuteUbergraph_LiveStreamHUDElement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULiveStreamStandalonePlayer* K2Node_DynamicCast_AsLive_Stream_Standalone_Player               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CreateWidgetAsync*CallFunc_CreateWidgetAsync_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULiveStreamHUDElement_C::ExecuteUbergraph_LiveStreamHUDElement(int32 EntryPoint, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_CustomEvent_UserWidget, class UUserWidget* Temp_object_Variable, class ULiveStreamStandalonePlayer* K2Node_DynamicCast_AsLive_Stream_Standalone_Player, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamHUDElement_C", "ExecuteUbergraph_LiveStreamHUDElement");

	Params::ULiveStreamHUDElement_C_ExecuteUbergraph_LiveStreamHUDElement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_UserWidget = K2Node_CustomEvent_UserWidget;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsLive_Stream_Standalone_Player = K2Node_DynamicCast_AsLive_Stream_Standalone_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetAsync_ReturnValue = CallFunc_CreateWidgetAsync_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


