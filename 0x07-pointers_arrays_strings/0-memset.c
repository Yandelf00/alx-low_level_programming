char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;
    while( n - i > 0)
    {
        s[i] = b;
        i++;
    }
    return (s);
}
