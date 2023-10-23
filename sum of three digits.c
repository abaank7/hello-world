//sum of three digits of a number 
#include<stdio.h>
 int main()
 {
 	int a,b,d1,d2,d3,s;
 	printf("Enter the three digit number");
 	scanf("%d",&a);
 	b=a/10;
 	d1=b/10;
 	d2=b%10;
 	d3=a%10;
 	s=d1+d2+d3;
 	printf("the sum of three digits is %d",s);
 	return 0;
 }
