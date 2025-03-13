#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    const unsigned char WHITE  = 219;
    const unsigned char GRAY = 179;
    unsigned char ch;

    for(int count = 0;count<80*25-1;count++)
    {
        ch = WHITE;
        for (int i = 2;i<count;i++)
        {
            if (count%i == 0)
            {
                ch = GRAY;
                break;
            }
        }
        cout<<ch;
    }
    getch();
    return 0;
}