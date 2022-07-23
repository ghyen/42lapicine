#include <unistd.h>

int strlen(char *str)
{
	int len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return len;
}

int main(int argc, char **argv) 
{
	int len;
	char ch;

	if(argc != 2)
		return 0;
	
	len = strlen(argv[1]) -1;

	for(int i = 0; i <= len; i++)
	{
		write(1,&argv[1][len-i],1);
	}
	write(1,"\n",1);
	return 0;
}
