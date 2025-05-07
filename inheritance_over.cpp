#include <iostream>
#include <iomanip>
using namespace std;

class Forest
{
    public:
        double rainfall;
        Forest(double side, double mm)
        {
            cout << setprecision(2) << fixed << side*side*mm << " mm" << endl;
        }
        
        Forest(double l, double w, double mm)
        {
            cout << setprecision(2) << fixed << l*w*mm << " mm" << endl;
        }
};

class sqForest : public Forest
{
    public:
    sqForest(double side, double mm) : Forest(side,mm)
    {
        
    }
};

class recForest : public Forest
{
    public:
    
    recForest(double l, double w, double mm) : Forest(l, w, mm) 
    {
        
    }
};

int main()
{
    double side, mm1, l, w, mm2;
    cin >> side >> mm1 >> l >> w >> mm2;
    sqForest a(side,mm1);
    recForest(l,w,mm2);
}