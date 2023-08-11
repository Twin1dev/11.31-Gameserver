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

// 0x20 (0x290 - 0x270)
// WidgetBlueprintGeneratedClass CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C
class UCMS_ML_BattlePass_LeftImageWidget1_C : public UEpicCMSSimpleMessage
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      SeasonName;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SoftGlow;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SoftTextShadow;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CMS_ML_BattlePass_LeftImageWidget1_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1(int32 EntryPoint, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCurrentChapterAndSeasonText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
