#include<stdio.h>

int main()
{
	char operators;
	int number1=0;
	int number2=0;
	
	scanf("%d %c %d",&number1,&operators,&number2);
	
	switch(operators){									//���switch ʵ�ֶ��֧ѡ��ṹ�� switch(���ʽ)�����ʽӦΪ��������(�����ַ���) 
		case '+':printf("%d\n",number1+number2);break;	//��������� breaK ��䣬�����ִ����һ��case �еĲ���  
		case '-':printf("%d\n",number1-number2);break;
		case '*':printf("%d\n",number1*number2);break;
		case '/':printf("%d\n",number1/number2);break;
		case '%':printf("%d\n",number1%number2);break;
		default: printf("ERROR\n");						//���� default ��䣬��switch(���ʽ)���ʽ�� case ��ǩ��ƥ��ʱ������ 
	}
	return 0;
}
