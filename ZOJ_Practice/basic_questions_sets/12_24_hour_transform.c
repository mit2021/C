/*
#include<stdio.h>

int main()
{
	int hour=0;
	int minute=0;
	
	scanf("%d:%d",&hour,&minute);
	
	//printf("%d\n",hour);
	printf("%d\n",minute);
	if (0<=hour AND hour<12){
		printf("%d:%d AM",hour,minute);
	} else if (12<=hour<24){
		
		hour = hour-12;
		
		//printf("%d\n",hour);
		
		//printf("%d\n",minute);
		
		printf("%d:%d PM\n",hour,minute);
	}
	return 0;
}
*/


#include<stdio.h>

int main()
{
	int hour=0;
	int minute=0;
	
	scanf("%d:%d",&hour,&minute);
	
	//printf("%d\n",minute);
	
	if (hour<12){
		printf("%d:%d AM",hour,minute);
	}else if (hour==12){
		printf("%d:%d PM\n",hour,minute);
	} 
	else if (12<=hour){
		
		hour = hour-12;
		
		//printf("%d\n",hour);
		
		//printf("%d\n",minute);
		
		printf("%d:%d PM\n",hour,minute);
	}
	return 0;
}
 
