#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPWaveLIbrary.BPWaveLIbrary_C
class UBPWaveLIbrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPWaveLIbrary_C* GetDefaultObj();

	void Generate_Wave_Spectrum(struct FWaveSpectrumSettings& Spectrum, class UObject* __WorldContext, TArray<struct FWaterWaveParams>* Waves, float Lastalpha, const struct FRandomStream& LocaLSeed, const TArray<struct FWaterWaveParams>& OutWaves, const struct FWaveSpectrumSettings& Local_Spectrum, bool Temp_bool_Variable, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool Temp_bool_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, float K2Node_Select_Default, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_4, const struct FVector& K2Node_Select_Default_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, const struct FVector2D& CallFunc_Normal2D_ReturnValue, float CallFunc_Lerp_ReturnValue_2, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_FClamp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_5, int32 CallFunc_FTrunc_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FWaterWaveParams& K2Node_MakeStruct_WaterWaveParams, int32 CallFunc_Array_Add_ReturnValue);
	void Harvest_Wave_Params(class UObject* __WorldContext, const struct FVector& PivotData, float Manual_Time, const struct FBeachSettings& Beach_Settings, const TArray<struct FWaveParams>& Waves, TArray<struct FWaveParams>& K2Node_MakeArray_Array);
	void Water_Depth_to_Wavespeed(float Water_Depth, class UObject* __WorldContext, float* S, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sqrt_ReturnValue);
	void Gerstner_Wave_MPC_Shallow(const struct FVector& Pos, const struct FWaveParams& Wave_Params, float Time, float Phase_Offset, float Water_Depth__wave0_only_, class UObject* __WorldContext, struct FVector2D* XY, float* Z, struct FVector* Normal, float* Wave_Pos, float* Wave_Time, float* Wave_Sine, float CallFunc_GetPI_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Sqrt_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector2D& CallFunc_Normal2D_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_DotProduct2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Sin_ReturnValue, float CallFunc_Cos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_7, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_8, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void Gerstner_3_Waves(const struct FVector& Pos, int32 Num_Waves, TArray<struct FWaveParams>& Wave_Array, float Time, float Water_Depth, float Break_Tangent, float Break_Cos, class UObject* __WorldContext, struct FVector2D* XY, float* Z, struct FVector* Normal, float* Wave_0_Pos, float* Wave_0_Time, float* Wave_0_Sine, float CallFunc_GetPI_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FWaveParams& CallFunc_Array_Get_Item, const struct FWaveParams& CallFunc_Array_Get_Item_1, const struct FVector2D& CallFunc_Gerstner_Wave_MPC_Deep_XY, float CallFunc_Gerstner_Wave_MPC_Deep_Z, const struct FVector& CallFunc_Gerstner_Wave_MPC_Deep_Normal, float CallFunc_Gerstner_Wave_MPC_Deep_Wave_Pos, float CallFunc_Gerstner_Wave_MPC_Deep_Wave_Time, float CallFunc_Gerstner_Wave_MPC_Deep_Wave_Sine, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue_1, const struct FWaveParams& CallFunc_Array_Get_Item_2, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Gerstner_Wave_MPC_Deep_XY_1, float CallFunc_Gerstner_Wave_MPC_Deep_Z_1, const struct FVector& CallFunc_Gerstner_Wave_MPC_Deep_Normal_1, float CallFunc_Gerstner_Wave_MPC_Deep_Wave_Pos_1, float CallFunc_Gerstner_Wave_MPC_Deep_Wave_Time_1, float CallFunc_Gerstner_Wave_MPC_Deep_Wave_Sine_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue_2, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector2D& CallFunc_Gerstner_Wave_MPC_Shallow_XY, float CallFunc_Gerstner_Wave_MPC_Shallow_Z, const struct FVector& CallFunc_Gerstner_Wave_MPC_Shallow_Normal, float CallFunc_Gerstner_Wave_MPC_Shallow_Wave_Pos, float CallFunc_Gerstner_Wave_MPC_Shallow_Wave_Time, float CallFunc_Gerstner_Wave_MPC_Shallow_Wave_Sine, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Finalize_Gerstner_Normal_N_, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Rotation_from_Normal(const struct FVector& X_Vector, const struct FVector& Z_Vector__Normal_, float Additional_Tilt, float Additional_Pitch, class UObject* __WorldContext, struct FRotator* Rotator, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromXY_ReturnValue);
	void Finalize_Gerstner_Normal(const struct FVector& N, class UObject* __WorldContext, struct FVector* N_, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void Wave_Rotation_Setup(float Wave_Pos, float Wave_Time, float Crash_Offset, float Wavelength, const struct FVector& Wave_Direction, const struct FVector& Local_Pivot, float Beach_X_Pos, float Break_Distance, float Wave_Sine, float Crest_Power, float Start_Crash_Power, float End_Crash_Power, float MaxRotation, class UObject* __WorldContext, float* Rotation_Angle, struct FVector* World_Pivot, float* Raw_Shore_Mask, float CallFunc_GetPI_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetPI_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_6);
	void Wavelength_to_Wavespeed(float Wavelength, class UObject* __WorldContext, float* S, float CallFunc_GetPI_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Sqrt_ReturnValue);
	void Exp2(float Depth, float Density, class UObject* __WorldContext, float* NewParam, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Exp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Gerstner_Wave_MPC_Deep(const struct FVector& Pos, const struct FWaveParams& Wave_Params, float Time, float Phase_Offset, class UObject* __WorldContext, struct FVector2D* XY, float* Z, struct FVector* Normal, float* Wave_Pos, float* Wave_Time, float* Wave_Sine, float CallFunc_GetPI_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_DotProduct2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Lerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Sqrt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Sin_ReturnValue, float CallFunc_Cos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_7, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_8, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void Gerstner_Wave(const struct FVector& Pos, const struct FVector2D& K, float W, float A, float Steepness, float Phase_Offset, class UObject* __WorldContext, struct FVector2D* XY, float* Z, struct FVector* Normal, float CallFunc_GetPI_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_DotProduct2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Lerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Sqrt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Sin_ReturnValue, float CallFunc_Cos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_7, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_8, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


