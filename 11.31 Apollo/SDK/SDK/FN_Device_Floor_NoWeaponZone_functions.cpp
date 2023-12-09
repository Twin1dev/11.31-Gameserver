#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C
// (Actor)

class UClass* ADevice_Floor_NoWeaponZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_Floor_NoWeaponZone_C");

	return Clss;
}


// Device_Floor_NoWeaponZone_C Device_Floor_NoWeaponZone.Default__Device_Floor_NoWeaponZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_Floor_NoWeaponZone_C* ADevice_Floor_NoWeaponZone_C::GetDefaultObj()
{
	static class ADevice_Floor_NoWeaponZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_Floor_NoWeaponZone_C*>(ADevice_Floor_NoWeaponZone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.Setup Effect Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     Ability_System                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Should_Apply                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   Spec_Handle                                                      (Parm, OutParm)
// struct FGameplayEffectSpecHandle   Handle                                                           (Edit, BlueprintVisible)
// bool                               Apply                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_AddGrantedTag_ReturnValue                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_AddGrantedTag_ReturnValue_1                             (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            (None)

void ADevice_Floor_NoWeaponZone_C::Setup_Effect_Data(class UAbilitySystemComponent* Ability_System, bool* Should_Apply, struct FGameplayEffectSpecHandle* Spec_Handle, const struct FGameplayEffectSpecHandle& Handle, bool Apply, const struct FGameplayEffectSpecHandle& CallFunc_AddGrantedTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AddGrantedTag_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "Setup Effect Data");

	Params::ADevice_Floor_NoWeaponZone_C_Setup_Effect_Data_Params Parms{};

	Parms.Ability_System = Ability_System;
	Parms.Handle = Handle;
	Parms.Apply = Apply;
	Parms.CallFunc_AddGrantedTag_ReturnValue = CallFunc_AddGrantedTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AddGrantedTag_ReturnValue_1 = CallFunc_AddGrantedTag_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Should_Apply != nullptr)
		*Should_Apply = Parms.Should_Apply;

	if (Spec_Handle != nullptr)
		*Spec_Handle = std::move(Parms.Spec_Handle);

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.ShouldAffectTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldAffect                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADevice_Floor_NoWeaponZone_C::ShouldAffectTarget(class AActor* TargetActor, bool* ShouldAffect, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "ShouldAffectTarget");

	Params::ADevice_Floor_NoWeaponZone_C_ShouldAffectTarget_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldAffect != nullptr)
		*ShouldAffect = Parms.ShouldAffect;

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.ApplyEffects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AbilitySystemComponentValid                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   As_Fort_Pawn                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValidTarget                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandleLocal_Effect_Context                                             (Edit, BlueprintVisible)
// class UFortAbilitySystemComponent* Ability_System                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   Pawn                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetAbilitySystemComponentAndPawn_AsFort_Ability_System_Component(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetAbilitySystemComponentAndPawn_AsFort_Pawn            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue                           (None)
// bool                               CallFunc_Setup_Effect_Data_Should_Apply                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_Setup_Effect_Data_Spec_Handle                           (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldAffectTarget_ShouldAffect                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Transmit_if_Valid_Actor_Valid                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             (None)

void ADevice_Floor_NoWeaponZone_C::ApplyEffects(class UObject* Object, bool* AbilitySystemComponentValid, class AFortPawn** As_Fort_Pawn, bool* IsValidTarget, const struct FGameplayEffectContextHandle& Local_Effect_Context, class UFortAbilitySystemComponent* Ability_System, class AFortPawn* Pawn, class UFortAbilitySystemComponent* CallFunc_GetAbilitySystemComponentAndPawn_AsFort_Ability_System_Component, class AFortPawn* CallFunc_GetAbilitySystemComponentAndPawn_AsFort_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, bool CallFunc_Setup_Effect_Data_Should_Apply, const struct FGameplayEffectSpecHandle& CallFunc_Setup_Effect_Data_Spec_Handle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_ShouldAffectTarget_ShouldAffect, bool CallFunc_Transmit_if_Valid_Actor_Valid, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "ApplyEffects");

	Params::ADevice_Floor_NoWeaponZone_C_ApplyEffects_Params Parms{};

	Parms.Object = Object;
	Parms.Local_Effect_Context = Local_Effect_Context;
	Parms.Ability_System = Ability_System;
	Parms.Pawn = Pawn;
	Parms.CallFunc_GetAbilitySystemComponentAndPawn_AsFort_Ability_System_Component = CallFunc_GetAbilitySystemComponentAndPawn_AsFort_Ability_System_Component;
	Parms.CallFunc_GetAbilitySystemComponentAndPawn_AsFort_Pawn = CallFunc_GetAbilitySystemComponentAndPawn_AsFort_Pawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeEffectContext_ReturnValue = CallFunc_MakeEffectContext_ReturnValue;
	Parms.CallFunc_Setup_Effect_Data_Should_Apply = CallFunc_Setup_Effect_Data_Should_Apply;
	Parms.CallFunc_Setup_Effect_Data_Spec_Handle = CallFunc_Setup_Effect_Data_Spec_Handle;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_ShouldAffectTarget_ShouldAffect = CallFunc_ShouldAffectTarget_ShouldAffect;
	Parms.CallFunc_Transmit_if_Valid_Actor_Valid = CallFunc_Transmit_if_Valid_Actor_Valid;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilitySystemComponentValid != nullptr)
		*AbilitySystemComponentValid = Parms.AbilitySystemComponentValid;

	if (As_Fort_Pawn != nullptr)
		*As_Fort_Pawn = Parms.As_Fort_Pawn;

	if (IsValidTarget != nullptr)
		*IsValidTarget = Parms.IsValidTarget;

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.GetAbilitySystemComponentAndPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* AsFort_Ability_System_Component                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   AsFort_Pawn                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADevice_Floor_NoWeaponZone_C::GetAbilitySystemComponentAndPawn(class UObject* Object, class UFortAbilitySystemComponent** AsFort_Ability_System_Component, class AFortPawn** AsFort_Pawn, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "GetAbilitySystemComponentAndPawn");

	Params::ADevice_Floor_NoWeaponZone_C_GetAbilitySystemComponentAndPawn_Params Parms{};

	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Ability_System_Component = K2Node_DynamicCast_AsFort_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Ability_System_Component != nullptr)
		*AsFort_Ability_System_Component = Parms.AsFort_Ability_System_Component;

	if (AsFort_Pawn != nullptr)
		*AsFort_Pawn = Parms.AsFort_Pawn;

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADevice_Floor_NoWeaponZone_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.UpdateVolumeSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADevice_Floor_NoWeaponZone_C::UpdateVolumeSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "UpdateVolumeSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.UpdateMinigameVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADevice_Floor_NoWeaponZone_C::UpdateMinigameVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "UpdateMinigameVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ADevice_Floor_NoWeaponZone_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "BndEvt__Trigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ADevice_Floor_NoWeaponZone_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_Floor_NoWeaponZone_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "BndEvt__Trigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::ADevice_Floor_NoWeaponZone_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.PlayFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   Overlapped_Pawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_Floor_NoWeaponZone_C::PlayFX(class AFortPawn* Overlapped_Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "PlayFX");

	Params::ADevice_Floor_NoWeaponZone_C_PlayFX_Params Parms{};

	Parms.Overlapped_Pawn = Overlapped_Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.OnAbilitySystemComponentInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilitySystemComponent* AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             AffectedPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_Floor_NoWeaponZone_C::OnAbilitySystemComponentInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "OnAbilitySystemComponentInitialized");

	Params::ADevice_Floor_NoWeaponZone_C_OnAbilitySystemComponentInitialized_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.AffectedPawn = AffectedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.OnPlayerEmoteEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PlayerEmoting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_Floor_NoWeaponZone_C::OnPlayerEmoteEnded(class AFortPawn* PlayerEmoting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "OnPlayerEmoteEnded");

	Params::ADevice_Floor_NoWeaponZone_C_OnPlayerEmoteEnded_Params Parms{};

	Parms.PlayerEmoting = PlayerEmoting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.OnPlayerEmoteStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PlayerEmoting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_Floor_NoWeaponZone_C::OnPlayerEmoteStarted(class AFortPawn* PlayerEmoting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "OnPlayerEmoteStarted");

	Params::ADevice_Floor_NoWeaponZone_C_OnPlayerEmoteStarted_Params Parms{};

	Parms.PlayerEmoting = PlayerEmoting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C.ExecuteUbergraph_Device_Floor_NoWeaponZone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldAffectTarget_ShouldAffect                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   CallFunc_VFXParameters_Array                                     (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_CustomEvent_Overlapped_Pawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_AffectedPawn                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOverlappingActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyEffects_AbilitySystemComponentValid                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_ApplyEffects_As_Fort_Pawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyEffects_IsValidTarget                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Transmit_if_Valid_Actor_Valid                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPregame_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPawn*                   K2Node_Event_PlayerEmoting_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_Event_PlayerEmoting                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Transmit_if_Valid_Actor_Valid_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Transmit_if_Valid_Actor_Valid_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADevice_Floor_NoWeaponZone_C::ExecuteUbergraph_Device_Floor_NoWeaponZone(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ShouldAffectTarget_ShouldAffect, TArray<struct FParticleSysParam>& CallFunc_VFXParameters_Array, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMax_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_FMax_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, class AFortPawn* K2Node_CustomEvent_Overlapped_Pawn, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UFortAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent, class AFortPlayerPawn* K2Node_CustomEvent_AffectedPawn, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsOverlappingActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_ApplyEffects_AbilitySystemComponentValid, class AFortPawn* CallFunc_ApplyEffects_As_Fort_Pawn, bool CallFunc_ApplyEffects_IsValidTarget, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Transmit_if_Valid_Actor_Valid, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsPregame_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPawn* K2Node_Event_PlayerEmoting_1, class AFortPawn* K2Node_Event_PlayerEmoting, bool CallFunc_Transmit_if_Valid_Actor_Valid_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_Transmit_if_Valid_Actor_Valid_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Floor_NoWeaponZone_C", "ExecuteUbergraph_Device_Floor_NoWeaponZone");

	Params::ADevice_Floor_NoWeaponZone_C_ExecuteUbergraph_Device_Floor_NoWeaponZone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ShouldAffectTarget_ShouldAffect = CallFunc_ShouldAffectTarget_ShouldAffect;
	Parms.CallFunc_VFXParameters_Array = CallFunc_VFXParameters_Array;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_2 = CallFunc_FMax_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorFloat_ReturnValue = CallFunc_Subtract_VectorFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Overlapped_Pawn = K2Node_CustomEvent_Overlapped_Pawn;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.K2Node_CustomEvent_AbilitySystemComponent = K2Node_CustomEvent_AbilitySystemComponent;
	Parms.K2Node_CustomEvent_AffectedPawn = K2Node_CustomEvent_AffectedPawn;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsOverlappingActor_ReturnValue = CallFunc_IsOverlappingActor_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_ApplyEffects_AbilitySystemComponentValid = CallFunc_ApplyEffects_AbilitySystemComponentValid;
	Parms.CallFunc_ApplyEffects_As_Fort_Pawn = CallFunc_ApplyEffects_As_Fort_Pawn;
	Parms.CallFunc_ApplyEffects_IsValidTarget = CallFunc_ApplyEffects_IsValidTarget;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Transmit_if_Valid_Actor_Valid = CallFunc_Transmit_if_Valid_Actor_Valid;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsPregame_ReturnValue = CallFunc_IsPregame_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_PlayerEmoting_1 = K2Node_Event_PlayerEmoting_1;
	Parms.K2Node_Event_PlayerEmoting = K2Node_Event_PlayerEmoting;
	Parms.CallFunc_Transmit_if_Valid_Actor_Valid_1 = CallFunc_Transmit_if_Valid_Actor_Valid_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_Transmit_if_Valid_Actor_Valid_2 = CallFunc_Transmit_if_Valid_Actor_Valid_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


