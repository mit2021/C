#include<stdio.h>

int main()
{
	unsigned int speed=0;
	scanf("%d",&speed);
	if (speed>60){
		printf("Speed: %d - Speeding\n",speed);
	} else printf("Speed: %d - OK\n",speed);
	return 0;
 } 
