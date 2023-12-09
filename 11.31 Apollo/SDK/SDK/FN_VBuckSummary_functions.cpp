#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VBuckSummary.VBuckSummary_C
// (None)

class UClass* UVBuckSummary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VBuckSummary_C");

	return Clss;
}


// VBuckSummary_C VBuckSummary.Default__VBuckSummary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVBuckSummary_C* UVBuckSummary_C::GetDefaultObj()
{
	static class UVBuckSummary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVBuckSummary_C*>(UVBuckSummary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VBuckSummary.VBuckSummary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVBuckSummary_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VBuckSummary_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VBuckSummary.VBuckSummary_C.OnSetSummary
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVBuckSummary_C::OnSetSummary()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VBuckSummary_C", "OnSetSummary");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VBuckSummary.VBuckSummary_C.ExecuteUbergraph_VBuckSummary
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVBuckSummary_C::ExecuteUbergraph_VBuckSummary(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VBuckSummary_C", "ExecuteUbergraph_VBuckSummary");

	Params::UVBuckSummary_C_ExecuteUbergraph_VBuckSummary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


