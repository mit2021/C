/*
#include<stdio.h>

int main()
{
	int year;
	
	scanf("%d",&year);
	
	if (year%4==0){
		if(year%100==0){
			if(year%400==0){
				printf("The year %d is leap year.\n",year);
			}else printf("The year %d is normal year.\n",year);
		}else printf("The year %d is leap year.\n",year);
	}else printf("The year %d is normal year.\n",year);
	
	return 0;
 } 
*/
 

/*
#include<stdio.h>

int main()
{
	int year,leap;
	
	scanf("%d",&year);
	
	if (year%4==0){
		if(year%100==0){
			if(year%400==0){
				leap=1;
			}else leap=0;
		}else leap=1;
	}else leap=0;
	if(leap==1){
		printf("The year %d is leap year.\n",year);
	}else printf("The year %d is normal year.\n",year);
	return 0;
 } 
 */
 
 
#include<stdio.h>

int main()
{
	int year,leap;
	
	scanf("%d",&year);

	if(year%4!=0) 
		leap = 0;
		else if(year%100!=0)
		leap = 1;
		else if(year%400!=0)
		leap = 0;
		else leap = 1;
	
	if(leap==1){
		printf("The year %d is leap year.\n",year);
	}else printf("The year %d is normal year.\n",year);
	return 0;
 } 

