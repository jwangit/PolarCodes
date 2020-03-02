//
//  reedmuller.h
//  PolarCodes
//
//  Created by Nicola De Franceschi on 03/10/13.
//  Copyright (c) 2013 Nicola De Franceschi. All rights reserved.
//
#ifndef REEDMULLER_H
#define REEDMULLER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

typedef struct treeNode
{
    uint8_t r, m;
    uint8_t *recY;
    struct treeNode *lchild, *rchild;
}Btree;

Btree *createTree(uint8_t *ptr, int8_t r, int8_t m);
void preorder(Btree *T);
void destroyTree(Btree *T);
#endif