#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xDA8 - 0xD9C)
// BlueprintGeneratedClass Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C
class ATrap_Athena_WallSpikes_C : public ATrap_Athena_Spikes_C
{
public:
	uint8                                        Pad_5F13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ATrap_Athena_WallSpikes_C* GetDefaultObj();

	void SetSpikePosition(float NewSpikePosition);
	void ExecuteUbergraph_Trap_Athena_WallSpikes(int32 EntryPoint, float K2Node_Event_NewSpikePosition, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


