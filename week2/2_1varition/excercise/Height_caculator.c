# include <stdio.h>

int main()
{
	int heightft = 0 ;
	
	int heightin = 0 ;
	
	double Height = 0 ;
	
	printf("�����������Ӣ�ߡ�Ӣ����λ����ֵ��\n");
	
	scanf("%d %d", &heightft , &heightin);
	
	Height = heightft*30.48 + heightin*2.54 ;
	
	printf("�������Ϊ%f���ס�\n", Height) ;
	
	return 0 ;	
	
 } 
