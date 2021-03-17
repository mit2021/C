/*#include<stdio.h>

int main()
{
	int i=10;
	for(i=10;i>1;i/=2){
		printf("%d ",++i);
	}
	printf("\n%d",i);
	printf("\n%d",++i);
	printf("\n%d",i);
	return 0;
}
*/

#include<stdio.h>

int main()
{
	int i=10;
	for(i=10;i>1;i/=2){
		printf("%d ",i++);
	}
	printf("\n%d",i);
	printf("\n%d",i++);
	printf("\n%d",i);
	printf("\n%d",++i);
	return 0;
}
