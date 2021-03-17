#include<stdio.h>
int main()
{
    int i, j, k, A, count;
    scanf("%d", &A);
    for (i=A; i<=A+3; i++){
        count = 0;			
        for (j=A; j<=A+3; j++){
            if (j!=i){//百位个位不能重复
                for(k=A; k<=A+3; k++){
                    if (k!=i && k!=j){//十位个位百位都不能重复
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

