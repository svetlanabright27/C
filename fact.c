#include<stdio.h>

int main(){
	
	int number;
	int i;
	int fact=1;
	
	scanf("%d",&number);
	
	i=1;
	while(i<=number){
		fact=fact*i;
		i=i+1;
	}
	
	printf("Factorial of number is: %d",fact);
	return 0;
	
}
