#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xFC8 - 0xFB4)
// BlueprintGeneratedClass B_GrenadeLauncher_Snowball_Athena.B_GrenadeLauncher_Snowball_Athena_C
class AB_GrenadeLauncher_Snowball_Athena_C : public AB_Ranged_Generic_C
{
public:
	uint8                                        Pad_521C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Reload_MagazineReload;                             // 0xFB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Reload_Ammo;                                       // 0xFC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_GrenadeLauncher_Snowball_Athena_C* GetDefaultObj();

};

}


