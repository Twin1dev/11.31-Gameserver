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


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetShowPedestalSparkles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATeamMemberPedestal_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATeamMemberPedestal_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_Lobby_Background_C::SetShowPedestalSparkles(bool Show, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ATeamMemberPedestal_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ATeamMemberPedestal_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "SetShowPedestalSparkles");

	Params::AFrontend_Lobby_Background_C_SetShowPedestalSparkles_Params Parms;

	Parms.Show = Show;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.UpdateFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeFloorToBlack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFadeGrid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::UpdateFade(float FadeValue, float FadeFloorToBlack, float InFadeGrid, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1)
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "UpdateFade");

	Params::AFrontend_Lobby_Background_C_UpdateFade_Params Parms;

	Parms.FadeValue = FadeValue;
	Parms.FadeFloorToBlack = FadeFloorToBlack;
	Parms.InFadeGrid = InFadeGrid;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeIn__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeIn__FinishedFunc()
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeIn__FinishedFunc");

	Params::AFrontend_Lobby_Background_C_FadeIn__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeIn__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeIn__UpdateFunc()
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeIn__UpdateFunc");

	Params::AFrontend_Lobby_Background_C_FadeIn__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeOut__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeOut__FinishedFunc()
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeOut__FinishedFunc");

	Params::AFrontend_Lobby_Background_C_FadeOut__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeOut__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeOut__UpdateFunc()
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeOut__UpdateFunc");

	Params::AFrontend_Lobby_Background_C_FadeOut__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      PresetEnvironmentName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(const class FString& PresetEnvironmentName)
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature");

	Params::AFrontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature_Params Parms;

	Parms.PresetEnvironmentName = PresetEnvironmentName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTexture*                    BackgroundImage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage)
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature");

	Params::AFrontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature_Params Parms;

	Parms.BackgroundImage = BackgroundImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "ReceiveBeginPlay");

	Params::AFrontend_Lobby_Background_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.TestDynColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::TestDynColor()
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "TestDynColor");

	Params::AFrontend_Lobby_Background_C_TestDynColor_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ExecuteUbergraph_Frontend_Lobby_Background
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_ActorBoundEvent_BackgroundImage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ActorBoundEvent_PresetEnvironmentName                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::ExecuteUbergraph_Frontend_Lobby_Background(int32 EntryPoint, class UTexture* K2Node_ActorBoundEvent_BackgroundImage, const class FString& K2Node_ActorBoundEvent_PresetEnvironmentName, bool K2Node_SwitchString_CmpSuccess, float CallFunc_GetScalarParameterValue_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1)
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Background_C", "ExecuteUbergraph_Frontend_Lobby_Background");

	Params::AFrontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ActorBoundEvent_BackgroundImage = K2Node_ActorBoundEvent_BackgroundImage;
	Parms.K2Node_ActorBoundEvent_PresetEnvironmentName = K2Node_ActorBoundEvent_PresetEnvironmentName;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_1 = CallFunc_GetScalarParameterValue_ReturnValue_1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
