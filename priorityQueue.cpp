#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(12);
    q.push(2);
    q.push(32);
    while(!q.empty())
    {
       cout<<q.top()<<" ";
        q.pop();
    }
    
    return 0;
}