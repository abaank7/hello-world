//reverse 4 digit number and check if its palindrome or nots
#include<stdio.h>
 int main()
 {
 	int a,b,c,d1,d2,d3,d4,s;
 	printf("Enter the number");
 	scanf("%d",&a);
 	d1=a/1000;
 	b=a/10;
 	c=b/10;
 	d4=a%10;
 	d3=b%10;
 	d2=c%10;
 	s=d4*1000+d3*100+d2*10+d1;
 	printf("The reverse of the number is %d",s);
 	if 
	 (a==s)
	printf("\nThe number is palindrome");
	else
	printf("\nThe number is not a palindrome"); 
 	return 0;
 }
