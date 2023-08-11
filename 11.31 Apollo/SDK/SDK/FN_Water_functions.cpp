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


// Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWaterBody*                  WaterBody                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraWaterFunctionLibrary::SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody)
{
	static auto Func = Class->GetFunction("NiagaraWaterFunctionLibrary", "SetWaterBody");

	Params::UNiagaraWaterFunctionLibrary_SetWaterBody_Params Parms;

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.WaterBody = WaterBody;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterBody.OnWaterBodyFinishedUpdating
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaterBody::OnWaterBodyFinishedUpdating()
{
	static auto Func = Class->GetFunction("WaterBody", "OnWaterBodyFinishedUpdating");

	Params::AWaterBody_OnWaterBodyFinishedUpdating_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Water.WaterBody.OnWaterBodyChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShapeOrPositionChanged                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWeightmapSettingsChanged                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static auto Func = Class->GetFunction("WaterBody", "OnWaterBodyChanged");

	Params::AWaterBody_OnWaterBodyChanged_Params Parms;

	Parms.bShapeOrPositionChanged = bShapeOrPositionChanged;
	Parms.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterBody.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterSplineComponent* AWaterBody::GetWaterSpline()
{
	static auto Func = Class->GetFunction("WaterBody", "GetWaterSpline");

	Params::AWaterBody_GetWaterSpline_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterMeshComponents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UStaticMeshComponent*>ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UStaticMeshComponent*> AWaterBody::GetWaterMeshComponents()
{
	static auto Func = Class->GetFunction("WaterBody", "GetWaterMeshComponents");

	Params::AWaterBody_GetWaterMeshComponents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBody", "GetWaterMaterialInstance");

	Params::AWaterBody_GetWaterMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBody", "GetRiverToOceanTransitionMaterialInstance");

	Params::AWaterBody_GetRiverToOceanTransitionMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBody", "GetRiverToLakeTransitionMaterialInstance");

	Params::AWaterBody_GetRiverToLakeTransitionMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetIslands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyIsland*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AWaterBodyIsland*> AWaterBody::GetIslands()
{
	static auto Func = Class->GetFunction("WaterBody", "GetIslands");

	Params::AWaterBody_GetIslands_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyIsland.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline()
{
	static auto Func = Class->GetFunction("WaterBodyIsland", "GetWaterSpline");

	Params::AWaterBodyIsland_GetWaterSpline_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterMeshComponent.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterMeshComponent::IsEnabled()
{
	static auto Func = Class->GetFunction("WaterMeshComponent", "IsEnabled");

	Params::UWaterMeshComponent_IsEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.PrintToWaterLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWarning                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterSubsystem::PrintToWaterLog(const class FString& Message, bool bWarning)
{
	static auto Func = Class->GetFunction("WaterSubsystem", "PrintToWaterLog");

	Params::UWaterSubsystem_PrintToWaterLog_Params Parms;

	Parms.Message = Message;
	Parms.bWarning = bWarning;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterSubsystem.IsWaterRenderingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsWaterRenderingEnabled()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "IsWaterRenderingEnabled");

	Params::UWaterSubsystem_IsWaterRenderingEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsUnderwaterPostProcessEnabled()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "IsUnderwaterPostProcessEnabled");

	Params::UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsShallowWaterSimulationEnabled()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "IsShallowWaterSimulationEnabled");

	Params::UWaterSubsystem_IsShallowWaterSimulationEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetSmoothedWorldTimeSeconds()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetSmoothedWorldTimeSeconds");

	Params::UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterSimulationRenderTargetSize()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterSimulationRenderTargetSize");

	Params::UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterMaxImpulseForces()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterMaxImpulseForces");

	Params::UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterMaxDynamicForces()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterMaxDynamicForces");

	Params::UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetCameraUnderwaterDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetCameraUnderwaterDepth()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetCameraUnderwaterDepth");

	Params::UWaterSubsystem_GetCameraUnderwaterDepth_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
