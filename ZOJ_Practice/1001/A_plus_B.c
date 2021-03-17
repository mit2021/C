/*
问题描述：
Calculate a + b
Input
The input will consist of a series of pairs of integers a and b,separated by a space, one pair of integers per line.
Output
For each pair of input integers a and b you should output the sum of a and b in one line,and with one line of output for each line in input.
Sample Input

1 5

Sample Output

6

Hint
Use + operator

Sample Program Here
*/ 



/* 仅能计算一对整型数据之和 
# include <stdio.h>

int main() 
{ 
	int a;
	int b;
	//int c;
	scanf("%d %d", &a, &b);
	//c = a+b;
	printf("%d\n",a+b);
	//printf("%d\n",c);
	return 0;
}
*/


/*
//计算一对或多对整型数据之和，并分行输出
# include <stdio.h>

int main(void)    //如果不需要从命令行中获取参数，使用int main(void)；否则使用int main(int argc, char *argv[])
{
	int a,b;
	scanf("%d %d",&a,&b);
	while(a||b)
	{
		printf("%d\n",a+b);
		scanf("%d %d",&a,&b);
	}
	return 0;
}
*/


#include<stdio.h>
int main()
{
    int a,b;
    int i=0;
    while(i!=-1)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
        i++;
    }
} 
