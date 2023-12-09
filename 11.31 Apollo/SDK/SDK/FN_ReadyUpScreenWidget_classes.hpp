#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2F8 - 0x2E8)
// WidgetBlueprintGeneratedClass ReadyUpScreenWidget.ReadyUpScreenWidget_C
class UReadyUpScreenWidget_C : public UAthenaReadyUpScreenWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_BGSpacer;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UReadyUpScreenWidget_C* GetDefaultObj();

	bool GetWantsToShowContent(bool CallFunc_NativeShouldShowReadyUpScreen_ReturnValue);
	void BP_OnActivated();
	void ExecuteUbergraph_ReadyUpScreenWidget(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
};

}


