#include <stdlib.h>
#include <stdio.h> //malloc protection isn't required for the exam

char    convert(int a)
{
  char  ret;
    if (a > 9)
    {
      ret=(a - 10 + 'A');
        return ret;
    }
    else
    {
      ret = (a + '0');
        return ret; 
    }
}
char    *ft_itoa_base(int value, int base)
{
    if (base > 16 || base < 2)
        return 0;
    char    *ret;
    int    sign;
    int    digit;
    int    tmp;

    sign = 0;
    tmp = value;
    digit = 1;
    if (value < 0 && base == 10)
    {
        sign = 1;
        value *= -1;
        digit++;
    }
    while (tmp >= base)
    {
        tmp /= base;
        digit++;
    }
    ret = malloc(sizeof(char)*digit);
    if (sign)
    {
        ret[0] = '-';
    }
    while (digit)
    {
        ret[digit-1] = convert(value % base);
        value /= base;
        digit--;
    }
    return ret;
}
int		main(int ac, char **av)//
{//
	if (ac == 3)//
		printf("%s", ft_itoa_base(atoi(av[1]), atoi(av[2])));//
	return (1);//
}//
