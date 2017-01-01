#include <stdio.h>
#include <stdlib.h>

struct data {
	int length;
	int seed;
};

int	collatz(int num)
{
	struct data data1;
	data1.seed = num;
	data1.length = 0;
	while (num != 1){
		if (num % 2 ==0){
			num /= 2;
			data1.length++;}
		else
			num = num * 3 + 1; data1.length++;
	}
	return data1;

}

int	main(int argc, char **argv)
{
	if (argc == 1){
		for (int i = 0; i < 1000000; i++){
			struct data data2 = collatz(i);
			printf("%i %i\n", data2.length, data2.seed);}}
	else
		printf("wtf u doin bro?");
	return 0;
}
