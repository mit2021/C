#include<stdio.h>

int main()
// 循环结构 while 实现阶乘计算 
/*{
	int n = 1 ;
	int i = 1 ;
	int product = 1 ;
	
	scanf("%d",&n);
	
	while(i<=n){
		product = product*i;
		i ++;
	}
	printf("循环执行次数为%d\n",i-1);
	printf("循环结束时i的值为%d\n",i);
	printf("n!的结果为%d\n",product);
	return 0; 
}
*/

/*{
	int n = 1 ;
	int i = 1 ;
	int product = 1 ;
	
	scanf("%d",&n);
	
	do	{	
		product = product*i;
		i ++;
	}while(i<=n);
	printf("循环执行次数为%d\n",i-1);
	printf("循环结束时i的值为%d\n",i);
	printf("n!的结果为%d\n",product);
	return 0; 
}
*/


{
	int n = 1 ;
	int num=0 ;
	int product = 1 ;
	
	scanf("%d",&n);
	num = n;
	for(;n>=1;n--)	{
		product = product*n;
	}
	printf("循环执行次数为%d\n",num);
	printf("循环结束时n的值为%d\n",n);
	printf("n!的结果为%d\n",product);
	return 0; 
}
 
