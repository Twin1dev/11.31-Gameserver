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

// 0x18 (0x328 - 0x310)
// WidgetBlueprintGeneratedClass WinterQuestLobbyHeader.WinterQuestLobbyHeader_C
class UWinterQuestLobbyHeader_C : public UFortWinterQuestLobbyHeader
{
public:
	class UWidgetAnimation*                      LabelIntro;                                        // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWinterfest_CabinLogo_C*               Winterfest_CabinLogo;                              // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWinterfest_Date_Label_C*              Winterfest_Date_Label;                             // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WinterQuestLobbyHeader_C");
		return Clss;
	}

	void HandleLogoIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
