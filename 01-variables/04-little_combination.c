#include <stdio.h>

int main(void)
{
    char c = 97;
    
    while (c <= 122)
    {
        putchar(c);
        c++;
    }
    {
        char b = 65;
        
        while (b <= 90)
        {
            putchar (b);
            b++;
        }
    }
    {
        int d, t;
        
        for (d = 0; d < 10; d++)
        {
            putchar(d + '0');
        }
        for (t = 'a'; t <= 'f'; t++)
        {
            putchar(t);
        }
    }
    
    putchar('\n');
    return (0);
}
