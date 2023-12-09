#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EmptyVictoryScreen.EmptyVictoryScreen_C
// (None)

class UClass* UEmptyVictoryScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmptyVictoryScreen_C");

	return Clss;
}


// EmptyVictoryScreen_C EmptyVictoryScreen.Default__EmptyVictoryScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmptyVictoryScreen_C* UEmptyVictoryScreen_C::GetDefaultObj()
{
	static class UEmptyVictoryScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmptyVictoryScreen_C*>(UEmptyVictoryScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EmptyVictoryScreen.EmptyVictoryScreen_C.GetWantsToShowContent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLocalPlayerHasWinningPlacement_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UEmptyVictoryScreen_C::GetWantsToShowContent(class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetLocalPlayerHasWinningPlacement_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmptyVictoryScreen_C", "GetWantsToShowContent");

	Params::UEmptyVictoryScreen_C_GetWantsToShowContent_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLocalPlayerHasWinningPlacement_ReturnValue = CallFunc_GetLocalPlayerHasWinningPlacement_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EmptyVictoryScreen.EmptyVictoryScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEmptyVictoryScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmptyVictoryScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EmptyVictoryScreen.EmptyVictoryScreen_C.ExecuteUbergraph_EmptyVictoryScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmptyVictoryScreen_C::ExecuteUbergraph_EmptyVictoryScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmptyVictoryScreen_C", "ExecuteUbergraph_EmptyVictoryScreen");

	Params::UEmptyVictoryScreen_C_ExecuteUbergraph_EmptyVictoryScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


