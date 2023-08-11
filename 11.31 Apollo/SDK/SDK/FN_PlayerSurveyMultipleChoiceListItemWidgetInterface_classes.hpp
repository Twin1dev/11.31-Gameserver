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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C
class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyMultipleChoiceListItemWidgetInterface_C");
		return Clss;
	}

	void SetIndex(int32 Value);
	void SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
