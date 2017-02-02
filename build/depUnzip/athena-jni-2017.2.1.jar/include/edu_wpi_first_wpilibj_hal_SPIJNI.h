/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_wpi_first_wpilibj_hal_SPIJNI */

#ifndef _Included_edu_wpi_first_wpilibj_hal_SPIJNI
#define _Included_edu_wpi_first_wpilibj_hal_SPIJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiInitialize
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiInitialize
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiTransaction
 * Signature: (BLjava/nio/ByteBuffer;Ljava/nio/ByteBuffer;B)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiTransaction
  (JNIEnv *, jclass, jbyte, jobject, jobject, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiWrite
 * Signature: (BLjava/nio/ByteBuffer;B)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiWrite
  (JNIEnv *, jclass, jbyte, jobject, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiRead
 * Signature: (BLjava/nio/ByteBuffer;B)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiRead
  (JNIEnv *, jclass, jbyte, jobject, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiClose
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiClose
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiSetSpeed
 * Signature: (BI)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiSetSpeed
  (JNIEnv *, jclass, jbyte, jint);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiSetOpts
 * Signature: (BIII)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiSetOpts
  (JNIEnv *, jclass, jbyte, jint, jint, jint);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiSetChipSelectActiveHigh
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiSetChipSelectActiveHigh
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiSetChipSelectActiveLow
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiSetChipSelectActiveLow
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiInitAccumulator
 * Signature: (BIIBIIBBZZ)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiInitAccumulator
  (JNIEnv *, jclass, jbyte, jint, jint, jbyte, jint, jint, jbyte, jbyte, jboolean, jboolean);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiFreeAccumulator
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiFreeAccumulator
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiResetAccumulator
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiResetAccumulator
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiSetAccumulatorCenter
 * Signature: (BI)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiSetAccumulatorCenter
  (JNIEnv *, jclass, jbyte, jint);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiSetAccumulatorDeadband
 * Signature: (BI)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiSetAccumulatorDeadband
  (JNIEnv *, jclass, jbyte, jint);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiGetAccumulatorLastValue
 * Signature: (B)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiGetAccumulatorLastValue
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiGetAccumulatorValue
 * Signature: (B)J
 */
JNIEXPORT jlong JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiGetAccumulatorValue
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiGetAccumulatorCount
 * Signature: (B)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiGetAccumulatorCount
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiGetAccumulatorAverage
 * Signature: (B)D
 */
JNIEXPORT jdouble JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiGetAccumulatorAverage
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     edu_wpi_first_wpilibj_hal_SPIJNI
 * Method:    spiGetAccumulatorOutput
 * Signature: (BLjava/nio/LongBuffer;Ljava/nio/LongBuffer;)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_wpilibj_hal_SPIJNI_spiGetAccumulatorOutput
  (JNIEnv *, jclass, jbyte, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif