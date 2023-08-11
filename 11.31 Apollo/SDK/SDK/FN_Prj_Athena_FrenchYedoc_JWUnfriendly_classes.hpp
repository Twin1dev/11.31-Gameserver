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

// 0x8 (0x900 - 0x8F8)
// BlueprintGeneratedClass Prj_Athena_FrenchYedoc_JWUnfriendly.Prj_Athena_FrenchYedoc_JWUnfriendly_C
class APrj_Athena_FrenchYedoc_JWUnfriendly_C : public APrj_Athena_FrenchYedoc_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prj_Athena_FrenchYedoc_JWUnfriendly_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Prj_Athena_FrenchYedoc_JWUnfriendly(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
