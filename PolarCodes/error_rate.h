//
//  error_rate.h
//  PolarCodes
//
//  Created by Nicola De Franceschi on 27/10/13.
//  Copyright (c) 2013 Nicola De Franceschi. All rights reserved.
//

#ifndef PolarCodes_error_rate_h
#define PolarCodes_error_rate_h

#include <stdio.h>
//#include <stdlib.h>
#include <stdint.h>
#include "channels.h"

typedef struct {
    uint64_t n;
    Channel channel;
    uint64_t K;
    uint64_t total_samples;
    
    double BER;
    double BER_2;

    uint64_t frame_errors;
    
} ErrorRate;


void get_error_rate(ErrorRate *er, const char *dir, uint64_t n, Channel *channel, uint64_t K);
void get_or_create_error_rate(ErrorRate *er, const char *dir, uint64_t n, Channel *channel, uint64_t K);
void save_error_rate(ErrorRate *er, const char *dir);


#endif
