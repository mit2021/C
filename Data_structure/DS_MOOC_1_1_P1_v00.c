#include<stdio.h>
void PrintN(int N)
{
	if(N>0){
		PrintN(N-1);
		printf("%d\n",N);
	}
}
int main()
{
	int N;
	scanf("%d",&N);
	PrintN(N);
	return 0;
}
