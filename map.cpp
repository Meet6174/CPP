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
    for(auto x: m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}