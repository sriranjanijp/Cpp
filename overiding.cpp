#include <iostream>
using namespace std;

class Operators
{
    private:
        
    
    public:
        int count;

        Operators()
        {
            count = 0;
        }

        Operators(int c)
        {
            count = c;
        }

        void operator ++()
        {
            count++;
        }

        void operator ++ (int)
        {
            count = count + 1;
        }

        Operators operator + (Operators c)
        {
            int countm = count + c.count;
            return(Operators(countm));
        }
};

int main()
{
    Operators c1,c2,c3;
    ++c1;
    ++c2;
    ++c2;
    c2++;
    cout << c1.count << endl;
    cout << c2.count << endl << endl;

    c3 = c1+c2;
    cout << c3.count << endl;
}