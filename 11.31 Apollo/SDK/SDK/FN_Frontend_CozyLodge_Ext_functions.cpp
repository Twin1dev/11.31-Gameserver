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


// Function Frontend_CozyLodge_Ext.Frontend_CozyLodge_Ext_C.SetUpCameraPairing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortCameraBase*             Camera                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFrontendEventCamera        K2Node_MakeStruct_FrontendEventCamera                            (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_CozyLodge_Ext_C::SetUpCameraPairing(class AFortCameraBase* Camera, const struct FGameplayTag& Tag, const struct FFrontendEventCamera& K2Node_MakeStruct_FrontendEventCamera, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_Ext_C", "SetUpCameraPairing");

	Params::AFrontend_CozyLodge_Ext_C_SetUpCameraPairing_Params Parms;

	Parms.Camera = Camera;
	Parms.Tag = Tag;
	Parms.K2Node_MakeStruct_FrontendEventCamera = K2Node_MakeStruct_FrontendEventCamera;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge_Ext.Frontend_CozyLodge_Ext_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_Ext_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_Ext_C", "ReceiveBeginPlay");

	Params::AFrontend_CozyLodge_Ext_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge_Ext.Frontend_CozyLodge_Ext_C.FillOutSceneCameraArray
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_Ext_C::FillOutSceneCameraArray()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_Ext_C", "FillOutSceneCameraArray");

	Params::AFrontend_CozyLodge_Ext_C_FillOutSceneCameraArray_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge_Ext.Frontend_CozyLodge_Ext_C.RegisterSceneCameras
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_CozyLodge_Ext_C::RegisterSceneCameras()
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_Ext_C", "RegisterSceneCameras");

	Params::AFrontend_CozyLodge_Ext_C_RegisterSceneCameras_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_CozyLodge_Ext.Frontend_CozyLodge_Ext_C.ExecuteUbergraph_Frontend_CozyLodge_Ext
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGSC_DynamicLevelStreaming_C*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// struct FFrontendEventCamera        CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class UGSC_DynamicLevelStreaming_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGSC_DynamicLevelStreaming_C*>CallFunc_K2_GetComponentsByClass_ReturnValue_1                   (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGSC_DynamicLevelStreaming_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_CozyLodge_Ext_C::ExecuteUbergraph_Frontend_CozyLodge_Ext(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, const struct FFrontendEventCamera& CallFunc_Array_Get_Item, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static auto Func = Class->GetFunction("Frontend_CozyLodge_Ext_C", "ExecuteUbergraph_Frontend_CozyLodge_Ext");

	Params::AFrontend_CozyLodge_Ext_C_ExecuteUbergraph_Frontend_CozyLodge_Ext_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue_1 = CallFunc_K2_GetComponentsByClass_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
