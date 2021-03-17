#include<stdio.h>
int main()
{
	int i,j,row=0,colum=0,max;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
	max=a[0][0];
	for(i=0;i<=2;i++)		//数组遍历，行遍历 
		for(j=0;j<=3;j++)	// 数组遍历，列遍历 
			if(a[i][j]>max)		//“打擂台”算法 
				{max=a[i][j];
				row=i;
				colum=j;
				}
	printf("max=%d\nrow=%d\ncolum=%d\n",max,row,colum);		//最大值输出、行/列号输出 
	return 0;
 } 
