#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePAssTracker.BattlePassTracker_C
// (None)

class UClass* UBattlePassTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassTracker_C");

	return Clss;
}


// BattlePassTracker_C BattlePAssTracker.Default__BattlePassTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassTracker_C* UBattlePassTracker_C::GetDefaultObj()
{
	static class UBattlePassTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassTracker_C*>(UBattlePassTracker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePAssTracker.BattlePassTracker_C.HandleButtonIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassTracker_C::HandleButtonIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassTracker_C", "HandleButtonIn");

	Params::UBattlePassTracker_C_HandleButtonIn_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePAssTracker.BattlePassTracker_C.HandleInitialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassTracker_C::HandleInitialState(class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker, bool K2Node_DynamicCast_bSuccess, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1, bool K2Node_DynamicCast_bSuccess_1, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2, bool K2Node_DynamicCast_bSuccess_2, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassTracker_C", "HandleInitialState");

	Params::UBattlePassTracker_C_HandleInitialState_Params Parms{};

	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1 = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2 = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3 = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


