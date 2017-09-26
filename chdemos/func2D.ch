/* File: func2D.ch
   Plot the function y = x^2-1 */
#include<math.h>
#include<chplot.h>

/* the function y=x*x-1 to be plotted */
double func(double x) {
   return x*x - 1;   
}

double x0 = -2, xf = 2;  // beginning and end points 
int num = 100;           // number of points for the plot 
CPlot plot;              // declare a variable of plotting class

plot.mathCoord();
plot.title("y=x^2-1");
plot.func2D(x0, xf, num, func);
plot.plotting();
