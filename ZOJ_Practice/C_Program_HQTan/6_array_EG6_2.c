#include<stdio.h>

int main()
{
	int i;
	int f[20]={1,1};	//定义整型数组，第1，2项均为1 

	for(i=2;i<20;i++)	//循环结构for为整型数组第3至20项赋值 
		f[i]=f[i-2]+f[i-1];

	for(i=0;i<20;i++)
		{
			if(i%5==0) printf("\n");
			printf("%12d",f[i]);	//输出数组元素值，每数值占12列且右对齐 
		}
	printf("\n");
	return 0;
}


