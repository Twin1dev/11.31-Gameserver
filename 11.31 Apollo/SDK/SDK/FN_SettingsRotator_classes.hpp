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

// 0x10 (0xBD8 - 0xBC8)
// WidgetBlueprintGeneratedClass SettingsRotator.SettingsRotator_C
class USettingsRotator_C : public UFortSettingsRotator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Background;                                        // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SettingsRotator_C");
		return Clss;
	}

	void BP_OnOptionsPopulated(int32 Count);
	void BP_OnOptionSelected(int32 Index);
	void BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex);
	void ExecuteUbergraph_SettingsRotator(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 K2Node_Event_Count, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 K2Node_Event_Index, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 K2Node_Event_DefaultOptionIndex, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
