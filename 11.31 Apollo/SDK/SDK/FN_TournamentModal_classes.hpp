#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x458 - 0x440)
// WidgetBlueprintGeneratedClass TournamentModal.TournamentModal_C
class UTournamentModal_C : public UFortTournamentModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x448(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_BG;                                          // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTournamentModal_C* GetDefaultObj();

	void BP_OnActivated();
	void OnTournamentSet(const struct FLinearColor& LeftColor, const struct FLinearColor& RightColor);
	void ExecuteUbergraph_TournamentModal(int32 EntryPoint, const struct FLinearColor& K2Node_Event_LeftColor, const struct FLinearColor& K2Node_Event_RightColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}


