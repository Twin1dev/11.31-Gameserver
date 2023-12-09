#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_MimicTrailOff.AnimNotify_MimicTrailOff_C
// (None)

class UClass* UAnimNotify_MimicTrailOff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_MimicTrailOff_C");

	return Clss;
}


// AnimNotify_MimicTrailOff_C AnimNotify_MimicTrailOff.Default__AnimNotify_MimicTrailOff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_MimicTrailOff_C* UAnimNotify_MimicTrailOff_C::GetDefaultObj()
{
	static class UAnimNotify_MimicTrailOff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_MimicTrailOff_C*>(UAnimNotify_MimicTrailOff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_MimicTrailOff.AnimNotify_MimicTrailOff_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortAnimNotify_Interface_Interface_C>K2Node_DynamicCast_AsFort_Anim_Notify_Interface_Interface        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAnimNotify_MimicTrailOff_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IFortAnimNotify_Interface_Interface_C> K2Node_DynamicCast_AsFort_Anim_Notify_Interface_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_MimicTrailOff_C", "Received_Notify");

	Params::UAnimNotify_MimicTrailOff_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Anim_Notify_Interface_Interface = K2Node_DynamicCast_AsFort_Anim_Notify_Interface_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


