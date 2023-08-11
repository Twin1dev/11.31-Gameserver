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


// Function ToyOptionsComponent.ToyOptionsComponent_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPropertyEditorV2Enabled_ReturnValue                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UObject>       K2Node_Select_Default                                            (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigameSettingsBuilding*K2Node_DynamicCast_AsFort_Minigame_Settings_Building             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingTrap*               K2Node_DynamicCast_AsBuilding_Trap                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UFortTrapItemDefinition>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UToyOptionsComponent_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn, bool CallFunc_GetPropertyEditorV2Enabled_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, TSoftClassPtr<class UObject> K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AFortMinigameSettingsBuilding* K2Node_DynamicCast_AsFort_Minigame_Settings_Building, bool K2Node_DynamicCast_bSuccess, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UFortTrapItemDefinition> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("ToyOptionsComponent_C", "BlueprintOnLocalInteract");

	Params::UToyOptionsComponent_C_BlueprintOnLocalInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.CallFunc_GetPropertyEditorV2Enabled_ReturnValue = CallFunc_GetPropertyEditorV2Enabled_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Minigame_Settings_Building = K2Node_DynamicCast_AsFort_Minigame_Settings_Building;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBuilding_Trap = K2Node_DynamicCast_AsBuilding_Trap;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ToyOptionsComponent.ToyOptionsComponent_C.OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToyOptionsComponent_C::OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("ToyOptionsComponent_C", "OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27");

	Params::UToyOptionsComponent_C_OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToyOptionsComponent.ToyOptionsComponent_C.DisplayOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           InteractingPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UObject>       WidgetClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UToyOptionsComponent_C::DisplayOptions(class APlayerController* InteractingPlayer, TSoftClassPtr<class UObject> WidgetClass)
{
	static auto Func = Class->GetFunction("ToyOptionsComponent_C", "DisplayOptions");

	Params::UToyOptionsComponent_C_DisplayOptions_Params Parms;

	Parms.InteractingPlayer = InteractingPlayer;
	Parms.WidgetClass = WidgetClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToyOptionsComponent.ToyOptionsComponent_C.ExecuteUbergraph_ToyOptionsComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_InteractingPlayer                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UObject>       K2Node_CustomEvent_WidgetClass                                   (HasGetValueTypeHash)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortInitializeFromObjectInterface>K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToyOptionsComponent_C::ExecuteUbergraph_ToyOptionsComponent(int32 EntryPoint, class UClass* K2Node_CustomEvent_Loaded, class APlayerController* K2Node_CustomEvent_InteractingPlayer, TSoftClassPtr<class UObject> K2Node_CustomEvent_WidgetClass, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UClass* Temp_class_Variable, class UUserWidget* CallFunc_Create_ReturnValue, TScriptInterface<class IFortInitializeFromObjectInterface> K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("ToyOptionsComponent_C", "ExecuteUbergraph_ToyOptionsComponent");

	Params::UToyOptionsComponent_C_ExecuteUbergraph_ToyOptionsComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CustomEvent_InteractingPlayer = K2Node_CustomEvent_InteractingPlayer;
	Parms.K2Node_CustomEvent_WidgetClass = K2Node_CustomEvent_WidgetClass;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface = K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
