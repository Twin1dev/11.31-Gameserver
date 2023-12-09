#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassAdditionalStyles.BattlePassAdditionalStyles_C
// (None)

class UClass* UBattlePassAdditionalStyles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassAdditionalStyles_C");

	return Clss;
}


// BattlePassAdditionalStyles_C BattlePassAdditionalStyles.Default__BattlePassAdditionalStyles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassAdditionalStyles_C* UBattlePassAdditionalStyles_C::GetDefaultObj()
{
	static class UBattlePassAdditionalStyles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassAdditionalStyles_C*>(UBattlePassAdditionalStyles_C::StaticClass()->DefaultObject);

	return Default;
}

}


