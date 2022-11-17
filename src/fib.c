/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    // The series startes with n = 1, which is 1.
    /* pre-condition */
    assert (n >= 1);
    /* post-condition */
    if(n == 1)
    {
        return pp;
    }
    else if(n == 2)
    {
        return fib(n-1,pp,p+pp);
    }
    else
        return fib(n-1,pp,p+pp);
}
