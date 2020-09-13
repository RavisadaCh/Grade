#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Part A : 30 points\n");
	printf("Part B : 30 points\n");
	printf("Part C : 40 points\n");
	printf("Score part A : ");
	scanf_s("%d", &x);
	printf("Score part B : ");
	scanf_s("%d", &y);
	printf("Score part C : ");
	scanf_s("%d", &z);

	int i = x + y + z;
	if (0 <= i && i<= 49)
	{
		printf("F");
	}
	else if(50<=i&&i<=54)
	{
		printf("D");
	}
	else if (55 <= i && i <= 59)
	{
		printf("D+");
	}
	else if (60 <= i && i <= 64)
	{
		printf("C");
	}
	else if (65 <= i && i <= 69)
	{
		printf("C+");
	}
	else if (70 <= i && i <= 74)
	{
		printf("B");
	}
	else if (75 <= i && i <= 79)
	{
		printf("B+");
	}
	else if (80 <= i && i <= 100)
	{
		printf("A");
	}
	return 0;
}