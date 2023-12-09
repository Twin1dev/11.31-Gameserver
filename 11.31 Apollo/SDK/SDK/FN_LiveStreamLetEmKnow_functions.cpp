#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LiveStreamLetEmKnow.LiveStreamLetEmKnow_C
// (None)

class UClass* ULiveStreamLetEmKnow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveStreamLetEmKnow_C");

	return Clss;
}


// LiveStreamLetEmKnow_C LiveStreamLetEmKnow.Default__LiveStreamLetEmKnow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiveStreamLetEmKnow_C* ULiveStreamLetEmKnow_C::GetDefaultObj()
{
	static class ULiveStreamLetEmKnow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveStreamLetEmKnow_C*>(ULiveStreamLetEmKnow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveStreamLetEmKnow.LiveStreamLetEmKnow_C.ShowAdvertisement
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULiveStreamLetEmKnow_C::ShowAdvertisement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamLetEmKnow_C", "ShowAdvertisement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveStreamLetEmKnow.LiveStreamLetEmKnow_C.ExecuteUbergraph_LiveStreamLetEmKnow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULiveStreamLetEmKnow_C::ExecuteUbergraph_LiveStreamLetEmKnow(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamLetEmKnow_C", "ExecuteUbergraph_LiveStreamLetEmKnow");

	Params::ULiveStreamLetEmKnow_C_ExecuteUbergraph_LiveStreamLetEmKnow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


