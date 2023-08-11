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


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting_LOWDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::SwitchPCLighting_LOWDetail(bool Visibility)
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "SwitchPCLighting_LOWDetail");

	Params::AVaultCharacterLightingBP_C_SwitchPCLighting_LOWDetail_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::SwitchPCLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "SwitchPCLighting");

	Params::AVaultCharacterLightingBP_C_SwitchPCLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibilty                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::SwitchMobileLighting(bool Visibilty)
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "SwitchMobileLighting");

	Params::AVaultCharacterLightingBP_C_SwitchMobileLighting_Params Parms;

	Parms.Visibilty = Visibilty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "UserConstructionScript");

	Params::AVaultCharacterLightingBP_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::UpdateSettings()
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "UpdateSettings");

	Params::AVaultCharacterLightingBP_C_UpdateSettings_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ToggleLighting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::ToggleLighting()
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "ToggleLighting");

	Params::AVaultCharacterLightingBP_C_ToggleLighting_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.OVERRIDELIGHTING
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::OVERRIDELIGHTING()
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "OVERRIDELIGHTING");

	Params::AVaultCharacterLightingBP_C_OVERRIDELIGHTING_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "ReceiveBeginPlay");

	Params::AVaultCharacterLightingBP_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::LightControl(bool NewParam)
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "LightControl");

	Params::AVaultCharacterLightingBP_C_LightControl_Params Parms;

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsErebus_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::ExecuteUbergraph_VaultCharacterLightingBP(int32 EntryPoint, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetShadowQuality_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_NewParam, bool CallFunc_IsErebus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "ExecuteUbergraph_VaultCharacterLightingBP");

	Params::AVaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue_1 = CallFunc_IsMobilePlatform_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetShadowQuality_ReturnValue_1 = CallFunc_GetShadowQuality_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_IsErebus_ReturnValue_1 = CallFunc_IsErebus_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
