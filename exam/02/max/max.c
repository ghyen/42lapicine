int	max(int* tab, unsigned int len)
{
	int	temp;

	temp = 0;
	while (*tab)
	{
		if(*tab > temp)
			temp = *tab;
		tab++;
	}
	return temp;
}

#include <stdio.h>//
#include <stdlib.h>//
int		main(void)//
{//
	int	*tab;//

	if (!(tab = (int*)malloc(sizeof(int) * 3)))//
		return (0);//
	tab[0] = 7;//
	tab[1] = 6;//
	tab[2] = 4;//
	printf("%d", max(tab, 3));//
	return (0);//
}//
