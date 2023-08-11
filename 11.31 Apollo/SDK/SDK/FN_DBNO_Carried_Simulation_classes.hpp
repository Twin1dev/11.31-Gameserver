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

// 0x7C0 (0xA30 - 0x270)
// AnimBlueprintGeneratedClass DBNO_Carried_Simulation.DBNO_Carried_Simulation_C
class UDBNO_Carried_Simulation_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_28E45FF44D8BF61DA494DBA7D66A0D6A; // 0x278(0x30)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_16F0D71242962BA41A4E8DA0FBE31217; // 0x2A8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput_8105BF9F4246C108EEF5D0BE17BA6260; // 0x2C8(0x70)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_911D06AA453F82A06838A3B01BA36346; // 0x338(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_A839712A4F77C9A091B5898491ED30B1; // 0x358(0xA0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_DB63BAC845C20CEECA1475B9C028BF5C; // 0x3F8(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_B04070EF4760B8638410698DD53C2704; // 0x4B0(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7C62ED904EF68BB85FC230AE57D89A95; // 0x4D8(0xB8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_019CF00C4D1070A1EE1697A3376DD29E; // 0x590(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2CA065634A3A49B36403D1A73C0B5401; // 0x5B0(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7F7F292A43A7EA4DAD65F790695B35F4; // 0x5D0(0x28)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_08303037454CDE3D947ABFACA06F69BD; // 0x5F8(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_BC91F25D4799510301E487827C4F1379; // 0x618(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7D1497CF4903FB778A3D18A74E43EA77; // 0x638(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_E00433784936F3679C3289940B3E3BB0; // 0x660(0x28)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_59F85E5E4A80235915E0D7B14A12BD94; // 0x688(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_CB97DFC14FAF14D2E0BABF9B8D876667; // 0x6A8(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14583F6C487B34BE87E088BD67C3AB47; // 0x6C8(0x28)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_D7941F3949F9037E5D62D49C7C6E4CD2; // 0x6F0(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5ADE980D4BDD02AC44BE0CBBA8D74EB6; // 0x710(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4D4977BD4BF39D6B75481D9F5CC33FAD; // 0x730(0x28)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_234A11F847B7E10EF6F74B86A77A193C; // 0x758(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2C47E3B7444B46A7A63974A0B514BDE4; // 0x778(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_83FA301D471DA3A9B99C1A8226DA2826; // 0x798(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6731E6EC42EDC8C26F2A758FD25E692A; // 0x7C0(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_54BE2F104F9150A0D1402E8C84CAE1CB; // 0x878(0x28)()
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_A6D39FDA48EF8ED3A07975B91335D3F7; // 0x8A0(0xA0)()
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_5E6D490E447E29C2AFCCF2862C318AF9; // 0x940(0xA0)()
	bool                                         Carried;                                           // 0x9E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_413F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerPawn_Athena_C*                  CarrierPawn;                                       // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimInstance*               CarrierAnimBP;                                     // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LHandIKLocation;                                   // 0x9F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LHandIKRotation;                                   // 0xA04(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               TempAttachLocation;                                // 0xA10(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              TempAttachRotation;                                // 0xA1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortCustomBodyType               My_bodytype;                                       // 0xA28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomGender                 My_gender;                                         // 0xA29(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMale;                                            // 0xA2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortPlayerAnimBodyType           My_animbodytype;                                   // 0xA2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        bodytype_int;                                      // 0xA2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DBNO_Carried_Simulation_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_DBNO_Carried_Simulation(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, enum class EFortCustomBodyType CallFunc_GetCharacterBodyType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_GetGender_IsMale, bool CallFunc_GetGender_IsFemale, float K2Node_Event_DeltaTimeX, bool Temp_bool_Has_Been_Initd_Variable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
