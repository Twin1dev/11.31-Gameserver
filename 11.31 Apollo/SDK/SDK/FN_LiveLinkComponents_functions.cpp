#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLinkComponents.LiveLinkControllerBase
// (None)

class UClass* ULiveLinkControllerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkControllerBase");

	return Clss;
}


// LiveLinkControllerBase LiveLinkComponents.Default__LiveLinkControllerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkControllerBase* ULiveLinkControllerBase::GetDefaultObj()
{
	static class ULiveLinkControllerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkControllerBase*>(ULiveLinkControllerBase::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkComponents.LiveLinkCameraController
// (None)

class UClass* ULiveLinkCameraController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkCameraController");

	return Clss;
}


// LiveLinkCameraController LiveLinkComponents.Default__LiveLinkCameraController
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkCameraController* ULiveLinkCameraController::GetDefaultObj()
{
	static class ULiveLinkCameraController* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkCameraController*>(ULiveLinkCameraController::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkComponents.LiveLinkComponentController
// (None)

class UClass* ULiveLinkComponentController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkComponentController");

	return Clss;
}


// LiveLinkComponentController LiveLinkComponents.Default__LiveLinkComponentController
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkComponentController* ULiveLinkComponentController::GetDefaultObj()
{
	static class ULiveLinkComponentController* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkComponentController*>(ULiveLinkComponentController::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkComponents.LiveLinkLightController
// (None)

class UClass* ULiveLinkLightController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkLightController");

	return Clss;
}


// LiveLinkLightController LiveLinkComponents.Default__LiveLinkLightController
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkLightController* ULiveLinkLightController::GetDefaultObj()
{
	static class ULiveLinkLightController* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkLightController*>(ULiveLinkLightController::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkComponents.LiveLinkTransformController
// (None)

class UClass* ULiveLinkTransformController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTransformController");

	return Clss;
}


// LiveLinkTransformController LiveLinkComponents.Default__LiveLinkTransformController
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTransformController* ULiveLinkTransformController::GetDefaultObj()
{
	static class ULiveLinkTransformController* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTransformController*>(ULiveLinkTransformController::StaticClass()->DefaultObject);

	return Default;
}

}


