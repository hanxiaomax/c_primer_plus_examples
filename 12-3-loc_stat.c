#include<stdio.h>
void trystat(void);
int main(int argc,char *argv[])
{
	int i;
	for(i=1;i<=3;i++)
	{
		printf("here comes iteration:%d\n",i);
		trystat();
	}
}
void trystat(void)
{
	int fade=1;
	static int stay=1;
	printf("fade=%d and stay=%d\n",fade++,stay++);
}
