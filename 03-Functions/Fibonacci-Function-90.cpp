int a = 1, b = 1, c;

    if (x == 1 || x == 2)
        return 1;

    for (int i = 3; i <= x; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}