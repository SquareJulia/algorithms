#include <cstdio>
#include <iostream>
using namespace std;
int main(void)
{
    char c;
    bool left = true;
    while ((c = getchar()) != EOF)
    {
        if (c == '"')
        {
            if (left)
            {
                cout << "``";
            }
            else
            {
                cout << "''";
            }
            left = !left;
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}