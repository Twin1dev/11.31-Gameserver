#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E (0xFD2 - 0xFB4)
// BlueprintGeneratedClass B_HappyGhost_Athena.B_HappyGhost_Athena_C
class AB_HappyGhost_Athena_C : public AB_Ranged_Generic_C
{
public:
	uint8                                        Pad_713D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          Timer;                                             // 0xFC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                 Player_Pawn;                                       // 0xFC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0xFD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HideProj;                                          // 0xFD1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class AB_HappyGhost_Athena_C* GetDefaultObj();

	void OnRep_HideProj();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_HappyGhost_Athena(int32 EntryPoint);
};

}


