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
    int st,n,prev_max,prev_min,ans,x;
    ans = 0;
    cin >> st >> n;
    prev_max = -2147483647;
    prev_min = 2147483647;
    for (int i = 0; i < st; i++)
    {   
        cin >> x;
        prev_max = max(prev_max,x);
        prev_min = min(prev_min,x);
    }
    ans = prev_max-prev_min;
    cout << ans << el;
}