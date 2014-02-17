/*指向结构的指针*/
#include<stdio.h>
#define LEN 20

struct names
{
	char first[LEN];
	char last[LEN];
};

struct guy
{
	struct names handle;/*声明一个names类型的结构体：handle*/
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main(void)
{
	/*初始化一个含有两个元素的guy类型结构体fellow*/
	struct guy fellow[2]=
	{
		{
			{"Ewen","Villard"},
			"apple",
			"coach",
			58122.00
		},
		{
			{"feng","ling"},
			"hotdog",
			"student",
			0.00
		}
	};
	struct guy *him;/*指向guy类型结构体的指针*/
	printf("address #1: %p #2: %p\n",&fellow[0],&fellow[1]);
	/*打印结构体两个成员变量的地址*/
	him=&fellow[0];/*指针指向第一个成员*/
	printf("pointer #1: %p #2: %p\n",him,him+1);
	printf("him->income is $%.2f:(*him).income is $%.2f\n",him->income,(*him).income);/* 使用*(him)则会出错，非结构变量请求成员*/
	him++;/*指针+1，指向下一个结构*/
	printf("-------指针移动--------\n");
	printf("him->favfood is %s \nhim->handle.last is %s\n",him->favfood,him->handle.last);
	return 0;
}

/*指向某结构的指针后接->和该结构后接.是一样的*/
/*但是若要在指针后面使用.则需要先对指针取值(*p). 必须有括号，因为.的优先级很高*/






