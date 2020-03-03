#include <stdio.h>

int		ft_strcmp(const char *s1, const char *s2)
{
		while (*s1 == *s2)
		{
			if (!*s1 || !*s2)
				return (0);
			s1++;
			s2++;
		}
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int main()
{
	char a[] = "lalala";
	char b[] = "lalad";
//	printf("%d", ft_strcmp(a, b));	
	printf("%d", 0 % 2);
return (0);
}
