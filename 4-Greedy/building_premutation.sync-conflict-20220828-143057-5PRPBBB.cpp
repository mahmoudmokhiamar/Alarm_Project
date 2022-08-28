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
    ll size,ans;
    ans = 0;
    cin >> size;
    vector<ll> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    vector<int> v1(size);

    for (int i = 0; i < size; i++)
    {
        ans += abs(v[i]-(i+1));
        v[i] = i+1;
    }

   cout << ans << el;
    
}