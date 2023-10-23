#include<stdio.h>
#include<math.h>
int main()
{
	float income,tax;
	printf("Enterthe income") ;
	scanf("%f",&income);
	if(income<150000)
	printf("no tax");
	if(income>150001&&income<=300000)
	tax=(income-150000)*0.1;
	//	printf("your taxamout",tax);
	
	if (income>300000&&income<=500000)
	tax=15000+(income-300000)*0.2;
	
	
	//	printf("your taxamout",tax);
	if(income>500000)
	tax=75000+(income-500000)*0.3;

	printf("your taxamout %f",tax);
	return 0;
}
