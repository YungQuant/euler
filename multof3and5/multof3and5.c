#include <stdio.h>
#include <stdlib.h>

int     find()
{
    int test = 999;
    int testtot = 0;
    while (test > 0){
        if (test % 3 == 0 || test % 5 == 0)
            {testtot += test;}
        test--;}
    return (testtot);
}

int     main()
{
    printf("%i\n", find());
    return (0);
}

