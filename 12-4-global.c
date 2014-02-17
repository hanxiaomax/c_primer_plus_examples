#include<stdio.h>
int global=0;/*如果使用extern，则出现警告*/
void try_again();
int main()
{
	/*extern int global=5;/*错误，静态变量重定义*/
	/*global=1;/*正确：静态变量可以赋值*/
	scanf("%d",&global);/*正确：静态变量可以赋值*/
	printf("global=%d\n",global);
	while(global!=55)
		try_again();
	printf("You must have looked it up!!\n");
	return 0;
}

void try_again(void)
{
	/*此处忽略可选声明extern int global*/
	printf("dude,try again please!\n");
	scanf("%d",&global);
}
