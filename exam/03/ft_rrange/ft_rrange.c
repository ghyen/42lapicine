#include <stdlib.h>
#include <stdio.h>
int	abs(int input)
{
	if (input < 0)
		input *= -1;
	return input;
}

int	*ft_rrange(int start, int end)
{
	int	*ret;
	int	len;
	int	i;
	
	i = 0;
	len = abs(start-end)+1;
	if (!(ret = (int*)malloc(sizeof(int) * len)))
		return NULL;

	while (1)
	{
		ret[i] = end;
		i++;
		if (end == start)
		{
			break;
		}
		start-end > 0 ? end++ : end--;
	}
	return ret;
}

int	main()
{
	int *ret = ft_rrange(0,-3);
	int len = abs(0 - -3) + 1;
	while(len)
	{
		printf("%d",*ret);
		ret++;
		len--;
	}

}
