###### 描述：
输出从整数A到整数B的所有整数以及这些数的和（来源：https://pintia.cn/problem-sets/14/problems/794）
###### 输入格式：
输入在一行中给出2个整数A和B，其中−100≤A≤B≤100，其间以空格分隔。
###### 输出格式：
首先顺序输出从A到B的所有整数，每5个数字占一行，每个数字占5个字符宽度，向右对齐。最后在一行中按Sum = X的格式输出全部数字的和X。

###### solution:
    ```c
    //the sum of A to B  
    #include <stdio.h>
     
    int main(){
    	int a,b,i;
    	int sum = 0;
    	int counter = 0;
    	scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){   
    	sum += i;
    	couter++;   
    	printf("%5d",i); 
    	if(couter%5 == 0 && i!=b){ 		//换行：当counter%5 == 0为真，i!=b 为真时换行   
    		printf("\n");
    		}
    	}
    	printf("\n");			//数据循环结束，换行输出数据和
    	printf("Sum = %d",sum);
    	return 0;
    }
    ```
    