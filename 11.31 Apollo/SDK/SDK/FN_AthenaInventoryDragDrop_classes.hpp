#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x89 - 0x88)
// BlueprintGeneratedClass AthenaInventoryDragDrop.AthenaInventoryDragDrop_C
class UAthenaInventoryDragDrop_C : public UDragDropOperation
{
public:
	bool                                         SplitTheStack;                                     // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAthenaInventoryDragDrop_C* GetDefaultObj();

	void ShowDropIcon(enum class EAthenaDragDropAction Drop_Action, class UAthenaInventoryDragVisual_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual, bool K2Node_DynamicCast_bSuccess);
};

}


