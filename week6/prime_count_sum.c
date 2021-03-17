#include<stdio.h>

int main()
{
	int m,n,i,sum,cnt;
	scanf("%d %d", &m, &n);
	//m=10, n=31;
	if (m==1) m=2;
	for (i=m;i<=n;i++){
		int isPrime = 1;
		int k;
		for (k=2;k<i-1;k++){
			if (i%k == 0){
				isPrime = 0;
				break;
			}
		} if (isPrime) {
			sum += i;
			cnt++;
		}
	} 

printf("%d %d\n",cnt,sum);
 } 
