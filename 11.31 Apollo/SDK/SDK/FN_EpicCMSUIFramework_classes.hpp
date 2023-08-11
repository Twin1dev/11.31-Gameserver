#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x390 - 0x2D8)
// Class EpicCMSUIFramework.EpicCMSImage
class UEpicCMSImage : public UCommonLazyImage
{
public:
	UMulticastInlineDelegateProperty_            OnImageLoadingComplete;                            // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bMatchImageSize;                                   // 0x2E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D79[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateBrush                           LoadingFailFallback;                               // 0x2F0(0x88)(Edit, NativeAccessSpecifierPrivate)
	class UTexture2D*                            ExternalMedia;                                     // 0x378(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDownloadingExternalMedia;                         // 0x380(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D7A[0xF];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSImage");
		return Clss;
	}

	void SetMediaURL(const class FString& MediaUrl);
};

// 0x68 (0x298 - 0x230)
// Class EpicCMSUIFramework.EpicCMSLayoutBase
class UEpicCMSLayoutBase : public UUserWidget
{
public:
	TArray<struct FSlotDescription>              CarouselSlotDescriptions;                          // 0x230(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UEpicCMSTileCarousel>      CarouselClass;                                     // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D7B[0x50];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSLayoutBase");
		return Clss;
	}

};

// 0x90 (0xB8 - 0x28)
// Class EpicCMSUIFramework.EpicCMSManager
class UEpicCMSManager : public UObject
{
public:
	uint8                                        Pad_1D7C[0x18];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CmsEndpointOverride;                               // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRefreshing;                                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D7D[0x67];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSManager");
		return Clss;
	}

};

// 0x90 (0x498 - 0x408)
// Class EpicCMSUIFramework.EpicCMSScreenBase
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	class FString                                TileSetFieldName;                                  // 0x408(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             TileTypeToTileClassDataTable;                      // 0x418(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UUserWidget>             LayoutErrorClass;                                  // 0x440(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>             LayoutTypeToLayoutClassDataTable;                  // 0x468(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D7E[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSScreenBase");
		return Clss;
	}

};

// 0x18 (0x270 - 0x258)
// Class EpicCMSUIFramework.EpicCMSSimpleMessage
class UEpicCMSSimpleMessage : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      TitleText;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      BodyText;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         PrimaryImage;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSSimpleMessage");
		return Clss;
	}

};

// 0x110 (0xC80 - 0xB70)
// Class EpicCMSUIFramework.EpicCMSTileBase
class UEpicCMSTileBase : public UCommonButton
{
public:
	uint8                                        Pad_1D7F[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSubclassOf<class UCommonTextStyle>          DefaultTitleTextStyle;                             // 0xB78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonTextStyle>          FeaturedTitleTextStyle;                            // 0xB80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  Title;                                             // 0xB88(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                Link;                                              // 0xBA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDownloadingExternalMedia;                         // 0xBB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRefreshingMcpCatalog;                             // 0xBB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D80[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTexture2D*                            ExternalMedia;                                     // 0xBB8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D81[0xA0];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonLazyImage*                      LazyImage_Icon;                                    // 0xC60(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TitleTextBlock;                                    // 0xC68(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      SubtitleTextBlock;                                 // 0xC70(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      EyebrowTextBlock;                                  // 0xC78(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSTileBase");
		return Clss;
	}

	void Launch();
};

// 0x50 (0x280 - 0x230)
// Class EpicCMSUIFramework.EpicCMSTileCarousel
class UEpicCMSTileCarousel : public UUserWidget
{
public:
	struct FSlateSound                           PreviousButtonSound;                               // 0x230(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           NextButtonSound;                                   // 0x248(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonWidgetCarousel*                 Carousel;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               NextPageButton;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               PreviousPageButton;                                // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldShowNavigationOnlyOnHover;                  // 0x278(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInputActionsForPaging;                            // 0x279(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsShowingNavigation;                              // 0x27A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D82[0x5];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSTileCarousel");
		return Clss;
	}

	void SetCurrentPageByIndex(int32 PageIndex);
	void PreviousPage();
	void NextPage();
	void NavigationVisibilityChanged(bool bShowNavigation);
	void HandleTilePageAdded(class UWidget* TileWidget);
	int32 GetCurrentPageIndex();
	void BeginAutoScrolling();
	void AddTilePage(class UWidget* TilePageWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
