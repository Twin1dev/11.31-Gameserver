#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TournamentModal.TournamentModal_C
// (None)

class UClass* UTournamentModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TournamentModal_C");

	return Clss;
}


// TournamentModal_C TournamentModal.Default__TournamentModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTournamentModal_C* UTournamentModal_C::GetDefaultObj()
{
	static class UTournamentModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTournamentModal_C*>(UTournamentModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TournamentModal.TournamentModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTournamentModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentModal_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TournamentModal.TournamentModal_C.OnTournamentSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FLinearColor                LeftColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                RightColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentModal_C::OnTournamentSet(const struct FLinearColor& LeftColor, const struct FLinearColor& RightColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentModal_C", "OnTournamentSet");

	Params::UTournamentModal_C_OnTournamentSet_Params Parms{};

	Parms.LeftColor = LeftColor;
	Parms.RightColor = RightColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentModal.TournamentModal_C.ExecuteUbergraph_TournamentModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_LeftColor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_RightColor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentModal_C::ExecuteUbergraph_TournamentModal(int32 EntryPoint, const struct FLinearColor& K2Node_Event_LeftColor, const struct FLinearColor& K2Node_Event_RightColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentModal_C", "ExecuteUbergraph_TournamentModal");

	Params::UTournamentModal_C_ExecuteUbergraph_TournamentModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_LeftColor = K2Node_Event_LeftColor;
	Parms.K2Node_Event_RightColor = K2Node_Event_RightColor;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


