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

// 0x8 (0x2E0 - 0x2D8)
// WidgetBlueprintGeneratedClass AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C
class UAthenaChatWidgetModalWrapper_C : public UAthenaChatModalWrapper
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaChatWidgetModalWrapper_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void ExecuteUbergraph_AthenaChatWidgetModalWrapper(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UChatContainer_C* K2Node_DynamicCast_AsChat_Container, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
