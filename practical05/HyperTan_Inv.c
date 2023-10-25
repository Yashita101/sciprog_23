#include <stdio.h>
#include <math.h>

double arctanh1(const double x, const double delta);
double arctanh2(const double x);

double arctanh1(const double x, const double delta) {
    double tan=0; // Holds the approximate result
    double element, value; // Element in the series
    int n = 0; // Sum param

    do
    {
        value = 2*n+1;
        element=pow(x,value)/value;
        tan += element;
        n++;
    } while(fabs(element)>=delta);

    return tan;
}

double arctanh2(const double x) {
    return((log(1+x)-log(1-x))/2);
}

int main() {

    //Variable declaration
    int j = 0;
    double delta, x;
    int n=1000;
    double tan1[n]; //Store the result of arctanh1 for each x
    double tan2[n]; //Store the result of arctanh2 for each x

    printf("Enter the precision for Maclaurin Series: \n");
    scanf("%lf",&delta);

    x=-0.9;

    while ( x<=0.9 && j<n )
    {
        tan1[j]=arctanh1(x,delta);
        tan2[j]=arctanh2(x);
        printf("The difference at x: %lf between them the values is %.10lf. \n", x, fabs(tan1[j]-tan2[j]));
        j++;
        x=x+0.1;
    }

    return 0;
}