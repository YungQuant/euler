#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     testprime(int p)
{
    int testi = 2;

    while (testi < p){
        if (p % testi == 0){return (0);}
        testi++;}
    return (1);
}

void     prime(int n)
{
    int pcnt = 0;
    int primei = 0;
    while (pcnt <= n){
        primei++;
        if (testprime(primei)){pcnt++;}}
    printf("%ith prime = %i\n", n, primei);
}

int	main(int argc, char **argv)
{
    int i = 1;
    int n = atoi(argv[1]);
    if (argc == 2 && n > 1){prime(n);}
    else
    {
        while (argv[i]){
            printf("fuck you %i faceass bitch\n", atoi(argv[i]));
            i++;}}
	return (0);
}
