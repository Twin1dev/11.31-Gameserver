#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass XpReasonFeed.XpReasonFeed_C
// (None)

class UClass* UXpReasonFeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XpReasonFeed_C");

	return Clss;
}


// XpReasonFeed_C XpReasonFeed.Default__XpReasonFeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UXpReasonFeed_C* UXpReasonFeed_C::GetDefaultObj()
{
	static class UXpReasonFeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UXpReasonFeed_C*>(UXpReasonFeed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function XpReasonFeed.XpReasonFeed_C.ImmediatelyShowXpRewards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAthenaMatchXpReward>XpRewards                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaMatchXpReward        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_BP_CreateEntry_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UXpReasonFeedItem_C*         K2Node_DynamicCast_AsXp_Reason_Feed_Item                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpReasonFeed_C::ImmediatelyShowXpRewards(TArray<struct FAthenaMatchXpReward>& XpRewards, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FAthenaMatchXpReward& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue, class UXpReasonFeedItem_C* K2Node_DynamicCast_AsXp_Reason_Feed_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeed_C", "ImmediatelyShowXpRewards");

	Params::UXpReasonFeed_C_ImmediatelyShowXpRewards_Params Parms{};

	Parms.XpRewards = XpRewards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BP_CreateEntry_ReturnValue = CallFunc_BP_CreateEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsXp_Reason_Feed_Item = K2Node_DynamicCast_AsXp_Reason_Feed_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeed.XpReasonFeed_C.IsReadyForNextXpReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpReasonFeed_C::IsReadyForNextXpReward(bool* Ready, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeed_C", "IsReadyForNextXpReward");

	Params::UXpReasonFeed_C_IsReadyForNextXpReward_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;

}


// Function XpReasonFeed.XpReasonFeed_C.Play Xp Reward
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaMatchXpReward        Reward                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UXpReasonFeed_C::Play_Xp_Reward(struct FAthenaMatchXpReward& Reward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeed_C", "Play Xp Reward");

	Params::UXpReasonFeed_C_Play_Xp_Reward_Params Parms{};

	Parms.Reward = Reward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeed.XpReasonFeed_C.Reset Feed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UXpReasonFeed_C::Reset_Feed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeed_C", "Reset Feed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function XpReasonFeed.XpReasonFeed_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UXpReasonFeed_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeed_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function XpReasonFeed.XpReasonFeed_C.ExecuteUbergraph_XpReasonFeed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaMatchXpReward        K2Node_CustomEvent_Reward                                        (ConstParm)
// class UUserWidget*                 CallFunc_BP_CreateEntry_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UXpReasonFeedItem_C*         K2Node_DynamicCast_AsXp_Reason_Feed_Item                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpReasonFeed_C::ExecuteUbergraph_XpReasonFeed(int32 EntryPoint, const struct FAthenaMatchXpReward& K2Node_CustomEvent_Reward, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue, class UXpReasonFeedItem_C* K2Node_DynamicCast_AsXp_Reason_Feed_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeed_C", "ExecuteUbergraph_XpReasonFeed");

	Params::UXpReasonFeed_C_ExecuteUbergraph_XpReasonFeed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Reward = K2Node_CustomEvent_Reward;
	Parms.CallFunc_BP_CreateEntry_ReturnValue = CallFunc_BP_CreateEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsXp_Reason_Feed_Item = K2Node_DynamicCast_AsXp_Reason_Feed_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


