/*
#include<stdio.h>

int main()
{
	int num,a,b,c;
	int i=1;
	while(i!=0){
		scanf("%d",&num);
		a = num/100;
		b = (num-100*a)/10;
		c = (num-100*a)%10;
		//printf("%d\n",c);
		if (c==0)	{
		if(b==0){
			printf("%d\n",a);			
		} else printf("%d%d\n",b,a);
	} else printf("%d%d%d\n",c,b,a);
	    i++;
	}
		return 0;
 } 
 
*/

#include<stdio.h>

int main()
{
	int num,a,b,c;
	int i=1;
	while(i>=1){
		scanf("%d",&num);
		a = num/100;
		b = num/10%10;
		c = num%10;
		printf("%d\n",100*c+10*b+a);
		i++;
		}
	return 0;
 } 

