#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int b = 0;
	printf("%p", &i);
	printf("\n");
	printf("%p", &j);
	printf("\n");
	printf("%p", &b);
	printf("\n");

	i = 10;
	int *pi = &i;
	int **ppi = &pi;
	int ***pppi = &ppi;

	printf("%d\n", i);
	*pi = 20;
	printf("%d\n", i);	
	return (0);
}
