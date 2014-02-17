#include<stdio.h>
int main()
{
	int x=30;
	printf("outer block x=%d\n",x);
	{
		int x=70;
		printf("inner block x=%d\n",x);
	}
	printf("outer block x=%d\n",x);
	while(x++<35)
	{
		int x=100;/*x=100时，while只运行一次，因为这个x还是外层的x*/
		x++;
		printf("while block x=%d\n",x);
	}
	printf("outer block x=%d\n",x);
}
