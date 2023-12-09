#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaNewsTileSpecialEvent_Secondary.AthenaNewsTileSpecialEvent_Secondary_C
// (None)

class UClass* UAthenaNewsTileSpecialEvent_Secondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNewsTileSpecialEvent_Secondary_C");

	return Clss;
}


// AthenaNewsTileSpecialEvent_Secondary_C AthenaNewsTileSpecialEvent_Secondary.Default__AthenaNewsTileSpecialEvent_Secondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaNewsTileSpecialEvent_Secondary_C* UAthenaNewsTileSpecialEvent_Secondary_C::GetDefaultObj()
{
	static class UAthenaNewsTileSpecialEvent_Secondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNewsTileSpecialEvent_Secondary_C*>(UAthenaNewsTileSpecialEvent_Secondary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaNewsTileSpecialEvent_Secondary.AthenaNewsTileSpecialEvent_Secondary_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTileSpecialEvent_Secondary_C::PlayIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTileSpecialEvent_Secondary_C", "PlayIntroAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNewsTileSpecialEvent_Secondary.AthenaNewsTileSpecialEvent_Secondary_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTileSpecialEvent_Secondary_C::SetDefaultImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTileSpecialEvent_Secondary_C", "SetDefaultImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNewsTileSpecialEvent_Secondary.AthenaNewsTileSpecialEvent_Secondary_C.ExecuteUbergraph_AthenaNewsTileSpecialEvent_Secondary
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNewsTileSpecialEvent_Secondary_C::ExecuteUbergraph_AthenaNewsTileSpecialEvent_Secondary(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTileSpecialEvent_Secondary_C", "ExecuteUbergraph_AthenaNewsTileSpecialEvent_Secondary");

	Params::UAthenaNewsTileSpecialEvent_Secondary_C_ExecuteUbergraph_AthenaNewsTileSpecialEvent_Secondary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


