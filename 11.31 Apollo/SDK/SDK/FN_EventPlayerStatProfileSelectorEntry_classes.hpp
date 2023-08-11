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

// 0x40 (0xBD0 - 0xB90)
// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C
class UEventPlayerStatProfileSelectorEntry_C : public UFortEventPlayerStatProfileSelectorEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected;                                          // 0xB98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_SelectedBG;                                  // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventPlayerStatProfileSelector_C*     ProfileStatSelector;                               // 0xBA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            Hovered;                                           // 0xBB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            Unhovered;                                         // 0xBC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EventPlayerStatProfileSelectorEntry_C");
		return Clss;
	}

	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void Unhovered__DelegateSignature();
	void Hovered__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
