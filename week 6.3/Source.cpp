#include<stdio.h>
int main()
{
	int x,i,j;
	scanf_s("%d", &x);
	for (i = 1; i <= 2*x-1; i++)
	{
		for (j = 1; j <= 2*x-1; j++)
		{
			if ((i+j)%2==0)
			{
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}