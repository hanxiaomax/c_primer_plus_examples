#include<stdio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book   /*结构体定义*/
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void)
{
	struct book library[MAXBKS];/*建立book类型结构体library*/
	int count=0;/*每一个条目count+1*/
	int index=0;/*输出时作为索引*/

	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while(count<MAXBKS && gets(library[count].title)!=NULL&&library[count].title[0]!='\0')
	/*条目不超过最大数，读入一本书的书名，如果书名第一个字符不是空*/
	{
		printf("Now enter the author.\n");
		gets(library[count].author);/*继续读入作者名*/
		printf("Now enter the value.\n");
		scanf("%f",&library[count++].value);
		/*读入价格，此处是当前count最后一次使用，可以进行++*/
		while(getchar()!='\n')
			continue; /*清空输入行。仅仅使用；也可以，此处增强可读性*/
		if(count<MAXBKS)
			printf("Enter the next title.\n");
	}
    if(count>0)
    {
    	printf("Here is the list of your books:\n");
    	for(index=0;index<count;index++)
    		printf("%s by %s:$%.2f\n",library[index].title,library[index].author,library[index].value);
    }
    else
    	printf("No books? Too bad.\n");
    return 0;
}
    
    
    
    
    
    
    
    
    
