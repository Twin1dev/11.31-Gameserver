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


// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoftObjectPath             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(struct FAssetData& InAssetData)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "ToSoftObjectPath");

	Params::UAssetRegistryHelpers_ToSoftObjectPath_Params Parms;

	Parms.InAssetData = InAssetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARFilter                   InFilter                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FTagAndValue>        InTagsAndValues                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FARFilter                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(struct FARFilter& InFilter, TArray<struct FTagAndValue>& InTagsAndValues)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "SetFilterTagsAndValues");

	Params::UAssetRegistryHelpers_SetFilterTagsAndValues_Params Parms;

	Parms.InFilter = InFilter;
	Parms.InTagsAndValues = InTagsAndValues;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsValid(struct FAssetData& InAssetData)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "IsValid");

	Params::UAssetRegistryHelpers_IsValid_Params Parms;

	Parms.InAssetData = InAssetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsUAsset(struct FAssetData& InAssetData)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "IsUAsset");

	Params::UAssetRegistryHelpers_IsUAsset_Params Parms;

	Parms.InAssetData = InAssetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsRedirector(struct FAssetData& InAssetData)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "IsRedirector");

	Params::UAssetRegistryHelpers_IsRedirector_Params Parms;

	Parms.InAssetData = InAssetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsAssetLoaded(struct FAssetData& InAssetData)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "IsAssetLoaded");

	Params::UAssetRegistryHelpers_IsAssetLoaded_Params Parms;

	Parms.InAssetData = InAssetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InTagName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutTagValue                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::GetTagValue(struct FAssetData& InAssetData, class FName& InTagName, class FString* OutTagValue)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "GetTagValue");

	Params::UAssetRegistryHelpers_GetTagValue_Params Parms;

	Parms.InAssetData = InAssetData;
	Parms.InTagName = InTagName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutTagValue != nullptr)
		*OutTagValue = Parms.OutTagValue;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAssetRegistryHelpers::GetFullName(struct FAssetData& InAssetData)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "GetFullName");

	Params::UAssetRegistryHelpers_GetFullName_Params Parms;

	Parms.InAssetData = InAssetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAssetRegistryHelpers::GetExportTextName(struct FAssetData& InAssetData)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "GetExportTextName");

	Params::UAssetRegistryHelpers_GetExportTextName_Params Parms;

	Parms.InAssetData = InAssetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UAssetRegistryHelpers::GetClass(struct FAssetData& InAssetData)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "GetClass");

	Params::UAssetRegistryHelpers_GetClass_Params Parms;

	Parms.InAssetData = InAssetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IAssetRegistry>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

TScriptInterface<class IAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry()
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "GetAssetRegistry");

	Params::UAssetRegistryHelpers_GetAssetRegistry_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAssetRegistryHelpers::GetAsset(struct FAssetData& InAssetData)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "GetAsset");

	Params::UAssetRegistryHelpers_GetAsset_Params Parms;

	Parms.InAssetData = InAssetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     InAsset                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowBlueprintClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetData                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FAssetData UAssetRegistryHelpers::CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass)
{
	static auto Func = Class->GetFunction("AssetRegistryHelpers", "CreateAssetData");

	Params::UAssetRegistryHelpers_CreateAssetData_Params Parms;

	Parms.InAsset = InAsset;
	Parms.bAllowBlueprintClass = bAllowBlueprintClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>          AssetDataList                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FARFilter                   Filter                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IAssetRegistry::UseFilterToExcludeAssets(TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter)
{
	static auto Func = Class->GetFunction("AssetRegistry", "UseFilterToExcludeAssets");

	Params::IAssetRegistry_UseFilterToExcludeAssets_Params Parms;

	Parms.AssetDataList = AssetDataList;
	Parms.Filter = Filter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AssetRegistry.AssetRegistry.SearchAllAssets
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSynchronousSearch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAssetRegistry::SearchAllAssets(bool bSynchronousSearch)
{
	static auto Func = Class->GetFunction("AssetRegistry", "SearchAllAssets");

	Params::IAssetRegistry_SearchAllAssets_Params Parms;

	Parms.bSynchronousSearch = bSynchronousSearch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InPaths                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bForceRescan                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAssetRegistry::ScanPathsSynchronous(TArray<class FString>& InPaths, bool bForceRescan)
{
	static auto Func = Class->GetFunction("AssetRegistry", "ScanPathsSynchronous");

	Params::IAssetRegistry_ScanPathsSynchronous_Params Parms;

	Parms.InPaths = InPaths;
	Parms.bForceRescan = bForceRescan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFilePaths                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAssetRegistry::ScanModifiedAssetFiles(TArray<class FString>& InFilePaths)
{
	static auto Func = Class->GetFunction("AssetRegistry", "ScanModifiedAssetFiles");

	Params::IAssetRegistry_ScanModifiedAssetFiles_Params Parms;

	Parms.InFilePaths = InFilePaths;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFilePaths                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bForceRescan                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAssetRegistry::ScanFilesSynchronous(TArray<class FString>& InFilePaths, bool bForceRescan)
{
	static auto Func = Class->GetFunction("AssetRegistry", "ScanFilesSynchronous");

	Params::IAssetRegistry_ScanFilesSynchronous_Params Parms;

	Parms.InFilePaths = InFilePaths;
	Parms.bForceRescan = bForceRescan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>          AssetDataList                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FARFilter                   Filter                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IAssetRegistry::RunAssetsThroughFilter(TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter)
{
	static auto Func = Class->GetFunction("AssetRegistry", "RunAssetsThroughFilter");

	Params::IAssetRegistry_RunAssetsThroughFilter_Params Parms;

	Parms.AssetDataList = AssetDataList;
	Parms.Filter = Filter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PathToPrioritize                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAssetRegistry::PrioritizeSearchPath(const class FString& PathToPrioritize)
{
	static auto Func = Class->GetFunction("AssetRegistry", "PrioritizeSearchPath");

	Params::IAssetRegistry_PrioritizeSearchPath_Params Parms;

	Parms.PathToPrioritize = PathToPrioritize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AssetRegistry.AssetRegistry.K2_GetReferencers
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetRegistryDependencyOptionsReferenceOptions                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class FName>                OutReferencers                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::K2_GetReferencers(class FName PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<class FName>* OutReferencers)
{
	static auto Func = Class->GetFunction("AssetRegistry", "K2_GetReferencers");

	Params::IAssetRegistry_K2_GetReferencers_Params Parms;

	Parms.PackageName = PackageName;
	Parms.ReferenceOptions = ReferenceOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutReferencers != nullptr)
		*OutReferencers = Parms.OutReferencers;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.K2_GetDependencies
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetRegistryDependencyOptionsDependencyOptions                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class FName>                OutDependencies                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::K2_GetDependencies(class FName PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<class FName>* OutDependencies)
{
	static auto Func = Class->GetFunction("AssetRegistry", "K2_GetDependencies");

	Params::IAssetRegistry_K2_GetDependencies_Params Parms;

	Parms.PackageName = PackageName;
	Parms.DependencyOptions = DependencyOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutDependencies != nullptr)
		*OutDependencies = Parms.OutDependencies;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::IsLoadingAssets()
{
	static auto Func = Class->GetFunction("AssetRegistry", "IsLoadingAssets");

	Params::IAssetRegistry_IsLoadingAssets_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.HasAssets
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FName                        PackagePath                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRecursive                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::HasAssets(class FName PackagePath, bool bRecursive)
{
	static auto Func = Class->GetFunction("AssetRegistry", "HasAssets");

	Params::IAssetRegistry_HasAssets_Params Parms;

	Parms.PackagePath = PackagePath;
	Parms.bRecursive = bRecursive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      InBasePath                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutPathList                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bInRecurse                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAssetRegistry::GetSubPaths(const class FString& InBasePath, TArray<class FString>* OutPathList, bool bInRecurse)
{
	static auto Func = Class->GetFunction("AssetRegistry", "GetSubPaths");

	Params::IAssetRegistry_GetSubPaths_Params Parms;

	Parms.InBasePath = InBasePath;
	Parms.bInRecurse = bInRecurse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPathList != nullptr)
		*OutPathList = Parms.OutPathList;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackagePath                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>          OutAssetData                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bRecursive                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeOnlyOnDiskAssets                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::GetAssetsByPath(class FName PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets)
{
	static auto Func = Class->GetFunction("AssetRegistry", "GetAssetsByPath");

	Params::IAssetRegistry_GetAssetsByPath_Params Parms;

	Parms.PackagePath = PackagePath;
	Parms.bRecursive = bRecursive;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAssetData != nullptr)
		*OutAssetData = Parms.OutAssetData;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>          OutAssetData                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bIncludeOnlyOnDiskAssets                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::GetAssetsByPackageName(class FName PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets)
{
	static auto Func = Class->GetFunction("AssetRegistry", "GetAssetsByPackageName");

	Params::IAssetRegistry_GetAssetsByPackageName_Params Parms;

	Parms.PackageName = PackageName;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAssetData != nullptr)
		*OutAssetData = Parms.OutAssetData;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        ClassName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>          OutAssetData                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bSearchSubClasses                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::GetAssetsByClass(class FName ClassName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses)
{
	static auto Func = Class->GetFunction("AssetRegistry", "GetAssetsByClass");

	Params::IAssetRegistry_GetAssetsByClass_Params Parms;

	Parms.ClassName = ClassName;
	Parms.bSearchSubClasses = bSearchSubClasses;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAssetData != nullptr)
		*OutAssetData = Parms.OutAssetData;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssets
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FARFilter                   Filter                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>          OutAssetData                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::GetAssets(struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData)
{
	static auto Func = Class->GetFunction("AssetRegistry", "GetAssets");

	Params::IAssetRegistry_GetAssets_Params Parms;

	Parms.Filter = Filter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAssetData != nullptr)
		*OutAssetData = Parms.OutAssetData;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FName                        ObjectPath                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeOnlyOnDiskAssets                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetData                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FAssetData IAssetRegistry::GetAssetByObjectPath(class FName ObjectPath, bool bIncludeOnlyOnDiskAssets)
{
	static auto Func = Class->GetFunction("AssetRegistry", "GetAssetByObjectPath");

	Params::IAssetRegistry_GetAssetByObjectPath_Params Parms;

	Parms.ObjectPath = ObjectPath;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class FString>              OutPathList                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IAssetRegistry::GetAllCachedPaths(TArray<class FString>* OutPathList)
{
	static auto Func = Class->GetFunction("AssetRegistry", "GetAllCachedPaths");

	Params::IAssetRegistry_GetAllCachedPaths_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPathList != nullptr)
		*OutPathList = Parms.OutPathList;

}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>          OutAssetData                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bIncludeOnlyOnDiskAssets                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAssetRegistry::GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets)
{
	static auto Func = Class->GetFunction("AssetRegistry", "GetAllAssets");

	Params::IAssetRegistry_GetAllAssets_Params Parms;

	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAssetData != nullptr)
		*OutAssetData = Parms.OutAssetData;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
