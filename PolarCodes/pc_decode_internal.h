//
//  pc_decode_internal.h
//  PolarCodes
//
//  Created by Nicola De Franceschi on 03/10/13.
//  Copyright (c) 2013 Nicola De Franceschi. All rights reserved.
//

#ifndef PolarCodes_pc_decode_internal_h
#define PolarCodes_pc_decode_internal_h

#include "polar_codes.h"


void pc_decode_calc_f(double *new_val, double *val, uint64_t step, uint64_t n);
void pc_decode_calc_g(double *new_val, double *val, uint64_t step, uint64_t n, Bit *u, uint64_t uindex);



#endif
