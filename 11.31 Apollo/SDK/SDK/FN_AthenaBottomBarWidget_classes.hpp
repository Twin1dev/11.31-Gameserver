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

// 0xA1 (0x2F9 - 0x258)
// WidgetBlueprintGeneratedClass AthenaBottomBarWidget.AthenaBottomBarWidget_C
class UAthenaBottomBarWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               BorderShell;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBoundActionBar*                 CommonBoundActionBar_121;                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           MobileBackground;                                  // 0x270(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Display_Owner_Actions_Only;                        // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaBottomBarWidget_C");
		return Clss;
	}

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaBottomBarWidget(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
