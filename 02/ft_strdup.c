#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int size = 0;
	char *s;
	while (src[size])
		size++;
	if (!(s = (char *)malloc((size + 1) * sizeof(char))))
		return NULL;
	s[size] = '\0';
	while (size >= 0)
	{
		s[size] = src[size];
		size--;
	}
	return (s);
}

int main()
{
	char s[5] = "bolo";
	printf("%s", ft_strdup(s));
	return (0);
}

