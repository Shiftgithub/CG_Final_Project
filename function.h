void invoke(void (*func)())
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    exit_output();
    func();

    getch();
    closegraph();
}
void pattern(string input)
{
    cout << "\t\t\t\t\t\t" << input << endl;
}

