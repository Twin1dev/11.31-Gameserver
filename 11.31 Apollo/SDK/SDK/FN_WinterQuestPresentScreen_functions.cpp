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


// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnStartOpeningPresent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestPresentScreen_C::OnStartOpeningPresent()
{
	static auto Func = Class->GetFunction("WinterQuestPresentScreen_C", "OnStartOpeningPresent");

	Params::UWinterQuestPresentScreen_C_OnStartOpeningPresent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnStopOpeningPresent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestPresentScreen_C::OnStopOpeningPresent()
{
	static auto Func = Class->GetFunction("WinterQuestPresentScreen_C", "OnStopOpeningPresent");

	Params::UWinterQuestPresentScreen_C_OnStopOpeningPresent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnUpdatePlatformType
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonPlatformType     PlatformType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestPresentScreen_C::OnUpdatePlatformType(enum class ECommonPlatformType PlatformType)
{
	static auto Func = Class->GetFunction("WinterQuestPresentScreen_C", "OnUpdatePlatformType");

	Params::UWinterQuestPresentScreen_C_OnUpdatePlatformType_Params Parms;

	Parms.PlatformType = PlatformType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        NewMethod                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestPresentScreen_C::OnInputMethodChanged(enum class ECommonInputType NewMethod)
{
	static auto Func = Class->GetFunction("WinterQuestPresentScreen_C", "OnInputMethodChanged");

	Params::UWinterQuestPresentScreen_C_OnInputMethodChanged_Params Parms;

	Parms.NewMethod = NewMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnUpdateShakePercentage
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              InPercentage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestPresentScreen_C::OnUpdateShakePercentage(float InPercentage)
{
	static auto Func = Class->GetFunction("WinterQuestPresentScreen_C", "OnUpdateShakePercentage");

	Params::UWinterQuestPresentScreen_C_OnUpdateShakePercentage_Params Parms;

	Parms.InPercentage = InPercentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestPresentScreen_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("WinterQuestPresentScreen_C", "BP_OnActivated");

	Params::UWinterQuestPresentScreen_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnUpdateShakeRecharge
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              InPercentage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestPresentScreen_C::OnUpdateShakeRecharge(float InPercentage)
{
	static auto Func = Class->GetFunction("WinterQuestPresentScreen_C", "OnUpdateShakeRecharge");

	Params::UWinterQuestPresentScreen_C_OnUpdateShakeRecharge_Params Parms;

	Parms.InPercentage = InPercentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.ExecuteUbergraph_WinterQuestPresentScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWinterQuest_ShakePrompt_C*  K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonPlatformType     K2Node_Event_PlatformType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWinterQuest_OpenPrompt_C*   K2Node_DynamicCast_AsWinter_Quest_Open_Prompt                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        K2Node_Event_NewMethod                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InPercentage_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWinterQuest_ShakePrompt_C*  K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWinterQuest_OpenPrompt_C*   K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InPercentage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestPresentScreen_C::ExecuteUbergraph_WinterQuestPresentScreen(int32 EntryPoint, enum class ECommonInputType Temp_byte_Variable, class UWinterQuest_ShakePrompt_C* K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ECommonPlatformType K2Node_Event_PlatformType, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, enum class ECommonInputType K2Node_Event_NewMethod, float K2Node_Event_InPercentage_1, enum class ESlateVisibility K2Node_Select_Default, class UWinterQuest_ShakePrompt_C* K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt_1, bool K2Node_DynamicCast_bSuccess_2, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1, bool K2Node_DynamicCast_bSuccess_3, float K2Node_Event_InPercentage)
{
	static auto Func = Class->GetFunction("WinterQuestPresentScreen_C", "ExecuteUbergraph_WinterQuestPresentScreen");

	Params::UWinterQuestPresentScreen_C_ExecuteUbergraph_WinterQuestPresentScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt = K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Event_PlatformType = K2Node_Event_PlatformType;
	Parms.K2Node_DynamicCast_AsWinter_Quest_Open_Prompt = K2Node_DynamicCast_AsWinter_Quest_Open_Prompt;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_NewMethod = K2Node_Event_NewMethod;
	Parms.K2Node_Event_InPercentage_1 = K2Node_Event_InPercentage_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt_1 = K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1 = K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_InPercentage = K2Node_Event_InPercentage;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
