#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuest_ShakePrompt.WinterQuest_ShakePrompt_C
// (None)

class UClass* UWinterQuest_ShakePrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuest_ShakePrompt_C");

	return Clss;
}


// WinterQuest_ShakePrompt_C WinterQuest_ShakePrompt.Default__WinterQuest_ShakePrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuest_ShakePrompt_C* UWinterQuest_ShakePrompt_C::GetDefaultObj()
{
	static class UWinterQuest_ShakePrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuest_ShakePrompt_C*>(UWinterQuest_ShakePrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinterQuest_ShakePrompt.WinterQuest_ShakePrompt_C.UpdateShakePercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPercentage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_ShakePrompt_C::UpdateShakePercentage(float InPercentage, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_ShakePrompt_C", "UpdateShakePercentage");

	Params::UWinterQuest_ShakePrompt_C_UpdateShakePercentage_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_ShakePrompt_C", "PlayShakeAnim");

	Params::UWinterQuest_ShakePrompt_C_PlayShakeAnim_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_ShakePrompt_C", "ShakeButtonIntro");

	Params::UWinterQuest_ShakePrompt_C_ShakeButtonIntro_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


