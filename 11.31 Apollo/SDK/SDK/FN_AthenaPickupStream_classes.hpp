#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x2E9 - 0x2D8)
// WidgetBlueprintGeneratedClass AthenaPickupStream.AthenaPickupStream_C
class UAthenaPickupStream_C : public UPickupStream
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerticalAlignment                Vertical_Alignment;                                // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaPickupStream_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void RefreshPickupEntry(class UUserWidget* EntryWidget, TSoftObjectPtr<class UTexture2D>& Icon, int32 Count);
	void ExecuteUbergraph_AthenaPickupStream(int32 EntryPoint, class UUserWidget* K2Node_Event_EntryWidget, TSoftObjectPtr<class UTexture2D> K2Node_Event_Icon, int32 K2Node_Event_Count, class UAthenaPickupMessageItem_C* K2Node_DynamicCast_AsAthena_Pickup_Message_Item, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess_1);
};

}


