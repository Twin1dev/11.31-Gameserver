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

// 0x28 (0x318 - 0x2F0)
// WidgetBlueprintGeneratedClass PlayerVisited.PlayerVisited_C
class UPlayerVisited_C : public UAthenaVisitedAreaDisplay
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BriefShow;                                         // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_landmarkorPOI;                // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainBox;                                           // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MainLocationText;                                  // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerVisited_C");
		return Clss;
	}

	void EndOfShow();
	void Construct();
	void OnNewVisited(class FText& LocalizedLocationName, bool bIsNamedLocation);
	void Brief_Show_Finished();
	void OnStompFailed();
	void OnStompedByOtherWidget();
	void ExecuteUbergraph_PlayerVisited(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class FText K2Node_Event_LocalizedLocationName, bool K2Node_Event_bIsNamedLocation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool CallFunc_IsAnimationPlaying_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_IsAnimationPlaying_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
