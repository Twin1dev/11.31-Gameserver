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

// 0x14 (0xFC8 - 0xFB4)
// BlueprintGeneratedClass B_GrenadeLauncher_Snowball_Athena.B_GrenadeLauncher_Snowball_Athena_C
class AB_GrenadeLauncher_Snowball_Athena_C : public AB_Ranged_Generic_C
{
public:
	uint8                                        Pad_5A4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UStaticMeshComponent*                  Reload_MagazineReload;                             // 0xFB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Reload_Ammo;                                       // 0xFC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_GrenadeLauncher_Snowball_Athena_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
