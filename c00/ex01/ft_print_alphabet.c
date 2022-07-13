#include <unistd.h>

void ft_print_alphabet()
{
	int alpa = 65;
	while(alpa<91)
	{
		write(1,&alpa, 1);
		alpa++;
	}
}
