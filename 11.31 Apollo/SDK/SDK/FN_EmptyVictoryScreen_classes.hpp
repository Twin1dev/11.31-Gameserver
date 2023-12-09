#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x2E9 - 0x2E0)
// WidgetBlueprintGeneratedClass EmptyVictoryScreen.EmptyVictoryScreen_C
class UEmptyVictoryScreen_C : public UAthenaVictoryRoyaleScreenWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bHasSeen;                                          // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UEmptyVictoryScreen_C* GetDefaultObj();

	bool GetWantsToShowContent(class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetLocalPlayerHasWinningPlacement_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BP_OnActivated();
	void ExecuteUbergraph_EmptyVictoryScreen(int32 EntryPoint);
};

}


