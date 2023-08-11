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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass EnemyPawn_Interface.EnemyPawn_Interface_C
class IEnemyPawn_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnemyPawn_Interface_C");
		return Clss;
	}

	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
