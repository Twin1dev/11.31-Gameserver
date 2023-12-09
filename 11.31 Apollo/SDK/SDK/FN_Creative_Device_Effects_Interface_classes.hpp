#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C
class ICreative_Device_Effects_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICreative_Device_Effects_Interface_C* GetDefaultObj();

	void Get_Effect_Color_Index(enum class ECreativeColorSetType* Color_Type, int32* Color_Index);
};

}


