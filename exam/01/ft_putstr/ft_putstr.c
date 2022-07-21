#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1,str,1);
		str++;
	}
}

int main(int argc, char **argv) 
{
	char *a = "edwin";
	ft_putstr(a);
	
	return 0;
}
