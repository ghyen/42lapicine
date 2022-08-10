#include <stdlib.h>
#include <stdio.h>
int	ft_abs(int i)
{
	return i > 0 ? i:i*-1;
}

int     *ft_range(int start, int end)
{
	int	dis;
	int	i;
	int	sign;
	int	*ret;
	sign = 1;
	i = 0;
	dis = start - end;
	if (ft_abs(end) > ft_abs(start))
	{
		if (dis < 0)
			dis = ft_abs(dis);
		sign = -1;
	}
	if(!(ret = malloc(sizeof(int) * (dis+1))))
		return (NULL);
	
	if (dis == 0)
	{
		ret[i] = 0;
		return ret;
	}
	while (dis-- != -1)
	{
		ret[i] = start;
		if (!sign)
			start--;
		else
			start++;
		i++;
	}
	return ret;
}

int		main(int ac, char **av)
{
	int		*s;
	int		n;
	int		min;
	int		max;

	min = atoi(av[1]);
	max = atoi(av[2]);
	n = max >= min ? max - min + 1 : min - max + 1;
	if (ac != 3)
		return (0);
	s = ft_range(min, max);
	while (*s && n--)
	{
		printf("%d",*s++);
		printf("\n");
	}
	return (1);
}
