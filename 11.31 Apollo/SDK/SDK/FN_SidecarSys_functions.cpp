#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SidecarSys.SidecarDss
// (None)

class UClass* USidecarDss::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidecarDss");

	return Clss;
}


// SidecarDss SidecarSys.Default__SidecarDss
// (Public, ClassDefaultObject, ArchetypeObject)

class USidecarDss* USidecarDss::GetDefaultObj()
{
	static class USidecarDss* Default = nullptr;

	if (!Default)
		Default = static_cast<USidecarDss*>(USidecarDss::StaticClass()->DefaultObject);

	return Default;
}


// Class SidecarSys.SidecarInventorySys
// (None)

class UClass* USidecarInventorySys::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidecarInventorySys");

	return Clss;
}


// SidecarInventorySys SidecarSys.Default__SidecarInventorySys
// (Public, ClassDefaultObject, ArchetypeObject)

class USidecarInventorySys* USidecarInventorySys::GetDefaultObj()
{
	static class USidecarInventorySys* Default = nullptr;

	if (!Default)
		Default = static_cast<USidecarInventorySys*>(USidecarInventorySys::StaticClass()->DefaultObject);

	return Default;
}


// Class SidecarSys.SidecarSys
// (None)

class UClass* USidecarSys::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidecarSys");

	return Clss;
}


// SidecarSys SidecarSys.Default__SidecarSys
// (Public, ClassDefaultObject, ArchetypeObject)

class USidecarSys* USidecarSys::GetDefaultObj()
{
	static class USidecarSys* Default = nullptr;

	if (!Default)
		Default = static_cast<USidecarSys*>(USidecarSys::StaticClass()->DefaultObject);

	return Default;
}

}


