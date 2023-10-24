#include<stdio.h>
#include<string.h>
//WAP to check whether a string is a palindrome or not,  using pointers

int palindrome(char *str);
int main(){

char input[100];
printf("enter a string");
scanf("%s",input);

if(palindrome(input))
	printf("string is a palindrome");
	else
	printf("string is not a palindrome");
	
	return 0;
}

int palindrome(char *str){
	
	int length = strlen(str);
	char *start = str;
	char *end = str + length - 1;
	
	while(start < end){
		
		if(*start != *end){
			return 0;
		}
		
		++start;
		--end;
		
	}
	
	return 1;

}
