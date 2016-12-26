#include <stdio.h>
#include <stdlib.h>

int	main()
{
    int fib1 = 1;
    int fib2 = 2;
    int fib3 = 0;
    int evensum = 0;
    while (fib3 < 4000000){
        fib3 = fib1 + fib2;
        if (fib3 > 4000000 || fib2 > 4000000){break;}
        if (fib3 % 2 == 0)
            evensum += fib3;
        printf("%i\n", fib3);
        fib1 = fib2;
        fib2 = fib3;}
    printf("%i\n", evensum);
    return (0);
}

