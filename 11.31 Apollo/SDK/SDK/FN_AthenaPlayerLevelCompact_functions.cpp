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


// Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.OnUpdateRewardIcon
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortItem*                   RewardItem                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   RewardTexture                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               bHasAdditionalStylesToDisplay                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              RewardLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRequiresBattlePass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevelCompact_C::OnUpdateRewardIcon(class UFortItem* RewardItem, TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "OnUpdateRewardIcon");

	Params::UAthenaPlayerLevelCompact_C_OnUpdateRewardIcon_Params Parms;

	Parms.RewardItem = RewardItem;
	Parms.RewardTexture = RewardTexture;
	Parms.bHasAdditionalStylesToDisplay = bHasAdditionalStylesToDisplay;
	Parms.RewardLevel = RewardLevel;
	Parms.bRequiresBattlePass = bRequiresBattlePass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.OnUpdateXpBar
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsMaxLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevelCompact_C::OnUpdateXpBar(float Progress, bool bIsMaxLevel)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "OnUpdateXpBar");

	Params::UAthenaPlayerLevelCompact_C_OnUpdateXpBar_Params Parms;

	Parms.Progress = Progress;
	Parms.bIsMaxLevel = bIsMaxLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.ExecuteUbergraph_AthenaPlayerLevelCompact
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_RewardItem                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_RewardTexture                                       (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Event_bHasAdditionalStylesToDisplay                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_RewardLevel                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bRequiresBattlePass                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRestXpBalance_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Progress                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsMaxLevel                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevelCompact_C::ExecuteUbergraph_AthenaPlayerLevelCompact(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, class UFortItem* K2Node_Event_RewardItem, TSoftObjectPtr<class UTexture2D> K2Node_Event_RewardTexture, bool K2Node_Event_bHasAdditionalStylesToDisplay, int32 K2Node_Event_RewardLevel, bool K2Node_Event_bRequiresBattlePass, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetRestXpBalance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_Event_Progress, bool K2Node_Event_bIsMaxLevel, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "ExecuteUbergraph_AthenaPlayerLevelCompact");

	Params::UAthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Event_RewardItem = K2Node_Event_RewardItem;
	Parms.K2Node_Event_RewardTexture = K2Node_Event_RewardTexture;
	Parms.K2Node_Event_bHasAdditionalStylesToDisplay = K2Node_Event_bHasAdditionalStylesToDisplay;
	Parms.K2Node_Event_RewardLevel = K2Node_Event_RewardLevel;
	Parms.K2Node_Event_bRequiresBattlePass = K2Node_Event_bRequiresBattlePass;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRestXpBalance_ReturnValue = CallFunc_GetRestXpBalance_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Event_Progress = K2Node_Event_Progress;
	Parms.K2Node_Event_bIsMaxLevel = K2Node_Event_bIsMaxLevel;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.LevelChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevelCompact_C::LevelChanged__DelegateSignature(int32 Level)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "LevelChanged__DelegateSignature");

	Params::UAthenaPlayerLevelCompact_C_LevelChanged__DelegateSignature_Params Parms;

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
