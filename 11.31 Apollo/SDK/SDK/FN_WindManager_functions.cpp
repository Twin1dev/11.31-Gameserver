#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WindManager.WindManager_C
// (Actor)

class UClass* AWindManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindManager_C");

	return Clss;
}


// WindManager_C WindManager.Default__WindManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWindManager_C* AWindManager_C::GetDefaultObj()
{
	static class AWindManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWindManager_C*>(AWindManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Wind_location                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Storm_Cyl_Mesh_Match                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Wind_Cyl_Mesh_Array_Match_Index                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWindManager_C::Find_Matching_Wind_Mesh_Index_And_Write_Bool(const struct FVector& Wind_location, bool* Storm_Cyl_Mesh_Match, int32* Wind_Cyl_Mesh_Array_Match_Index, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "Find Matching Wind Mesh Index And Write Bool");

	Params::AWindManager_C_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Params Parms{};

	Parms.Wind_location = Wind_location;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Storm_Cyl_Mesh_Match != nullptr)
		*Storm_Cyl_Mesh_Match = Parms.Storm_Cyl_Mesh_Match;

	if (Wind_Cyl_Mesh_Array_Match_Index != nullptr)
		*Wind_Cyl_Mesh_Array_Match_Index = Parms.Wind_Cyl_Mesh_Array_Match_Index;

}


// Function WindManager.WindManager_C.SetWindMatVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_AnimatedCylinderCenter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     AnimatedCylinderCenter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Animating_Wind_Magnitude                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Animating_Wind_Magnitude                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Static_Wind_Magnitude                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Static_Wind_Magnitude                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_CylinderCenter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CylinderCenter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_WindVector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     WindVector                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_WindCrossVector                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     WindCrossVector                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_OverallOuterRadius                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              OverallOuterRadius                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_OverallInnerRadius                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              OverallInnerRadius                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Wind_Still_0_or_Animating_1                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Wind_Still_0_or_Animating_1                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Circular_Shader_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Circular_Shader_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set_AnimatedCylinderCenter, const struct FVector& AnimatedCylinderCenter, bool Set_Animating_Wind_Magnitude, float Animating_Wind_Magnitude, bool Set_Static_Wind_Magnitude, float Static_Wind_Magnitude, bool Set_CylinderCenter, const struct FVector& CylinderCenter, bool Set_WindVector, const struct FVector& WindVector, bool Set_WindCrossVector, const struct FVector& WindCrossVector, bool Set_OverallOuterRadius, float OverallOuterRadius, bool Set_OverallInnerRadius, float OverallInnerRadius, bool Set_Wind_Still_0_or_Animating_1, float Wind_Still_0_or_Animating_1, bool Set_Circular_Shader_, float Circular_Shader_, bool* NewParam, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue_7, class FName CallFunc_MakeLiteralName_ReturnValue_8, class FName CallFunc_MakeLiteralName_ReturnValue_9, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "SetWindMatVariables");

	Params::AWindManager_C_SetWindMatVariables_Params Parms{};

	Parms.Mid = Mid;
	Parms.Set_AnimatedCylinderCenter = Set_AnimatedCylinderCenter;
	Parms.AnimatedCylinderCenter = AnimatedCylinderCenter;
	Parms.Set_Animating_Wind_Magnitude = Set_Animating_Wind_Magnitude;
	Parms.Animating_Wind_Magnitude = Animating_Wind_Magnitude;
	Parms.Set_Static_Wind_Magnitude = Set_Static_Wind_Magnitude;
	Parms.Static_Wind_Magnitude = Static_Wind_Magnitude;
	Parms.Set_CylinderCenter = Set_CylinderCenter;
	Parms.CylinderCenter = CylinderCenter;
	Parms.Set_WindVector = Set_WindVector;
	Parms.WindVector = WindVector;
	Parms.Set_WindCrossVector = Set_WindCrossVector;
	Parms.WindCrossVector = WindCrossVector;
	Parms.Set_OverallOuterRadius = Set_OverallOuterRadius;
	Parms.OverallOuterRadius = OverallOuterRadius;
	Parms.Set_OverallInnerRadius = Set_OverallInnerRadius;
	Parms.OverallInnerRadius = OverallInnerRadius;
	Parms.Set_Wind_Still_0_or_Animating_1 = Set_Wind_Still_0_or_Animating_1;
	Parms.Wind_Still_0_or_Animating_1 = Wind_Still_0_or_Animating_1;
	Parms.Set_Circular_Shader_ = Set_Circular_Shader_;
	Parms.Circular_Shader_ = Circular_Shader_;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_MakeLiteralName_ReturnValue_4 = CallFunc_MakeLiteralName_ReturnValue_4;
	Parms.CallFunc_MakeLiteralName_ReturnValue_5 = CallFunc_MakeLiteralName_ReturnValue_5;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_6 = CallFunc_MakeLiteralName_ReturnValue_6;
	Parms.CallFunc_MakeLiteralName_ReturnValue_7 = CallFunc_MakeLiteralName_ReturnValue_7;
	Parms.CallFunc_MakeLiteralName_ReturnValue_8 = CallFunc_MakeLiteralName_ReturnValue_8;
	Parms.CallFunc_MakeLiteralName_ReturnValue_9 = CallFunc_MakeLiteralName_ReturnValue_9;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_3 = CallFunc_Conv_VectorToLinearColor_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WindManager.WindManager_C.UpdateWindDeltaCyl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Static_Cylinder_Outer_Radius                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Wind_Circular_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::UpdateWindDeltaCyl(float Static_Cylinder_Outer_Radius, float Duration, class UMaterialInstanceDynamic* Mid, bool Is_Wind_Circular_, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, float K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "UpdateWindDeltaCyl");

	Params::AWindManager_C_UpdateWindDeltaCyl_Params Parms{};

	Parms.Static_Cylinder_Outer_Radius = Static_Cylinder_Outer_Radius;
	Parms.Duration = Duration;
	Parms.Mid = Mid;
	Parms.Is_Wind_Circular_ = Is_Wind_Circular_;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.RemoveWindCylinder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder    WindImpulseCylinder                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UStaticMeshComponent*        CurrentStormCylinder                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWindManager_C::RemoveWindCylinder(struct FFortWindImpulseCylinder& WindImpulseCylinder, class UStaticMeshComponent* CurrentStormCylinder, bool Temp_bool_True_if_break_was_hit_Variable, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "RemoveWindCylinder");

	Params::AWindManager_C_RemoveWindCylinder_Params Parms{};

	Parms.WindImpulseCylinder = WindImpulseCylinder;
	Parms.CurrentStormCylinder = CurrentStormCylinder;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation = CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude = CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.UpdateStormWindCylinder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder    Wind_Impulse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortWindImpulseCylinderDeltaWind_Delta                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBox                        CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBox                        CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortWindImpulseHandle      CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify (NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetWindMatVariables_NewParam                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetWindMatVariables_NewParam_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWindManager_C::UpdateStormWindCylinder(const struct FFortWindImpulseCylinder& Wind_Impulse, const struct FFortWindImpulseCylinderDelta& Wind_Delta, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter, bool CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized, bool CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds, const struct FFortWindImpulseHandle& CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match, int32 CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_SetWindMatVariables_NewParam, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetWindMatVariables_NewParam_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "UpdateStormWindCylinder");

	Params::AWindManager_C_UpdateStormWindCylinder_Params Parms{};

	Parms.Wind_Impulse = Wind_Impulse;
	Parms.Wind_Delta = Wind_Delta;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized = CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward = CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds = CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify = CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation = CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude = CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match = CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match;
	Parms.CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index = CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_SetWindMatVariables_NewParam = CallFunc_SetWindMatVariables_NewParam;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetWindMatVariables_NewParam_1 = CallFunc_SetWindMatVariables_NewParam_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Calculate Camera Position
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*    Scene_Capture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AWindManager_C::Calculate_Camera_Position(float Scale, class USceneCaptureComponent2D* Scene_Capture, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, int32 CallFunc_FCeil_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "Calculate Camera Position");

	Params::AWindManager_C_Calculate_Camera_Position_Params Parms{};

	Parms.Scale = Scale;
	Parms.Scene_Capture = Scene_Capture;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_VectorVector_ReturnValue = CallFunc_Divide_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorFloat_ReturnValue = CallFunc_Subtract_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue_1 = CallFunc_FCeil_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_FCeil_ReturnValue_2 = CallFunc_FCeil_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WindManager.WindManager_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::UserConstructionScript(const struct FTransform& Temp_struct_Variable, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "UserConstructionScript");

	Params::AWindManager_C_UserConstructionScript_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.OnWindImpulseCylinderDeath
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder    WindImpulseCylinder                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AWindManager_C::OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder& WindImpulseCylinder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "OnWindImpulseCylinderDeath");

	Params::AWindManager_C_OnWindImpulseCylinderDeath_Params Parms{};

	Parms.WindImpulseCylinder = WindImpulseCylinder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder    WindImpulseCylinder                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AWindManager_C::OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder& WindImpulseCylinder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "OnWindImpulseCylinderDeltaComplete");

	Params::AWindManager_C_OnWindImpulseCylinderDeltaComplete_Params Parms{};

	Parms.WindImpulseCylinder = WindImpulseCylinder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.OnWindImpulseCylinderCreation
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder    WindImpulseCylinder                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FFortWindImpulseCylinderDeltaWindImpulseCylinderDelta                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AWindManager_C::OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder& WindImpulseCylinder, struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "OnWindImpulseCylinderCreation");

	Params::AWindManager_C_OnWindImpulseCylinderCreation_Params Parms{};

	Parms.WindImpulseCylinder = WindImpulseCylinder;
	Parms.WindImpulseCylinderDelta = WindImpulseCylinderDelta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.SpawnTestWind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ImpulseMagnitude                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::SpawnTestWind(float Radius, float ImpulseMagnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "SpawnTestWind");

	Params::AWindManager_C_SpawnTestWind_Params Parms{};

	Parms.Radius = Radius;
	Parms.ImpulseMagnitude = ImpulseMagnitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Play Water Splash Particle System At Location
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Particle_Transform                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AWindManager_C::Play_Water_Splash_Particle_System_At_Location(const struct FTransform& Particle_Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "Play Water Splash Particle System At Location");

	Params::AWindManager_C_Play_Water_Splash_Particle_System_At_Location_Params Parms{};

	Parms.Particle_Transform = Particle_Transform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.AddWindParticleSystemComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    ParticleSystemComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::AddWindParticleSystemComponent(class UParticleSystemComponent* ParticleSystemComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "AddWindParticleSystemComponent");

	Params::AWindManager_C_AddWindParticleSystemComponent_Params Parms{};

	Parms.ParticleSystemComponent = ParticleSystemComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Register player for render to texture purposes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Effect_Water_Interaction_FX                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         Gameplay_Wind_INteraction_Effects                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::Register_player_for_render_to_texture_purposes(class UPrimitiveComponent* Effect_Water_Interaction_FX, class UPrimitiveComponent* Gameplay_Wind_INteraction_Effects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "Register player for render to texture purposes");

	Params::AWindManager_C_Register_player_for_render_to_texture_purposes_Params Parms{};

	Parms.Effect_Water_Interaction_FX = Effect_Water_Interaction_FX;
	Parms.Gameplay_Wind_INteraction_Effects = Gameplay_Wind_INteraction_Effects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Add Wind Component
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::Add_Wind_Component(class UPrimitiveComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "Add Wind Component");

	Params::AWindManager_C_Add_Wind_Component_Params Parms{};

	Parms.InComponent = InComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWindManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WindManager.WindManager_C.Update Test
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMagnitude                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::Update_Test(float NewMagnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "Update Test");

	Params::AWindManager_C_Update_Test_Params Parms{};

	Parms.NewMagnitude = NewMagnitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Add Render To Texture Particle
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  InTransform                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void AWindManager_C::Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "Add Render To Texture Particle");

	Params::AWindManager_C_Add_Render_To_Texture_Particle_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.InTransform = InTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.ExecuteUbergraph_WindManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_Particle_Transform                            (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    K2Node_Event_ParticleSystemComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_Effect_Water_Interaction_FX                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_Gameplay_Wind_INteraction_Effects             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_InComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewMagnitude                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_CustomEvent_EmitterTemplate                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_InTransform                                   (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ImpulseMagnitude                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortWindImpulseCylinder    K2Node_Event_WindImpulseCylinder                                 (ConstParm, NoDestructor)
// struct FFortWindImpulseCylinderDeltaK2Node_Event_WindImpulseCylinderDelta                            (ConstParm, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortWindImpulseCylinder    CallFunc_MakeWindImpulseCylinder_ReturnValue                     (NoDestructor)
// struct FFortWindImpulseHandle      CallFunc_AddWindImpulseCylinder_ReturnValue                      (NoDestructor)
// struct FFortWindImpulseCylinder    K2Node_Event_WindImpulseCylinder_1                               (ConstParm, NoDestructor)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortWindImpulseCylinder    K2Node_Event_WindImpulseCylinder_2                               (ConstParm, NoDestructor)
// bool                               CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::ExecuteUbergraph_WindManager(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& K2Node_CustomEvent_Particle_Transform, class UParticleSystemComponent* K2Node_Event_ParticleSystemComponent, class UPrimitiveComponent* K2Node_CustomEvent_Effect_Water_Interaction_FX, class UPrimitiveComponent* K2Node_CustomEvent_Gameplay_Wind_INteraction_Effects, float CallFunc_MakeLiteralFloat_ReturnValue, class UPrimitiveComponent* K2Node_CustomEvent_InComponent, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float K2Node_CustomEvent_NewMagnitude, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate, const struct FTransform& K2Node_CustomEvent_InTransform, bool CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, float K2Node_CustomEvent_Radius, float K2Node_CustomEvent_ImpulseMagnitude, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder, const struct FFortWindImpulseCylinderDelta& K2Node_Event_WindImpulseCylinderDelta, float CallFunc_Add_FloatFloat_ReturnValue, const struct FFortWindImpulseCylinder& CallFunc_MakeWindImpulseCylinder_ReturnValue, const struct FFortWindImpulseHandle& CallFunc_AddWindImpulseCylinder_ReturnValue, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder_1, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder_2, bool CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match, int32 CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index, class UStaticMeshComponent* CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetScalarParameterValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindManager_C", "ExecuteUbergraph_WindManager");

	Params::AWindManager_C_ExecuteUbergraph_WindManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_CustomEvent_Particle_Transform = K2Node_CustomEvent_Particle_Transform;
	Parms.K2Node_Event_ParticleSystemComponent = K2Node_Event_ParticleSystemComponent;
	Parms.K2Node_CustomEvent_Effect_Water_Interaction_FX = K2Node_CustomEvent_Effect_Water_Interaction_FX;
	Parms.K2Node_CustomEvent_Gameplay_Wind_INteraction_Effects = K2Node_CustomEvent_Gameplay_Wind_INteraction_Effects;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.K2Node_CustomEvent_InComponent = K2Node_CustomEvent_InComponent;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewMagnitude = K2Node_CustomEvent_NewMagnitude;
	Parms.K2Node_CustomEvent_EmitterTemplate = K2Node_CustomEvent_EmitterTemplate;
	Parms.K2Node_CustomEvent_InTransform = K2Node_CustomEvent_InTransform;
	Parms.CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue = CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.K2Node_CustomEvent_Radius = K2Node_CustomEvent_Radius;
	Parms.K2Node_CustomEvent_ImpulseMagnitude = K2Node_CustomEvent_ImpulseMagnitude;
	Parms.K2Node_Event_WindImpulseCylinder = K2Node_Event_WindImpulseCylinder;
	Parms.K2Node_Event_WindImpulseCylinderDelta = K2Node_Event_WindImpulseCylinderDelta;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeWindImpulseCylinder_ReturnValue = CallFunc_MakeWindImpulseCylinder_ReturnValue;
	Parms.CallFunc_AddWindImpulseCylinder_ReturnValue = CallFunc_AddWindImpulseCylinder_ReturnValue;
	Parms.K2Node_Event_WindImpulseCylinder_1 = K2Node_Event_WindImpulseCylinder_1;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation = CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude = CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending;
	Parms.K2Node_Event_WindImpulseCylinder_2 = K2Node_Event_WindImpulseCylinder_2;
	Parms.CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match = CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match;
	Parms.CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index = CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


