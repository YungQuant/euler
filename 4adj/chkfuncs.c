#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "adj.h"

int isvalid(int in)
{
    if (in >= 0 && in < 20)
        return (1);
    else
        return (0);
}

int	chkup(int x, int y, int **array)
{
	int i = 0;
    int tot = array[x][y];
	while (i++ < 3){
        if (isvalid(x) && isvalid(y + i))            
            tot *= array[x][y + i];}
    return (tot);
}

int	chkdwn(int x, int y, int **array)
{
	int i = 0;
    int tot = array[x][y];
	while (i++ < 3){
        if (isvalid(x) && isvalid(y - i))            
            tot *= array[x][y - i];}
    return (tot);
}

int	chklft(int x, int y, int **array)
{
	int i = 0;
    int tot = array[x][y];
	while (i++ < 3){
        if (isvalid(x - i) && isvalid(y))            
            tot *= array[x - i][y];}
    return (tot);
}

int	chkrgt(int x, int y, int **array)
{
	int i = 0;
    int tot = array[x][y];
	while (i++ < 3){
        if (isvalid(x + i) && isvalid(y))            
            tot *= array[x + i][y];}
    return (tot);
}

int chkdul(int x, int y, int **array)
{
    int i = 0;
    int tot = array[x][y];
    while (i++ < 3){
        if (isvalid(x - i) && isvalid(y + i))
            tot *= array[x - i][y + i];}
    return (tot);
}


int chkdur(int x, int y, int **array)
{
    int i = 0;
    int tot = array[x][y];
    while (i++ < 3){
        if (isvalid(x + i) && isvalid(y + i))
            tot *= array[x + i][y + i];}
    return (tot);
}


int chkddl(int x, int y, int **array)
{
    int i = 0;
    int tot = array[x][y];
    while (i++ < 3){
        if (isvalid(x - i) && isvalid(y - i))
            tot *= array[x - i][y - i];}
    return (tot);
}


int chkddr(int x, int y, int **array)
{
    int i = 0;
    int tot = array[x][y];
    while (i++ < 3){
        if (isvalid(x + i) && isvalid(y - i))
            tot *= array[x + i][y - i];}
    return (tot);
}
