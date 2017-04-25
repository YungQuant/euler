#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

long long factorial(long long n)
{
    long long r = 1;
    for(long long i = 1; i <= n; i++)
    {
        printf("r: %lld i = %lld\n", r, i);
        r = r * i;
    }
    return r;
}


int	main(int argc, char **argv)
{
    long long cnt = 0; long long thing1 = 0; long long thing2 = 0;
	if(argc == 2){
        long long d = atoi(argv[1]);
        printf("arguement: %lld\n", d);
        thing1 = factorial(2 * d);
        printf("fact(2 * d): %lld\n", thing1);
        thing2 = factorial(d) * factorial(d);
        printf("fact(d) * fact(d): %lld\n", thing2);
        cnt = thing1 / thing2;
        printf("paths for n * n matrix = %lld\n", cnt);}
    else{
        printf("wtf r u doing? pls enter valid dimension scalar integer when running findPaths.c");}
	return 0;
}
