#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello";
    string* p = &str1;
    cin >> str1;
    cout<< *p << endl;
}