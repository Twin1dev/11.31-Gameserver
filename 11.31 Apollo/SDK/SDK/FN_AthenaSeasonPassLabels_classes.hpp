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

// 0x20 (0x250 - 0x230)
// WidgetBlueprintGeneratedClass AthenaSeasonPassLabels.AthenaSeasonPassLabels_C
class UAthenaSeasonPassLabels_C : public UUserWidget
{
public:
	class UWidgetAnimation*                      ShowLabels;                                        // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_219;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_66;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSeasonPassLabels_C");
		return Clss;
	}

	void HideTierLabels(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void ShowTierLabels(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
