//calculate the value of pi with the specified decimal

#include<stdio.h>  
int main()  
{  
    double x;  
    double i = 2, d = 3;//i�ӵڶ��ʼ��dΪ�ڶ����ĸ  
    double temp=1,n = 1, n1 = 2, sum = 1;  
    scanf("%lf", &x);
    while (temp >= x)  
    {  
        temp = n / d;//ÿһ��ĵ���  
        sum += temp;
        n = n*n1;//����  
        n1++;  
        d = d*(2 * i + 1);//��ĸ 
        i++;  
    }  
    printf("%.6f\n", sum*2); 
    return 0;  
}
