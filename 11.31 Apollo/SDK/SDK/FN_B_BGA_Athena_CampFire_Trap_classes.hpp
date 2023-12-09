#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x968 - 0x959)
// BlueprintGeneratedClass B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C
class AB_BGA_Athena_CampFire_Trap_C : public AB_BGA_Athena_EnvCampFire_C
{
public:
	uint8                                        Pad_5B24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x960(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_BGA_Athena_CampFire_Trap_C* GetDefaultObj();

	void OnBuildingActorInitialized(enum class EFortBuildingInitializationReason InitializationReason, enum class EFortBuildingPersistentState BuildingPersistentState);
	void ExecuteUbergraph_B_BGA_Athena_CampFire_Trap(int32 EntryPoint, enum class EFortBuildingInitializationReason K2Node_Event_InitializationReason, enum class EFortBuildingPersistentState K2Node_Event_BuildingPersistentState);
};

}


