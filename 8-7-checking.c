#include<stdio.h>
#include<stdbool.h>
int get_int(void);
bool bad_limits(int begin,int end,int low,int hight);
double sum_squares(int a,int b);
int main()
{
	const int MIN=-1000;
	const int MAX=1000;
	int start;
	int stop;
	double answer;
	printf("lower bound -1000 and hight bound 1000\n");
	printf("lower limit:");
	start=get_int();/*利用get_int()函数来输入整数数据*/
	printf("higher limit:");
	stop=get_int();
	while(start!=0||stop!=0)/*全0的时候结束程序*/
	{
		if(bad_limits(start,stop,MIN,MAX))
			printf("invalid input,please try again\n");
		else
		{
			answer=sum_squares(start,stop);
			printf("the answer is %.1f\n",answer);
		}
		printf("Enter the limits\n");
		printf("lower limit:");
		start=get_int();
		printf("higher limit:");
		stop=get_int();
	}
	printf("Done\n");
	return 0;
}

int get_int(void)
{
	int input;
	char ch;
	while(scanf("%d",&input)!=1)
	{
		while((ch=getchar())!='\n')
			putchar(ch);
		printf(" is invalid input,try again!\n");
	}
	return input;
}

bool bad_limits(int begin,int end,int low,int high)
{
	bool not_good=false;
	if(begin>end)
	{
		printf("%d isn't smaller than %d.\n",begin,end);
		not_good=true;
	}
	else if(begin<low||end<low)
	{
		printf("Values must be %d or greater.\n",low);
		not_good=true;
	}
	else if(begin>high||end>high)
	{
		printf("Values must be %d or less.\n",high);
		not_good=true;
	}
	return not_good;
}

double sum_squares(int a,int b)
{
	double total=0;
	int i;
	for(i=a;i<=b;i++)
		total+=i*i;
	return total;
}

/*1.输入99l，则99正确读入，l因为不满足scanf要求，至此停止输入，后面的任何输入都无效，即使是对下一个%d也不行*/
/*2.l被放在stdin里面，可以通过getchar()读出来然后跳过，也可以显示*/ 

























