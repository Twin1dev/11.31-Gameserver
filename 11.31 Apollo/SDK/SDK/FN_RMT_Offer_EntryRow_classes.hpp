#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x270 - 0x230)
// WidgetBlueprintGeneratedClass RMT_Offer_EntryRow.RMT_Offer_EntryRow_C
class URMT_Offer_EntryRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                  CommonRichTextBlock_96;                            // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_27;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          Linear_color;                                      // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x258(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RMT_Offer_EntryRow_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_RMT_Offer_EntryRow(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
