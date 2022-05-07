#include <cstdio>

#include <cstring>
const char dict[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(void)
{
    char c;
    const char *p;
    while ((c = getchar()) != EOF)
    {
        if ((p = strchr(dict, c)) != NULL)
        {
            putchar(*(p - 1));
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
