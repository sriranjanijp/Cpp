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

        void operator ++()
        {
            count++;
        }

        void operator ++ (int)
        {
            count = count + 1;
        }
};

int main()
{
    Operators c1,c2;
    ++c1;
    ++c2;
    ++c2;
    c2++;
    cout << c1.count << endl;
    cout << c2.count << endl;
}