#include <unistd.h>

int	main(int argc, char **argv)
{
	int last = argc - 1;
	while(*argv[last])
	{
		write(1,argv[last],1);
		argv[last]++;
	}
	write(1,"\n",1);
	return 0;
}
