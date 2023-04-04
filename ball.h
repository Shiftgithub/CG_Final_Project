void ball()
{
    int i, x, y, flag=0;
    x = getmaxx()/2;
    y = 30;
    while (!kbhit())
    {
        if(y >= getmaxy()-30 || y <= 30)
            flag = !flag;
        /* draws the gray board */
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        circle(x, y, 30);
        floodfill(x, y, RED);

        /* delay for 50 milli seconds */
        delay(50);

        /* clears screen */
        cleardevice();
        if(flag)
        {
            y = y + 5;
        }
        else
        {
            y = y - 5;
        }
    }
}
