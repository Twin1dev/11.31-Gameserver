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

// 0x8 (0xD80 - 0xD78)
// BlueprintGeneratedClass v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C
class UV1_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{
public:
	uint8                                        Pad_44D6[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("v1_PlayerCameraModeBase_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
