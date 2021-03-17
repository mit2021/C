#include<stdio.h>
int main()
{
    int i, j, k, A,count;
	scanf("%d", &A);
    for (i=A; i<=A+3; i++){  //循环结构 for  
    	count = 0;   // 每个 i 刚好对应 6 个不同的number 
      for (j=A; j<=A+3; j++){	//循环结构 for 
            if (j!=i){	//十位数字与百位数字不相等			 
                for(k=A; k<=A+3; k++){  //循环结构 for				 
                    if (k!=i && k!=j){	//个位与百位、十位数字均不相等					 
					    count ++;                
					    if (count==6)	//数字累计为6 						
							printf("%d", i*100+j*10+k);                       
						else printf("%d ", i*100+j*10+k);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
