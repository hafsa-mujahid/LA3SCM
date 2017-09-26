/* File: debug.c
   Test debug features in ChIDE with the following steps:
   (1) Click 'Step' on the Debug Bar, 
       then watch variables in the Debug Pane.
   (2) When the execution has stepped into the function func(),
       click 'Variables' on the Debug Pane Selection Bar,
       then click 'Up' and 'Down' on the Debug Bar. 
   (3) Click 'Break' on the Debug Bar to set a breakpoint, 
       then click 'Start' and 'Continue'. 
       Click the breakpoint with the red mark on the left margin, 
       it will clear the breakpoint.
       Click on the left margin to set a new breakpoint.
   (4) Click 'View->Vertical' to layout ChIDE in vertical mode. 
   (5) Click 'View->Default Layout' to set ChIDE in default layout. */
#include <stdio.h>

int i = 100;          // global variable
int g = 200;   

void func(int n) {
    int i;            // local variable
    double a[5] = {1, 2, 3, 4, 5};

    g = 10;
    for (i = 0; i < n; i++) {
        a[i] *= 2;
    }
}

int main() {
    int i = 5;       // local variable

    func(i);
    printf("Done!\n");
    return 0;
}
