#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GSC_FrontEndFlowSTW.GSC_FrontEndFlowSTW_C
// (None)

class UClass* UGSC_FrontEndFlowSTW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GSC_FrontEndFlowSTW_C");

	return Clss;
}


// GSC_FrontEndFlowSTW_C GSC_FrontEndFlowSTW.Default__GSC_FrontEndFlowSTW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGSC_FrontEndFlowSTW_C* UGSC_FrontEndFlowSTW_C::GetDefaultObj()
{
	static class UGSC_FrontEndFlowSTW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGSC_FrontEndFlowSTW_C*>(UGSC_FrontEndFlowSTW_C::StaticClass()->DefaultObject);

	return Default;
}

}


