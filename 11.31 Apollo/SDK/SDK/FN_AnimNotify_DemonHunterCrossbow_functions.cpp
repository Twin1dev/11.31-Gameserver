#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_DemonHunterCrossbow.AnimNotify_DemonHunterCrossbow_C
// (None)

class UClass* UAnimNotify_DemonHunterCrossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_DemonHunterCrossbow_C");

	return Clss;
}


// AnimNotify_DemonHunterCrossbow_C AnimNotify_DemonHunterCrossbow.Default__AnimNotify_DemonHunterCrossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_DemonHunterCrossbow_C* UAnimNotify_DemonHunterCrossbow_C::GetDefaultObj()
{
	static class UAnimNotify_DemonHunterCrossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_DemonHunterCrossbow_C*>(UAnimNotify_DemonHunterCrossbow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_DemonHunterCrossbow.AnimNotify_DemonHunterCrossbow_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_DemonHunter_Crossbow_Athena_C*K2Node_DynamicCast_AsB_Demon_Hunter_Crossbow_Athena              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAnimNotify_DemonHunterCrossbow_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AB_DemonHunter_Crossbow_Athena_C* K2Node_DynamicCast_AsB_Demon_Hunter_Crossbow_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_DemonHunterCrossbow_C", "Received_Notify");

	Params::UAnimNotify_DemonHunterCrossbow_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Demon_Hunter_Crossbow_Athena = K2Node_DynamicCast_AsB_Demon_Hunter_Crossbow_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


