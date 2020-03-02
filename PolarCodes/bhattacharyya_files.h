//
//  bhattacharyya_files.h
//  PolarCodes
//
//  Created by Nicola De Franceschi on 25/10/13.
//  Copyright (c) 2013 Nicola De Franceschi. All rights reserved.
//

#ifndef PolarCodes_bhattacharyya_files_h
#define PolarCodes_bhattacharyya_files_h

#include <stdio.h>
//#include <stdlib.h>
#include <stdint.h>
#include "channels.h"

typedef struct {
    uint64_t n;
    Channel channel;
    uint64_t total_samples;
    double *Z;
    double *Zvar;
} Bhattacharyya;

void get_bhattacharyya(Bhattacharyya *b, const char *dir, uint64_t n, Channel *channel);
void get_or_create_bhattacharyya(Bhattacharyya *b, const char *dir, uint64_t n, Channel *channel);
void save_bhattacharyya(Bhattacharyya *b, const char *dir);

void get_frozen_bits(Bit *bits, uint64_t K, Bhattacharyya *b);

#endif
