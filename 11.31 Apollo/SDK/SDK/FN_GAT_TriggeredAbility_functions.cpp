#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C
// (None)

class UClass* UGAT_TriggeredAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAT_TriggeredAbility_C");

	return Clss;
}


// GAT_TriggeredAbility_C GAT_TriggeredAbility.Default__GAT_TriggeredAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAT_TriggeredAbility_C* UGAT_TriggeredAbility_C::GetDefaultObj()
{
	static class UGAT_TriggeredAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAT_TriggeredAbility_C*>(UGAT_TriggeredAbility_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.EndAbilityWithReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGAT_TriggeredAbility_C::EndAbilityWithReason(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_TriggeredAbility_C", "EndAbilityWithReason");

	Params::UGAT_TriggeredAbility_C_EndAbilityWithReason_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.SetHolsterWeaponWithName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   Target_Fort_Pawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldHolster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlayEquipAnim                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDebugPrintName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsWeaponHolstered                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               OperationSuccessful                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bOperationSuccessful                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_TriggeredAbility_C::SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful, bool bOperationSuccessful, bool CallFunc_BooleanXOR_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_TriggeredAbility_C", "SetHolsterWeaponWithName");

	Params::UGAT_TriggeredAbility_C_SetHolsterWeaponWithName_Params Parms{};

	Parms.Target_Fort_Pawn = Target_Fort_Pawn;
	Parms.ShouldHolster = ShouldHolster;
	Parms.PlayEquipAnim = PlayEquipAnim;
	Parms.ShowDebugPrintName = ShowDebugPrintName;
	Parms.bOperationSuccessful = bOperationSuccessful;
	Parms.CallFunc_BooleanXOR_ReturnValue = CallFunc_BooleanXOR_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWeaponHolstered != nullptr)
		*IsWeaponHolstered = Parms.IsWeaponHolstered;

	if (OperationSuccessful != nullptr)
		*OperationSuccessful = Parms.OperationSuccessful;

}


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.TriggeredAbilitySetup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemIn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     AbilitySystemOut                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_TriggeredAbility_C::TriggeredAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_TriggeredAbility_C", "TriggeredAbilitySetup");

	Params::UGAT_TriggeredAbility_C_TriggeredAbilitySetup_Params Parms{};

	Parms.AbilitySystemIn = AbilitySystemIn;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilitySystemOut != nullptr)
		*AbilitySystemOut = Parms.AbilitySystemOut;

}


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_TriggeredAbility_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_TriggeredAbility_C", "K2_ActivateAbilityFromEvent");

	Params::UGAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGAT_TriggeredAbility_C::ExecuteUbergraph_GAT_TriggeredAbility(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_TriggeredAbility_C", "ExecuteUbergraph_GAT_TriggeredAbility");

	Params::UGAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


