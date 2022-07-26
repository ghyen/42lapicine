#include <unistd.h>

unsigned char	swap_bits(unsigned char b)
{
	return (b>>4) | (b<<4);
}

int main(int argc, char **argv)
{
	unsigned char c;

	c = '.';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = swap_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);

	return 0;
}
