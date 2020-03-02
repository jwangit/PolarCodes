#include "reedmuller.h"
#include <math.h>
Btree *createTree(uint8_t *ptr, int8_t r, int8_t m)
{
    Btree *T;
    T = malloc(sizeof(Btree)+sizeof(uint8_t)*(int)pow(2,m));
    (T) -> r = r;
    (T) -> m = m;
    (T) -> recY = ptr;
    if ( (r==0) || (r==(m-1)) )
    {
    
        T->lchild = NULL;
        T->rchild = NULL;
    }else
    {
        T->lchild = createTree(  ptr, (r-1), (m-1));
        T->rchild = createTree( (ptr + (int)pow(2,(m-1))), r, (m-1));        
    }
    return T;
    
}

void preorder(Btree *T)
{
     if ((T)!=NULL)
    {
        uint8_t r = (T)->r;
        uint8_t m = (T)->m;
        uint8_t * recY = (T)->recY;

        printf("R(%d,%d): \n", r, m);
        printf("Received Y: ");
        for (size_t i = 0; i < ((int)pow(2,m)); i++)
        {
            printf("%d ",*(recY++));
        }
        printf("\n");
        preorder(((T)->lchild));
        preorder(((T)->rchild));        
    }
}

void destroyTree(Btree *T)
{
    Btree *pl,*pr;
    if ( T == NULL)
    {
        return ;
    }else
    {
        pl = (T)->lchild;
        pr = (T)->rchild;
        (T)->lchild = NULL;
        (T)->rchild = NULL;
        free(T);
        (T) = NULL;
        destroyTree(pl);
        destroyTree(pr);
    }
    

}