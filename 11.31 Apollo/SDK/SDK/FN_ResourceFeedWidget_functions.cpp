#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ResourceFeedWidget.ResourceFeedWidget_C
// (None)

class UClass* UResourceFeedWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResourceFeedWidget_C");

	return Clss;
}


// ResourceFeedWidget_C ResourceFeedWidget.Default__ResourceFeedWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResourceFeedWidget_C* UResourceFeedWidget_C::GetDefaultObj()
{
	static class UResourceFeedWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResourceFeedWidget_C*>(UResourceFeedWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResourceFeedWidget.ResourceFeedWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResourceFeedWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceFeedWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResourceFeedWidget.ResourceFeedWidget_C.OnCameraTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating*SpectatorPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorCameraType    NewCameraType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResourceFeedWidget_C::OnCameraTypeChanged(class AFortPlayerControllerSpectating* SpectatorPC, enum class ESpectatorCameraType NewCameraType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceFeedWidget_C", "OnCameraTypeChanged");

	Params::UResourceFeedWidget_C_OnCameraTypeChanged_Params Parms{};

	Parms.SpectatorPC = SpectatorPC;
	Parms.NewCameraType = NewCameraType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResourceFeedWidget.ResourceFeedWidget_C.OnFollowPlayerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating*SpectatorPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            NewFollowedPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResourceFeedWidget_C::OnFollowPlayerChanged(class AFortPlayerControllerSpectating* SpectatorPC, class AFortPlayerState* NewFollowedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceFeedWidget_C", "OnFollowPlayerChanged");

	Params::UResourceFeedWidget_C_OnFollowPlayerChanged_Params Parms{};

	Parms.SpectatorPC = SpectatorPC;
	Parms.NewFollowedPlayer = NewFollowedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResourceFeedWidget.ResourceFeedWidget_C.ExecuteUbergraph_ResourceFeedWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerSpectating*K2Node_CustomEvent_SpectatorPC_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorCameraType    K2Node_CustomEvent_NewCameraType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_CustomEvent_SpectatorPC                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            K2Node_CustomEvent_NewFollowedPlayer                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UResourceFeedWidget_C::ExecuteUbergraph_ResourceFeedWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerSpectating* K2Node_CustomEvent_SpectatorPC_1, enum class ESpectatorCameraType K2Node_CustomEvent_NewCameraType, class AFortPlayerControllerSpectating* K2Node_CustomEvent_SpectatorPC, class AFortPlayerState* K2Node_CustomEvent_NewFollowedPlayer, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceFeedWidget_C", "ExecuteUbergraph_ResourceFeedWidget");

	Params::UResourceFeedWidget_C_ExecuteUbergraph_ResourceFeedWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating = K2Node_DynamicCast_AsFort_Player_Controller_Spectating;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_SpectatorPC_1 = K2Node_CustomEvent_SpectatorPC_1;
	Parms.K2Node_CustomEvent_NewCameraType = K2Node_CustomEvent_NewCameraType;
	Parms.K2Node_CustomEvent_SpectatorPC = K2Node_CustomEvent_SpectatorPC;
	Parms.K2Node_CustomEvent_NewFollowedPlayer = K2Node_CustomEvent_NewFollowedPlayer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


