
#include <stdio.h>
#include <math.h>

// Global Variable
double tanValues[13];
int n=12;

// Function Declaration
double conversion(int deg);
double TrapezodialRule(int n);

// Functions to convert Degree to Radians
double conversion(int deg){
    return (M_PI * deg)/180.0;
}

// Function to calculate Integral using trapezoidal rule
double TrapezodialRule(int n){
    int i;
    double width;
    double area=tanValues[0]+tanValues[n];

    for(i=1;i<n;i++) {
        area += 2.0*tanValues[i];
    }

    // Multiply integral by (b-a)/(2N), (pi/3)/(2*12)
    width = conversion(60.0-0.0)/(2*n);
    area *= width;
    return area;
}

int main()
{
    int i;
    double deg, rad;

    // Calculate the integral at points x1,..,x11 and add them
    for (i = 0; i <=n; i++)
    {
        deg = i*5.0;
        rad = conversion(deg);
        tanValues[i] = tan(rad);
    }

    double integral_approx = TrapezodialRule(n);
    printf("Approximate area of the integral from x=0 to pi/3 of the function tan(x) w.r.t x is: \n%.5f\nThe exact solution is:\n%.5f\n", integral_approx, log(2.0));

    return 0;
}
