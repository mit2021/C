//#include <stdio.h>
//
//int main()
//{
//	int x;
//	
//	for ( x=1; x<=100; x++ ) {
//		int i;
//		int isPrime = 1;	//	x������
//		for ( i=2; i<x; i++ ) {
//			if ( x % i == 0 ) {
//				isPrime = 0;
//				break;
//			}
//		}
//		if ( isPrime == 1 ) {
//			printf("%d ", x);
//		} 
//	}
//	printf("\n");
//	return 0;
//}



#include <stdio.h>
// ѭ�� while ʵ�� for ѭ������ 
int main()
{
	int isPrime =1;
	int i = 1;
	int x =1 ;
	
	while(x<=100){
		while(i<x){
			if(x%i==0){
				isPrime = 0;
				break;
			}
		i++;	
		}
		if(isPrime==1){
			printf("%d ",x);
		}
		x++;
	}
	return 0;
}
