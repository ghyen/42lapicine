#include <unistd.h>

void	print_bits(unsigned char c)
{
	int	i;

	i = 128;
	while(i > 0)
	{
		if (c >= i)
		{
			write(1,"1",1);
			c %= i;
			i /= 2;
		}
		else
		{
			write(1,"0",1);
			i /= 2;
		}
	}
}

int	main()
{
	print_bits(2);
}
