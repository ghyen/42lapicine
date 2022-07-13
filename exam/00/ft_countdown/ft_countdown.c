#include <unistd.h>

int	main(int argc, char **argv)
{
	char i = '9';
	while(i >= '0')
	{
		write(1,&i,1);
		i--;
	}
	write (1,"\n",1);
	return 0;
}
