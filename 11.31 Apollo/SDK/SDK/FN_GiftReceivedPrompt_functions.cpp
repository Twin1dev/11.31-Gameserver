#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GiftReceivedPrompt.GiftReceivedPrompt_C
// (None)

class UClass* UGiftReceivedPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GiftReceivedPrompt_C");

	return Clss;
}


// GiftReceivedPrompt_C GiftReceivedPrompt.Default__GiftReceivedPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGiftReceivedPrompt_C* UGiftReceivedPrompt_C::GetDefaultObj()
{
	static class UGiftReceivedPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGiftReceivedPrompt_C*>(UGiftReceivedPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftReceivedPrompt.GiftReceivedPrompt_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGiftReceivedPrompt_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftReceivedPrompt_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GiftReceivedPrompt.GiftReceivedPrompt_C.OnGiftInfoPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGiftReceivedPrompt_C::OnGiftInfoPopulated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftReceivedPrompt_C", "OnGiftInfoPopulated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GiftReceivedPrompt.GiftReceivedPrompt_C.OnCloseButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGiftReceivedPrompt_C::OnCloseButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftReceivedPrompt_C", "OnCloseButtonClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GiftReceivedPrompt.GiftReceivedPrompt_C.ExecuteUbergraph_GiftReceivedPrompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftReceivedPrompt_C::ExecuteUbergraph_GiftReceivedPrompt(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftReceivedPrompt_C", "ExecuteUbergraph_GiftReceivedPrompt");

	Params::UGiftReceivedPrompt_C_ExecuteUbergraph_GiftReceivedPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


