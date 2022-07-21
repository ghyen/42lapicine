#include <unistd.h>

int main(int argc, char **argv) 
{
	char *temp = "";
	int cnt = 0;
	char ch;

	if(argc != 2)
		return 0;
	
	//배열의 인덱스 복사하기
	while(*argv[1])
	{
		*temp = *argv[1];
		temp++;
		argv[1]++;
		cnt++;
	}
	//배열 마지막에 널 넣기
	*temp = '\0';
	//뒤에서 부터 출력
	for(int i = 0; i < cnt; i++)
	{
		temp--;
		ch = *temp;
		write(1,&ch,1);
	}
	write(1,"\n",1);
	return 0;
}
