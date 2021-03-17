#include<stdio.h>

int main()
{
	int i,a[10];		//定义整型变量i ，整型数组a  
	for(i=0;i<=9;i++)	//循环for为数组元素赋值 
		a[i]=i;
	for(i=9;i>=0;i--)	//循环for 将数组元素逆序输出 
		printf("%d",a[i]);
	printf("\n");
	return 0;
}
