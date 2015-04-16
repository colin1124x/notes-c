static int func_inner()
{
    return 9;
}

int func(int n)
{
    return n % func_inner();
}
