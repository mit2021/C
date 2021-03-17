#include<stdio.h>

int main()
{
	char operators;
	int number1=0;
	int number2=0;
	
	scanf("%d %c %d",&number1,&operators,&number2);
	
	switch(operators){									//语句switch 实现多分支选择结构， switch(表达式)，表达式应为整数类型(包括字符型) 
		case '+':printf("%d\n",number1+number2);break;	//若忘记添加 breaK 语句，程序会执行下一个case 中的操作  
		case '-':printf("%d\n",number1-number2);break;
		case '*':printf("%d\n",number1*number2);break;
		case '/':printf("%d\n",number1/number2);break;
		case '%':printf("%d\n",number1%number2);break;
		default: printf("ERROR\n");						//若无 default 语句，当switch(表达式)表达式与 case 标签不匹配时，跳出 
	}
	return 0;
}
