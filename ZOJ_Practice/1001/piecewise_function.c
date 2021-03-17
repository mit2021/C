/* 
//分段函数以 switch case 程序结构表达并计算函数值 
#include<stdio.h>

int main()
{
	int a=0;
	int type=0;
	int y=0;
	scanf("%d",&a);
	if (a<0){
		type = 1;
	} 
	else if(a==0){
		type = 2;
	}
	//else {         该语句与下一条语句功能 相同 
	else if(a>0){   
		type = 3;
	}
	// printf("%d\n",a);   测试 a 的值，若误用赋值与等号，将会导致大于零自变量函数值计算出错 
	
	switch (type){
		case 1:
			y = -1;
			break;
		case 2:
			y = 0;
			break;
		case 3:
			y = 2*a;
			break;		
	}
	printf("%d\n",y);
	return 0;
}
*/


#include<stdio.h>

int main()
{
	int a=0;
	int type=0;
	int y=0;
	int i=0;
	while (i>=0){
	
	scanf("%d",&a);
	if (a<0){
		type = 1;
	} 
	else if(a==0){
		type = 2;
	}

	else if(a>0){   
		type = 3;
	}

	
	switch (type){
		case 1:
			y = -1;
			break;
		case 2:
			y = 0;
			break;
		case 3:
			y = 2*a;
			break;		
	}
	printf("%d\n",y);
	i++;
}
		return 0;
}
 
