int	ft_atoi(const char *str)
{ 
	int ret;
	int count = 1;
	char temp[10];
	int i = 0;
	while(*str)
	{
		temp[i] = *str;
		str++;
		if(temp[i] >=48 && temp[i] <=57)
			i++;
		else
			break;
	}
	i--;
	while(i != -1)
	{
		if(temp[i] >=48 && temp[i] <=57)
		{
			ret += (temp[i] -48)*count;
			count *= 10;
		}
		else
			return ret;	
		i--;
	}
	return ret;
}

#include <stdio.h>
int main(int argc, char **argv) 
{
	printf("%d",ft_atoi(argv[1]));

	return 0;
}
