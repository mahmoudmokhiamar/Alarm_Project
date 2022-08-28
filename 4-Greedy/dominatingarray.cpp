#pragma GCC optimize "trapv"
#include <iostream>
#include <unordered_map>
#include <cmath>
#include <algorithm>
#include <climits>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
using namespace std;
int main()
{
    FIO
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,prev_dist; 
        cin >> n;
        prev_dist = INT_MAX;
        unordered_map<int,int> elements;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (elements.count(x)!=0)
            {
                prev_dist = min(i-elements[x]+1,prev_dist);
                elements[x] = i;
            }
            else
                elements.insert({x,i});
        }

        if (prev_dist != INT_MAX)
        {
            cout << prev_dist << el;
        }
        else
            cout << "-1" << el;
    }
    
}