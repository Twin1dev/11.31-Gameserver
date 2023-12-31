#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Loop_SnowFlakes_CameraAttached.GCN_Loop_SnowFlakes_CameraAttached_C
// (Actor)

class UClass* AGCN_Loop_SnowFlakes_CameraAttached_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Loop_SnowFlakes_CameraAttached_C");

	return Clss;
}


// GCN_Loop_SnowFlakes_CameraAttached_C GCN_Loop_SnowFlakes_CameraAttached.Default__GCN_Loop_SnowFlakes_CameraAttached_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Loop_SnowFlakes_CameraAttached_C* AGCN_Loop_SnowFlakes_CameraAttached_C::GetDefaultObj()
{
	static class AGCN_Loop_SnowFlakes_CameraAttached_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Loop_SnowFlakes_CameraAttached_C*>(AGCN_Loop_SnowFlakes_CameraAttached_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_Loop_SnowFlakes_CameraAttached.GCN_Loop_SnowFlakes_CameraAttached_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AGCN_Loop_SnowFlakes_CameraAttached_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_C", "OnLoopingStart");

	Params::AGCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_SnowFlakes_CameraAttached.GCN_Loop_SnowFlakes_CameraAttached_C.ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents                                  (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_SnowFlakes_CameraAttached_C::ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached(int32 EntryPoint, bool CallFunc_IsErebus_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UParticleSystemComponent* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_C", "ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached");

	Params::AGCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


