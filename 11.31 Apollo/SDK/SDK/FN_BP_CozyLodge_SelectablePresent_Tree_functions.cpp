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


// Function BP_CozyLodge_SelectablePresent_Tree.BP_CozyLodge_SelectablePresent_Tree_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CozyLodge_SelectablePresent_Tree_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_SelectablePresent_Tree_C", "UserConstructionScript");

	Params::ABP_CozyLodge_SelectablePresent_Tree_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_SelectablePresent_Tree.BP_CozyLodge_SelectablePresent_Tree_C.HandleObjectSpecialInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_CozyLodge_SelectablePresent_Tree_C::HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag)
{
	static auto Func = Class->GetFunction("BP_CozyLodge_SelectablePresent_Tree_C", "HandleObjectSpecialInteraction");

	Params::ABP_CozyLodge_SelectablePresent_Tree_C_HandleObjectSpecialInteraction_Params Parms;

	Parms.ActionTag = ActionTag;
	Parms.CameraTag = CameraTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_SelectablePresent_Tree.BP_CozyLodge_SelectablePresent_Tree_C.ExecuteUbergraph_BP_CozyLodge_SelectablePresent_Tree
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetNodeTag_ReturnValue                                  (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ActionTag                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_CameraTag                                           (NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UGSC_DynamicLevelStreaming_C*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGSC_DynamicLevelStreaming_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CozyLodge_SelectablePresent_Tree_C::ExecuteUbergraph_BP_CozyLodge_SelectablePresent_Tree(int32 EntryPoint, const struct FGameplayTag& CallFunc_GetNodeTag_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_CozyLodge_SelectablePresent_Tree_C", "ExecuteUbergraph_BP_CozyLodge_SelectablePresent_Tree");

	Params::ABP_CozyLodge_SelectablePresent_Tree_C_ExecuteUbergraph_BP_CozyLodge_SelectablePresent_Tree_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetNodeTag_ReturnValue = CallFunc_GetNodeTag_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_ActionTag = K2Node_Event_ActionTag;
	Parms.K2Node_Event_CameraTag = K2Node_Event_CameraTag;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
