/*
 *                       Yeppp! library implementation
 *                   This file is auto-generated by Peach-Py,
 *        Portable Efficient Assembly Code-generator in Higher-level Python,
 *                  part of the Yeppp! library infrastructure
 * This file is part of Yeppp! library and licensed under the New BSD license.
 * See LICENSE.txt for the full text of the license.
 */

#include <jni.h>
#include <yepPrivate.h>
#include <yepMath.h>
#include <yepJavaPrivate.h>


JNIEXPORT void JNICALL Java_info_yeppp_Math_Sin_1V64f_1V64f(JNIEnv *env, jclass class, jdoubleArray xArray, jint xOffset, jdoubleArray yArray, jint yOffset, jint length) {
	enum YepStatus status;
	Yep64f* xPointer = NULL;
	Yep64f* yPointer = NULL;

	if YEP_UNLIKELY(xArray == NULL) {
		(*env)->ThrowNew(env, NullPointerException, "Argument xArray is null");
		return;
	}
	if YEP_UNLIKELY(xOffset < 0) {
		(*env)->ThrowNew(env, IllegalArgumentException, "Argument xOffset is negative");
		return;
	}
	if YEP_UNLIKELY(((YepSize)xOffset) + ((YepSize)length) > (YepSize)((*env)->GetArrayLength(env, xArray))) {
		(*env)->ThrowNew(env, IndexOutOfBoundsException, "xOffset + length exceed the length of xArray");
		return;
	}
	if YEP_UNLIKELY(yArray == NULL) {
		(*env)->ThrowNew(env, NullPointerException, "Argument yArray is null");
		return;
	}
	if YEP_UNLIKELY(yOffset < 0) {
		(*env)->ThrowNew(env, IllegalArgumentException, "Argument yOffset is negative");
		return;
	}
	if YEP_UNLIKELY(((YepSize)yOffset) + ((YepSize)length) > (YepSize)((*env)->GetArrayLength(env, yArray))) {
		(*env)->ThrowNew(env, IndexOutOfBoundsException, "yOffset + length exceed the length of yArray");
		return;
	}
	if YEP_UNLIKELY(length < 0) {
		(*env)->ThrowNew(env, NegativeArraySizeException, "Argument length is negative");
		return;
	}

	xPointer = (*env)->GetPrimitiveArrayCritical(env, xArray, NULL);
	yPointer = (*env)->GetPrimitiveArrayCritical(env, yArray, NULL);

	status = yepMath_Sin_V64f_V64f(&xPointer[xOffset], &yPointer[yOffset], length);

	(*env)->ReleasePrimitiveArrayCritical(env, yArray, yPointer, 0);
	(*env)->ReleasePrimitiveArrayCritical(env, xArray, xPointer, JNI_ABORT);
	if YEP_UNLIKELY(status != YepStatusOk) {
		yepJNI_ThrowSuitableException(env, status);
	}

}