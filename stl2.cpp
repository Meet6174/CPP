#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    v.emplace_back(7);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    for (int x : v)
    {
        cout<< x;
    }
    cout<<v[3]<<endl<<v.front()<<endl<<v.back();
return 0;
}

