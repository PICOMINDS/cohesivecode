/* 
    0, 1, 1, 2, 3, 5, 8, 13, 21, ..


*/

#include <stdio.h>
#include <stdlib.h>

/*
    Recursive Programming

    0, 1, 1, 2, 3, 5, 8, 13, 21, ..

                     f(n-2) + f(n-1) = f(n)
*/

int fibo_recursive(int n)
{
    if ( n <= 1)
        return 1;

    return fibo_recursive(n-1) + fibo_recursive(n-2);
}


/*
 dynamic programming

*/


int fibo_loop(int n)
{
    int f[n+2];
    int lp;

    f[0] = 0; f[1] = 1;
    for (lp = 2; lp < n+2 ; lp++)
    {
        f[lp] = f[lp-1] + f[lp-2];
    }
     
    return f[lp-1];
}

/*
    Space Saving program

    
    0, 1, 1, 2, 3, 5, 8, 13, 21, ..

   (a) (b) (c)

*/

int fibo_variables(int n)
{
    int lp;
    int a, b, c;

    c = 1; a = 0; b = 0;
    
    for (lp = 0; lp < n ; lp++)
    {
        a = b;
        b = c;
        c = a + b;
    }
     
    return c;
}

int main(int argc, char *arg[])
{

    int n = 9;
    int res;

    if (argc > 1) {
        n = atoi(arg[1]);
    }

    res = fibo_loop(n);
    printf("fibo loop at %d             : %d \n", n , res);

    res = fibo_variables(n);
    printf("fibo variables at %d        : %d \n", n , res);

    res = fibo_recursive(n);
    printf("fibo loop at %d             : %d \n", n , res);



    return 0;
}

