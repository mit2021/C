/*
#include <stdio.h>

int main()
{
	int sum = 0;
	int count = 0;
	int number;

	scanf("%d", &number);
	while ( number != -1 ) {
		sum += number;
		count ++;
		scanf("%d", &number);
	}

	double dsum = sum;
	printf("The average is %f.\n", dsum / count);

	return 0;
}
*/


#include <stdio.h>

int main()
{
	int sum = 0;
	int count = 0;
	int number;
	int i=0;
	while(i>=0){
	
	scanf(" %d", &number);           //如何实现第一个数字无须输入空格，第2，3，4...n个数字可输入一个或多个空格 ; 空格会被忽略？ 
	while ( number != -1 ) {
		sum += number;
		count ++;
		scanf(" %d", &number);
	}
	printf("%f\n",1.0*sum/count);   // 用浮点数与sum做积，实现平均值以浮点数形式显示 
	//double dsum = sum;
	//printf("The average is %f.\n", dsum / count);
	i++;
	}
	return 0;
}


 
 





