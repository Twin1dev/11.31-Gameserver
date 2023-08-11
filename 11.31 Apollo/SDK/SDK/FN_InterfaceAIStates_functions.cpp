#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function InterfaceAIStates.InterfaceAIStates_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Collide_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::PortalCollision(bool Collide_)
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "PortalCollision");

	Params::IInterfaceAIStates_C_PortalCollision_Params Parms;

	Parms.Collide_ = Collide_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfaceAIStates_C::PortalFX()
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "PortalFX");

	Params::IInterfaceAIStates_C_PortalFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalGet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingActor*>      BuildingActorList                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                      BT                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterfaceAIStates_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList, class AActor* BT)
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "PortalGet");

	Params::IInterfaceAIStates_C_PortalGet_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;
	Parms.BT = BT;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfaceAIStates_C::TakerSoulSuckInterrupted()
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "TakerSoulSuckInterrupted");

	Params::IInterfaceAIStates_C_TakerSoulSuckInterrupted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfaceAIStates_C::PortalClear()
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "PortalClear");

	Params::IInterfaceAIStates_C_PortalClear_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalAdd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingActor*>      BuildingActorList                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void IInterfaceAIStates_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList)
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "PortalAdd");

	Params::IInterfaceAIStates_C_PortalAdd_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfaceAIStates_C::TakerSoulSuckSoundEnd()
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "TakerSoulSuckSoundEnd");

	Params::IInterfaceAIStates_C_TakerSoulSuckSoundEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::TakerSoulSuckSoundBegin(bool Success)
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "TakerSoulSuckSoundBegin");

	Params::IInterfaceAIStates_C_TakerSoulSuckSoundBegin_Params Parms;

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SuccessfulHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::TakerAttackFSM(bool SuccessfulHit)
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "TakerAttackFSM");

	Params::IInterfaceAIStates_C_TakerAttackFSM_Params Parms;

	Parms.SuccessfulHit = SuccessfulHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Portal_Available_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "IsTakerWallPortalAvailable");

	Params::IInterfaceAIStates_C_IsTakerWallPortalAvailable_Params Parms;

	Parms.Portal_Available_ = Portal_Available_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      BuildingPart                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBTTask_BlueprintBase*       Task                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DesiredMoveLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "TakerWallPortalBehavior");

	Params::IInterfaceAIStates_C_TakerWallPortalBehavior_Params Parms;

	Parms.BuildingPart = BuildingPart;
	Parms.Task = Task;
	Parms.DesiredMoveLocation = DesiredMoveLocation;
	Parms.Debug = Debug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfaceAIStates_C::EndTakerSwoopAttack()
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "EndTakerSwoopAttack");

	Params::IInterfaceAIStates_C_EndTakerSwoopAttack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfaceAIStates_C::BeginTakerSwoopAttack()
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "BeginTakerSwoopAttack");

	Params::IInterfaceAIStates_C_BeginTakerSwoopAttack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Swoop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SoulSuckMelee                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Portal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "ResetTakerSpecialAttackTimer");

	Params::IInterfaceAIStates_C_ResetTakerSpecialAttackTimer_Params Parms;

	Parms.Swoop = Swoop;
	Parms.SoulSuckMelee = SoulSuckMelee;
	Parms.Portal = Portal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SpecialAttack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Swoop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Soul_Suck                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Portal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "VerifyTakerAttack");

	Params::IInterfaceAIStates_C_VerifyTakerAttack_Params Parms;

	Parms.SpecialAttack = SpecialAttack;
	Parms.Swoop = Swoop;
	Parms.Soul_Suck = Soul_Suck;
	Parms.Portal = Portal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfaceAIStates_C::HuskEvadeStart()
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "HuskEvadeStart");

	Params::IInterfaceAIStates_C_HuskEvadeStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfaceAIStates_C::MantleEnd()
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "MantleEnd");

	Params::IInterfaceAIStates_C_MantleEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfaceAIStates.InterfaceAIStates_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MidPos                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndPos                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LowWall                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MidWall                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FullWall                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WindowWall                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static auto Func = Class->GetFunction("InterfaceAIStates_C", "MantleStart");

	Params::IInterfaceAIStates_C_MantleStart_Params Parms;

	Parms.StartPos = StartPos;
	Parms.MidPos = MidPos;
	Parms.EndPos = EndPos;
	Parms.LowWall = LowWall;
	Parms.MidWall = MidWall;
	Parms.FullWall = FullWall;
	Parms.WindowWall = WindowWall;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
