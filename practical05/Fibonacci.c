#include <stdio.h>
#include <stdlib.h>

// Function Declaration
// Input arguments are : f(n-1) and f(n-2)
// Output is value of f(n) and f(n-1)
void fibonacci(int *a, int *b);


int main()
{
	int n,i;
	int f1=1, f0=0;
	
	printf("Enter a Positive Integer: \n");
	scanf("%d", &n);
	
	if (n<1) {
		printf("The number is not positive.\n");
		exit(1);
	}
    
	printf("The fibonacci sequence is : \n");
	printf("%d, %d , ", f0,f1);

	// Calculating for Fibonacci series where n>=2
	for (i=2; i<=n; i++){
		// calling the function on f1 and f0
		fibonacci(&f1, &f0);
		printf("%d, ", f1);
		
		// to avoid printing more than 10 numbers on one line
		if ((i+1)%10 == 0) printf("\n");
	}

	return 0;
}
	
void fibonacci(int *a, int *b){
	
	int next;
	// *a = f(n-1), *b = f(n-2) next = f(n)
	next = *a+*b;

	//*a = f(n), *b = f(n-1)
	*b = *a;
	*a = next;

}