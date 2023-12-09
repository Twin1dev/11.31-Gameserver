#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Grenade_Tower_GIftBox_Athena.B_Grenade_Tower_GIftBox_Athena_C
// (Actor)

class UClass* AB_Grenade_Tower_GIftBox_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Grenade_Tower_GIftBox_Athena_C");

	return Clss;
}


// B_Grenade_Tower_GIftBox_Athena_C B_Grenade_Tower_GIftBox_Athena.Default__B_Grenade_Tower_GIftBox_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Grenade_Tower_GIftBox_Athena_C* AB_Grenade_Tower_GIftBox_Athena_C::GetDefaultObj()
{
	static class AB_Grenade_Tower_GIftBox_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Grenade_Tower_GIftBox_Athena_C*>(AB_Grenade_Tower_GIftBox_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Grenade_Tower_GIftBox_Athena.B_Grenade_Tower_GIftBox_Athena_C.Update Mesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Grenade_Tower_GIftBox_Athena_C::Update_Mesh(int32 Temp_int_Variable, class USkeletalMesh* Temp_object_Variable, class USkeletalMesh* Temp_object_Variable_1, class USkeletalMesh* Temp_object_Variable_2, bool CallFunc_IsDedicatedServer_ReturnValue, class USkeletalMesh* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Grenade_Tower_GIftBox_Athena_C", "Update Mesh");

	Params::AB_Grenade_Tower_GIftBox_Athena_C_Update_Mesh_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Grenade_Tower_GIftBox_Athena.B_Grenade_Tower_GIftBox_Athena_C.Randomize Colour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Grenade_Tower_GIftBox_Athena_C::Randomize_Colour(bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Grenade_Tower_GIftBox_Athena_C", "Randomize Colour");

	Params::AB_Grenade_Tower_GIftBox_Athena_C_Randomize_Colour_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Grenade_Tower_GIftBox_Athena.B_Grenade_Tower_GIftBox_Athena_C.OnRep_Colour Random
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Grenade_Tower_GIftBox_Athena_C::OnRep_Colour_Random()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Grenade_Tower_GIftBox_Athena_C", "OnRep_Colour Random");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Grenade_Tower_GIftBox_Athena.B_Grenade_Tower_GIftBox_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Grenade_Tower_GIftBox_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Grenade_Tower_GIftBox_Athena_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Grenade_Tower_GIftBox_Athena.B_Grenade_Tower_GIftBox_Athena_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSetForLocalControllerOnly                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Grenade_Tower_GIftBox_Athena_C::OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Grenade_Tower_GIftBox_Athena_C", "OnWeaponVisibilityChanged");

	Params::AB_Grenade_Tower_GIftBox_Athena_C_OnWeaponVisibilityChanged_Params Parms{};

	Parms.bVisible = bVisible;
	Parms.bSetForLocalControllerOnly = bSetForLocalControllerOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Grenade_Tower_GIftBox_Athena.B_Grenade_Tower_GIftBox_Athena_C.ExecuteUbergraph_B_Grenade_Tower_GIftBox_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSetForLocalControllerOnly                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Grenade_Tower_GIftBox_Athena_C::ExecuteUbergraph_B_Grenade_Tower_GIftBox_Athena(int32 EntryPoint, bool K2Node_Event_bVisible, bool K2Node_Event_bSetForLocalControllerOnly, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Grenade_Tower_GIftBox_Athena_C", "ExecuteUbergraph_B_Grenade_Tower_GIftBox_Athena");

	Params::AB_Grenade_Tower_GIftBox_Athena_C_ExecuteUbergraph_B_Grenade_Tower_GIftBox_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_Event_bSetForLocalControllerOnly = K2Node_Event_bSetForLocalControllerOnly;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


