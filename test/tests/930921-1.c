f(x) unsigned x;
{
    return (unsigned) (((unsigned long long) x * 0xAAAB) >> 16) >> 1;
}

main()
{
    unsigned i;

    for (i = 0; i < 10000; i++)
        if (f(i) != i / 3)
            abort();
    exit(0);
}
