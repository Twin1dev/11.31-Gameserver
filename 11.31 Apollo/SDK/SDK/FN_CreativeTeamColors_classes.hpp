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

// 0x20 (0x210 - 0x1F0)
// BlueprintGeneratedClass CreativeTeamColors.CreativeTeamColors_C
class UCreativeTeamColors_C : public USceneComponent
{
public:
	TArray<struct FLinearColor>                  TeamLightColors;                                   // 0x1F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                  TeamSelectorColors;                                // 0x200(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeTeamColors_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
