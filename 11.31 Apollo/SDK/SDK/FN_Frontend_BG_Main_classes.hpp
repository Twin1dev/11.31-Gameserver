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

// 0x18 (0x248 - 0x230)
// BlueprintGeneratedClass Frontend_BG_Main.Frontend_BG_Main_C
class AFrontend_BG_Main_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortStaticMeshActor*                  S_UI_FrontendInspect_HexDonut_ExecuteUbergraph_Frontend_BG_Main_RefProperty; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Frontend_ShopBG_C*                 BP_Frontend_ShopBG_9_ExecuteUbergraph_Frontend_BG_Main_RefProperty; // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Frontend_BG_Main_C");
		return Clss;
	}

	void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage);
	void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature();
	void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature();
	void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(const class FString& PresetEnvironmentName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_BG_Main(int32 EntryPoint, class UTexture* K2Node_ActorBoundEvent_BackgroundImage, const class FString& K2Node_ActorBoundEvent_PresetEnvironmentName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
