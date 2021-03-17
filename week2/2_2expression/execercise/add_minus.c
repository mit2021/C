#include <stdio.h>

int main()
{
	int a = 14;
	int t1 = a++;
	int t2 = ++a;
	printf("&d &d %d",t1,t2,a);
	
}
