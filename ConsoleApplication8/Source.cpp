#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int j;
	int i;
	int arr[10][10];
	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			arr[i][j] = rand() % 2;
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

}