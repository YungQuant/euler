#include <stdio.h>
#include <stdlib.h>

struct data {
	int length;
	int seed;
};

int lngstSeed, lngstLength = 0;

struct data collatz(int num)
{
	struct data data1;
	data1.seed = num;
	data1.length = 0;
	/*printf("COLLATZ FUNC> INITIAL NUM = %i DATA1.LENGTH = %i\n", num, data1.length);*/
	while (num != 1){
		if (num % 2 ==0 && num != 1){
			num /= 2;
			data1.length++;
			/*printf("COLLATZ FUNC> NUM = %i DATA1.LENGTH = %i\n", num, data1.length);*/}
		if (num % 2 != 0 && num !=1){
			num = num * 3 + 1; data1.length++; /*printf("COLLATZ FUNC> NUM = %i DATA1.LENGTH = %i\n", num, data1.length);*/}
	}
	return data1;

}

int	main(int argc, char **argv)
{
	if (argc == 2){
		int n = atoi(argv[1]);
		for (int i = 1; i < n; i++){
			struct data data2;
			printf("MAIN> INPUT DATA2.SEED/N LIMIT = %i/%i\n", i, n); 
			data2 = collatz(i);
			/*printf("MAIN> DATA2.LENGTH = %i\n\n", data2.length);*/
			if (data2.length > lngstLength){lngstLength = data2.length; lngstSeed = data2.seed;}}
		printf("MAIN> N = %i LONGEST SEED = %i LONGEST LENGTH = %i\n", n, lngstSeed, lngstLength);}
	else
		printf("MAIN>wtf u doin bro?");
	return 0;
}
