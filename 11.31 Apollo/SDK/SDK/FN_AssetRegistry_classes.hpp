#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x750 (0x778 - 0x28)
// Class AssetRegistry.AssetRegistryImpl
class UAssetRegistryImpl : public UObject
{
public:
	uint8                                        Pad_82[0x750];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAssetRegistryImpl* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistryHelpers
class UAssetRegistryHelpers : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAssetRegistryHelpers* GetDefaultObj();

	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InAssetData);
	struct FARFilter SetFilterTagsAndValues(struct FARFilter& InFilter, TArray<struct FTagAndValue>& InTagsAndValues);
	bool IsValid(struct FAssetData& InAssetData);
	bool IsUAsset(struct FAssetData& InAssetData);
	bool IsRedirector(struct FAssetData& InAssetData);
	bool IsAssetLoaded(struct FAssetData& InAssetData);
	bool GetTagValue(struct FAssetData& InAssetData, class FName& InTagName, class FString* OutTagValue);
	class FString GetFullName(struct FAssetData& InAssetData);
	class FString GetExportTextName(struct FAssetData& InAssetData);
	class UClass* GetClass(struct FAssetData& InAssetData);
	TScriptInterface<class IAssetRegistry> GetAssetRegistry();
	class UObject* GetAsset(struct FAssetData& InAssetData);
	struct FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
};

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistry
class IAssetRegistry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAssetRegistry* GetDefaultObj();

	void UseFilterToExcludeAssets(TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter);
	void SearchAllAssets(bool bSynchronousSearch);
	void ScanPathsSynchronous(TArray<class FString>& InPaths, bool bForceRescan);
	void ScanModifiedAssetFiles(TArray<class FString>& InFilePaths);
	void ScanFilesSynchronous(TArray<class FString>& InFilePaths, bool bForceRescan);
	void RunAssetsThroughFilter(TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter);
	void PrioritizeSearchPath(const class FString& PathToPrioritize);
	bool K2_GetReferencers(class FName PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<class FName>* OutReferencers);
	bool K2_GetDependencies(class FName PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<class FName>* OutDependencies);
	bool IsLoadingAssets();
	bool HasAssets(class FName PackagePath, bool bRecursive);
	void GetSubPaths(const class FString& InBasePath, TArray<class FString>* OutPathList, bool bInRecurse);
	bool GetAssetsByPath(class FName PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPackageName(class FName PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByClass(class FName ClassName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses);
	bool GetAssets(struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData);
	struct FAssetData GetAssetByObjectPath(class FName ObjectPath, bool bIncludeOnlyOnDiskAssets);
	void GetAllCachedPaths(TArray<class FString>* OutPathList);
	bool GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
};

}


