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

// 0x18 (0xB88 - 0xB70)
// WidgetBlueprintGeneratedClass LeavePlatformPartyButton.LeavePlatformPartyButton_C
class ULeavePlatformPartyButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHover;                                           // 0xB78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_41;                                // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeavePlatformPartyButton_C");
		return Clss;
	}

	void SetText(class FText New_Text);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_LeavePlatformPartyButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
