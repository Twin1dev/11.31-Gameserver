#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x2C4 - 0x298)
// WidgetBlueprintGeneratedClass AthenaHUDSituationalFeedback.AthenaHUDSituationalFeedback_C
class UAthenaHUDSituationalFeedback_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          Feedback;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaHUDFeedbackLine_C*              FeedbackLine1;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UAthenaHUDFeedbackLine_C*>      FeedbackLines;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference)
	int32                                        MaxLinesNeeded;                                    // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaHUDSituationalFeedback_C* GetDefaultObj();

	void Construct();
	void HideFeedback();
	void ShowFeedback();
	void ExecuteUbergraph_AthenaHUDSituationalFeedback(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaHUDFeedbackLine_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


