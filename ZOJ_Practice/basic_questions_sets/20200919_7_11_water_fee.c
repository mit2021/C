//the sum of A to B  
#include <stdio.h>
 
int main(){
	int a,b,i;
	int sum = 0;
	int couter = 0;    
	scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){       
    	sum += i;
    	couter++;       
    	printf("%5d",i);     
    	if(couter%5 == 0 && i!=b){   
    		printf("\n");
		}
	}
	printf("\n");            
	printf("Sum = %d",sum);
	return 0;
}
