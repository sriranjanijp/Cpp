#include <iostream> 
using namespace std; 
class test1 { 
    private: 
        int a,b; 
    public: 
        void getdata() { 
            a =5;
            b = 10; 
        } 
        friend class test2; 
}; 

class test2 
{ 
    private: 
        int c,d;
        public: void getdata() { 
            c = 15;
            d = 20; 
        } 
        void sum(test1 t1) { 
            cout<<c+d+t1.a+t1.b; 
        } 
}; 

int main() { 
    test1 t1; test2 t2; t1.getdata(); t2.getdata(); t2.sum(t1); }