#pragma GCC optimize "trapv"
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define en "\n"
using namespace std;
int main()
{
    int m,n,ans;
    ans = 0;
    cin >> m >> n;
    vector <int> vec(m);

    for (auto &i : vec)
    {cin >> i;}

    sort(vec.begin(),vec.end());
    for (int i = 0; i < n; i++)
    {
        if (vec[i]>0)
        {
            continue;
        }
        ans += vec[i];
    }
    cout << abs(ans) << en;
    
    
}