#pragma GCC optimize "trapv"
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
using namespace std;
int main()
{
    FIO
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector <int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n;)
        {
            if (k && v[i] > 0)
            {
                v[i] --;
                k--;
                v[n-1]++;
            }
            else
            {
                i++;
            }
            
        }
        for (auto i : v)
        {
        cout << i << " ";
        }
        cout << el;   
    }
    
    
}