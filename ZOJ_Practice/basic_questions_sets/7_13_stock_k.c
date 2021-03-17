/*
#include<stdio.h>

int main()
{
	float Open,High,Low,Close;
	
	scanf("%f %f %f %f",&Open,&High,&Low,&Close);
	
	if (Close<Open){
		if(Low<Close){
			if (High>Open){
				printf("BW-Solid with Lower Shadow and Upper Shadow\n");
			} else printf("BW-Solid with Lower Shadow\n");
		} else if (High>Open){
			printf("BW-Solid with Upper Shadow\n");
		}else printf("BW-Solid");
	} else if(Close==Open){
		if (Low<Close){
			if (High>Close){
				printf("R-Cross with Lower Shadow and Upper Shadow\n");
			}else printf("R-Cross with Lower Shadow\n");
		} else if (High>Close) {
			printf("R-Cross with Upper Shadow\n");
		}else printf("R-Cross\n");
	} else if (Low<Open){
		if (High>Close){
			printf("R-Hollow with Lower Shadow and Upper Shadow\n");
		}else printf("R-Hollow with Lower Shadow\n");
	}else if (High>Close){
		printf("R-Hollow with Upper Shadow\n");
	}else printf("R-Hollow\n");
	return 0;
 }
 */
 
 /*
 #include<stdio.h>
int main()
{
    double open,close,high,low;
    scanf("%lf %lf %lf %lf",&open,&high,&low,&close);

    {
        if(close<open)
        printf("BW-Solid");
    else if(close>open)
        printf("R-Hollow");
    else
        printf("R-Cross");
    }

    {//上下影线都存在的情况，记得加上前面的空格
    if((low<open&&low<close)&&(high>open&&high>close))
        printf(" with Lower Shadow and Upper Shadow");
     //下影线
    else if(low<open&&low<close)
        printf(" with Lower Shadow");
    //上影线
    else if(high>open&&high>close)
        printf(" with Upper Shadow");

    }
        return 0;
} 
*/

/*
#include <iostream>
using namespace std;
int main(){
    double Open, High, Low, Close;
    bool flag = false;
    cin>>Open>>High>>Low>>Close;
    if(Open > Close) {
        cout<<"BW-Solid";
    }else if(Open < Close) {
        cout<<"R-Hollow";
    }else {
        cout<<"R-Cross";
    }
    if (Low < Open && Low < Close) {
        cout<<" with Lower Shadow";
			flag = true;
    }
    if (High > Open && High > Close) {
        if (flag) {
            cout<<" and Upper Shadow";
        } else {
            cout<<" with Upper Shadow";
        }
    }
    return 0;
}
*/


/*
#include <stdio.h>

void Shadow(char S[],double open,double close,double high,double low);

int main()
{
    char S[3][15] = {"BW-Solid","R-Hollow","R-Cross"};
    double open,close,high,low;
    scanf("%lf%lf%lf%lf",&open,&high,&low,&close);
    if(open > close)
    {
        Shadow(S[0],open,close,high,low);
    }
    else if(open < close)
    {
        Shadow(S[1],open,close,high,low);
    }
    else
    {
        Shadow(S[2],open,close,high,low);
    }
    return 0;
}

void Shadow(char S[],double open,double close,double high,double low)
{
    if((low < open && low < close) && !(high > open && high > close))
    {
        printf("%s with Lower Shadow",S);
    }
    else if((high > open && high > close) && !(low < open && low < close))
    {
        printf("%s with Upper Shadow",S);
    }
    else if((high > open && high > close) && (low < open && low < close)) 
    {
        printf("%s with Lower Shadow and Upper Shadow",S);
    }
    else
    {
    	printf("%s",S);
	}
}
*/
