/* 
#include<stdio.h>

int main()

{
	unsigned int year=0;
	unsigned int hour=0;
	unsigned int salary=0;
	
	scanf("%d %d",&year,&hour);
	printf("%d %d\n",year,hour);
	
	if (year>=5){
		if (hour>40){
			salary = 40*50+(hour-40)*50*1.5;
			printf("%7.2f\n",salary);
		}else if(hour<=40){
			salary = hour*50;
		}
	}else if (year<5){
	 		if (hour>40){
			salary = 40*30+(hour-40)*30*1.5;
		  } else salary = hour*30;
		}
	printf("%7.2f\n",salary);  						// ���� salary Ϊ unsigned int ���ͣ������� 0 
	
	return 0;
}
*/



/*
#include<stdio.h>

int main()

{
	unsigned int year=0;
	unsigned int hour=0;
	unsigned int salary=0;
	
	scanf("%d %d",&year,&hour);
	
	if (year>=5){
		if (hour>40){
			salary = 40*50+(hour-40)*50*1.5;
			
		}else salary = hour*50;
		
	}else if (hour>40){
			salary = 40*30+(hour-40)*30*1.5;
		  } else salary = hour*30;
		
	printf("%7.2f\n",salary);						// ���� salary Ϊ unsigned int ���ͣ������� 0
	
	return 0;
}
*/


/*
#include<stdio.h>

int main()

{
	unsigned int year=0;
	unsigned int hour=0;
	unsigned int salary=0;
	
	scanf("%d %d",&year,&hour);
	
	if (year>4){
		if (hour>40){
			salary = 40*50+(hour-40)*50*1.5;
			
		}else salary = hour*50;
		
	}else if (hour>40){
			salary = 40*30+(hour-40)*30*1.5;
		  } else salary = hour*30;
		
	printf("%7.2f\n",salary);						// ���� salary Ϊ unsigned int ���ͣ������� 0
	
	return 0;
}
*/

/* 
#include<stdio.h>

int main()

{
	unsigned int year=0;
	unsigned int hour=0;
	double salary=0;
	
	scanf("%d %d",&year,&hour);

	if (year>=5){
	
		if (hour>40){
			
			salary = 40*50+(hour-40)*50*1.5;      //  1.5 �� 1.50 ��Ч��δ���쳣 
			
		} else salary = hour*50;					 //  50 �� 50.00 ��Ч��δ���쳣 
		
	}else if (hour>40){
			salary = 40*30+(hour-40)*30*1.5;
		  } else salary = hour*30;
		
	printf("%.2lf\n",salary);
	
	return 0;
}
*/


/*
#include<stdio.h>

int main()

{
	unsigned int year=0;
	unsigned int hour=0;
	unsigned int salary=0;
	
	scanf("%d %d",&year,&hour);

	if (year>=5){
	
		if (hour>40){
			
			salary = 40*50+(hour-40)*50*1.50;      
			printf("integer=%d\n",salary);			//����ȷ������ 2750�� 
			printf("float=%f\n",salary);			//������� 0.000000 �� ���Ͳ���ǿ��ת������ 
			printf("double=%lf\n",salary);			// ������� 0.000000 
			
		} else salary = hour*50.00;					 
		
	}else if (hour>40){
			salary = 40*30+(hour-40)*30*1.50;
		  } else salary = hour*30.00;
		
	printf("%.2lf\n",salary);						// �ɶ�������ʮ�������ݣ���ʮ��������������˴����ܽ����������Ը�������������� 
	
	return 0;
}
*/


#include<stdio.h>

int main()

{
	unsigned int year=0;
	unsigned int hour=0;
	unsigned int salary=0;
	double Salary=0.00;
	
	scanf("%d %d",&year,&hour);

	if (year>=5){
	
		if (hour>40){
			
			salary = 40*50+(hour-40)*50*1.53111;    
			Salary = 40*50+(hour-40)*50*1.53111;  
			printf("year=%d,hour=%d,salary integer=%d\n",year,hour,salary);	
			printf("year=%d,hour=%d,Salary integer=%d\n",year,hour,Salary);			
			printf("year=%d,hour=%d,salary float=%f\n",year,hour,salary);	
			printf("year=%d,hour=%d,Salary float=%f\n",year,hour,Salary);			
			printf("year=%d,hour=%d,salary double=%lf\n",year,hour,salary);			
			printf("year=%d,hour=%d,Salary double=%lf\n",year,hour,Salary);	
		} else {
		
			salary = hour*50.00;
			Salary = hour*50.00;
			printf("year=%d,hour=%d,salary integer=%d\n",year,hour,salary);	
			printf("year=%d,hour=%d,Salary integer=%d\n",year,hour,Salary);			
			printf("year=%d,hour=%d,salary float=%f\n",year,hour,salary);	
			printf("year=%d,hour=%d,Salary float=%f\n",year,hour,Salary);			
			printf("year=%d,hour=%d,salary double=%.2f\n",year,hour,salary);			
			printf("year=%d,hour=%d,Salary double=%.2f\n",year,hour,Salary);							 
		}
	}else if (hour>40){
			salary = 40*30+(hour-40)*30*1.531;
		  } else salary = hour*30.00;
		
	printf("%.2f\n",salary);					
	
	return 0;
}
 


