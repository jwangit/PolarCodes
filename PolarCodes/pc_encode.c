//
//  pc_encode.c
//  PolarCodes
//
//  Created by Nicola De Franceschi on 03/10/13.
//  Copyright (c) 2013 Nicola De Franceschi. All rights reserved.
//

#include <stdio.h>
#include "pc_encode.h"
#include <math.h>

void pc_encode(Bit* xOut, Bit* u, uint64_t n) {
    
    uint64_t N = 1 << n;
    
    Bit *in = u;
    
    uint64_t step;
    for(step = 1; step <= n; step++){
        
        uint64_t group_size = 1 << step;
        uint64_t op_per_group = group_size >> 1;
        
        uint64_t i;
        for(i=0; i<N/2; i++){
            
            uint64_t group_n = i/op_per_group;
            uint64_t index_in_group = i - op_per_group*group_n;
            
            uint64_t i1 = group_n*group_size + index_in_group;
            uint64_t i2 = group_n*group_size + op_per_group + index_in_group;
            
            xOut[i1] = (in[i1] + in[i2]) & 1; //mod 2
            xOut[i2] = in[i2]; //TODO: this is useless for step > 1
        }

        in = xOut;
        
    }

}

