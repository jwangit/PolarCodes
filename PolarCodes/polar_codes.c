//
//  polar_codes.c
//  PolarCodes
//
//  Created by Nicola De Franceschi on 03/10/13.
//  Copyright (c) 2013 Nicola De Franceschi. All rights reserved.
//

#include <stdio.h>
#include "polar_codes.h"


void random_bits(Bit *bits, uint64_t N) {
    uint64_t i;
    for(i=0; i<N; i++){
        bits[i] = rand() & 1;
    }
}

void random_bits_f(Bit *bits, Bit *A, uint64_t N) {
    uint64_t i;
    for(i=0; i<N; i++){
        if(A[i] == 0)
            bits[i] = 0;
        else
            bits[i] = rand() & 1;        
    }
}

void print_bits(Bit *bits, uint64_t N) {
    
    uint64_t i;
    for(i=0; i<N; printf(" "), i++){
        if(bits[i] == 0)
            printf("0");
        else if(bits[i] == 1)
            printf("1");
        else
            printf("?");
    }
    printf("\n");
    
}

void print_doubles(double *doubles, uint64_t N) {
    uint64_t i;
    for(i=0; i<N; printf(" "), i++){
        printf("%f", doubles[i]);
    }
    printf("\n");
    
}


uint64_t bit_reverse_index(uint64_t index, uint64_t n) {
    uint64_t index2 = 0;
    uint64_t i;
    for(i=0; i < n; i++){
        index2 |= ((index >> i) & 1) << (n-i-1);
    }
    return index2;
}
