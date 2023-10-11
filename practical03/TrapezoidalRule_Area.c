#include <stdio.h>
#include <math.h>

int main(){

  // Declare variables, initialise end points, number of points
  int N=12, i;
  double a=0.0;
  double b = M_PI/3.0;

  printf("b = x_12 = %f rads\n\n", b);

  double width = (b - a)/(double)N;

  // Get values of f(x)=tan(x) for the end points and sum it up
  double X = tan(a)+tan(b);

  double x,y;
  double sum = X;
  
  //For loop : Get equidistant points, evaluate tan at each point and store2*tan(x) at each step
  for(i=1; i<12; i++){
    x = a + width*i;
    y = tan(x);
    // multiply by the prefactor
    sum += 2*y;
  }
  
  double integral_approx = sum * width * 0.5;
  printf("Approximate area of the integral from x=0 to pi/3 of the function tan(x) w.r.t x is: \n%.5f\nThe exact solution is:\n%.5f\n", integral_approx, log(2.0));

  return 0;
}