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


// Function ItemPresentationGenericRewardHeader.ItemPresentationGenericRewardHeader_C.HandleOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationGenericRewardHeader_C::HandleOutro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationGenericRewardHeader_C", "HandleOutro");

	Params::UItemPresentationGenericRewardHeader_C_HandleOutro_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationGenericRewardHeader.ItemPresentationGenericRewardHeader_C.HandleInitialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationGenericRewardHeader_C::HandleInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationGenericRewardHeader_C", "HandleInitialState");

	Params::UItemPresentationGenericRewardHeader_C_HandleInitialState_Params Parms;

	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationGenericRewardHeader.ItemPresentationGenericRewardHeader_C.HandleIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationGenericRewardHeader_C::HandleIntro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationGenericRewardHeader_C", "HandleIntro");

	Params::UItemPresentationGenericRewardHeader_C_HandleIntro_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
