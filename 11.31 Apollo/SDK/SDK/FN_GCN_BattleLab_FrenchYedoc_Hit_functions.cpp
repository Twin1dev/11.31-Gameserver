#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_BattleLab_FrenchYedoc_Hit.GCN_BattleLab_FrenchYedoc_Hit_C
// (None)

class UClass* UGCN_BattleLab_FrenchYedoc_Hit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_BattleLab_FrenchYedoc_Hit_C");

	return Clss;
}


// GCN_BattleLab_FrenchYedoc_Hit_C GCN_BattleLab_FrenchYedoc_Hit.Default__GCN_BattleLab_FrenchYedoc_Hit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_BattleLab_FrenchYedoc_Hit_C* UGCN_BattleLab_FrenchYedoc_Hit_C::GetDefaultObj()
{
	static class UGCN_BattleLab_FrenchYedoc_Hit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_BattleLab_FrenchYedoc_Hit_C*>(UGCN_BattleLab_FrenchYedoc_Hit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_BattleLab_FrenchYedoc_Hit.GCN_BattleLab_FrenchYedoc_Hit_C.OnBurst
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UCameraShake*                BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APrj_Athena_FrenchYedoc_JWUnfriendly_C*K2Node_DynamicCast_AsPrj_Athena_French_Yedoc_JWUnfriendly        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGCN_BattleLab_FrenchYedoc_Hit_C::OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UParticleSystemComponent* CallFunc_Array_Get_Item, class APrj_Athena_FrenchYedoc_JWUnfriendly_C* K2Node_DynamicCast_AsPrj_Athena_French_Yedoc_JWUnfriendly, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_BattleLab_FrenchYedoc_Hit_C", "OnBurst");

	Params::UGCN_BattleLab_FrenchYedoc_Hit_C_OnBurst_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsPrj_Athena_French_Yedoc_JWUnfriendly = K2Node_DynamicCast_AsPrj_Athena_French_Yedoc_JWUnfriendly;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


