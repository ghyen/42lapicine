#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
	int	num1;
	int	num2;
	num1 = 0;
	num2 = 0;
	if(argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if(*argv[2] == '+')
			printf("%d",num1+num2);
		else if(*argv[2] == '-')
			printf("%d",num1-num2);
		else if(*argv[2] == '*')
			printf("%d",num1*num2);
		else if(*argv[2] == '/')
			printf("%d",num1/num2);
		else if(*argv[2] == '%')
			printf("%d",num1%num2);
	}

	printf("\n");
	return 0;
}
