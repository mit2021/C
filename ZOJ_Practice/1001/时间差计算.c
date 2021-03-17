#include <stdio.h>
int main()
{
	int time,during,hour,minute;
	
	 
	scanf("%d%d",&time,&during);
	
 
	
	hour=time/100;
	minute=time%100;
	time=hour*60+minute+during;
	hour=time/60;
	minute=time%60; 
	printf("%d",hour*100+minute);
	
	return 0;
		
}
