#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x478 - 0x440)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferUndoOverlay.AthenaDirectAcquisitionOfferUndoOverlay_C
class UAthenaDirectAcquisitionOfferUndoOverlay_C : public UFortUndoCompletionWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Refunded;                                          // 0x448(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               BorderItemNAme;                                    // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow;                                              // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxSuccessfullyRefund;                            // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FPurchasedItemInfo>            Purchased_Bundle_Items;                            // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAthenaDirectAcquisitionOfferUndoOverlay_C* GetDefaultObj();

	void Construct();
	void WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_0();
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferUndoOverlay(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}


