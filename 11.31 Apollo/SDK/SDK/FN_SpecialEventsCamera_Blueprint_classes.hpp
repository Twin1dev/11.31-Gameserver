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

// 0x8 (0x7C8 - 0x7C0)
// BlueprintGeneratedClass SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C
class ASpecialEventsCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventsCamera_Blueprint_C");
		return Clss;
	}

	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_SpecialEventsCamera_Blueprint(int32 EntryPoint, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 Temp_int_Array_Index_Variable_2, class ATVPostProcessBP_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
