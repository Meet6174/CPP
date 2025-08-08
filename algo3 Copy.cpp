#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false; 
    if (p1.first < p2.first) return true;
    else return false;
} 
int main()
{
    vector<pair<int, int>> v = {{1, 2}, {7, 4}, {4, 7}, {5, 9}};
    sort(v.begin(), v.end(), comparator);
    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}