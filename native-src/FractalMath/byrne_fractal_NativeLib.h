/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class byrne_fractal_NativeLib */

#ifndef _Included_byrne_fractal_NativeLib
#define _Included_byrne_fractal_NativeLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     byrne_fractal_NativeLib
 * Method:    setResolution
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_byrne_fractal_NativeLib_setResolution
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     byrne_fractal_NativeLib
 * Method:    setEquation
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_byrne_fractal_NativeLib_setEquation
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     byrne_fractal_NativeLib
 * Method:    setCoords
 * Signature: (DDDD)V
 */
JNIEXPORT void JNICALL Java_byrne_fractal_NativeLib_setCoords
  (JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble);

/*
 * Class:     byrne_fractal_NativeLib
 * Method:    setMaxIterations
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_byrne_fractal_NativeLib_setMaxIterations
  (JNIEnv *, jobject, jint);

/*
 * Class:     byrne_fractal_NativeLib
 * Method:    setTrapFactor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_byrne_fractal_NativeLib_setTrapFactor
  (JNIEnv *, jobject, jint);

/*
 * Class:     byrne_fractal_NativeLib
 * Method:    setFractalType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_byrne_fractal_NativeLib_setFractalType
  (JNIEnv *, jobject, jint);

/*
 * Class:     byrne_fractal_NativeLib
 * Method:    setAlgorithm
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_byrne_fractal_NativeLib_setAlgorithm
  (JNIEnv *, jobject, jint);

/*
 * Class:     byrne_fractal_NativeLib
 * Method:    setCValue
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_byrne_fractal_NativeLib_setCValue
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     byrne_fractal_NativeLib
 * Method:    getFractalRow
 * Signature: (II[I)[I
 */
JNIEXPORT jintArray JNICALL Java_byrne_fractal_NativeLib_getFractalRow
  (JNIEnv *, jobject, jint, jint, jintArray);

#ifdef __cplusplus
}
#endif
#endif
