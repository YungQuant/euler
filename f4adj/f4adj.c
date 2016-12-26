#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	printarray(int array[20][20])
{

}

int	main(int argc, char **argv)
{
    FILE *inarr;
    inarr = fopen("inarray.txt", "r");
    int arr[20][20];
    int yi = 0;
    int xi = 0;
    
    while (inarr != FEOF){
        fscanf(inarr, "%i," &arr[xi][yi])

	return (0);
}
