#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={1,2,3,4,5,6,7,8,9,10};
   v1.erase(v1.begin());
   v1.erase(v1.begin(),v1.begin()+4);
   v1.insert(v1.begin()+1,0);
   cout<<v1.capacity()<<endl;
for(int x: v1)
{
    cout<<x<<" ";
}
cout<<endl;
v1.clear();


    return 0;
}