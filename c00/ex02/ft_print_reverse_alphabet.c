#include <unistd.h>

void ft_print_reverse_alphabet()
{
	int alpa = 'z';
	while(alpa >= 'a')
	{
		write(1, &alpa, 1);
		alpa--;
	}
}

int main ()
{
	ft_print_reverse_alphabet();
	return 0;
}
