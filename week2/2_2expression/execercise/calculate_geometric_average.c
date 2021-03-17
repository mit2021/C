#include <stdio.h>
#include <math.h>
int main() 
{
	int a;                           //计算两数据几何平均值
	int b;
	double c;
	
	printf("计算两整型数据几何平均值\n");
	
	printf("请输入两整型数据，并以空格隔开，如\"10 20\"\n");
	
	scanf("%d %d",&a,&b);
	
	c = sqrt(a*b);
	
	printf("两整型数据%d与%d的几何平均值为%f",a,b,c);
	
	return 0;
 } 
