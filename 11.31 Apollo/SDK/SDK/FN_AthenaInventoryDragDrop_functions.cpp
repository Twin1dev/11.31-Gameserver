#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AthenaInventoryDragDrop.AthenaInventoryDragDrop_C
// (None)

class UClass* UAthenaInventoryDragDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaInventoryDragDrop_C");

	return Clss;
}


// AthenaInventoryDragDrop_C AthenaInventoryDragDrop.Default__AthenaInventoryDragDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaInventoryDragDrop_C* UAthenaInventoryDragDrop_C::GetDefaultObj()
{
	static class UAthenaInventoryDragDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaInventoryDragDrop_C*>(UAthenaInventoryDragDrop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaInventoryDragDrop.AthenaInventoryDragDrop_C.ShowDropIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaDragDropAction   Drop_Action                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaInventoryDragVisual_C*K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryDragDrop_C::ShowDropIcon(enum class EAthenaDragDropAction Drop_Action, class UAthenaInventoryDragVisual_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaInventoryDragDrop_C", "ShowDropIcon");

	Params::UAthenaInventoryDragDrop_C_ShowDropIcon_Params Parms{};

	Parms.Drop_Action = Drop_Action;
	Parms.K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual = K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


