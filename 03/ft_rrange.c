#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int l;
	int *mas;

	if (end >= start)
		l = end - start + 1;
	else
		l = start - end + 1;
	
	if (!(mas = malloc(l * sizeof(int))))
		return NULL;
	while (l--)
	{
		if (end >= start)
			mas[l] = start++;
		else
			mas[l] = start--;
		printf("%d\n", mas[l]);
	}
	return (mas);
}

int main()
{
	ft_rrange(0, 0);
	return (0);
}
