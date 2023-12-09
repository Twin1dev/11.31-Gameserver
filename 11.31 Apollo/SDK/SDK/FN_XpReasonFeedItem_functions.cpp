#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass XpReasonFeedItem.XpReasonFeedItem_C
// (None)

class UClass* UXpReasonFeedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XpReasonFeedItem_C");

	return Clss;
}


// XpReasonFeedItem_C XpReasonFeedItem.Default__XpReasonFeedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UXpReasonFeedItem_C* UXpReasonFeedItem_C::GetDefaultObj()
{
	static class UXpReasonFeedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UXpReasonFeedItem_C*>(UXpReasonFeedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function XpReasonFeedItem.XpReasonFeedItem_C.SetXpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpReasonFeedItem_C::SetXpText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeedItem_C", "SetXpText");

	Params::UXpReasonFeedItem_C_SetXpText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeedItem.XpReasonFeedItem_C.PlayPresentEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpReasonFeedItem_C::PlayPresentEffect(float PlaybackSpeed, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeedItem_C", "PlayPresentEffect");

	Params::UXpReasonFeedItem_C_PlayPresentEffect_Params Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


