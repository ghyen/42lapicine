#include <unistd.h>

unsigned char	reverse_bits(unsigned char b)
{
	unsigned char	r = 0;
	unsigned	len = 8;

	while(len--)
	{
		r = (r<<1) | (b & 1);
		b >>= 1;
	}
	return r;
}

int main(int argc, char **argv) 
{
	unsigned char c;

	c = '.';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	
	return 0;
}
