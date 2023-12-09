#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemPresentationGenericRewardHeader.ItemPresentationGenericRewardHeader_C
// (None)

class UClass* UItemPresentationGenericRewardHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPresentationGenericRewardHeader_C");

	return Clss;
}


// ItemPresentationGenericRewardHeader_C ItemPresentationGenericRewardHeader.Default__ItemPresentationGenericRewardHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemPresentationGenericRewardHeader_C* UItemPresentationGenericRewardHeader_C::GetDefaultObj()
{
	static class UItemPresentationGenericRewardHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPresentationGenericRewardHeader_C*>(UItemPresentationGenericRewardHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemPresentationGenericRewardHeader.ItemPresentationGenericRewardHeader_C.HandleOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationGenericRewardHeader_C::HandleOutro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationGenericRewardHeader_C", "HandleOutro");

	Params::UItemPresentationGenericRewardHeader_C_HandleOutro_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationGenericRewardHeader.ItemPresentationGenericRewardHeader_C.HandleInitialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationGenericRewardHeader_C::HandleInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationGenericRewardHeader_C", "HandleInitialState");

	Params::UItemPresentationGenericRewardHeader_C_HandleInitialState_Params Parms{};

	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationGenericRewardHeader.ItemPresentationGenericRewardHeader_C.HandleIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationGenericRewardHeader_C::HandleIntro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationGenericRewardHeader_C", "HandleIntro");

	Params::UItemPresentationGenericRewardHeader_C_HandleIntro_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


