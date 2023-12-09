#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ClothingSystemRuntimeInterface.ClothConfigBase
// (None)

class UClass* UClothConfigBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothConfigBase");

	return Clss;
}


// ClothConfigBase ClothingSystemRuntimeInterface.Default__ClothConfigBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothConfigBase* UClothConfigBase::GetDefaultObj()
{
	static class UClothConfigBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothConfigBase*>(UClothConfigBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// (None)

class UClass* UClothSharedSimConfigBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothSharedSimConfigBase");

	return Clss;
}


// ClothSharedSimConfigBase ClothingSystemRuntimeInterface.Default__ClothSharedSimConfigBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothSharedSimConfigBase* UClothSharedSimConfigBase::GetDefaultObj()
{
	static class UClothSharedSimConfigBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothSharedSimConfigBase*>(UClothSharedSimConfigBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// (None)

class UClass* UClothingAssetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingAssetBase");

	return Clss;
}


// ClothingAssetBase ClothingSystemRuntimeInterface.Default__ClothingAssetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingAssetBase* UClothingAssetBase::GetDefaultObj()
{
	static class UClothingAssetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingAssetBase*>(UClothingAssetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// (None)

class UClass* UClothingSimulationFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingSimulationFactory");

	return Clss;
}


// ClothingSimulationFactory ClothingSystemRuntimeInterface.Default__ClothingSimulationFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingSimulationFactory* UClothingSimulationFactory::GetDefaultObj()
{
	static class UClothingSimulationFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingSimulationFactory*>(UClothingSimulationFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// (None)

class UClass* UClothingSimulationInteractor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingSimulationInteractor");

	return Clss;
}


// ClothingSimulationInteractor ClothingSystemRuntimeInterface.Default__ClothingSimulationInteractor
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingSimulationInteractor* UClothingSimulationInteractor::GetDefaultObj()
{
	static class UClothingSimulationInteractor* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingSimulationInteractor*>(UClothingSimulationInteractor::StaticClass()->DefaultObject);

	return Default;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "PhysicsAssetUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "ClothConfigUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase
// (None)

class UClass* UClothPhysicalMeshDataBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothPhysicalMeshDataBase");

	return Clss;
}


// ClothPhysicalMeshDataBase ClothingSystemRuntimeInterface.Default__ClothPhysicalMeshDataBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothPhysicalMeshDataBase* UClothPhysicalMeshDataBase::GetDefaultObj()
{
	static class UClothPhysicalMeshDataBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothPhysicalMeshDataBase*>(UClothPhysicalMeshDataBase::StaticClass()->DefaultObject);

	return Default;
}

}


