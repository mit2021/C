#include<stdio.h>

int main()
{
	int i,j,k,cnt;
	int a=3;
	for( i=a; i<=a+3; i++){
		for( j=a; j<=a+3; j++){
			for( k=a; k<=a+3; k++){
				if (i!=j){
					if (i!=k){
						if (j!=k){
							cnt++;
							printf("%d%d%d",i,j,k);
							if (cnt == 6){
								printf("\n");
								cnt =0;
							} else {
								printf(" ");
							}
						}
					}
				}
			}
		}
		
	}
 } 
