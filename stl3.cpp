#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2(3,1);
    v1={1,2,3};
    vector<int> v3(v1);

    for(int x: v1)
    {
        cout<<x;
    }
    cout<<endl;
    for(int x: v2)
    {
        cout<<x;
    }
    cout<<endl;
    for(int x: v3)
    {
        cout<<x;
    }
    cout<<endl;
    
    return 0;
}