#include<stdio.h>

int main()
// ѭ���ṹ while ʵ�ֽ׳˼��� 
/*{
	int n = 1 ;
	int i = 1 ;
	int product = 1 ;
	
	scanf("%d",&n);
	
	while(i<=n){
		product = product*i;
		i ++;
	}
	printf("ѭ��ִ�д���Ϊ%d\n",i-1);
	printf("ѭ������ʱi��ֵΪ%d\n",i);
	printf("n!�Ľ��Ϊ%d\n",product);
	return 0; 
}
*/

/*{
	int n = 1 ;
	int i = 1 ;
	int product = 1 ;
	
	scanf("%d",&n);
	
	do	{	
		product = product*i;
		i ++;
	}while(i<=n);
	printf("ѭ��ִ�д���Ϊ%d\n",i-1);
	printf("ѭ������ʱi��ֵΪ%d\n",i);
	printf("n!�Ľ��Ϊ%d\n",product);
	return 0; 
}
*/


{
	int n = 1 ;
	int num=0 ;
	int product = 1 ;
	
	scanf("%d",&n);
	num = n;
	for(;n>=1;n--)	{
		product = product*n;
	}
	printf("ѭ��ִ�д���Ϊ%d\n",num);
	printf("ѭ������ʱn��ֵΪ%d\n",n);
	printf("n!�Ľ��Ϊ%d\n",product);
	return 0; 
}
 
