#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
// (None)

class UClass* UGAB_Emote_Generic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_Emote_Generic_C");

	return Clss;
}


// GAB_Emote_Generic_C GAB_Emote_Generic.Default__GAB_Emote_Generic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_Emote_Generic_C* UGAB_Emote_Generic_C::GetDefaultObj()
{
	static class UGAB_Emote_Generic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_Emote_Generic_C*>(UGAB_Emote_Generic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.IsMontagePlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Emote_Generic_C::IsMontagePlaying(class UAnimMontage* Montage, bool* Result, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "IsMontagePlaying");

	Params::UGAB_Emote_Generic_C_IsMontagePlaying_Params Parms{};

	Parms.Montage = Montage;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_IsPlaying_ReturnValue = CallFunc_Montage_IsPlaying_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.ForceStopMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultBlendOutTime_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Emote_Generic_C::ForceStopMontage(class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_GetDefaultBlendOutTime_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "ForceStopMontage");

	Params::UGAB_Emote_Generic_C_ForceStopMontage_Params Parms{};

	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetDefaultBlendOutTime_ReturnValue = CallFunc_GetDefaultBlendOutTime_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.SetReticleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldHide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Emote_Generic_C::SetReticleVisibility(bool ShouldHide, bool CallFunc_IsServer_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "SetReticleVisibility");

	Params::UGAB_Emote_Generic_C_SetReticleVisibility_Params Parms{};

	Parms.ShouldHide = ShouldHide;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetMontageToPlay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMontageItemDefinitionBase*EmoteAsset                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomBodyType     BodyType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomGender       Gender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAnimMontage> ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// TSoftObjectPtr<class UAnimMontage> CallFunc_GetAnimation_ReturnValue                                (HasGetValueTypeHash)

TSoftObjectPtr<class UAnimMontage> UGAB_Emote_Generic_C::GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, enum class EFortCustomBodyType BodyType, enum class EFortCustomGender Gender, TSoftObjectPtr<class UAnimMontage> CallFunc_GetAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "GetMontageToPlay");

	Params::UGAB_Emote_Generic_C_GetMontageToPlay_Params Parms{};

	Parms.EmoteAsset = EmoteAsset;
	Parms.BodyType = BodyType;
	Parms.Gender = Gender;
	Parms.CallFunc_GetAnimation_ReturnValue = CallFunc_GetAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetBodyTypeAndGender
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCustomBodyType     BodyType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomGender       Gender                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCustomBodyType     CallFunc_GetCharacterBodyType_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomGender       CallFunc_GetCharacterGender_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::GetBodyTypeAndGender(enum class EFortCustomBodyType* BodyType, enum class EFortCustomGender* Gender, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, enum class EFortCustomBodyType CallFunc_GetCharacterBodyType_ReturnValue, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "GetBodyTypeAndGender");

	Params::UGAB_Emote_Generic_C_GetBodyTypeAndGender_Params Parms{};

	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCharacterBodyType_ReturnValue = CallFunc_GetCharacterBodyType_ReturnValue;
	Parms.CallFunc_GetCharacterGender_ReturnValue = CallFunc_GetCharacterGender_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BodyType != nullptr)
		*BodyType = Parms.BodyType;

	if (Gender != nullptr)
		*Gender = Parms.Gender;

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetCurrentSourceObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMontageItemDefinitionBase*K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::K2_OnEndAbility(bool bWasCancelled, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class UFortMontageItemDefinitionBase* K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base, bool K2Node_DynamicCast_bSuccess, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "K2_OnEndAbility");

	Params::UGAB_Emote_Generic_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;
	Parms.CallFunc_GetCurrentSourceObject_ReturnValue = CallFunc_GetCurrentSourceObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base = K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::Completed_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "Completed_DE7019AA4E006879EDD264899869FEE2");

	Params::UGAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::Cancelled_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "Cancelled_DE7019AA4E006879EDD264899869FEE2");

	Params::UGAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::Triggered_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "Triggered_DE7019AA4E006879EDD264899869FEE2");

	Params::UGAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D");

	Params::UGAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_DA96775D40CD998BF2FF0085FE5AB126
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::OnLoaded_DA96775D40CD998BF2FF0085FE5AB126(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "OnLoaded_DA96775D40CD998BF2FF0085FE5AB126");

	Params::UGAB_Emote_Generic_C_OnLoaded_DA96775D40CD998BF2FF0085FE5AB126_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_Emote_Generic_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnMontageStartedPlaying
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_Emote_Generic_C::OnMontageStartedPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "OnMontageStartedPlaying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.PlayInitialEmoteMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_Emote_Generic_C::PlayInitialEmoteMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "PlayInitialEmoteMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.NonMontageAsyncAssetsReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_Emote_Generic_C::NonMontageAsyncAssetsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "NonMontageAsyncAssetsReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortGameplayAbilityMontageSectionToPlayTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortGameplayAbilityMontageSectionToPlayTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMontagePlaying_Result                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMontagePlaying_Result_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDefaultBlendOutTime_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetCurrentSourceObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMontageItemDefinitionBase*K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasCosmeticDrivenMotageSection_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayRandomSectionByName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortGameplayAbilityMontageSectionToPlayK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable                                             (None)
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomBodyType     CallFunc_GetBodyTypeAndGender_BodyType                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomGender       CallFunc_GetBodyTypeAndGender_Gender                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageToPlay_ReturnValue                            (HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetCurrentSourceObject_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMontageItemDefinitionBase*K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_1                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_1                              (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_ShouldHolsterWeapon_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_PickRandomSectionByName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PickCosmeticDrivenSectionByName_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_2                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_2                              (NoDestructor, HasGetValueTypeHash)
// TArray<struct FSoftObjectPath>     CallFunc_GatherVariantAssets_VariantAssetsNeeded                 (ZeroConstructor, ReferenceParm)
// struct FSoftObjectPath             CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue                (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::ExecuteUbergraph_GAB_Emote_Generic(int32 EntryPoint, bool Temp_bool_Variable, enum class EFortGameplayAbilityMontageSectionToPlay Temp_byte_Variable, enum class EFortGameplayAbilityMontageSectionToPlay Temp_byte_Variable_1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* Temp_object_Variable_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsMontagePlaying_Result, bool CallFunc_IsMontagePlaying_Result_1, class UObject* K2Node_CustomEvent_Loaded_1, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDefaultBlendOutTime_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class UFortMontageItemDefinitionBase* K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasCosmeticDrivenMotageSection_ReturnValue, bool CallFunc_ShouldPlayRandomSectionByName_ReturnValue, enum class EFortGameplayAbilityMontageSectionToPlay K2Node_Select_Default, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, enum class EFortCustomBodyType CallFunc_GetBodyTypeAndGender_BodyType, enum class EFortCustomGender CallFunc_GetBodyTypeAndGender_Gender, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageToPlay_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue_1, class UFortMontageItemDefinitionBase* K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base_1, bool K2Node_DynamicCast_bSuccess_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_ShouldHolsterWeapon_ReturnValue, class FName CallFunc_PickRandomSectionByName_ReturnValue, class FName CallFunc_PickCosmeticDrivenSectionByName_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_2, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, TArray<struct FSoftObjectPath>& CallFunc_GatherVariantAssets_VariantAssetsNeeded, const struct FSoftObjectPath& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class UObject> CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Conv_IntToBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "ExecuteUbergraph_GAB_Emote_Generic");

	Params::UGAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsMontagePlaying_Result = CallFunc_IsMontagePlaying_Result;
	Parms.CallFunc_IsMontagePlaying_Result_1 = CallFunc_IsMontagePlaying_Result_1;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDefaultBlendOutTime_ReturnValue = CallFunc_GetDefaultBlendOutTime_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentSourceObject_ReturnValue = CallFunc_GetCurrentSourceObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base = K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasCosmeticDrivenMotageSection_ReturnValue = CallFunc_HasCosmeticDrivenMotageSection_ReturnValue;
	Parms.CallFunc_ShouldPlayRandomSectionByName_ReturnValue = CallFunc_ShouldPlayRandomSectionByName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetBodyTypeAndGender_BodyType = CallFunc_GetBodyTypeAndGender_BodyType;
	Parms.CallFunc_GetBodyTypeAndGender_Gender = CallFunc_GetBodyTypeAndGender_Gender;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.CallFunc_GetMontageToPlay_ReturnValue = CallFunc_GetMontageToPlay_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_1 = CallFunc_GetActivatingPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCurrentSourceObject_ReturnValue_1 = CallFunc_GetCurrentSourceObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base_1 = K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_TargetData_1 = K2Node_CustomEvent_TargetData_1;
	Parms.K2Node_CustomEvent_ApplicationTag_1 = K2Node_CustomEvent_ApplicationTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_ShouldHolsterWeapon_ReturnValue = CallFunc_ShouldHolsterWeapon_ReturnValue;
	Parms.CallFunc_PickRandomSectionByName_ReturnValue = CallFunc_PickRandomSectionByName_ReturnValue;
	Parms.CallFunc_PickCosmeticDrivenSectionByName_ReturnValue = CallFunc_PickCosmeticDrivenSectionByName_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_2 = CallFunc_GetActivatingPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_TargetData_2 = K2Node_CustomEvent_TargetData_2;
	Parms.K2Node_CustomEvent_ApplicationTag_2 = K2Node_CustomEvent_ApplicationTag_2;
	Parms.CallFunc_GatherVariantAssets_VariantAssetsNeeded = CallFunc_GatherVariantAssets_VariantAssetsNeeded;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue = CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


