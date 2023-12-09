#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TransferFullBodyHit.GE_TransferFullBodyHit_C
// (None)

class UClass* UGE_TransferFullBodyHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TransferFullBodyHit_C");

	return Clss;
}


// GE_TransferFullBodyHit_C GE_TransferFullBodyHit.Default__GE_TransferFullBodyHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TransferFullBodyHit_C* UGE_TransferFullBodyHit_C::GetDefaultObj()
{
	static class UGE_TransferFullBodyHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TransferFullBodyHit_C*>(UGE_TransferFullBodyHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


