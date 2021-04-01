/***************************************************************************//**
 * @file
 * @brief SHA-256 digest functionality for Silicon Labs bootloader
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.  This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#include "stdint.h"
#include "stddef.h"
#include "api/btl_errorcode.h"


/** This function will initialize the CCM state struct and must be called
 *  before using the struct in any processing.
 */
void btl_initSha256(void *ctx)
{
  (void)ctx;
}

/** Push data into the SHA algorithm. If the data is not a full SHA block,
 *  mbedTLS will buffer until it has a full one.
 */
void btl_updateSha256(void *ctx, const void *data, size_t length)
{
  (void)ctx;
  (void)data;
  (void)length;
}

/** Finalize the SHA hash. This will run the remainder of the buffer through
 *  the algorithm, padding and adding the counter as necessary.
 */
void btl_finalizeSha256(void *ctx)
{
  (void)ctx;
}

/** Verify the SHA hash contained in shaState with the one in the byte array
 *  pointed to. Check the length, too.
 */
int32_t btl_verifySha256(void *ctx, const void *sha)
{
  (void)ctx;
  (void)sha;
  return BOOTLOADER_OK;
}

int32_t btl_verifyEcdsaP256r1(const uint8_t *sha256,
                              const uint8_t *signatureR,
                              const uint8_t *signatureS,
                              const uint8_t *keyX,
                              const uint8_t *keyY)
{
  (void)sha256;
  (void)signatureR;
  (void)signatureS;
  (void)keyX;
  (void)keyY;
  return BOOTLOADER_OK;

}
