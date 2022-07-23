#include <unistd.h>

int convert(char input)
{
	if((input >= 'a' && input <= 'm') 
			|| (input >= 'A' && input <= 'M'))
		return input+13;
	
	if((input >= 'n' && input <= 'z') 
			|| (input >= 'N' && input <= 'Z'))
		return input-13;
	else return input;
}

int main(int argc, char **argv) 
{
	char temp;
	if(argc != 2)
	{
		write(1,"\n",1);
		return 0;
	}
	while(*argv[1])
	{
		temp = convert(*argv[1]++);
		write(1,&temp,1);
	}
	write(1,"\n",1);
	return 0;
}
