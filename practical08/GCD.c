// Importing required libraries
#include<stdio.h>

// To find greatest common divisor of 2 numbers

//GCD through Iterative Method
int iterative(int a, int b)
{
    int c;

    while(b!=0)
    {
        // Swapping the values
        c=b;

        // Getting the remainder and assigning it to b
        b=a%b;

        // Assigning the value of b to a
        a=c;
    }
    return a;
}

//GCD through Recursive Method
int recursive(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return(recursive(b,a%b));
    }
}

int main()
{
    // Declaring int type variables
    int a,b;
    printf("Enter a positive number a: \n");

    // Input from the user
    scanf("%d", &a);

    // If a is negative
    while(a<=0) {
        printf("Not a positive number. Please try again with a Positive Integer a:\n");
        scanf("%d", &a);
    }

    printf("Enter a positive number b: \n");
    scanf("%d", &b);
    // If b is negative
    while(b<=0) {
        printf("Not a positive number. Please try again with a Positive Integer b:\n");
        scanf("%d", &b);
    }

    //Printing the Output
    printf("GCD of %d and %d using iteration method is: %d\n",a,b,iterative(a, b));
    printf("GCD of %d and %d using recursive method is: %d\n",a,b,recursive(a, b));

    return 0;
}
