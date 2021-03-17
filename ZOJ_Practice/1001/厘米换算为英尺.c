#include<stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;
	int i=0;
	while(i>=0){
	scanf("%d",&a);
	b = a*0.01/0.3048;	
	c = (a*0.01/0.3048-b)*12;
	printf("%d %d\n",b,c);
	i++;
	}
	return 0;
 } 
