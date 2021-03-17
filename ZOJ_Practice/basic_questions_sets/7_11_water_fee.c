#include <stdio.h>
int main()
{
	float amount=0;
	float fee=0;
	
	scanf("%f",&amount);
	
	if (amount>15) {
		fee = 2.5*amount-17.5;	
	} else fee = 4*amount/3;
	printf("%.2f\n",fee);
	return 0;
 } 
