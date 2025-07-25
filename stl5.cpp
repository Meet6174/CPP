#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={1,2,3,4,5,6,7,8};
    vector<int> :: iterator it;
    vector<int> :: reverse_iterator rit;
  for(it=v1.begin();it!=v1.end(); it++)
  {
    cout<<*(it)<<" ";
  }
  cout<<endl;
  for(rit=v1.rbegin();rit!=v1.rend();rit++)
  {
    cout<<*rit<<" ";
  }
  cout<<endl;
  for( auto it1=v1.begin();it1!=v1.end();it1++)// short cut
  {
    cout<< *it1<<" ";
  }
    
    return 0;
}