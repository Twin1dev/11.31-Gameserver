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

// 0x18 (0x909 - 0x8F1)
// BlueprintGeneratedClass Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C
class APrj_Athena_Bucket_Nice_C : public APrj_Athena_Bucket_Old_C
{
public:
	uint8                                        Pad_595B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Trail;                                             // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         TurnOffTrail;                                      // 0x908(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prj_Athena_Bucket_Nice_C");
		return Clss;
	}

	void OnRep_TurnOffTrail();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ExecuteUbergraph_Prj_Athena_Bucket_Nice(int32 EntryPoint, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
