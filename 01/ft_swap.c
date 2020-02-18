#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a	= *b;
	*b = tmp;
}

int main()
{
	int c = 5;
	int d = 10;
	int *a = &c;
	int *b = &d;
	ft_swap(a, b);
	printf("%d", *a);
	printf("%d", *b);
	return (0);
}
