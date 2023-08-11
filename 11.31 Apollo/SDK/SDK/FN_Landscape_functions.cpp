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


// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(class FName ParameterName, const struct FLinearColor& Value)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "SetLandscapeMaterialVectorParameterValue");

	Params::ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params Parms;

	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(class FName ParameterName, class UTexture* Value)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "SetLandscapeMaterialTextureParameterValue");

	Params::ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params Parms;

	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(class FName ParameterName, float Value)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "SetLandscapeMaterialScalarParameterValue");

	Params::ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params Parms;

	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          NewLandscapeMaterial                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "EditorSetLandscapeMaterial");

	Params::ALandscapeProxy_EditorSetLandscapeMaterial_Params Parms;

	Parms.NewLandscapeMaterial = NewLandscapeMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*            InSplineComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndWidth                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartSideFalloff                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndSideFalloff                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartRoll                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndRoll                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumSubdivisions                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRaiseHeights                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLowerHeights                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULandscapeLayerInfoObject*   PaintLayer                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "EditorApplySpline");

	Params::ALandscapeProxy_EditorApplySpline_Params Parms;

	Parms.InSplineComponent = InSplineComponent;
	Parms.StartWidth = StartWidth;
	Parms.EndWidth = EndWidth;
	Parms.StartSideFalloff = StartSideFalloff;
	Parms.EndSideFalloff = EndSideFalloff;
	Parms.StartRoll = StartRoll;
	Parms.EndRoll = EndRoll;
	Parms.NumSubdivisions = NumSubdivisions;
	Parms.bRaiseHeights = bRaiseHeights;
	Parms.bLowerHeights = bLowerHeights;
	Parms.PaintLayer = PaintLayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               InComponentScreenSizeToUseSubSections                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "ChangeUseTessellationComponentScreenSizeFalloff");

	Params::ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params Parms;

	Parms.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InUseTessellationComponentScreenSizeFalloff                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "ChangeTessellationComponentScreenSizeFalloff");

	Params::ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params Parms;

	Parms.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InTessellationComponentScreenSize                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "ChangeTessellationComponentScreenSize");

	Params::ALandscapeProxy_ChangeTessellationComponentScreenSize_Params Parms;

	Parms.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InLODDistanceFactor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "ChangeLODDistanceFactor");

	Params::ALandscapeProxy_ChangeLODDistanceFactor_Params Parms;

	Parms.InLODDistanceFactor = InLODDistanceFactor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InComponentScreenSizeToUseSubSections                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "ChangeComponentScreenSizeToUseSubSections");

	Params::ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params Parms;

	Parms.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALandscapeBlueprintBrushBase::RequestLandscapeUpdate()
{
	static auto Func = Class->GetFunction("LandscapeBlueprintBrushBase", "RequestLandscapeUpdate");

	Params::ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeBlueprintBrushBase.Render
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               InIsHeightmap                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      InCombinedResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, class FName& InWeightmapLayerName)
{
	static auto Func = Class->GetFunction("LandscapeBlueprintBrushBase", "Render");

	Params::ALandscapeBlueprintBrushBase_Render_Params Parms;

	Parms.InIsHeightmap = InIsHeightmap;
	Parms.InCombinedResult = InCombinedResult;
	Parms.InWeightmapLayerName = InWeightmapLayerName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeBlueprintBrushBase.Initialize
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform                  InLandscapeTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FIntPoint                   InLandscapeSize                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint                   InLandscapeRenderTargetSize                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeBlueprintBrushBase::Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize)
{
	static auto Func = Class->GetFunction("LandscapeBlueprintBrushBase", "Initialize");

	Params::ALandscapeBlueprintBrushBase_Initialize_Params Parms;

	Parms.InLandscapeTransform = InLandscapeTransform;
	Parms.InLandscapeSize = InLandscapeSize;
	Parms.InLandscapeRenderTargetSize = InLandscapeRenderTargetSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>          OutStreamableAssets                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(TArray<class UTexture2D*>* OutStreamableAssets)
{
	static auto Func = Class->GetFunction("LandscapeBlueprintBrushBase", "GetBlueprintRenderDependencies");

	Params::ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (OutStreamableAssets != nullptr)
		*OutStreamableAssets = Parms.OutStreamableAssets;

}


// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int32 InIndex)
{
	static auto Func = Class->GetFunction("LandscapeComponent", "GetMaterialInstanceDynamic");

	Params::ULandscapeComponent_GetMaterialInstanceDynamic_Params Parms;

	Parms.InIndex = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InLocation                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InPaintLayerName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, class FName InPaintLayerName)
{
	static auto Func = Class->GetFunction("LandscapeComponent", "EditorGetPaintLayerWeightByNameAtLocation");

	Params::ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params Parms;

	Parms.InLocation = InLocation;
	Parms.InPaintLayerName = InPaintLayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InLocation                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULandscapeLayerInfoObject*   PaintLayer                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer)
{
	static auto Func = Class->GetFunction("LandscapeComponent", "EditorGetPaintLayerWeightAtLocation");

	Params::ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params Parms;

	Parms.InLocation = InLocation;
	Parms.PaintLayer = PaintLayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULandscapeComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent()
{
	static auto Func = Class->GetFunction("LandscapeHeightfieldCollisionComponent", "GetRenderComponent");

	Params::ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class USplineMeshComponent*>ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
{
	static auto Func = Class->GetFunction("LandscapeSplinesComponent", "GetSplineMeshComponents");

	Params::ULandscapeSplinesComponent_GetSplineMeshComponents_Params Parms;


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
