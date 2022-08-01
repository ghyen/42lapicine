#include <stdlib.h>
#include <stdio.h>

int	pgcd(char *s1, char *s2)
{
	int	i1;
	int	i2;
	int	cnt;
	int	ret;

	ret = 1;
	cnt = 2;
	i1 = atoi(s1);
	i2 = atoi(s2);
	while (cnt < 11)
	{
		if (i1 % cnt == 0 && i2 % cnt == 0)
		{
			i1 /= cnt;
			i2 /= cnt;
			ret *= cnt;
		}
		cnt++;
	}
	return ret;
}

int main(int argc, char **argv) 
{
	if (argc == 3)
		printf("%d",pgcd(argv[1],argv[2]));
	printf("\n");
	return 0;
}
