#include <stdio.h>
// ���ʵ�� do{}while() ��� 
int main()
{
	int x=0;
	int one=1, two=1, five=1;

	scanf("%d", &x);
	
	do{
		do{
			do{
				if(one+two*2+five*5==x*10){
					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n", 
						one, two, five, x);
					break;
				}
				five++;
				break; 
			}while(five<x*10/5);
			break;
			two++;
			int five=1;
	
		}while(two<x*10/2);
		one++;
		int two=1;
	
	}while(one<x*10);
	
	return 0;
}
