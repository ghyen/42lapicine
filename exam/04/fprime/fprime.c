#include <stdio.h>
#include <stdlib.h>

void	fprime(int input)
{
	int	i;
	int	total;
	int	target;
	int	nothing;

	nothing = 1;
	target = input;
	i = 2;
	total = 1;
	while (i < input/2)
	{
		if (target % i == 0)
		{
			total *= i;
			target /= i;
			printf("%d",i);
			if (total == input)
				break;
			printf("*");
			i = 2;
			nothing = 0;
		}
		i++;
	}
	if (nothing)
		printf("%d",input);
}

int main(int argc, char **argv) 
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return 0;
}
