#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char a, b, c;

	a = octet >> 4;
	b = octet << 4;
	c = a | b;
	write(1, &c, 1);
	return (c);
}

int main()
{
	char a = 't';
	swap_bits(a);
	return (0);
}
