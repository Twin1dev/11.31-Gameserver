#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C
// (None)

class UClass* UAthenaChatWidgetModalWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaChatWidgetModalWrapper_C");

	return Clss;
}


// AthenaChatWidgetModalWrapper_C AthenaChatWidgetModalWrapper.Default__AthenaChatWidgetModalWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaChatWidgetModalWrapper_C* UAthenaChatWidgetModalWrapper_C::GetDefaultObj()
{
	static class UAthenaChatWidgetModalWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaChatWidgetModalWrapper_C*>(UAthenaChatWidgetModalWrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChatWidgetModalWrapper_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChatWidgetModalWrapper_C", "PreConstruct");

	Params::UAthenaChatWidgetModalWrapper_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaChatWidgetModalWrapper_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChatWidgetModalWrapper_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C.ExecuteUbergraph_AthenaChatWidgetModalWrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChatContainer_C*            K2Node_DynamicCast_AsChat_Container                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChatWidgetModalWrapper_C::ExecuteUbergraph_AthenaChatWidgetModalWrapper(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UChatContainer_C* K2Node_DynamicCast_AsChat_Container, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChatWidgetModalWrapper_C", "ExecuteUbergraph_AthenaChatWidgetModalWrapper");

	Params::UAthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsChat_Container = K2Node_DynamicCast_AsChat_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


