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

// 0x10 (0xA48 - 0xA38)
// BlueprintGeneratedClass B_Athena_Bucket_Nice_Weap.B_Athena_Bucket_Nice_Weap_C
class AB_Athena_Bucket_Nice_Weap_C : public AB_ConsumableSmall_Athena_C
{
public:
	class UParticleSystemComponent*              P_Flopper_BucketNice_InHand;                       // 0xA38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Can;                                               // 0xA40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Athena_Bucket_Nice_Weap_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
