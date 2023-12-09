#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaPickupStream.AthenaPickupStream_C
// (None)

class UClass* UAthenaPickupStream_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaPickupStream_C");

	return Clss;
}


// AthenaPickupStream_C AthenaPickupStream.Default__AthenaPickupStream_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaPickupStream_C* UAthenaPickupStream_C::GetDefaultObj()
{
	static class UAthenaPickupStream_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaPickupStream_C*>(UAthenaPickupStream_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaPickupStream.AthenaPickupStream_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPickupStream_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPickupStream_C", "PreConstruct");

	Params::UAthenaPickupStream_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPickupStream.AthenaPickupStream_C.RefreshPickupEntry
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UUserWidget*                 EntryWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupStream_C::RefreshPickupEntry(class UUserWidget* EntryWidget, TSoftObjectPtr<class UTexture2D>& Icon, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPickupStream_C", "RefreshPickupEntry");

	Params::UAthenaPickupStream_C_RefreshPickupEntry_Params Parms{};

	Parms.EntryWidget = EntryWidget;
	Parms.Icon = Icon;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPickupStream.AthenaPickupStream_C.ExecuteUbergraph_AthenaPickupStream
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_EntryWidget                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_Icon                                                (ConstParm, HasGetValueTypeHash)
// int32                              K2Node_Event_Count                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaPickupMessageItem_C*  K2Node_DynamicCast_AsAthena_Pickup_Message_Item                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBoxSlot*                K2Node_DynamicCast_AsSize_Box_Slot                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPickupStream_C::ExecuteUbergraph_AthenaPickupStream(int32 EntryPoint, class UUserWidget* K2Node_Event_EntryWidget, TSoftObjectPtr<class UTexture2D> K2Node_Event_Icon, int32 K2Node_Event_Count, class UAthenaPickupMessageItem_C* K2Node_DynamicCast_AsAthena_Pickup_Message_Item, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPickupStream_C", "ExecuteUbergraph_AthenaPickupStream");

	Params::UAthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EntryWidget = K2Node_Event_EntryWidget;
	Parms.K2Node_Event_Icon = K2Node_Event_Icon;
	Parms.K2Node_Event_Count = K2Node_Event_Count;
	Parms.K2Node_DynamicCast_AsAthena_Pickup_Message_Item = K2Node_DynamicCast_AsAthena_Pickup_Message_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsSize_Box_Slot = K2Node_DynamicCast_AsSize_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


