# include <stdio.h>

int main()
{
	int heightft = 0 ;
	
	int heightin = 0 ;
	
	double Height = 0 ;
	
	printf("请输入您身高英尺、英寸数位的数值：\n");
	
	scanf("%d %d", &heightft , &heightin);
	
	Height = heightft*30.48 + heightin*2.54 ;
	
	printf("您的身高为%f厘米。\n", Height) ;
	
	return 0 ;	
	
 } 
