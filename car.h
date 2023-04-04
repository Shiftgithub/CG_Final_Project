
void Car()
{
    int i, maxx, midy;

    /* initialize graphic mode */
    /* maximum pixel in horizontal axis */
    maxx = getmaxx();
    /* mid pixel in vertical axis */
    midy = getmaxy()/2;
    line(10,10,10,30);
    line(10,10,20,20);
    line(20,20,30,10);
    line(30,10,30,30);

    //A
    line(40,10,35,30);
    line(40,10,50,30);
    line(45,20,37,20);

    //M
    line(55,10,55,30);
    line(55,10,65,20);
    line(65,20,75,10);
    line(75,10,75,30);

    //U
    line(80,10,80,30);
    line(80,30,90,30);
    line(90,30,90,10);

    //N
    line(95,10,95,30);
    line(95,10,105,30);
    line(105,30,105,10);

    //M
    line(120,10,120,30);
    line(120,10,130,20);
    line(130,20,140,10);
    line(140,10,140,30);

    //I
    line(150,10,150,30);
    line(150,10,144,10);
    line(150,10,154,10);
    line(150,30,144,30);
    line(150,30,154,30);

    //A
    line(165,10,160,30);
    line(165,10,175,30);
    line(170,20,162,20);

    //T
    line(190,10,190,30);
    line(190,10,185,10);
    line(190,10,195,10);

    //U
    line(200,10,200,30);
    line(200,30,210,30);
    line(210,30,210,10);

    //R
    line(215,10,215,30);
    line(215,10,225,15);
    line(225,15,215,20);
    line(215,20,225,30);

    //A
    line(235,10,230,30);
    line(235,10,245,30);
    line(240,20,232,20);

    //N
    line(250,10,250,30);
    line(250,10,260,30);
    line(260,30,260,10);

    //ID(CSE)
    arc(15,50,90,270,10);
    circle(15,43,2);
    line(30,40,25,50);
    line(25,50,28,55);
    line(28,55,19,60);
    line(35,40,35,60);
    line(35,40,45,40);
    line(35,60,45,60);
    line(35,50,45,50);

    //Full ID
    arc(55,45,270,90,6);

    circle(55,40,2);

    line(55,50,65,60);
    circle(75,50,8);
    circle(95,50,8);
    line(115,40,115,57);
    line(115,57,110,57);
    line(115,57,120,57);
    line(115,40,110,45);
    circle(130,50,8);
    line(147,40,147,57);
    line(147,40,142,45);
    line(147,57,142,57);
    line(147,57,152,57);

    arc(160,50,270,90,10);
    circle(160,45,5);
    circle(180,50,8);

    arc(195,45,270,90,6);
    circle(195,40,2);
    arc(195,55,270,90,6);
    arc(210,50,270,90,10);
    circle(210,45,5);

    for (i=0; i < maxx-150; i=i+5)
    {
        /* clears screen */
        cleardevice();

        /* draw a white road */
        setcolor(WHITE);
        line(0, midy + 37, maxx, midy + 37);

        /* Draw Car */
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, RED);

        line(i, midy + 23, i, midy);
        line(i, midy, 40 + i, midy - 20);
        line(40 + i, midy - 20, 80 + i, midy - 20);
        line(80 + i, midy - 20, 100 + i, midy);
        line(100 + i, midy, 120 + i, midy);
        line(120 + i, midy, 120 + i, midy + 23);
        line(0 + i, midy + 23, 18 + i, midy + 23);
        arc(30 + i, midy + 23, 0, 180, 12);
        line(42 + i, midy + 23, 78 + i, midy + 23);
        arc(90 + i, midy + 23, 0, 180, 12);
        line(102 + i, midy + 23, 120 + i, midy + 23);
        line(28 + i, midy, 43 + i, midy - 15);
        line(43 + i, midy - 15, 57 + i, midy - 15);
        line(57 + i, midy - 15, 57 + i, midy);
        line(57 + i, midy, 28 + i, midy);
        line(62 + i, midy - 15, 77 + i, midy - 15);
        line(77 + i, midy - 15, 92 + i, midy);
        line(92 + i, midy, 62 + i, midy);
        line(62 + i, midy, 62 + i, midy - 15);
        floodfill(5 + i, midy + 22, YELLOW);
        setcolor(BLUE);
        setfillstyle(SOLID_FILL, DARKGRAY);
        /*  Draw Wheels */
        circle(30 + i, midy + 25, 9);
        circle(90 + i, midy + 25, 9);
        floodfill(30 + i, midy + 25, BLUE);
        floodfill(90 + i, midy + 25, BLUE);
        /* Add delay of 0.1 milli seconds */
        delay(100);
    }

}