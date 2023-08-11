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


// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTexture*                    BackgroundImage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage)
{
	static auto Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature");

	Params::AFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature_Params Parms;

	Parms.BackgroundImage = BackgroundImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature");

	Params::AFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature");

	Params::AFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      PresetEnvironmentName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(const class FString& PresetEnvironmentName)
{
	static auto Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature");

	Params::AFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature_Params Parms;

	Parms.PresetEnvironmentName = PresetEnvironmentName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_BG_Main_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Frontend_BG_Main_C", "ReceiveBeginPlay");

	Params::AFrontend_BG_Main_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.ExecuteUbergraph_Frontend_BG_Main
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_ActorBoundEvent_BackgroundImage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ActorBoundEvent_PresetEnvironmentName                     (ZeroConstructor, HasGetValueTypeHash)

void AFrontend_BG_Main_C::ExecuteUbergraph_Frontend_BG_Main(int32 EntryPoint, class UTexture* K2Node_ActorBoundEvent_BackgroundImage, const class FString& K2Node_ActorBoundEvent_PresetEnvironmentName)
{
	static auto Func = Class->GetFunction("Frontend_BG_Main_C", "ExecuteUbergraph_Frontend_BG_Main");

	Params::AFrontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ActorBoundEvent_BackgroundImage = K2Node_ActorBoundEvent_BackgroundImage;
	Parms.K2Node_ActorBoundEvent_PresetEnvironmentName = K2Node_ActorBoundEvent_PresetEnvironmentName;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
