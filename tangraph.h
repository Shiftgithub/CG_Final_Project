void tangraph()
{
    int angle = 0;
    double x, y;
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
    /* generate a sine wave */
    for(x = 0; x < getmaxx(); x++)
    {

        /* calculate y value given x */
        y = 50*tan(angle*3.141/180);
        y = getmaxy()/2 - y;

        /* color a pixel at the given position */
        putpixel(x, y, 15);
        delay(50);

        /* increment angle */
        angle+=2;
    }
}


