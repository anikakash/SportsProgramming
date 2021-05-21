dl round_up(dl n)
{
    dl intPart, fracPart;
    fracPart = modf(n,&intPart);
    dl x = fracPart*100;
    x = round(x);
    x/=100;
    intPart+=x;
    return intPart;
}