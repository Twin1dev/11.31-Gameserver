#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Niagara.NiagaraComponent.SetVariableVec4
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableVec4(class FName InVariableName, struct FVector4& InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableVec4");

	Params::UNiagaraComponent_SetVariableVec4_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableVec3(class FName InVariableName, const struct FVector& InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableVec3");

	Params::UNiagaraComponent_SetVariableVec3_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableVec2(class FName InVariableName, const struct FVector2D& InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableVec2");

	Params::UNiagaraComponent_SetVariableVec2_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableQuat(class FName InVariableName, struct FQuat& InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableQuat");

	Params::UNiagaraComponent_SetVariableQuat_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableObject(class FName InVariableName, class UObject* Object)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableObject");

	Params::UNiagaraComponent_SetVariableObject_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableMaterial(class FName InVariableName, class UMaterialInterface* Object)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableMaterial");

	Params::UNiagaraComponent_SetVariableMaterial_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableLinearColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableLinearColor(class FName InVariableName, struct FLinearColor& InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableLinearColor");

	Params::UNiagaraComponent_SetVariableLinearColor_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableInt(class FName InVariableName, int32 InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableInt");

	Params::UNiagaraComponent_SetVariableInt_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableFloat(class FName InVariableName, float InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableFloat");

	Params::UNiagaraComponent_SetVariableFloat_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableBool(class FName InVariableName, bool InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableBool");

	Params::UNiagaraComponent_SetVariableBool_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableActor(class FName InVariableName, class AActor* Actor)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetVariableActor");

	Params::UNiagaraComponent_SetVariableActor_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSeekDelta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetSeekDelta");

	Params::UNiagaraComponent_SetSeekDelta_Params Parms;

	Parms.InSeekDelta = InSeekDelta;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInRenderingEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetRenderingEnabled");

	Params::UNiagaraComponent_SetRenderingEnabled_Params Parms;

	Parms.bInRenderingEnabled = bInRenderingEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnablePreviewLODDistance                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PreviewLODDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetPreviewLODDistance");

	Params::UNiagaraComponent_SetPreviewLODDistance_Params Parms;

	Parms.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	Parms.PreviewLODDistance = PreviewLODDistance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetPreviewDetailLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnablePreviewDetailLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PreviewDetailLevel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetPreviewDetailLevel(bool bEnablePreviewDetailLevel, int32 PreviewDetailLevel)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetPreviewDetailLevel");

	Params::UNiagaraComponent_SetPreviewDetailLevel_Params Parms;

	Parms.bEnablePreviewDetailLevel = bEnablePreviewDetailLevel;
	Parms.PreviewDetailLevel = PreviewDetailLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInPaused                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetPaused(bool bInPaused)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetPaused");

	Params::UNiagaraComponent_SetPaused_Params Parms;

	Parms.bInPaused = bInPaused;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec4(const class FString& InVariableName, struct FVector4& InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec4");

	Params::UNiagaraComponent_SetNiagaraVariableVec4_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec3");

	Params::UNiagaraComponent_SetNiagaraVariableVec3_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec2");

	Params::UNiagaraComponent_SetNiagaraVariableVec2_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableQuat(const class FString& InVariableName, struct FQuat& InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableQuat");

	Params::UNiagaraComponent_SetNiagaraVariableQuat_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableObject");

	Params::UNiagaraComponent_SetNiagaraVariableObject_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableLinearColor(const class FString& InVariableName, struct FLinearColor& InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableLinearColor");

	Params::UNiagaraComponent_SetNiagaraVariableLinearColor_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableInt(const class FString& InVariableName, int32 InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableInt");

	Params::UNiagaraComponent_SetNiagaraVariableInt_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableFloat(const class FString& InVariableName, float InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableFloat");

	Params::UNiagaraComponent_SetNiagaraVariableFloat_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableBool(const class FString& InVariableName, bool InValue)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableBool");

	Params::UNiagaraComponent_SetNiagaraVariableBool_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableActor");

	Params::UNiagaraComponent_SetNiagaraVariableActor_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetMaxSimTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetMaxSimTime");

	Params::UNiagaraComponent_SetMaxSimTime_Params Parms;

	Parms.InMaxTime = InMaxTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetForceSolo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInForceSolo                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetForceSolo");

	Params::UNiagaraComponent_SetForceSolo_Params Parms;

	Parms.bInForceSolo = bInForceSolo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDesiredAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetDesiredAge");

	Params::UNiagaraComponent_SetDesiredAge_Params Parms;

	Parms.InDesiredAge = InDesiredAge;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanRenderWhileSeeking                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetCanRenderWhileSeeking");

	Params::UNiagaraComponent_SetCanRenderWhileSeeking_Params Parms;

	Parms.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetAutoDestroy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAutoDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetAutoDestroy");

	Params::UNiagaraComponent_SetAutoDestroy_Params Parms;

	Parms.bInAutoDestroy = bInAutoDestroy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              InAsset                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetAsset");

	Params::UNiagaraComponent_SetAsset_Params Parms;

	Parms.InAsset = InAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENiagaraAgeUpdateMode   InAgeUpdateMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SetAgeUpdateMode");

	Params::UNiagaraComponent_SetAgeUpdateMode_Params Parms;

	Parms.InAgeUpdateMode = InAgeUpdateMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SeekToDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDesiredAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "SeekToDesiredAge");

	Params::UNiagaraComponent_SeekToDesiredAge_Params Parms;

	Parms.InDesiredAge = InDesiredAge;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.ResetSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::ResetSystem()
{
	static auto Func = Class->GetFunction("NiagaraComponent", "ResetSystem");

	Params::UNiagaraComponent_ResetSystem_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.ReinitializeSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::ReinitializeSystem()
{
	static auto Func = Class->GetFunction("NiagaraComponent", "ReinitializeSystem");

	Params::UNiagaraComponent_ReinitializeSystem_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::IsPaused()
{
	static auto Func = Class->GetFunction("NiagaraComponent", "IsPaused");

	Params::UNiagaraComponent_IsPaused_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetSeekDelta()
{
	static auto Func = Class->GetFunction("NiagaraComponent", "GetSeekDelta");

	Params::UNiagaraComponent_GetSeekDelta_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValueName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticleValueVec3_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params Parms;

	Parms.InEmitterName = InEmitterName;
	Parms.InValueName = InValueName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValueName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticleValues_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params Parms;

	Parms.InEmitterName = InEmitterName;
	Parms.InValueName = InValueName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticlePositions_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params Parms;

	Parms.InEmitterName = InEmitterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetMaxSimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetMaxSimTime()
{
	static auto Func = Class->GetFunction("NiagaraComponent", "GetMaxSimTime");

	Params::UNiagaraComponent_GetMaxSimTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetForceSolo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::GetForceSolo()
{
	static auto Func = Class->GetFunction("NiagaraComponent", "GetForceSolo");

	Params::UNiagaraComponent_GetForceSolo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetDesiredAge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetDesiredAge()
{
	static auto Func = Class->GetFunction("NiagaraComponent", "GetDesiredAge");

	Params::UNiagaraComponent_GetDesiredAge_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetDataInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraDataInterface*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(const class FString& Name)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "GetDataInterface");

	Params::UNiagaraComponent_GetDataInterface_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraSystem*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraSystem* UNiagaraComponent::GetAsset()
{
	static auto Func = Class->GetFunction("NiagaraComponent", "GetAsset");

	Params::UNiagaraComponent_GetAsset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENiagaraAgeUpdateMode   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
	static auto Func = Class->GetFunction("NiagaraComponent", "GetAgeUpdateMode");

	Params::UNiagaraComponent_GetAgeUpdateMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SimulateTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TickDeltaSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "AdvanceSimulationByTime");

	Params::UNiagaraComponent_AdvanceSimulationByTime_Params Parms;

	Parms.SimulateTime = SimulateTime;
	Parms.TickDeltaSeconds = TickDeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.AdvanceSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TickCount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TickDeltaSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::AdvanceSimulation(int32 TickCount, float TickDeltaSeconds)
{
	static auto Func = Class->GetFunction("NiagaraComponent", "AdvanceSimulation");

	Params::UNiagaraComponent_AdvanceSimulation_Params Parms;

	Parms.TickCount = TickCount;
	Parms.TickDeltaSeconds = TickDeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FBasicParticleData>  Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UNiagaraSystem*              NiagaraSystem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void INiagaraParticleCallbackHandler::ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem)
{
	static auto Func = Class->GetFunction("NiagaraParticleCallbackHandler", "ReceiveParticleData");

	Params::INiagaraParticleCallbackHandler_ReceiveParticleData_Params Parms;

	Parms.Data = Data;
	Parms.NiagaraSystem = NiagaraSystem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeX                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeY                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY)
{
	static auto Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "GetTextureSize");

	Params::UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params Parms;

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeX                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeY                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY)
{
	static auto Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "GetRawTextureSize");

	Params::UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params Parms;

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
// (Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      Dest                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttributeIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex)
{
	static auto Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "FillTexture2D");

	Params::UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params Parms;

	Parms.Component = Component;
	Parms.Dest = Dest;
	Parms.AttributeIndex = AttributeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      Dest                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TilesX                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TilesY                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32* TilesX, int32* TilesY)
{
	static auto Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "FillRawTexture2D");

	Params::UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params Parms;

	Parms.Component = Component;
	Parms.Dest = Dest;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TilesX != nullptr)
		*TilesX = Parms.TilesX;

	if (TilesY != nullptr)
		*TilesY = Parms.TilesY;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              SystemTemplate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoActivate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ENCPoolMethod           PoolingMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod)
{
	static auto Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAttached");

	Params::UNiagaraFunctionLibrary_SpawnSystemAttached_Params Parms;

	Parms.SystemTemplate = SystemTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.LocationType = LocationType;
	Parms.bAutoDestroy = bAutoDestroy;
	Parms.bAutoActivate = bAutoActivate;
	Parms.PoolingMethod = PoolingMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraSystem*              SystemTemplate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoActivate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ENCPoolMethod           PoolingMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod)
{
	static auto Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAtLocation");

	Params::UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SystemTemplate = SystemTemplate;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Scale = Scale;
	Parms.bAutoDestroy = bAutoDestroy;
	Parms.bAutoActivate = bAutoActivate;
	Parms.PoolingMethod = PoolingMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*        StaticMeshComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent)
{
	static auto Func = Class->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableStaticMeshComponent");

	Params::UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params Parms;

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.StaticMeshComponent = StaticMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 StaticMesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh)
{
	static auto Func = Class->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableStaticMesh");

	Params::UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params Parms;

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.StaticMesh = StaticMesh;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto Func = Class->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableSkeletalMeshComponent");

	Params::UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params Parms;

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollection* Collection                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollectionInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
{
	static auto Func = Class->GetFunction("NiagaraFunctionLibrary", "GetNiagaraParameterCollection");

	Params::UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Collection = Collection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVectorParameter");

	Params::UNiagaraParameterCollectionInstance_SetVectorParameter_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVector4Parameter(const class FString& InVariableName, struct FVector4& InValue)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVector4Parameter");

	Params::UNiagaraParameterCollectionInstance_SetVector4Parameter_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVector2DParameter");

	Params::UNiagaraParameterCollectionInstance_SetVector2DParameter_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetQuatParameter(const class FString& InVariableName, struct FQuat& InValue)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetQuatParameter");

	Params::UNiagaraParameterCollectionInstance_SetQuatParameter_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetIntParameter(const class FString& InVariableName, int32 InValue)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetIntParameter");

	Params::UNiagaraParameterCollectionInstance_SetIntParameter_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetFloatParameter(const class FString& InVariableName, float InValue)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetFloatParameter");

	Params::UNiagaraParameterCollectionInstance_SetFloatParameter_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetColorParameter");

	Params::UNiagaraParameterCollectionInstance_SetColorParameter_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetBoolParameter(const class FString& InVariableName, bool InValue)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetBoolParameter");

	Params::UNiagaraParameterCollectionInstance_SetBoolParameter_Params Parms;

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const class FString& InVariableName)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVectorParameter");

	Params::UNiagaraParameterCollectionInstance_GetVectorParameter_Params Parms;

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const class FString& InVariableName)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVector4Parameter");

	Params::UNiagaraParameterCollectionInstance_GetVector4Parameter_Params Parms;

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const class FString& InVariableName)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVector2DParameter");

	Params::UNiagaraParameterCollectionInstance_GetVector2DParameter_Params Parms;

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const class FString& InVariableName)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetQuatParameter");

	Params::UNiagaraParameterCollectionInstance_GetQuatParameter_Params Parms;

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraParameterCollectionInstance::GetIntParameter(const class FString& InVariableName)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetIntParameter");

	Params::UNiagaraParameterCollectionInstance_GetIntParameter_Params Parms;

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraParameterCollectionInstance::GetFloatParameter(const class FString& InVariableName)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetFloatParameter");

	Params::UNiagaraParameterCollectionInstance_GetFloatParameter_Params Parms;

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const class FString& InVariableName)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetColorParameter");

	Params::UNiagaraParameterCollectionInstance_GetColorParameter_Params Parms;

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraParameterCollectionInstance::GetBoolParameter(const class FString& InVariableName)
{
	static auto Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetBoolParameter");

	Params::UNiagaraParameterCollectionInstance_GetBoolParameter_Params Parms;

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraPreviewBase.SetSystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              InSystem                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANiagaraPreviewBase::SetSystem(class UNiagaraSystem* InSystem)
{
	static auto Func = Class->GetFunction("NiagaraPreviewBase", "SetSystem");

	Params::ANiagaraPreviewBase_SetSystem_Params Parms;

	Parms.InSystem = InSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Niagara.NiagaraPreviewBase.SetLabelText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InXAxisText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        InYAxisText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ANiagaraPreviewBase::SetLabelText(class FText& InXAxisText, class FText& InYAxisText)
{
	static auto Func = Class->GetFunction("NiagaraPreviewBase", "SetLabelText");

	Params::ANiagaraPreviewBase_SetLabelText_Params Parms;

	Parms.InXAxisText = InXAxisText;
	Parms.InYAxisText = InYAxisText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Niagara.NiagaraPreviewAxis.Num
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraPreviewAxis::Num()
{
	static auto Func = Class->GetFunction("NiagaraPreviewAxis", "Num");

	Params::UNiagaraPreviewAxis_Num_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           PreviewComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PreviewIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsXAxis                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutLabelText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraPreviewAxis::ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, class FString* OutLabelText)
{
	static auto Func = Class->GetFunction("NiagaraPreviewAxis", "ApplyToPreview");

	Params::UNiagaraPreviewAxis_ApplyToPreview_Params Parms;

	Parms.PreviewComponent = PreviewComponent;
	Parms.PreviewIndex = PreviewIndex;
	Parms.bIsXAxis = bIsXAxis;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLabelText != nullptr)
		*OutLabelText = Parms.OutLabelText;

}


// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ANiagaraPreviewGrid::DeactivatePreviews()
{
	static auto Func = Class->GetFunction("NiagaraPreviewGrid", "DeactivatePreviews");

	Params::ANiagaraPreviewGrid_DeactivatePreviews_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANiagaraPreviewGrid::ActivatePreviews(bool bReset)
{
	static auto Func = Class->GetFunction("NiagaraPreviewGrid", "ActivatePreviews");

	Params::ANiagaraPreviewGrid_ActivatePreviews_Params Parms;

	Parms.bReset = bReset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraScript.OnCompilationComplete
// (Final, Native, Public)
// Parameters:

void UNiagaraScript::OnCompilationComplete()
{
	static auto Func = Class->GetFunction("NiagaraScript", "OnCompilationComplete");

	Params::UNiagaraScript_OnCompilationComplete_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
