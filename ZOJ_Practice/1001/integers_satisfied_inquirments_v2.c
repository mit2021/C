#include<stdio.h>
int main()
{
    int i, j, k, A, count;
    scanf("%d", &A);
    for (i=A; i<=A+3; i++){
        count = 0;			
        for (j=A; j<=A+3; j++){
            if (j!=i){//��λ��λ�����ظ�
                for(k=A; k<=A+3; k++){
                    if (k!=i && k!=j){//ʮλ��λ��λ�������ظ�
                        count ++;
                        if (count==6) printf("%d", i*100+j*10+k);
                        else printf("%d ", i*100+j*10+k);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}

