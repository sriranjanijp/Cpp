//handling of vectors

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector <string> names {"Pankaj","Vinu","Steve","Tony","Scoups","Vinny"};
    vector <string>::iterator i;
    for(i = names.begin(); i != names.end(); i++)
    {
        cout << *i << endl;
    } 

    cout << "\n" << endl;
    //push back
    names.push_back("Sara");
    names.push_back("Minghao");

    for(i=names.begin();i!=names.end();i++)
    {
        cout << *i << endl;
    }
    cout << "\n" << endl;

    i = names.begin() + 4;
    names.insert(i,3,"San");

    for(i=names.begin();i!=names.end();i++)
    {
        cout << *i << endl;
    }
    cout << "\n" << endl;

    i = names.begin() + 4;
    names.erase(i,i+3);

    for(i=names.begin();i!=names.end();i++)
    {
        cout << *i << endl;
    }
    cout << "\n" << endl;

    names.resize(5,"S");
    
    for(i=names.begin();i!=names.end();i++)
    {
        cout << *i << endl;
    }
    cout << "\n" << endl;

    string ans = (names.empty())?"True":"False";

    cout << ans << endl;
    cout << names.at(4) << endl<<endl;
    names.pop_back();

    for(i=names.begin();i!=names.end();advance(i,1))
    {
        cout << *i << endl;
    }
    cout << "\n" << endl;

    names.empty();

    names = {"Hongjoong","Seonghwa","Yunho","Yeosang","San","Mingi","Wooyoung","Jongho"};

    for(i=names.begin();i!=names.end();advance(i,1))
    {
        cout << *i << endl;
    }
    cout << "\n" << endl;
    
    vector<string> :: iterator it;
    it = find(names.begin(),names.end(),"San");
    cout << "San Found at index " << it - names.begin() << " - " << count(names.begin(),names.end(),"San")<<" Time(s)\n" << endl;

    sort(names.begin(),names.end());

    for(i = names.begin();i!=names.end();i++)
    {
        cout << *i << endl;
    }
    cout << "\n" << endl;

    vector<string> ateez(names.begin(),names.end());
    vector<string> txt {"Soobin","Yeonjun","Taehyun","Huening Kai","Beomgyu"};
    vector<string> mem(ateez.size()+txt.size());
    merge(ateez.begin(),ateez.end(),txt.begin(),txt.end(),mem.begin());
    sort(mem.begin(),mem.end());
    
    for(i = mem.begin();i!=mem.end();i++)
    {
        cout << *i << endl;
    }
}