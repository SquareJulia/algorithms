#include <cstdio>
#include <cstring>

const char rev[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char buf[200];
const char *output[] = {"is not a palindrome",
                        "is a regular palindrome",
                        "is a mirrored string",
                        "is a mirrored palindrome"};

int rev_p(char c)
{
    if (c >= '1' && c <= '9')
    {
        return c - '1' + 26;
    }
    return c - 'A';
}

int main(void)
{
    // freopen("output.txt","w",stdout);
    while (scanf("%s", buf) == 1)
    {
        int pal = 1, mir = 1;
        int len = strlen(buf);
        for (int i = 0; i < (len + 1) / 2; i++)
        {
            if (buf[i] != buf[len - 1 - i])
                pal = 0;
            if (rev[rev_p(buf[i])] != buf[len - 1 - i])
                mir = 0;
        }
        printf("%s -- %s.\n\n", buf, output[(mir << 1) | pal]);
    }
    return 0;
}