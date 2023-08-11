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

// 0x10 (0x2A8 - 0x298)
// WidgetBlueprintGeneratedClass MatchmakingInputIndicator.MatchmakingInputIndicator_C
class UMatchmakingInputIndicator_C : public UMatchmakingInputIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                InputIcon;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MatchmakingInputIndicator_C");
		return Clss;
	}

	void OnInputSourceTypeChanged(enum class ECommonInputType InputType);
	void ExecuteUbergraph_MatchmakingInputIndicator(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType K2Node_Event_InputType, class UTexture2D* CallFunc_GetInputTypeIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
