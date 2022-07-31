#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return 0;
	int	i;
	
	i = 1;
	while (i <= n)
		i *= 2;
	i /= 2;
	if (i == n)
		return 1;
	return 0;
}

int main(int argc, char **argv) 
{
	printf("%d",is_power_of_2(0));
	return 0;
}
