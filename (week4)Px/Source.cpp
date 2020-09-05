#include<stdio.h>
int main()
{
	int num,p,i,sum=0;
	printf("Range : ");
	scanf_s("%d", &num);
	for (p = 2; p <= num; p++)
	{
		sum = 0;
		for (i = 1; i < p; i++)
		{
			if (p % i == 0)
			{
				sum += i;
			}
		}
		if (p == sum)
		{
			printf("%d ", p);
		}
	}
	return 0;
}