#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;

    public:
    //constructors
        Distance(): feet(0),inches(0.0)
        {}
        Distance(int ft,float in) : feet(ft),inches(in)
        {}
    //member functions
        void getdist()
        {
            cout << "\nEnter feet: ";
            cin >> feet;
            cout << "\nEnter inches: ";
            cin >> inches;
        }
        void showdist()
        {
            cout << feet << "\'-" << inches << '\"';
        }
    //function declaration    
        void add_dist(Distance,Distance);

    friend void hello();
};

void hello()
{
    cout << "Hello World" << endl;
}

//defining member functions outside the class
void Distance :: add_dist(Distance d2,Distance d3)     // :: is the scope resolution operator specifies the associated class
{
    inches = d2.inches + d3.inches;
    feet = 0;
    while(inches >=12.0)
    {
        inches -= 12.0;
        feet++;
    }
    feet += d2.feet + d3.feet;
}

int main()
{
    Distance dist1,dist3;
    Distance dist2(11,6.25);

    dist1.getdist();
    dist3.add_dist(dist1,dist2);

    cout << "\ndist 1 = ";    dist1.showdist();
    cout << "\ndist 2 = ";    dist2.showdist();
    cout << "\ndist 3 = ";    dist3.showdist();
    cout << endl;

    hello();
    
    cin.get(); 
    return 0;
}