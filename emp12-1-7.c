#include<stdio.h>
int overall;
int magic();
int main()
{
	int overall=1;
	printf("inner overall:%d\n",overall);
	printf("OVERALL overall:%d\n",magic());
}

int magic()
{
	//extern int overall;
	return overall;
}
