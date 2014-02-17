/*-----------------------------
向函数传递结构信息有以下途径
1.直接传递结构成员
2.传递结构地址（指针），在函数内调用成员
3.把结构作为参数传递
-------------------------------*/

#include<stdio.h>
#define FUNDLEN 50

struct funds
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(const struct funds *);
double sum(struct funds moolah);
int main(void)
{
	struct funds stan=
	{
		"Garlic-Melon Bank",
		3024.72,
		"Lucky's Savings and Loan",
		9237.11
	};
	printf("Stan has a total of $%.2f .\n",sum(&stan));
	/*取stan结构的地址，作为参数传递到函数中*/
	return 0;
}
/*使用结构地址*/
double sum(const struct funds *money)
{
	return (money->bankfund+money->savefund);
}
/*直接传递结构，是否支持由编译器决定*/
double sum(struct funds moolah)
{
	return (moolah.bankfund+moolah.savefund);
}













