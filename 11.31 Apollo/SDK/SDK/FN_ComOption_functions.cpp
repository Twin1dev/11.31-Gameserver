#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ComOption.ComOption_C
// (None)

class UClass* UComOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComOption_C");

	return Clss;
}


// ComOption_C ComOption.Default__ComOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComOption_C* UComOption_C::GetDefaultObj()
{
	static class UComOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComOption_C*>(UComOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ComOption.ComOption_C.DisableButtons
// (Event, Protected, BlueprintEvent)
// Parameters:

void UComOption_C::DisableButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOption_C", "DisableButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComOption.ComOption_C.EnableButtons
// (Event, Protected, BlueprintEvent)
// Parameters:

void UComOption_C::EnableButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOption_C", "EnableButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComOption.ComOption_C.ExecuteUbergraph_ComOption
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComOptionDetails_C*         K2Node_DynamicCast_AsCom_Option_Details                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UComOptionDetails_C*         K2Node_DynamicCast_AsCom_Option_Details_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UComOptionVote_C*            K2Node_DynamicCast_AsCom_Option_Vote                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlameCounter_C*             K2Node_DynamicCast_AsFlame_Counter                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComOptionVote_C*            K2Node_DynamicCast_AsCom_Option_Vote_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOption_C::ExecuteUbergraph_ComOption(int32 EntryPoint, class UComOptionDetails_C* K2Node_DynamicCast_AsCom_Option_Details, bool K2Node_DynamicCast_bSuccess, class UComOptionDetails_C* K2Node_DynamicCast_AsCom_Option_Details_1, bool K2Node_DynamicCast_bSuccess_1, class UComOptionVote_C* K2Node_DynamicCast_AsCom_Option_Vote, bool K2Node_DynamicCast_bSuccess_2, class UFlameCounter_C* K2Node_DynamicCast_AsFlame_Counter, bool K2Node_DynamicCast_bSuccess_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UComOptionVote_C* K2Node_DynamicCast_AsCom_Option_Vote_1, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOption_C", "ExecuteUbergraph_ComOption");

	Params::UComOption_C_ExecuteUbergraph_ComOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsCom_Option_Details = K2Node_DynamicCast_AsCom_Option_Details;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCom_Option_Details_1 = K2Node_DynamicCast_AsCom_Option_Details_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsCom_Option_Vote = K2Node_DynamicCast_AsCom_Option_Vote;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsFlame_Counter = K2Node_DynamicCast_AsFlame_Counter;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_DynamicCast_AsCom_Option_Vote_1 = K2Node_DynamicCast_AsCom_Option_Vote_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


