#include<stdio.h>

double factorial(unsigned int number)
{
	if(number<=0){
		return 1;
	}	
	return number*factorial(number-1);
 } 
int main()
{
	unsigned int number;
	scanf("%d",&number);
	printf("%d�Ľ׳˽��Ϊ��%f\n",number,factorial(number));
	return 0;	
 } 

