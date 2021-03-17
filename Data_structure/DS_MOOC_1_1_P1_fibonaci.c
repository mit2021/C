#include<stdio.h>
int fibonaci(int i)
{
	if(i==1)
	{
		return 0;	
	}	
	if(i==2)
	{
		return 1;	
	}
	return fibonaci(i-1) + fibonaci(i-2);
}

int main()
{
	int number,i;
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		printf("%d\t\n",fibonaci(i));
		}	
	return 0;
}
