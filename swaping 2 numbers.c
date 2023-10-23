//programme for swaping two numbers using third variable
#include<stdio.h>
 int main()
 {
 	int A,B,C;
 	printf("enter first number A =");
 	scanf("%d",&A);
 	printf("enter second number B =");
 	scanf("%d",&B);
    C=A;
    A=B;
    B=C;
    printf("Now A = %d and B = %d",A,B);
    return 0;
 }
