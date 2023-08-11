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


// Function WinterQuest_ShakePrompt.WinterQuest_ShakePrompt_C.UpdateShakePercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPercentage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_ShakePrompt_C::UpdateShakePercentage(float InPercentage, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("WinterQuest_ShakePrompt_C", "UpdateShakePercentage");

	Params::UWinterQuest_ShakePrompt_C_UpdateShakePercentage_Params Parms;

	Parms.InPercentage = InPercentage;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuest_ShakePrompt.WinterQuest_ShakePrompt_C.PlayShakeAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_ShakePrompt_C::PlayShakeAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("WinterQuest_ShakePrompt_C", "PlayShakeAnim");

	Params::UWinterQuest_ShakePrompt_C_PlayShakeAnim_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuest_ShakePrompt.WinterQuest_ShakePrompt_C.ShakeButtonIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_ShakePrompt_C::ShakeButtonIntro(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("WinterQuest_ShakePrompt_C", "ShakeButtonIntro");

	Params::UWinterQuest_ShakePrompt_C_ShakeButtonIntro_Params Parms;

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
