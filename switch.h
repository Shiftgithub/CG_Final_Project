void switchs()
{
    int option;
    bool active = true;
    cout << "\t\t\t\tEnter an option : ";
    cin >> option;

    switch (option)
    {
    case 1:
        invoke(&name);
        break;
    case 2:
        invoke(&digitalClock);
        break;
    case 3:
        invoke(&emoji);
        break;
    case 4:
        invoke(&animated_circle);
        break;
    case 5:
        invoke(&myHut);
        break;
    case 6:
        invoke(&ball);
        break;
    case 7:
        invoke(&nightSky);
        break;
    case 8:
        invoke(&Car);
        break;
    case 9:
        invoke(&bargraph);
        break;
    case 10:
        invoke(&piechart);
        break;
    case 11:
        invoke(&countnumber);
    case 12:
        invoke(&concentriccrcles);
        break;
    case 13:
        invoke(&sinegraph);
        break;
    case 14:
        invoke(&tangraph);
        break;
    case 15:
        invoke(&star);
        break;
    case 16:
        invoke(&chessboard);
        break;
    default:
        active = false;
        break;
    }
}
