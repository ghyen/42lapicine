#include <unistd.h>
#include <stdlib.h>

int	is_tab(char c)
{
	return (c < 32 || c == ' ') ? 1:0;
}

int	main(int argc, char **argv) 
{
	int	i;
	int	size;
	int	first;
	int	set;

	set = 0;
	size = 1;
	i = 0;
	while (argv[1][i])
	{
		while(argv[1][i] < 32||argv[1][i] == ' ')
			i++;
		first = i;
		while(!(argv[1][i] < 32||argv[1][i] == ' '))
			i++;
		i++;
		while(argv[1][i])
		{
			if (!(is_tab(argv[1][i])))
			{
				write(1,&argv[1][i],1);
				set = 1;
			}
			else if (set)
			{
				write(1," ",1);
				set = 0;
			}
			i++;
		}
		write(1," ",1);
		while (!(is_tab(argv[1][first])))
		{
			write(1,&argv[1][first],1);
			first++;
		}
	}
	return 0;
}
