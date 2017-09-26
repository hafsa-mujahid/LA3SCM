/**************************************************
* File: smileyfaceanim.c
* Animate a smiley face 
* The output is for animation of smiley face.
* (1a) Run this program in ChIDE by clicking Animate on the menu bar
* (1b) Run this program in Ch as follows:
*       smileyfaceanimanim.c | qanimate
*                 or
*       smileyfaceanimanim.c > tmp1.qnm
*       qanimate tmp1.qnm
* (2) Click "Go" to view the animation
* (3) Click "Slow" to slow down flashing
**************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    double t, t0 = 0.0 , tf = 9;
    
    /* A comment line starting with # */
    printf("# qanimate data for smiley face\n");
    /* The title displayed on the animation */
    printf("title \"Smiley Face\"\n");
    printf("fixture\n");
    /* The primitives following fixture */
    printf("circle %f %f %f fill blue \n", -0.4, 0.4, 0.2);
    printf("circle %f %f %f fill blue \n", 0.4, 0.4, 0.2);
    printf("arc %f %f %f %f %f %f fill blue \n", 0.0, -0.2, 1.0, 1.0, 179.5 , 180.0);
    printf("circle %f %f %f fill yellow \n", 0.0, 0.0, 1.0);
    printf("animate reverse\n");
    
    for(t = t0; t<tf; t += 1)
    {
        printf("arc %f %f %f %f %f %f fill white \n", 0.0, -0.2, t*0.1, 1.0, 179.5 , 180.0);
    }
    return 0;
}
