#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaStormSurgeIconWidget.AthenaStormSurgeIconWidget_C
// (None)

class UClass* UAthenaStormSurgeIconWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaStormSurgeIconWidget_C");

	return Clss;
}


// AthenaStormSurgeIconWidget_C AthenaStormSurgeIconWidget.Default__AthenaStormSurgeIconWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaStormSurgeIconWidget_C* UAthenaStormSurgeIconWidget_C::GetDefaultObj()
{
	static class UAthenaStormSurgeIconWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaStormSurgeIconWidget_C*>(UAthenaStormSurgeIconWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaStormSurgeIconWidget.AthenaStormSurgeIconWidget_C.Anim_dmgOFF
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStormSurgeIconWidget_C::Anim_dmgOFF(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeIconWidget_C", "Anim_dmgOFF");

	Params::UAthenaStormSurgeIconWidget_C_Anim_dmgOFF_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgeIconWidget.AthenaStormSurgeIconWidget_C.Anim_dmgON
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStormSurgeIconWidget_C::Anim_dmgON(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgeIconWidget_C", "Anim_dmgON");

	Params::UAthenaStormSurgeIconWidget_C_Anim_dmgON_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


