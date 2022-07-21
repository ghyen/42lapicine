#include <unistd.h>

int main(int argc, char **argv) 
{
	int count = 1;
	char numF;
	char numB;
	while(count <= 100)
	{
		if(count % 3 == 0 && count % 5 == 0)
			write(1,"fizzbuzz",8);
		else if(count % 3 == 0)
			write(1,"fizz",4);
		else if(count % 5 == 0)
			write(1,"buzz",4);
		else
		{
			if(count >= 10)
			{
				numF = count / 10 + 48;
				numB = count % 10 + 48;
				write(1,&numF,1);
				write(1,&numB,1);
			}
			else
			{
				numB = count + 48;	
				write(1,&numB,1);
			}
		}
		count++;
		write(1,"\n",1);
	}
	return 0;
}
