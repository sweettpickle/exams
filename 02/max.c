#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int m;
	
	m = *tab;
	while (len)
	{
		if (*tab > m)
			m = *tab;
		len--;
		tab++;
	}
	return m;
}

int main()
{
	int a[] = {10, 2, 3, 44};
	printf("%i", max(a, 4));
	return(0);
}
