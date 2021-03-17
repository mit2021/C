#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	scanf("%d %d",&a,&b);
	
	//printf("%d %d\n",a,b);
	
	c = (a/100*60+a%100+b)/60;
	
	//printf("%d\n",c);
	
	//printf("%d\n", (a/100*60+a%100+b)%60);
	
	d = (a/100*60+a%100+b)%60;
	
	//printf("%d\n",d);
	
	printf("%d%d\n",c,d);
	
	return 0;
}
