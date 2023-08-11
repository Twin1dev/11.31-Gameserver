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

// 0x10 (0x278 - 0x268)
// WidgetBlueprintGeneratedClass MinimalSquadDisplay.MinimalSquadDisplay_C
class UMinimalSquadDisplay_C : public UAthenaTeamSquadEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                SquadRibbon;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinimalSquadDisplay_C");
		return Clss;
	}

	void OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB(class UObject* Loaded);
	void OnLoaded_86B795124D19C878C8559FA7E78726E0(class UObject* Loaded);
	void OnSquadAssigned(struct FAthenaTeamDisplayInfo& SquadStyle);
	void OnSquadIsEmptyChanged(bool bSquadIsEmpty, bool bMultipleSquadsPopulated);
	void ExecuteUbergraph_MinimalSquadDisplay(int32 EntryPoint, bool K2Node_Event_bSquadIsEmpty, bool K2Node_Event_bMultipleSquadsPopulated, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_Not_PreBool_ReturnValue, class UObject* Temp_object_Variable, bool CallFunc_BooleanAND_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FAthenaTeamDisplayInfo& K2Node_Event_SquadStyle, enum class ESlateVisibility K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
