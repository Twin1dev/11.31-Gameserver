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


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.SetUpHiddenObjectPairing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                RewardGraphNodeTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFrontendEventHiddenObject  K2Node_MakeStruct_FrontendEventHiddenObject                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_CozyLodge_C::SetUpHiddenObjectPairing(class AActor* Actor, const struct FGameplayTag& RewardGraphNodeTag, const struct FFrontendEventHiddenObject& K2Node_MakeStruct_FrontendEventHiddenObject, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "SetUpHiddenObjectPairing");

	Params::AFrontend_CozyLodge_C_SetUpHiddenObjectPairing_Params Parms;

	Parms.Actor = Actor;
	Parms.RewardGraphNodeTag = RewardGraphNodeTag;
	Parms.K2Node_MakeStruct_FrontendEventHiddenObject = K2Node_MakeStruct_FrontendEventHiddenObject;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.SetupNavObjectPairing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortEventLevelNavigationActor*Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Camera                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFrontendEventNavObject     K2Node_MakeStruct_FrontendEventNavObject                         (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_CozyLodge_C::SetupNavObjectPairing(class AFortEventLevelNavigationActor* Object, const struct FGameplayTagContainer& Camera, const struct FFrontendEventNavObject& K2Node_MakeStruct_FrontendEventNavObject, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "SetupNavObjectPairing");

	Params::AFrontend_CozyLodge_C_SetupNavObjectPairing_Params Parms;

	Parms.Object = Object;
	Parms.Camera = Camera;
	Parms.K2Node_MakeStruct_FrontendEventNavObject = K2Node_MakeStruct_FrontendEventNavObject;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.SetUpCameraPairing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortCameraBase*             Camera                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFrontendEventCamera        K2Node_MakeStruct_FrontendEventCamera                            (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_CozyLodge_C::SetUpCameraPairing(class AFortCameraBase* Camera, const struct FGameplayTag& Tag, const struct FFrontendEventCamera& K2Node_MakeStruct_FrontendEventCamera, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "SetUpCameraPairing");

	Params::AFrontend_CozyLodge_C_SetUpCameraPairing_Params Parms;

	Parms.Camera = Camera;
	Parms.Tag = Tag;
	Parms.K2Node_MakeStruct_FrontendEventCamera = K2Node_MakeStruct_FrontendEventCamera;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.OnFailure_6A99741E47F07D31E84968A87E978BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_C::OnFailure_6A99741E47F07D31E84968A87E978BED()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "OnFailure_6A99741E47F07D31E84968A87E978BED");

	Params::AFrontend_CozyLodge_C_OnFailure_6A99741E47F07D31E84968A87E978BED_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.OnIgnored_6A99741E47F07D31E84968A87E978BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_C::OnIgnored_6A99741E47F07D31E84968A87E978BED()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "OnIgnored_6A99741E47F07D31E84968A87E978BED");

	Params::AFrontend_CozyLodge_C_OnIgnored_6A99741E47F07D31E84968A87E978BED_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.OnSuccess_6A99741E47F07D31E84968A87E978BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_C::OnSuccess_6A99741E47F07D31E84968A87E978BED()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "OnSuccess_6A99741E47F07D31E84968A87E978BED");

	Params::AFrontend_CozyLodge_C_OnSuccess_6A99741E47F07D31E84968A87E978BED_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "ReceiveBeginPlay");

	Params::AFrontend_CozyLodge_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.FillOutSceneCameraArray
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_C::FillOutSceneCameraArray()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "FillOutSceneCameraArray");

	Params::AFrontend_CozyLodge_C_FillOutSceneCameraArray_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.RegisterSceneCameras
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_C::RegisterSceneCameras()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "RegisterSceneCameras");

	Params::AFrontend_CozyLodge_C_RegisterSceneCameras_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.RegisterNavObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_C::RegisterNavObjects()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "RegisterNavObjects");

	Params::AFrontend_CozyLodge_C_RegisterNavObjects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.FillOutNavObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_C::FillOutNavObjects()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "FillOutNavObjects");

	Params::AFrontend_CozyLodge_C_FillOutNavObjects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.FilloutHidenObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_C::FilloutHidenObjects()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "FilloutHidenObjects");

	Params::AFrontend_CozyLodge_C_FilloutHidenObjects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.RegisterHiddenObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_C::RegisterHiddenObjects()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "RegisterHiddenObjects");

	Params::AFrontend_CozyLodge_C_RegisterHiddenObjects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.OnSpecialInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InteractionTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AFortEventLevelNavigationActor*InActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_CozyLodge_C::OnSpecialInteraction(const struct FGameplayTag& InteractionTag, const struct FGameplayTag& CameraTag, class AFortEventLevelNavigationActor* InActor)
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "OnSpecialInteraction");

	Params::AFrontend_CozyLodge_C_OnSpecialInteraction_Params Parms;

	Parms.InteractionTag = InteractionTag;
	Parms.CameraTag = CameraTag;
	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge.Frontend_CozyLodge_C.ExecuteUbergraph_Frontend_CozyLodge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGSC_DynamicLevelStreaming_C*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGSC_DynamicLevelStreaming_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGSC_DynamicLevelStreaming_C*>CallFunc_K2_GetComponentsByClass_ReturnValue_1                   (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFrontendEventNavObject     CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGSC_DynamicLevelStreaming_C*>CallFunc_K2_GetComponentsByClass_ReturnValue_2                   (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UGSC_DynamicLevelStreaming_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGSC_DynamicLevelStreaming_C*>CallFunc_K2_GetComponentsByClass_ReturnValue_3                   (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// struct FFrontendEventHiddenObject  CallFunc_Array_Get_Item_3                                        (NoDestructor, HasGetValueTypeHash)
// class UGSC_DynamicLevelStreaming_C*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class UGSC_DynamicLevelStreaming_C*CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetAllFortPlayerControllers_ReturnValue                 (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_SendQuestStatEvent*CallFunc_SendClientStatEvent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_InteractionTag                                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_CameraTag                                     (NoDestructor, HasGetValueTypeHash)
// class AFortEventLevelNavigationActor*K2Node_CustomEvent_InActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFrontendEventCamera        CallFunc_Array_Get_Item_7                                        (NoDestructor, HasGetValueTypeHash)

void AFrontend_CozyLodge_C::ExecuteUbergraph_Frontend_CozyLodge(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable_4, int32 CallFunc_Array_Length_ReturnValue, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FFrontendEventNavObject& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_2, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_6, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_3, const struct FFrontendEventHiddenObject& CallFunc_Array_Get_Item_3, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_6, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item_5, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item_6, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_InteractionTag, const struct FGameplayTag& K2Node_CustomEvent_CameraTag, class AFortEventLevelNavigationActor* K2Node_CustomEvent_InActor, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable_7, const struct FFrontendEventCamera& CallFunc_Array_Get_Item_7)
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_C", "ExecuteUbergraph_Frontend_CozyLodge");

	Params::AFrontend_CozyLodge_C_ExecuteUbergraph_Frontend_CozyLodge_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue_1 = CallFunc_K2_GetComponentsByClass_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_GetGameState_ReturnValue_2 = CallFunc_GetGameState_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue_2 = CallFunc_K2_GetComponentsByClass_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_GetGameState_ReturnValue_3 = CallFunc_GetGameState_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue_3 = CallFunc_K2_GetComponentsByClass_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetAllFortPlayerControllers_ReturnValue = CallFunc_GetAllFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_SendClientStatEvent_ReturnValue = CallFunc_SendClientStatEvent_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_InteractionTag = K2Node_CustomEvent_InteractionTag;
	Parms.K2Node_CustomEvent_CameraTag = K2Node_CustomEvent_CameraTag;
	Parms.K2Node_CustomEvent_InActor = K2Node_CustomEvent_InActor;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
