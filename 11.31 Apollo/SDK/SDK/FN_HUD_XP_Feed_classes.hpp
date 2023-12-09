#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x2C1 - 0x2B0)
// WidgetBlueprintGeneratedClass HUD_XP_Feed.HUD_XP_Feed_C
class UHUD_XP_Feed_C : public UAthenaXPFeedWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      XPScreenLayout;                                    // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                         IsXPLayout;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UHUD_XP_Feed_C* GetDefaultObj();

	void Construct();
	void EventXPLayout(class FName Placement);
	void UpdateRestXP(int32 RestXpRemaining);
	void ExecuteUbergraph_HUD_XP_Feed(int32 EntryPoint, class FName K2Node_CustomEvent_Placement, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Event_RestXpRemaining, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


