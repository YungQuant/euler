#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct data {
	float length;
	float seed;
};

float lngstSeed, lngstLength = 0;

struct data collatz(float num)
{
	struct data data1;
	data1.seed = num;
	data1.length = 0;
	printf("COLLATZ FUNC> INITIAL NUM = %f DATA1.LENGTH = %f\n", num, data1.length);
	while (num > 1){
		if (fmod(num, 2.0) == 0 && num > 1){
			num /= 2;
			printf("COLLATZ FUNC> NUM = %f DATA1.LENGTH = %f\n", num, data1.length);}
        else{
			num = num * 3 + 1; printf("COLLATZ FUNC> NUM = %f DATA1.LENGTH = %f\n", num, data1.length);}
	    data1.length++;
    }
	return data1;

}

int	main(int argc, char **argv)
{
	if (argc == 2){
		int n = atoi(argv[1]);
		for (float i = 1; i < n; i++){
			struct data data2;
			printf("MAIN> INPUT DATA2.SEED/N LIMIT = %f/%i\n", i, n);
			data2 = collatz(i);
			printf("MAIN> DATA2.LENGTH = %f\n\n", data2.length);
			if (data2.length > lngstLength){lngstLength = data2.length; lngstSeed = data2.seed;}}
		printf("MAIN> N = %i LONGEST SEED = %f LONGEST LENGTH = %f\n", n, lngstSeed, lngstLength);}
	else
		printf("MAIN>wtf u doin bro?");
	return 0;
}
