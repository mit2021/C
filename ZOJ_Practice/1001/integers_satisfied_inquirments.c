#include<stdio.h>
int main()
{
    int i, j, k, A,count;
	scanf("%d", &A);
    for (i=A; i<=A+3; i++){  //ѭ���ṹ for  
    	count = 0;   // ÿ�� i �պö�Ӧ 6 ����ͬ��number 
      for (j=A; j<=A+3; j++){	//ѭ���ṹ for 
            if (j!=i){	//ʮλ�������λ���ֲ����			 
                for(k=A; k<=A+3; k++){  //ѭ���ṹ for				 
                    if (k!=i && k!=j){	//��λ���λ��ʮλ���־������					 
					    count ++;                
					    if (count==6)	//�����ۼ�Ϊ6 						
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
