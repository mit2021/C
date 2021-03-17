//#include <stdio.h>
// 
//int main()
//{
//	int x;
//	int one, two, five;
//
//	scanf("%d", &x);
//	for ( one = 1; one < x*10; one++ ) {
//		for ( two = 1; two < x*10/2; two++ ) {
//			for ( five = 1; five < x*10/5; five++ ) {
//				if ( one + two*2 + five*5 == x*10 ) {
//					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", 
//						one, two, five, x);
//					break;
//				}else printf("不可以用%d个1角加%d个2角加%d个5角得到%d元\n", 
//						one, two, five, x);
//			}
//		}
//	}
//	
//	return 0;
//}

#include <stdio.h>
//如何用 Do while 结构实现 for 循环效果 
int main()
{
	int x;
	int one=1, two=1, five=1;

	scanf("%d", &x);
	
	do{
		do{
			do{
				if(one+two*2+five*5==x*10){
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", 
						one, two, five, x);
					break;
				}
				five++;
				//printf("%d\n",five);
			}while(five<x*10/5);
			two++;
			int five=1;
			//printf("%d\n",two); 
		}while(two<x*10/2);
		one++;
		int two=1;
		//printf("%d\n",one); 
	}while(one<x*10);
	
	return 0;
}
