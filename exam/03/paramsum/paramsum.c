#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	p;
	if (nbr > 9)
		ft_putnbr(nbr%10);
	else
	{
		p = nbr + '0';
		write(1,&p,1);
	}
}

int	main(int argc, char **argv) 
{
	int	sum;

	sum = argc -1;
	ft_putnbr(sum);
	write(1,"\n",1);
	return 0;
}
