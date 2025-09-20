#include<iostream>
#include<deque>//dynemic arrays,accessed randomly eliment
using namespace std;
int main()
{
  deque<int> d;
  d.push_back(3);
  d.push_back(4);
  d.push_front(2);
  d.push_front(1);
  d.push_front(0);
for (int x : d)
{
    cout<<x<<" ";
}
    return 0;

}
