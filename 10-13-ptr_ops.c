#include<stdio.h>
int main(void)
{
	int urn[5]={100,200,300,400,500};
	int *ptr1,*ptr2,*ptr3;
	
	ptr1=urn;
	ptr2=&urn[2];
	printf("-----------------------------------------------------\n");
	printf("\npointer value,dereferenced pointer,pointer address:\n");
	printf("-----------------------------------------------------\n");
	printf("*ptr1=%p\t*ptr1=%d\t&ptr1=%p\n",ptr1,*ptr1,&ptr1);
	/*指针加法*/
	ptr3=ptr1+4;
	printf("-----------------------------------------------------\n");
	printf("\nadding an int to a pointer:\n");
	printf("-----------------------------------------------------\n");
	printf("ptr1+4=%p\t*(ptr1+3)=%d\n",ptr1+4,*(ptr1+3));
	printf("-----------------------------------------------------\n");
	ptr1++;
	printf("\nvalues after ptr1++\n");
	printf("-----------------------------------------------------\n");
	printf("ptr1=%p\t*ptr1=%d\t&ptr1=%p\n",ptr1,*ptr1,&ptr1);
	printf("-----------------------------------------------------\n");
	ptr2--;
	printf("\nvalues after --ptr2\n");
	printf("-----------------------------------------------------\n");
	printf("ptr2=%p\t\t*ptr2=%d\t&ptr2=%p\n",ptr2,*ptr2,&ptr2);
	printf("-----------------------------------------------------\n");
	--ptr1;
	++ptr2;
	
	printf("\nPointers reset to original values:\n");
	printf("-----------------------------------------------------\n");
	printf("ptr1=%p\t\tptr2=%p\n",ptr1,ptr2);
	printf("-----------------------------------------------------\n");
	
	printf("\nsubtracting one pointer from another:\n");
	printf("-----------------------------------------------------\n");
	printf("ptr2=%p\t\tptr1=%p\tptr2-ptr1=%d\n",ptr2,ptr1,ptr2-ptr1);
	printf("-----------------------------------------------------\n");
	printf("\nsubtracting an int from a pointer:\n");
	printf("-----------------------------------------------------\n");
	printf("ptr3=%p\t\tptr3-2=%p\n",ptr3,ptr3-2);
	printf("-----------------------------------------------------\n");
	return 0;
}







