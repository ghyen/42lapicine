#include <unistd.h>

int	is_char(char ch)
{
	if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
		return 1;
	return 0;
}

char	convert(char ch)
{
	int	dis;
	int	big;

	big = 0;
	dis = 0;
	if (ch >= 'A' && ch <= 'Z')
	{
		ch += 32;
		big = 1;
	}

	if (ch < 'm')
	{
		dis = 'm' - ch;
		ch = 'm' + dis + 1;
	}
	else if (ch == 'm')
		ch = 'n';
	else if (ch > 'n')
	{
		dis = ch - 'n';
		ch = 'n' - dis - 1;
	}
	else if (ch == 'n')
		ch = 'm';

	if(big)
		ch -=32;
	return ch;
}

int main(int argc, char **argv)
{
	char	ret;
	if(argc == 2)
	{
		while(*argv[1])
		{
			if (is_char(*argv[1]))
			{
				ret = convert(*argv[1]);
				write(1,&ret,1);
			}
			else
				write(1,argv[1],1);
			argv[1]++;
		}
	}
	write(1,"\n",1);
	return 0;
}
