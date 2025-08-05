#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int arr[10]={1,2,3,3,4,5,5,3,1,3};
 sort(arr,arr+10);
 for (int x : arr)
 {
    cout<<x<<" ";
 }
cout<<endl; 
sort(arr,arr+10,greater<int>());
 for (int x : arr)
 {
    cout<<x<<" ";
 }
 
return 0;
}