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

// 0x38 (0xCC8 - 0xC90)
// WidgetBlueprintGeneratedClass SubgameTile.SubgameTile_C
class USubgameTile_C : public UFortSubgameTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      RevealCMSKeyArt;                                   // 0xC98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      UnFocused;                                         // 0xCA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FocusedSecondary;                                  // 0xCA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Focused;                                           // 0xCB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                FocusPulse;                                        // 0xCB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PulseMID;                                          // 0xCC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubgameTile_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SubgameTile(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_GetEndTime_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
