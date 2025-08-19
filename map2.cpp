#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> m;
    m["car"]=10;
    m["bike"]=12;
    m["cycle"]=3;
    m.emplace("plane",0);
    cout<<m.count("car")<<endl;
    cout<<m["car"]<<endl;
    if(m.find("")!=m.end())
    {
        cout<<"item founded";
    }
    else
    {
        cout<<"item not found";
    }
    return 0;
}