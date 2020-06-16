#include<stdio.h>

// A computer program receives an integer and outputs if the input is odd or even using conditional operator (?:).
//If n is even, print 1. If odd, print 0.

int main(){
	
	int n;
	printf("Please enter an integer:");
	scanf("%d",&n);
	
	n=n%2==0?1:0;
	
	printf("%d",n);
	
	
	
	return 0;
}

