#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA69 - 0xA59)
// BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
class UGAT_ActiveAbility_Hero_C : public UGAT_ActiveAbility_C
{
public:
	uint8                                        Pad_1E3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         UseHeroLoadoutSystem;                              // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGAT_ActiveAbility_Hero_C* GetDefaultObj();

	void CommitAbilityWithEvent(bool* Passed, bool CallFunc_K2_CommitAbility_ReturnValue);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_ActiveAbility_Hero(int32 EntryPoint);
};

}


