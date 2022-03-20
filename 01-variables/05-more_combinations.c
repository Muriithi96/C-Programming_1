#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    int d = 0;
    
    while (d < 10)
    {
        c = 0;
        while (c < 10)
        {
            if (d != c && d<c)
            {
                putchar('0' + d);
                putchar('0' + c);
                
                if (c +d != 17)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
            
            c++;
        }
        d++;
    }
    {
        int digit1, digit2, digit3;
        
        for (digit1 = 0; digit1 < 8; digit1++)
        {
            for (digit2 = digit1 + 1; digit2 < 9; digit2++)
            {
                for (digit3 = digit2 + 1; digit3 < 10; digit3++)
                {
                    putchar((digit1 % 10) + '0');
                    putchar((digit2 % 10) + '0');
                    putchar((digit3 % 10) + '0');
                    
                    if (digit1 == 7 && digit2 == 8 && digit3 == 9)
                        continue;
                        
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');
    
    return (0);
}
