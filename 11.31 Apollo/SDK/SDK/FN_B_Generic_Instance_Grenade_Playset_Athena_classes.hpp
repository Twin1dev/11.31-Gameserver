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

// 0x8 (0xA50 - 0xA48)
// BlueprintGeneratedClass B_Generic_Instance_Grenade_Playset_Athena.B_Generic_Instance_Grenade_Playset_Athena_C
class AB_Generic_Instance_Grenade_Playset_Athena_C : public AB_Grenade_Playset_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Generic_Instance_Grenade_Playset_Athena_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_Generic_Instance_Grenade_Playset_Athena(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
