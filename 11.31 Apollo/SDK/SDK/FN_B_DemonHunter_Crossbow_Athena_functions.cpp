#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_DemonHunter_Crossbow_Athena.B_DemonHunter_Crossbow_Athena_C
// (Actor)

class UClass* AB_DemonHunter_Crossbow_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_DemonHunter_Crossbow_Athena_C");

	return Clss;
}


// B_DemonHunter_Crossbow_Athena_C B_DemonHunter_Crossbow_Athena.Default__B_DemonHunter_Crossbow_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_DemonHunter_Crossbow_Athena_C* AB_DemonHunter_Crossbow_Athena_C::GetDefaultObj()
{
	static class AB_DemonHunter_Crossbow_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_DemonHunter_Crossbow_Athena_C*>(AB_DemonHunter_Crossbow_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_DemonHunter_Crossbow_Athena.B_DemonHunter_Crossbow_Athena_C.OnSpawnProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         SpawnProjectile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DemonHunter_Crossbow_Athena_C::OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_DemonHunter_Crossbow_Athena_C", "OnSpawnProjectile");

	Params::AB_DemonHunter_Crossbow_Athena_C_OnSpawnProjectile_Params Parms{};

	Parms.SpawnProjectile = SpawnProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DemonHunter_Crossbow_Athena.B_DemonHunter_Crossbow_Athena_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      ReloadStage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DemonHunter_Crossbow_Athena_C::OnPlayReloadFX(enum class EFortReloadFXState ReloadStage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_DemonHunter_Crossbow_Athena_C", "OnPlayReloadFX");

	Params::AB_DemonHunter_Crossbow_Athena_C_OnPlayReloadFX_Params Parms{};

	Parms.ReloadStage = ReloadStage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DemonHunter_Crossbow_Athena.B_DemonHunter_Crossbow_Athena_C.ExecuteUbergraph_B_DemonHunter_Crossbow_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortReloadFXState      K2Node_Event_ReloadStage                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMagazineAmmoCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         K2Node_Event_SpawnProjectile                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DemonHunter_Crossbow_Athena_C::ExecuteUbergraph_B_DemonHunter_Crossbow_Athena(int32 EntryPoint, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsActive_ReturnValue, class AFortProjectileBase* K2Node_Event_SpawnProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_DemonHunter_Crossbow_Athena_C", "ExecuteUbergraph_B_DemonHunter_Crossbow_Athena");

	Params::AB_DemonHunter_Crossbow_Athena_C_ExecuteUbergraph_B_DemonHunter_Crossbow_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ReloadStage = K2Node_Event_ReloadStage;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetMagazineAmmoCount_ReturnValue = CallFunc_GetMagazineAmmoCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.K2Node_Event_SpawnProjectile = K2Node_Event_SpawnProjectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


