#include "sumn.h"

#include<stdio.h>
#include <assert.h>
#include <stdlib.h>

int sumn (int n)
{
    assert(n>=1);
    if(n>1)
    {
        return ((2*n-1)+sumn(n-1));
    }
    else
    {
        return 1;
    }
}