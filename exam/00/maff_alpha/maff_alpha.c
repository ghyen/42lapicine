#include <unistd.h>

int	main(int argc, char **argv)
{
	char *a = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;

	while(*a)
	{
		if(count % 2 != 0)
		{
			int i = *a - 32;
			write(1,&i,1);
		}
		else{
			write(1,a,1);
		}
		count++;
		a++;
	}
	write(1,"\n",1);
	return 0;
}
