#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaWatchers.AthenaWatchers_C
// (None)

class UClass* UAthenaWatchers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaWatchers_C");

	return Clss;
}


// AthenaWatchers_C AthenaWatchers.Default__AthenaWatchers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaWatchers_C* UAthenaWatchers_C::GetDefaultObj()
{
	static class UAthenaWatchers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaWatchers_C*>(UAthenaWatchers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaWatchers.AthenaWatchers_C.SpectatorsBegan
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bBigGroup                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaWatchers_C::SpectatorsBegan(bool bBigGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatchers_C", "SpectatorsBegan");

	Params::UAthenaWatchers_C_SpectatorsBegan_Params Parms{};

	Parms.bBigGroup = bBigGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatchers.AthenaWatchers_C.SpectatorsAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bBigGroup                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaWatchers_C::SpectatorsAdded(bool bBigGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatchers_C", "SpectatorsAdded");

	Params::UAthenaWatchers_C_SpectatorsAdded_Params Parms{};

	Parms.bBigGroup = bBigGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatchers.AthenaWatchers_C.SpectatorsEnded
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaWatchers_C::SpectatorsEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatchers_C", "SpectatorsEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaWatchers.AthenaWatchers_C.SpectatorRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaWatchers_C::SpectatorRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatchers_C", "SpectatorRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaWatchers.AthenaWatchers_C.SpectatorCountChanged_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWatchers_C::SpectatorCountChanged_BP(int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatchers_C", "SpectatorCountChanged_BP");

	Params::UAthenaWatchers_C_SpectatorCountChanged_BP_Params Parms{};

	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatchers.AthenaWatchers_C.ExecuteUbergraph_AthenaWatchers
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bBigGroup_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bBigGroup                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NewCount                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWatchers_C::ExecuteUbergraph_AthenaWatchers(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bBigGroup_1, bool K2Node_Event_bBigGroup, int32 K2Node_Event_NewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatchers_C", "ExecuteUbergraph_AthenaWatchers");

	Params::UAthenaWatchers_C_ExecuteUbergraph_AthenaWatchers_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bBigGroup_1 = K2Node_Event_bBigGroup_1;
	Parms.K2Node_Event_bBigGroup = K2Node_Event_bBigGroup;
	Parms.K2Node_Event_NewCount = K2Node_Event_NewCount;

	UObject::ProcessEvent(Func, &Parms);

}

}


