#include<stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	scanf("%d %d",&a,&b);
	c = (a/100*60+a%100+b)/60;
	d = (a/100*60+a%100+b)%60;
	printf("%d\n",100*c+d);       // printf("%d%d\n",100*c,d) ¿É·ñ£¿ 
	return 0;
 }
