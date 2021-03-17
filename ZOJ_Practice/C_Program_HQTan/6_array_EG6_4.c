#include<stdio.h>

int main() 
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2],i,j;
	
	printf("array a:\n");
	for(i=0;i<=1;i++)			//遍历二维数组a 元素并赋值于b;遍历行 
	{
		for (j=0;j<=2;j++)		//遍历数组a 列 
			{
				printf("%5d",a[i][j]);
				b[j][i]=a[i][j];	//数组a中元素与数组b中 元素对调(行、列） 
			}
		printf("\n");
	}
	printf("array b:\n");
	for(i=0;i<=2;i++)			//遍历数组b,循环结构for遍历行 
		{
			for(j=0;j<=1;j++)	//遍历列 
				printf("%5d",b[i][j]);
			printf("\n");
		}
	return 0;
}
