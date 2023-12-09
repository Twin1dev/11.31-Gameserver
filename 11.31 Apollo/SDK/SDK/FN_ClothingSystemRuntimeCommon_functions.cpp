#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// (None)

class UClass* UClothingAssetCustomData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingAssetCustomData");

	return Clss;
}


// ClothingAssetCustomData ClothingSystemRuntimeCommon.Default__ClothingAssetCustomData
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingAssetCustomData* UClothingAssetCustomData::GetDefaultObj()
{
	static class UClothingAssetCustomData* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingAssetCustomData*>(UClothingAssetCustomData::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// (None)

class UClass* UClothingAssetCommon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingAssetCommon");

	return Clss;
}


// ClothingAssetCommon ClothingSystemRuntimeCommon.Default__ClothingAssetCommon
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingAssetCommon* UClothingAssetCommon::GetDefaultObj()
{
	static class UClothingAssetCommon* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingAssetCommon*>(UClothingAssetCommon::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeCommon.ClothLODDataCommon
// (None)

class UClass* UClothLODDataCommon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothLODDataCommon");

	return Clss;
}


// ClothLODDataCommon ClothingSystemRuntimeCommon.Default__ClothLODDataCommon
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothLODDataCommon* UClothLODDataCommon::GetDefaultObj()
{
	static class UClothLODDataCommon* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothLODDataCommon*>(UClothLODDataCommon::StaticClass()->DefaultObject);

	return Default;
}

}


