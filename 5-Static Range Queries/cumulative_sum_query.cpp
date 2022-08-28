#pragma GCC optimize "trapv"
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
#include <cstring>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
using namespace std;
int main()
{
    FIO
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i)
        {
            pre[i] = pre[i-1] + v[i];
        }
        else
        {
            pre[i] = v[i];
        }
        
    }
    
    
    int t;
    cin >> t;
    while (t--)
    {
      int l,r,sum;
      cin >> l >> r;
      if (l)
      {
        sum = pre[r] - pre[l-1];
      }
      else
        sum = pre[r];
         
      cout << sum << el;
    }
    
}