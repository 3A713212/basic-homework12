#include<stdio.h>
#include<stdlib.h>
#define size 5 
int main()
{
	int i, j;
    for (i = 1; i <= size; i++) 
	{ 
        for (j = 2; j <= 0+i; j++)
		{ 
            printf(" ");
        }
        for (j = 1; j <= 6-i; j++) 
		{
            printf("*");
        }
        printf("\n");
    } 
}

 
