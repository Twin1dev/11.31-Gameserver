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

// 0x38 (0x3E8 - 0x3B0)
// WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C
class ULoginScreen_C : public UFortUIStateWidget_Login
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UConsoleProfileWidget_C*               ConsoleProfileWidget;                              // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone;                                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Version;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                     Widget_BuildWatermark;                             // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*     FrontEnd_Music_Controller;                         // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               PlatformSpecificBackBorder;                        // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoginScreen_C");
		return Clss;
	}

	void Construct();
	void BndEvt__Switcher_ScreenContents_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnEnterState_1(enum class EFortUIState PreviousUIState);
	void ExecuteUbergraph_LoginScreen(int32 EntryPoint, enum class EFortUIState K2Node_Event_PreviousUIState, int32 Temp_int_Array_Index_Variable, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, const class FString& CallFunc_GetGameVersion_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
