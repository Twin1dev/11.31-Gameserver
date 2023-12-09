#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x2C4 - 0x2A8)
// WidgetBlueprintGeneratedClass AthenaWatchers.AthenaWatchers_C
class UAthenaWatchers_C : public UAthenaWatchers
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnValueChanged;                                    // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaWatcherEye_C*                   AthenaWatcherEye;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ManySpectatorAmount;                               // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaWatchers_C* GetDefaultObj();

	void SpectatorsBegan(bool bBigGroup);
	void SpectatorsAdded(bool bBigGroup);
	void SpectatorsEnded();
	void SpectatorRemoved();
	void SpectatorCountChanged_BP(int32 NewCount);
	void ExecuteUbergraph_AthenaWatchers(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bBigGroup_1, bool K2Node_Event_bBigGroup, int32 K2Node_Event_NewCount);
};

}


