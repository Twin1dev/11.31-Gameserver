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

// 0xF (0x900 - 0x8F1)
// BlueprintGeneratedClass Prj_Athena_Bucket_Coal.Prj_Athena_Bucket_Coal_C
class APrj_Athena_Bucket_Coal_C : public APrj_Athena_Bucket_Old_C
{
public:
	uint8                                        Pad_5B2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prj_Athena_Bucket_Coal_C");
		return Clss;
	}

	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void WaterEntered();
	void ExecuteUbergraph_Prj_Athena_Bucket_Coal(int32 EntryPoint, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AB_BGA_Athena_EnvCampFire_C* K2Node_DynamicCast_AsB_BGA_Athena_Env_Camp_Fire, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
