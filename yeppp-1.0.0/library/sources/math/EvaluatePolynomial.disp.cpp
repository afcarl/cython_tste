/*
 *                       Yeppp! library implementation
 *                   This file is auto-generated by Peach-Py,
 *        Portable Efficient Assembly Code-generator in Higher-level Python,
 *                  part of the Yeppp! library infrastructure
 * This file is part of Yeppp! library and licensed under the New BSD license.
 * See LICENSE.txt for the full text of the license.
 */

#include <yepPredefines.h>
#include <yepTypes.h>
#include <yepPrivate.h>
#include <math/EvaluatePolynomial.disp.h>

#if defined(YEP_MSVC_COMPATIBLE_COMPILER)
	#pragma section(".rdata$DispatchTable", read)
	#pragma section(".data$DispatchPointer", read, write)
#endif

extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_Default(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
#if defined(YEP_MICROSOFT_X64_ABI)
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_Nehalem(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_Bonnell(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_Bulldozer(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_SandyBridge(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_Haswell(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
#endif // YEP_MICROSOFT_X64_ABI
#if defined(YEP_SYSTEMV_X64_ABI)
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_Nehalem(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_Bonnell(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_Bulldozer(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_SandyBridge(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_Haswell(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
#endif // YEP_SYSTEMV_X64_ABI
#if defined(YEP_SOFTEABI_ARM_ABI)
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_CortexA9(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
#endif // YEP_SOFTEABI_ARM_ABI
#if defined(YEP_HARDEABI_ARM_ABI)
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V32fV32f_V32f_CortexA9(const Yep32f *YEP_RESTRICT coef, const Yep32f *YEP_RESTRICT x, Yep32f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
#endif // YEP_HARDEABI_ARM_ABI
YEP_USE_DISPATCH_TABLE_SECTION const FunctionDescriptor<YepStatus (YEPABI*)(const Yep32f *YEP_RESTRICT, const Yep32f *YEP_RESTRICT, Yep32f *YEP_RESTRICT, YepSize, YepSize)> _dispatchTable_yepMath_EvaluatePolynomial_V32fV32f_V32f[] = 
{
	#if defined(YEP_MICROSOFT_X64_ABI)
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_Nehalem, YepIsaFeaturesDefault, YepX86SimdFeatureSSE, YepX86SystemFeatureXMM, YepCpuMicroarchitectureNehalem, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_Bonnell, YepIsaFeaturesDefault, YepX86SimdFeatureSSE, YepX86SystemFeatureXMM, YepCpuMicroarchitectureBonnell, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		#ifndef YEP_MACOSX_OS
			YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_Bulldozer, YepIsaFeaturesDefault, YepX86SimdFeatureAVX | YepX86SimdFeatureFMA4, YepX86SystemFeatureYMM, YepCpuMicroarchitectureBulldozer, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		#endif // YEP_MACOSX_OS
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_SandyBridge, YepIsaFeaturesDefault, YepX86SimdFeatureAVX, YepX86SystemFeatureYMM, YepCpuMicroarchitectureSandyBridge, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_Haswell, YepIsaFeaturesDefault, YepX86SimdFeatureSSE | YepX86SimdFeatureFMA3 | YepX86SimdFeatureAVX, YepX86SystemFeatureXMM | YepX86SystemFeatureYMM, YepCpuMicroarchitectureHaswell, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
	#endif // YEP_MICROSOFT_X64_ABI
	#if defined(YEP_SYSTEMV_X64_ABI)
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_Nehalem, YepIsaFeaturesDefault, YepX86SimdFeatureSSE, YepX86SystemFeatureXMM, YepCpuMicroarchitectureNehalem, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_Bonnell, YepIsaFeaturesDefault, YepX86SimdFeatureSSE, YepX86SystemFeatureXMM, YepCpuMicroarchitectureBonnell, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		#ifndef YEP_MACOSX_OS
			YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_Bulldozer, YepIsaFeaturesDefault, YepX86SimdFeatureAVX | YepX86SimdFeatureFMA4, YepX86SystemFeatureYMM, YepCpuMicroarchitectureBulldozer, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		#endif // YEP_MACOSX_OS
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_SandyBridge, YepIsaFeaturesDefault, YepX86SimdFeatureAVX, YepX86SystemFeatureYMM, YepCpuMicroarchitectureSandyBridge, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_Haswell, YepIsaFeaturesDefault, YepX86SimdFeatureSSE | YepX86SimdFeatureFMA3 | YepX86SimdFeatureAVX, YepX86SystemFeatureXMM | YepX86SystemFeatureYMM, YepCpuMicroarchitectureHaswell, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
	#endif // YEP_SYSTEMV_X64_ABI
	#if defined(YEP_SOFTEABI_ARM_ABI)
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_CortexA9, YepARMIsaFeatureVFP2, YepARMSimdFeatureNEON, YepSystemFeaturesDefault, YepCpuMicroarchitectureCortexA9, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
	#endif // YEP_SOFTEABI_ARM_ABI
	#if defined(YEP_HARDEABI_ARM_ABI)
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_CortexA9, YepARMIsaFeatureVFP2, YepARMSimdFeatureNEON, YepSystemFeaturesDefault, YepCpuMicroarchitectureCortexA9, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
	#endif // YEP_HARDEABI_ARM_ABI
	YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V32fV32f_V32f_Default, YepIsaFeaturesDefault, YepSimdFeaturesDefault, YepSystemFeaturesDefault, YepCpuMicroarchitectureUnknown, "c++", "Naive", "None")
};

extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_Default(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
#if defined(YEP_MICROSOFT_X64_ABI)
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_Nehalem(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_Bonnell(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_Bulldozer(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_SandyBridge(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_Haswell(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
#endif // YEP_MICROSOFT_X64_ABI
#if defined(YEP_SYSTEMV_X64_ABI)
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_Nehalem(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_Bonnell(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_Bulldozer(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_SandyBridge(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_Haswell(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
#endif // YEP_SYSTEMV_X64_ABI
#if defined(YEP_SOFTEABI_ARM_ABI)
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_CortexA9(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
#endif // YEP_SOFTEABI_ARM_ABI
#if defined(YEP_HARDEABI_ARM_ABI)
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_EvaluatePolynomial_V64fV64f_V64f_CortexA9(const Yep64f *YEP_RESTRICT coef, const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize coefCount, YepSize length);
#endif // YEP_HARDEABI_ARM_ABI
YEP_USE_DISPATCH_TABLE_SECTION const FunctionDescriptor<YepStatus (YEPABI*)(const Yep64f *YEP_RESTRICT, const Yep64f *YEP_RESTRICT, Yep64f *YEP_RESTRICT, YepSize, YepSize)> _dispatchTable_yepMath_EvaluatePolynomial_V64fV64f_V64f[] = 
{
	#if defined(YEP_MICROSOFT_X64_ABI)
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_Nehalem, YepIsaFeaturesDefault, YepX86SimdFeatureSSE | YepX86SimdFeatureSSE3 | YepX86SimdFeatureSSE2, YepX86SystemFeatureXMM, YepCpuMicroarchitectureNehalem, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_Bonnell, YepIsaFeaturesDefault, YepX86SimdFeatureSSE | YepX86SimdFeatureSSE2, YepX86SystemFeatureXMM, YepCpuMicroarchitectureBonnell, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		#ifndef YEP_MACOSX_OS
			YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_Bulldozer, YepIsaFeaturesDefault, YepX86SimdFeatureAVX | YepX86SimdFeatureFMA4, YepX86SystemFeatureYMM, YepCpuMicroarchitectureBulldozer, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		#endif // YEP_MACOSX_OS
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_SandyBridge, YepIsaFeaturesDefault, YepX86SimdFeatureAVX, YepX86SystemFeatureYMM, YepCpuMicroarchitectureSandyBridge, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_Haswell, YepIsaFeaturesDefault, YepX86SimdFeatureSSE | YepX86SimdFeatureFMA3 | YepX86SimdFeatureAVX, YepX86SystemFeatureXMM | YepX86SystemFeatureYMM, YepCpuMicroarchitectureHaswell, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
	#endif // YEP_MICROSOFT_X64_ABI
	#if defined(YEP_SYSTEMV_X64_ABI)
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_Nehalem, YepIsaFeaturesDefault, YepX86SimdFeatureSSE3 | YepX86SimdFeatureSSE2, YepX86SystemFeatureXMM, YepCpuMicroarchitectureNehalem, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_Bonnell, YepIsaFeaturesDefault, YepX86SimdFeatureSSE | YepX86SimdFeatureSSE2, YepX86SystemFeatureXMM, YepCpuMicroarchitectureBonnell, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		#ifndef YEP_MACOSX_OS
			YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_Bulldozer, YepIsaFeaturesDefault, YepX86SimdFeatureAVX | YepX86SimdFeatureFMA4, YepX86SystemFeatureYMM, YepCpuMicroarchitectureBulldozer, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		#endif // YEP_MACOSX_OS
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_SandyBridge, YepIsaFeaturesDefault, YepX86SimdFeatureAVX, YepX86SystemFeatureYMM, YepCpuMicroarchitectureSandyBridge, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_Haswell, YepIsaFeaturesDefault, YepX86SimdFeatureSSE | YepX86SimdFeatureFMA3 | YepX86SimdFeatureAVX, YepX86SystemFeatureXMM | YepX86SystemFeatureYMM, YepCpuMicroarchitectureHaswell, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
	#endif // YEP_SYSTEMV_X64_ABI
	#if defined(YEP_SOFTEABI_ARM_ABI)
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_CortexA9, YepARMIsaFeatureVFP2 | YepARMIsaFeatureVFPd32, YepSimdFeaturesDefault, YepSystemFeaturesDefault, YepCpuMicroarchitectureCortexA9, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
	#endif // YEP_SOFTEABI_ARM_ABI
	#if defined(YEP_HARDEABI_ARM_ABI)
		YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_CortexA9, YepARMIsaFeatureVFP2 | YepARMIsaFeatureVFPd32, YepSimdFeaturesDefault, YepSystemFeaturesDefault, YepCpuMicroarchitectureCortexA9, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
	#endif // YEP_HARDEABI_ARM_ABI
	YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_EvaluatePolynomial_V64fV64f_V64f_Default, YepIsaFeaturesDefault, YepSimdFeaturesDefault, YepSystemFeaturesDefault, YepCpuMicroarchitectureUnknown, "c++", "Naive", "None")
};


YEP_USE_DISPATCH_POINTER_SECTION YepStatus (YEPABI*_yepMath_EvaluatePolynomial_V32fV32f_V32f)(const Yep32f *YEP_RESTRICT, const Yep32f *YEP_RESTRICT, Yep32f *YEP_RESTRICT, YepSize, YepSize) = YEP_NULL_POINTER;
YEP_USE_DISPATCH_POINTER_SECTION YepStatus (YEPABI*_yepMath_EvaluatePolynomial_V64fV64f_V64f)(const Yep64f *YEP_RESTRICT, const Yep64f *YEP_RESTRICT, Yep64f *YEP_RESTRICT, YepSize, YepSize) = YEP_NULL_POINTER;

#if defined(YEP_MSVC_COMPATIBLE_COMPILER)
	#pragma code_seg( push, ".text$DispatchFunction" )
#endif

YEP_USE_DISPATCH_FUNCTION_SECTION YepStatus YEPABI yepMath_EvaluatePolynomial_V32fV32f_V32f(const Yep32f *YEP_RESTRICT coefPointer, const Yep32f *YEP_RESTRICT xPointer, Yep32f *YEP_RESTRICT yPointer, YepSize coefCount, YepSize length) {
	return _yepMath_EvaluatePolynomial_V32fV32f_V32f(coefPointer, xPointer, yPointer, coefCount, length);
}

YEP_USE_DISPATCH_FUNCTION_SECTION YepStatus YEPABI yepMath_EvaluatePolynomial_V64fV64f_V64f(const Yep64f *YEP_RESTRICT coefPointer, const Yep64f *YEP_RESTRICT xPointer, Yep64f *YEP_RESTRICT yPointer, YepSize coefCount, YepSize length) {
	return _yepMath_EvaluatePolynomial_V64fV64f_V64f(coefPointer, xPointer, yPointer, coefCount, length);
}

#if defined(YEP_MSVC_COMPATIBLE_COMPILER)
	#pragma code_seg( pop )
#endif