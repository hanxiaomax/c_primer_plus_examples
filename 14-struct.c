/*----------------------------
其他结构特性
-----------------------------*/
#include<stdio.h>
#include<string.h>
#define LEN 8
struct names /*此处不含有等号*/
{
	char first[LEN];
	char last[LEN];
	int letters;
};
/*2.通过指针来双向操作结构信息*/
void getinfo(struct names *);
void makeinfo(struct names *);
void showinfo(const struct names *);/*指针操作是双向的，为了保护数据使用const限定

/*3.通过结构参数和返回值操作结构信息*/
struct names getinfo_re(void);/*返回值为name型结构的函数*/
struct names makeinfo_re(struct names info);
void showinfo_re(const struct names info);

int main(void)
{
	struct names boy=
	{"wang","hu"};
	struct names girl=boy;/*1.相同结构赋值*/
	struct names person1;
	struct names person2;

	printf("%s %s\n",boy.first,boy.last);
	printf("%s %s\n",girl.first,girl.last);
	printf("---------通过指针操作-------------\n");
	getinfo(&person1);/*已经通过指针修改了结构信息*/
	makeinfo(&person1);
	showinfo(&person1);
	printf("---------通过返回值操作------------\n");
	person2=getinfo_re();
	person2=makeinfo_re(person2);
	showinfo_re(person2);
	return 0;

}

void getinfo(struct names *p) /*2.通过指针来双向操作结构信息*/
{
	printf("Please input your first name:");
	gets(p->first);
	printf("Please input your last name:");
	gets(p->last);
}
void makeinfo(struct names *p)
{
	p->letters=strlen(p->first)+strlen(p->last);
}
void showinfo(const struct names *p)
{
	printf("%s %s ,your name contains %d letters\n",p->first,p->last,p->letters);
}



struct names getinfo_re(void)/*3.通过返回值操作结构信息*/
{
	struct names temp_info;
	printf("Please input your first name:");
	gets(temp_info.first);
	printf("Please input your last name:");
	gets(temp_info.last);
	return temp_info;
}
struct names makeinfo_re(struct names info)
{
	info.letters=strlen(info.first)+strlen(info.last);
	return info;
}
void showinfo_re(const struct names info)
{
	printf("%s %s ,your name contains %d letters\n",info.first,info.last,info.letters);
}


















