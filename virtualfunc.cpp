#include <iostream>
using namespace std;

class Shape
{
    private:
        
    public:
        int l,b;

        Shape(int a, int c)
        {
            l = a;
            b = c;
        }

        virtual void area()
        {
           cout << "Loser" << endl;
        }
};

class Square : public Shape
{
    public:
        Square(int a, int c) : Shape (a,c)
        {}

        void area()
        {
            cout << l*b << endl;
        }
};

int main()
{
    int a,b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;
    Square c(a,b), *p = &c;

    p -> area();
}