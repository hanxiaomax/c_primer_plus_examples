#include<stdio.h>
int main()
{
	int n=10;
	printf("initially n=%d\n",n);
	for(int n=1;n<3;n++)
		printf("loop 1: n=%d\n",n);
	printf("after loop 1, n=%d\n",n);/*n=10,因为已经出了block*/
	for(int n=1;n<3;n++)
	{
		printf("loop 2: index n=%d\n",n);
		int n=30;
		printf("loop 2:n=%d\n",n);/*永远是n=30*/
		n++;
	}
	printf("after loop 2,n=%d\n",n);
}
/*编译*/
/*make 12-1-forc99 出错：n重复定义*/
/*gcc 12-1-forc99.c -std=c99 -o 12-1-forc99 正确*/
/*如果不加 “-o 文件名”则生成a.o*/
/*使用./a.out可以运行*/
