/*
����������
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



/* ���ܼ���һ����������֮�� 
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
//����һ�Ի�����������֮�ͣ����������
# include <stdio.h>

int main(void)    //�������Ҫ���������л�ȡ������ʹ��int main(void)������ʹ��int main(int argc, char *argv[])
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
