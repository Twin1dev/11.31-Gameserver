#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ClothingSystemRuntimeNv.ClothConfigNv
// (None)

class UClass* UClothConfigNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothConfigNv");

	return Clss;
}


// ClothConfigNv ClothingSystemRuntimeNv.Default__ClothConfigNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothConfigNv* UClothConfigNv::GetDefaultObj()
{
	static class UClothConfigNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothConfigNv*>(UClothConfigNv::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeNv.ClothingAssetNv
// (None)

class UClass* UClothingAssetNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingAssetNv");

	return Clss;
}


// ClothingAssetNv ClothingSystemRuntimeNv.Default__ClothingAssetNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingAssetNv* UClothingAssetNv::GetDefaultObj()
{
	static class UClothingAssetNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingAssetNv*>(UClothingAssetNv::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// (None)

class UClass* UClothingSimulationFactoryNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingSimulationFactoryNv");

	return Clss;
}


// ClothingSimulationFactoryNv ClothingSystemRuntimeNv.Default__ClothingSimulationFactoryNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingSimulationFactoryNv* UClothingSimulationFactoryNv::GetDefaultObj()
{
	static class UClothingSimulationFactoryNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingSimulationFactoryNv*>(UClothingSimulationFactoryNv::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// (None)

class UClass* UClothingSimulationInteractorNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingSimulationInteractorNv");

	return Clss;
}


// ClothingSimulationInteractorNv ClothingSystemRuntimeNv.Default__ClothingSimulationInteractorNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingSimulationInteractorNv* UClothingSimulationInteractorNv::GetDefaultObj()
{
	static class UClothingSimulationInteractorNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingSimulationInteractorNv*>(UClothingSimulationInteractorNv::StaticClass()->DefaultObject);

	return Default;
}


// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::SetAnimDriveSpringStiffness(float InStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveSpringStiffness");

	Params::UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params Parms{};

	Parms.InStiffness = InStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveDamperStiffness");

	Params::UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params Parms{};

	Parms.InStiffness = InStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.EnableGravityOverride
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InVector                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::EnableGravityOverride(struct FVector& InVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "EnableGravityOverride");

	Params::UClothingSimulationInteractorNv_EnableGravityOverride_Params Parms{};

	Parms.InVector = InVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.DisableGravityOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractorNv::DisableGravityOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "DisableGravityOverride");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ClothingSystemRuntimeNv.ClothLODDataNv
// (None)

class UClass* UClothLODDataNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothLODDataNv");

	return Clss;
}


// ClothLODDataNv ClothingSystemRuntimeNv.Default__ClothLODDataNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothLODDataNv* UClothLODDataNv::GetDefaultObj()
{
	static class UClothLODDataNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothLODDataNv*>(UClothLODDataNv::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv
// (None)

class UClass* UClothPhysicalMeshDataNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothPhysicalMeshDataNv");

	return Clss;
}


// ClothPhysicalMeshDataNv ClothingSystemRuntimeNv.Default__ClothPhysicalMeshDataNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothPhysicalMeshDataNv* UClothPhysicalMeshDataNv::GetDefaultObj()
{
	static class UClothPhysicalMeshDataNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothPhysicalMeshDataNv*>(UClothPhysicalMeshDataNv::StaticClass()->DefaultObject);

	return Default;
}

}


