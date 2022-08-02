#include <unistd.h>
#include <stdio.h>

int	hcf(int a, int b)
{
	int	ret;
	int	cnt;

	cnt = 2;
	ret = 1;
	while (cnt < 11)
	{
		if (a % cnt == 0 && b % cnt == 0)
		{
			a /= cnt;
			b /= cnt;
			ret *= cnt;
		}
		cnt++;
	}
	return ret;
}
unsigned int	lcm(unsigned int a, unsigned int b)
{
	return (a*b)/hcf(a,b);
}

int main(int argc, char **argv) 
{
	printf("%d",lcm(12,10));
	return 0;
}
