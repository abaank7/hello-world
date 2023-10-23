#include<stdio.h>
void swap(int,int);
 int main()
 {
 	int a,b;
 	printf("enter a and b");
 	scanf("%d%d",&a,&b);
 	swap(a,b);
 }
void swap(int a, int b)
 {
 	int c;
 	c=a;
 	a=b;
 	b=c;
 	printf("a = %d , b = %d",a,b);
 }
