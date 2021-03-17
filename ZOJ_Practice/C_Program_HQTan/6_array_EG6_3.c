#include<stdio.h>

int main()
{
	int a[10];
	int i,j,t;
	printf("input 10 numbers :\n");
	for(i=0;i<10;i++)	//循环结构for 读取数据并存储 
		scanf("%d",&a[i]);
	printf("\n");
	for(j=0;j<9;j++)	//重复趟数总计9次，遍历每趟 
	 for(i=0;i<9-j;i++)	// 每趟内遍历数组元素 
	  if(a[i]>a[i+1])
	  	{t=a[i];a[i]=a[i+1];a[i+1]=t;}	//条件判断，若前一项大于后一项，进行数值交换 
	printf("the sorted numbers :\n");
	for(i=0;i<10;i++)	//循环结构输出sorted 后的数组元素 
		printf("%d",a[i]);	
	printf("\n");
	return 0;
 } 
