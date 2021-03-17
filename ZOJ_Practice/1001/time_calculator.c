/*
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
	if (0<=d<10) {                   //   d 和 10 的关系？？？？？ 
		printf("%d0%d\n",c,d);
	} else {
	printf("%d%d\n",c,d);}
	return 0;
 }
 */
 
/* 
#include<stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	scanf("%d %d",&a,&b);
	c = a/100;
	d = a%100;
	if (b+d>=60){
		c = c + (b+d)/60;
		d = (b+d)%60;
		if (d!=0){
		printf("%d%d\n",c,d);}
		else {
			printf("%d%00\n",c);
		}
	} 
	else if (0<b+d<60){
		d = b+d;
		printf("%d%d\n",c,d);
	} 
	else if (b+d<=0){
		if ((b+d)%60!=0){
		c = c + (b+d)/60-1;
		d = 60 + (b+d)%60;
	}else{
		c = c + (b+d)/60;
		printf("%d00\n",c);
	}
	}
	return 0;
 } 
*/
 
 
/*
#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int time=0;
	scanf("%d%d",&a,&b);

	c = a/100;
	d = a%100;
	time = c*60 + d + b;
	c = time/60;
	d = time%60; 
	printf("%d\n",c*100+d);
	
	return 0;
		
}
*/
