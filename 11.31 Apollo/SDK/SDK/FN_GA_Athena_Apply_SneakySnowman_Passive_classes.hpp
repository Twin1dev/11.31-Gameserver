#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB98 - 0xB90)
// BlueprintGeneratedClass GA_Athena_Apply_SneakySnowman_Passive.GA_Athena_Apply_SneakySnowman_Passive_C
class UGA_Athena_Apply_SneakySnowman_Passive_C : public UGA_Athena_Apply_SneakySnowmanV2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB90(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Athena_Apply_SneakySnowman_Passive_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Passive(int32 EntryPoint);
};

}


