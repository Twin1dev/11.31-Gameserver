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

// 0x8 (0xA40 - 0xA38)
// BlueprintGeneratedClass B_Flopper_Weap_Athena.B_Flopper_Weap_Athena_C
class AB_Flopper_Weap_Athena_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	class UParticleSystemComponent*              P_Flopper_Catch_Drips;                             // 0xA38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Flopper_Weap_Athena_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
