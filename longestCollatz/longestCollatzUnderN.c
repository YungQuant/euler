#include <stdio.h>
#include <stdlib.h>

struct data {
	int length;
	int seed;
};
struct data collatz(int num)
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
	struct data *data1Pointer = &data1;
	return data1;

}

int	main(int argc, char **argv)
{
	if (argc == 2){
		int n = atoi(argv[1]);
		for (int i = 0; i < n; i++){
			struct data data2 = collatz(i);
			printf("%i %i\n", data2.length, data2.seed);}}
	else
		printf("wtf u doin bro?");
	return 0;
}
