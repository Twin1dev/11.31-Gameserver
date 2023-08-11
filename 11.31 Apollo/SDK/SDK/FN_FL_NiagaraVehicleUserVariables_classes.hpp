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
// BlueprintGeneratedClass FL_NiagaraVehicleUserVariables.FL_NiagaraVehicleUserVariables_C
class UFL_NiagaraVehicleUserVariables_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FL_NiagaraVehicleUserVariables_C");
		return Clss;
	}

	void SetNiagaraSkydiveUserVariables(class UNiagaraComponent* Niagara, const struct FVector& Velocity, class UObject* __WorldContext, float AccumulatedSpeed, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	void NiagaraPontoonModule(class UNiagaraComponent* Niagara, const struct FVehicleSphericalPontoon& Pontoon, class UObject* __WorldContext, class UNiagaraComponent* NS, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_NameToString_ReturnValue_4, class FName CallFunc_Conv_StringToName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class FName CallFunc_Conv_StringToName_ReturnValue_3);
	void SetNiagaraPontoonUserVariables(class UNiagaraComponent* Niagara, const struct FVehicleSphericalPontoon& Pontoon, class UObject* __WorldContext, class UNiagaraComponent* NS);
	void SetNiagaraVehicleUserVariables(class UNiagaraComponent* NiagaraSystem, bool EnableSpawning, bool InWater, bool InAir, bool HasDriver, float Boost, float ForwardSpeed, float TurnDirection, float TurnSpeed, float TurningAngle, class UObject* __WorldContext, class UNiagaraComponent* NS, bool EnableSpawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
