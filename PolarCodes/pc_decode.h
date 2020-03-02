//
//  pc_decode.h
//  PolarCodes
//
//  Created by Nicola De Franceschi on 03/10/13.
//  Copyright (c) 2013 Nicola De Franceschi. All rights reserved.
//

#ifndef PolarCodes_pc_decode_h
#define PolarCodes_pc_decode_h

#include "polar_codes.h"
#include "channels.h"

void pc_decode(Bit *u_, Bit *y, const Channel *channel, Bit *A, uint64_t n);


#endif
