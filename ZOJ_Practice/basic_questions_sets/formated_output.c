#include<stdio.h>

int main()
{
	float a1=0;                            //定义浮点数 a1
	float a2=0;								//定义浮点数 a2 
	int   b=0; 								//定义整型变量 b 
	char  c=0;
	
	scanf("%f %d %c %f",&a1,&b,&c,&a2);
	printf("%c %d %4.2f %4.2f",c,b,a1,a2);
	
	return 0;
 } 
 
 
 
/*
#include<stdio.h>

int main()
{
	float a1=0;                            //定义浮点数 a1
	float a2=0;								//定义浮点数 a2 
	int   b=0; 								//定义整型变量 b 
	char  c=0;
	
	scanf("%f %d %c %f",&a1,&b,&c,&a2);		//数据以空格分隔，若输入时或 scanf参数无空格，结果？？？？
	printf("%c %d %4.2f %4.2f",c,b,a1,a2);  // %4.2f定义浮点数占4列，小数点后保留两位小数； printf 参数 不同数据间以空格分隔后输出
	
	return 0;
 } 
 */
