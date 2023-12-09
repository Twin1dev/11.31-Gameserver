#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFieldPhysicsDefaultFields : uint8
{
	Field_RadialIntMask            = 0,
	Field_RadialFalloff            = 1,
	Field_UniformVector            = 2,
	Field_RadialVector             = 3,
	Field_RadialVectorFalloff      = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5,
	Field_MAX                      = 6,
};

enum class EFieldPhysicsType : uint8
{
	Field_DynamicState             = 0,
	Field_LinearForce              = 1,
	Field_ExternalClusterStrain    = 2,
	Field_Kill                     = 3,
	Field_LinearVelocity           = 4,
	Field_AngularVelociy           = 5,
	Field_AngularTorque            = 6,
	Field_InternalClusterStrain    = 7,
	Field_DisableThreshold         = 8,
	Field_SleepingThreshold        = 9,
	Field_PositionStatic           = 10,
	Field_PositionAnimated         = 11,
	Field_PositionTarget           = 12,
	Field_DynamicConstraint        = 13,
	Field_CollisionGroup           = 14,
	Field_ActivateDisabled         = 15,
	Field_PhysicsType_Max          = 16,
};

enum class EFieldFalloffType : uint8
{
	Field_FallOff_None             = 0,
	Field_Falloff_Linear           = 1,
	Field_Falloff_Inverse          = 2,
	Field_Falloff_Squared          = 3,
	Field_Falloff_Logarithmic      = 4,
	Field_Falloff_Max              = 5,
};

enum class EFieldResolutionType : uint8
{
	Field_Resolution_Minimal       = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum       = 2,
	Field_Resolution_Max           = 3,
};

enum class EFieldCullingOperationType : uint8
{
	Field_Culling_Inside           = 0,
	Field_Culling_Outside          = 1,
	Field_Culling_Operation_Max    = 2,
	Field_Culling_MAX              = 3,
};

enum class EFieldOperationType : uint8
{
	Field_Multiply                 = 0,
	Field_Divide                   = 1,
	Field_Add                      = 2,
	Field_Substract                = 3,
	Field_Operation_Max            = 4,
};

enum class ESetMaskConditionType : uint8
{
	Field_Set_Always               = 0,
	Field_Set_IFF_NOT_Interior     = 1,
	Field_Set_IFF_NOT_Exterior     = 2,
	Field_MaskCondition_Max        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


