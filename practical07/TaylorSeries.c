#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n);

int main(void)
{
    int i, order; //loop variable an input order variable
    double e, *terms;

    // Enter the Polynomial Order
    printf("Enter the required polynomial order: \n");
    if (scanf("%d", &order) != 1){
        printf("Warning : you didn't enter an integer number!");
        return 1;
    }

    //Allocate space for terms array based on n
    terms = malloc(order*sizeof(double));// malloc used for dynamic memory allocation

    for(i=0;i<order;i++){
        terms[i] = 1.0/(double)factorial(i+1);
        // the coefficient of each term in the taylors series is coded by terms
        // if x = 1, we can find sum of taylors series and that will give e
        printf("\nE term for order %d is %1.14lf\n", order, terms[i]);
    }

    e = 1.0;
    for (i=0;i<order;i++){
        e = e + terms[i];
    }

    free(terms);
    printf("\ne is estimated as %.10lf, with a difference %e. \n", e, e-exp(1.0));
    return 0;
}

// Factorial Function
int factorial(int n){
    if (n<0){
        printf("Error : Number must be positive.");
        return(-1);
    }
    else if (n==0){
        return 1;
    }
    else{
        return(n*factorial(n-1)); // recursive function
    }

}
