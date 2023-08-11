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


// Function PunchCardEntry.PunchCardEntry_C.OnLoaded_5FE293294CDD1131C46B229A3E23F648
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPunchCardEntry_C::OnLoaded_5FE293294CDD1131C46B229A3E23F648(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("PunchCardEntry_C", "OnLoaded_5FE293294CDD1131C46B229A3E23F648");

	Params::UPunchCardEntry_C_OnLoaded_5FE293294CDD1131C46B229A3E23F648_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCardEntry.PunchCardEntry_C.OnLoaded_D1FE60014F4F3FD64C242F91B2A30C9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPunchCardEntry_C::OnLoaded_D1FE60014F4F3FD64C242F91B2A30C9C(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("PunchCardEntry_C", "OnLoaded_D1FE60014F4F3FD64C242F91B2A30C9C");

	Params::UPunchCardEntry_C_OnLoaded_D1FE60014F4F3FD64C242F91B2A30C9C_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCardEntry.PunchCardEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPunchCardEntry_C::Construct()
{
	static auto Func = Class->GetFunction("PunchCardEntry_C", "Construct");

	Params::UPunchCardEntry_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCardEntry.PunchCardEntry_C.OnNewMedalPlaced
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAccoladeItemDefinition* PunchedMedal                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPlaySocketAnim                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPunchCardEntry_C::OnNewMedalPlaced(class UFortAccoladeItemDefinition* PunchedMedal, bool bPlaySocketAnim)
{
	static auto Func = Class->GetFunction("PunchCardEntry_C", "OnNewMedalPlaced");

	Params::UPunchCardEntry_C_OnNewMedalPlaced_Params Parms;

	Parms.PunchedMedal = PunchedMedal;
	Parms.bPlaySocketAnim = bPlaySocketAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCardEntry.PunchCardEntry_C.NewMedalComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPunchCardEntry_C::NewMedalComplete()
{
	static auto Func = Class->GetFunction("PunchCardEntry_C", "NewMedalComplete");

	Params::UPunchCardEntry_C_NewMedalComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCardEntry.PunchCardEntry_C.SetAccoladeVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccoladeItemDefinition* ItemDef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPunchCardEntry_C::SetAccoladeVisuals(class UFortAccoladeItemDefinition* ItemDef)
{
	static auto Func = Class->GetFunction("PunchCardEntry_C", "SetAccoladeVisuals");

	Params::UPunchCardEntry_C_SetAccoladeVisuals_Params Parms;

	Parms.ItemDef = ItemDef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCardEntry.PunchCardEntry_C.FinishLoadingMedalIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPunchCardEntry_C::FinishLoadingMedalIcon()
{
	static auto Func = Class->GetFunction("PunchCardEntry_C", "FinishLoadingMedalIcon");

	Params::UPunchCardEntry_C_FinishLoadingMedalIcon_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCardEntry.PunchCardEntry_C.EventSocketed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPunchCardEntry_C::EventSocketed()
{
	static auto Func = Class->GetFunction("PunchCardEntry_C", "EventSocketed");

	Params::UPunchCardEntry_C_EventSocketed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCardEntry.PunchCardEntry_C.OnSetMedal
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAccoladeItemDefinition* PunchedMedal                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPunchCardEntry_C::OnSetMedal(class UFortAccoladeItemDefinition* PunchedMedal)
{
	static auto Func = Class->GetFunction("PunchCardEntry_C", "OnSetMedal");

	Params::UPunchCardEntry_C_OnSetMedal_Params Parms;

	Parms.PunchedMedal = PunchedMedal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCardEntry.PunchCardEntry_C.ExecuteUbergraph_PunchCardEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccoladeItemDefinition* K2Node_Event_PunchedMedal_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPlaySocketAnim                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFortAccoladeItemDefinition* K2Node_CustomEvent_ItemDef                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetPreviousAccoladeLargePreviewImage_ReturnValue        (HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// float                              CallFunc_GetAccoladeLevel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccoladeItemDefinition* K2Node_Event_PunchedMedal                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue_1                      (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)

void UPunchCardEntry_C::ExecuteUbergraph_PunchCardEntry(int32 EntryPoint, class UObject* Temp_object_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, bool Temp_bool_A_Execution_Happened_Variable, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, class UFortAccoladeItemDefinition* K2Node_Event_PunchedMedal_1, bool K2Node_Event_bPlaySocketAnim, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortAccoladeItemDefinition* K2Node_CustomEvent_ItemDef, TSoftObjectPtr<class UTexture2D> CallFunc_GetPreviousAccoladeLargePreviewImage_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, float CallFunc_GetAccoladeLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool Temp_bool_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2, class UFortAccoladeItemDefinition* K2Node_Event_PunchedMedal, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static auto Func = Class->GetFunction("PunchCardEntry_C", "ExecuteUbergraph_PunchCardEntry");

	Params::UPunchCardEntry_C_ExecuteUbergraph_PunchCardEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_PunchedMedal_1 = K2Node_Event_PunchedMedal_1;
	Parms.K2Node_Event_bPlaySocketAnim = K2Node_Event_bPlaySocketAnim;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_ItemDef = K2Node_CustomEvent_ItemDef;
	Parms.CallFunc_GetPreviousAccoladeLargePreviewImage_ReturnValue = CallFunc_GetPreviousAccoladeLargePreviewImage_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.CallFunc_GetAccoladeLevel_ReturnValue = CallFunc_GetAccoladeLevel_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Event_PunchedMedal = K2Node_Event_PunchedMedal;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue_1 = CallFunc_GetLargePreviewImage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
