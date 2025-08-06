#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector <pair<int,int>> v = {{1,2},{7,4},{4,7},{5,9}};
 sort(v.begin(),v.end());
 for(auto x : v)
 {
    cout<< x.first<<" "<<x.second<<endl;
 }
return 0;
}