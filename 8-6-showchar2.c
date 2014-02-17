#include<stdio.h>
void display(char cr,int lines,int width);
main()
{
	int ch;
	int rows,cols;vg 
	printf("Enter a character and two integers:\n");
	while((ch=getchar())!=EOF)
	{
		if(scanf("%d %d",&rows,&cols)!=2)
			break;
		display(ch,rows,cols);
		while(getchar()!='\n')
			;
		printf("again.\n");
		printf("Enter a newline to quit\n");
	}
	printf("Bye. ");
	return 0;
}
void display(char cr,int lines,int width)
{
	int row,col;
	for(row=1;row<=lines;row++)
	{
		for(col=1;col<=lines;col++)
			putchar(cr);
		putchar('\n');
	}
}
