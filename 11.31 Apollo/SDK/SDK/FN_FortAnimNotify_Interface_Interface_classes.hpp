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
// BlueprintGeneratedClass FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C
class IFortAnimNotify_Interface_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAnimNotify_Interface_Interface_C");
		return Clss;
	}

	void TrailOn();
	void TrailOff();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
