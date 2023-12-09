#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B0 - 0x298)
// WidgetBlueprintGeneratedClass PostGameSpectatingPlayerName.PostGameSpectatingPlayerName_C
class UPostGameSpectatingPlayerName_C : public UPostGameSpectatedPlayerName
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_PlayerName;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_UserID;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPostGameSpectatingPlayerName_C* GetDefaultObj();

	void ShowWidget(const class FString& PlayerName, const class FString& PlayerID);
	void ExecuteUbergraph_PostGameSpectatingPlayerName(int32 EntryPoint, const class FString& K2Node_Event_PlayerName, const class FString& K2Node_Event_PlayerID, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1);
};

}


