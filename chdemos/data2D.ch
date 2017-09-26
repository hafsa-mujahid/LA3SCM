/* File: data2D.ch 
   Plot a polynimial function y = x^2-1 using computational arrays
   using math coordinates */
#include <math.h>
#include <chplot.h>
#include <numeric.h>

array double x[100], y[100];
CPlot plot;

lindata(-1.5, 1.5, x);        // assign linear data from -2 to 2
y = x .* x - 1;               // assign y = x^2 - 1

plot.mathCoord();             // set up math coordinate attributes
                              // and display y = x^2 - 1 properly
plot.title("y = x^2 - 1");    // title
plot.label(PLOT_AXIS_X, "x"); // x label
plot.label(PLOT_AXIS_Y, "y"); // y label
plot.data2D(x, y);            // add data x and y for plotting
plot.plotting();              // plotting
