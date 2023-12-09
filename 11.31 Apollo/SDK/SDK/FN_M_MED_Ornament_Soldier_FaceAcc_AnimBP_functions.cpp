#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_MED_Ornament_Soldier_FaceAcc_AnimBP.M_MED_Ornament_Soldier_FaceAcc_AnimBP_C
// (None)

class UClass* UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_MED_Ornament_Soldier_FaceAcc_AnimBP_C");

	return Clss;
}


// M_MED_Ornament_Soldier_FaceAcc_AnimBP_C M_MED_Ornament_Soldier_FaceAcc_AnimBP.Default__M_MED_Ornament_Soldier_FaceAcc_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C* UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C::GetDefaultObj()
{
	static class UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C*>(UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_MED_Ornament_Soldier_FaceAcc_AnimBP.M_MED_Ornament_Soldier_FaceAcc_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Ornament_Soldier_FaceAcc_AnimBP_C", "AnimGraph");

	Params::UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_MED_Ornament_Soldier_FaceAcc_AnimBP.M_MED_Ornament_Soldier_FaceAcc_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Ornament_Soldier_FaceAcc_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_Ornament_Soldier_FaceAcc_AnimBP.M_MED_Ornament_Soldier_FaceAcc_AnimBP_C.ExecuteUbergraph_M_MED_Ornament_Soldier_FaceAcc_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C::ExecuteUbergraph_M_MED_Ornament_Soldier_FaceAcc_AnimBP(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Ornament_Soldier_FaceAcc_AnimBP_C", "ExecuteUbergraph_M_MED_Ornament_Soldier_FaceAcc_AnimBP");

	Params::UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Ornament_Soldier_FaceAcc_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


