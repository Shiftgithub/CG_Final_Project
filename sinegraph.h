#include <math.h>
#include <dos.h>
void sinegraph()
{

    int angle = 0;
    double x, y;

    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
    /* generate a sine wave */
    for(x = 0; x < getmaxx(); x+=3)
    {

        /* calculate y value given x */
        y = 50*sin(angle*3.141/180);
        y = getmaxy()/2 - y;

        /* color a pixel at the given position */
        putpixel(x, y, 15);
        delay(100);

        /* increment angle */
        angle+=5;
    }
}
