#include <stdio.h>

int main()
{
	int a;
	printf("height = ");
	scanf_s("%d", &a);
	char x[] = "*";
	printf("%*s\n", a + 1, x);
	for (int i = 0; i < a - 1; i++)
	{
		printf("%*s", a - i, x);
		for (int j = 0; j < 2 * (i + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}