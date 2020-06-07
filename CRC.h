#pragma once
#include <stdint.h>
/**
 *  \brief Cyclic Redundancy Check or CRC is used to detect error in data
 *  @param bytes Integer array which contains payload
 *  @param len of the payload
 *  @return unsigned 32 bit integer is returned which is the computed CRC
 */
uint32_t CRC_Computation(uint8_t *bytes, int len);
