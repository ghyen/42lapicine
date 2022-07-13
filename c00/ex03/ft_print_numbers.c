#include <unistd.h>

void ft_print_numbers()
{
	char a = '0';
	while(a<='9')
	{
		write(1, &a, 1);
		a++;
	}
}

int main()
{
	ft_print_numbers();
	return 0;
}
