/* 
//�ֶκ����� switch case ����ṹ��ﲢ���㺯��ֵ 
#include<stdio.h>

int main()
{
	int a=0;
	int type=0;
	int y=0;
	scanf("%d",&a);
	if (a<0){
		type = 1;
	} 
	else if(a==0){
		type = 2;
	}
	//else {         ���������һ����书�� ��ͬ 
	else if(a>0){   
		type = 3;
	}
	// printf("%d\n",a);   ���� a ��ֵ�������ø�ֵ��Ⱥţ����ᵼ�´������Ա�������ֵ������� 
	
	switch (type){
		case 1:
			y = -1;
			break;
		case 2:
			y = 0;
			break;
		case 3:
			y = 2*a;
			break;		
	}
	printf("%d\n",y);
	return 0;
}
*/


#include<stdio.h>

int main()
{
	int a=0;
	int type=0;
	int y=0;
	int i=0;
	while (i>=0){
	
	scanf("%d",&a);
	if (a<0){
		type = 1;
	} 
	else if(a==0){
		type = 2;
	}

	else if(a>0){   
		type = 3;
	}

	
	switch (type){
		case 1:
			y = -1;
			break;
		case 2:
			y = 0;
			break;
		case 3:
			y = 2*a;
			break;		
	}
	printf("%d\n",y);
	i++;
}
		return 0;
}
 
